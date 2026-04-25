#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>
#include <atomic>

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// === DEBUG INSTRUMENTATION (boot loop investigation) ===
// Logs primeiras N chamadas + qualquer chamada cujo (v1, jalr_target) mude.
// Saida: stderr, prefixo [DBG 100E28].
namespace {
    constexpr int kMaxFullLogs = 40;
    std::atomic<int> g_call_count{0};
    std::atomic<uint32_t> g_last_v1{0xFFFFFFFFu};
    std::atomic<uint32_t> g_last_jalr_target{0xFFFFFFFFu};
}

// Function: sub_00100E28
// Address: 0x100e28 - 0x100ea8
void sub_00100E28_0x100e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100E28_0x100e28");
#endif

    const int dbg_call = g_call_count.fetch_add(1) + 1;
    const uint32_t dbg_a0 = GPR_U32(ctx, 4);
    const uint32_t dbg_a1 = GPR_U32(ctx, 5);
    const uint32_t dbg_a2 = GPR_U32(ctx, 6);

    ctx->pc = 0x100e28u;

    // 0x100e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100e2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x100e30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x100e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x100e34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x100e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x100e3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x100e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100e44: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x100e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x100e48: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x100e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x100e4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e50: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x100e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100e54: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x100e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x100e58: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x100e5c: 0x40f809  jalr        $v0
    ctx->pc = 0x100E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        {
            const uint32_t dbg_v1 = GPR_U32(ctx, 3);
            const uint32_t dbg_short_a0 = GPR_U32(ctx, 4);
            const uint32_t prev_v1 = g_last_v1.exchange(dbg_v1);
            const uint32_t prev_jt = g_last_jalr_target.exchange(jumpTarget);
            const bool changed = (prev_v1 != dbg_v1) || (prev_jt != jumpTarget);
            if (dbg_call <= kMaxFullLogs || changed) {
                fprintf(stderr,
                    "[DBG 100E28] #%d ENTER a0=%08x a1=%08x a2=%08x | "
                    "global@0x32E854=%08x | jalr_target=%08x | short=%04x\n",
                    dbg_call, dbg_a0, dbg_a1, dbg_a2,
                    dbg_v1, jumpTarget, dbg_short_a0 & 0xFFFFu);
                fflush(stderr);
            }
        }
        SET_GPR_U32(ctx, 31, 0x100E64u);
        ctx->pc = 0x100E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E5Cu;
            // 0x100e60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        // Guard Bug D: JALR para endereço não registrado (ex: BSS 0x35c920)
        // causava return prematuro sem restaurar SP → stack leak de 0x40
        // por iteração até stack overflow.  Tratamos como jumpTarget==0.
        if (jumpTarget == 0u || !runtime->hasFunction(jumpTarget)) {
            if (jumpTarget != 0u) {
                fprintf(stderr,
                    "[DBG 100E28] #%d JALR alvo nao registrado 0x%08x"
                    " (global@0x32E854=0x%08x) -> tratado como nop\n",
                    dbg_call, jumpTarget,
                    (unsigned)READ32(ADD32(GPR_U32(ctx, 0), 0x32E854u)));
                fflush(stderr);
            }
            ctx->pc = 0x100E64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E80u: goto label_100e80;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100E64u; }
            if (ctx->pc != 0x100E64u) { return; }
        }
        }
    }
    ctx->pc = 0x100E64u;
    // 0x100e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e68: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    if (dbg_call <= kMaxFullLogs) {
        fprintf(stderr,
            "[DBG 100E28] #%d POST_JALR s0(retval)=%08x | flag@s0+0x114=%08x"
            " (branch_taken=%d -> skips func_118110)\n",
            dbg_call, GPR_U32(ctx, 16), GPR_U32(ctx, 2),
            GPR_U32(ctx, 2) != 0);
        fflush(stderr);
    }
    // 0x100e6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100E6Cu;
    {
        const bool branch_taken_0x100e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E6Cu;
            // 0x100e70: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e6c) {
            ctx->pc = 0x100E80u;
            goto label_100e80;
        }
    }
    ctx->pc = 0x100E74u;
    if (dbg_call <= kMaxFullLogs) {
        fprintf(stderr, "[DBG 100E28] #%d -> calling func_118110(s0=%08x)\n",
            dbg_call, GPR_U32(ctx, 16));
        fflush(stderr);
    }
    // 0x100e74: 0xc046044  jal         func_118110
    ctx->pc = 0x100E74u;
    SET_GPR_U32(ctx, 31, 0x100E7Cu);
    ctx->pc = 0x100E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E74u;
            // 0x100e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E7Cu; }
        if (ctx->pc != 0x100E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E7Cu; }
        if (ctx->pc != 0x100E7Cu) { return; }
    }
    ctx->pc = 0x100E7Cu;
    // 0x100e7c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x100e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_100e80:
    // 0x100e80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    if (dbg_call <= kMaxFullLogs) {
        fprintf(stderr,
            "[DBG 100E28] #%d -> calling func_13DB18 a1=%08x v0=%08x"
            " (arg loaded next from [v0+0x48])\n",
            dbg_call, GPR_U32(ctx, 5), GPR_U32(ctx, 2));
        fflush(stderr);
    }
    // 0x100e88: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x100E88u;
    SET_GPR_U32(ctx, 31, 0x100E90u);
    ctx->pc = 0x100E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E88u;
            // 0x100e8c: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E90u; }
        if (ctx->pc != 0x100E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E90u; }
        if (ctx->pc != 0x100E90u) { return; }
    }
    ctx->pc = 0x100E90u;
    // 0x100e90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x100e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100e94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x100e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100e98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x100e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    if (dbg_call <= kMaxFullLogs) {
        fprintf(stderr, "[DBG 100E28] #%d EXIT v0=%08x\n",
            dbg_call, GPR_U32(ctx, 2));
        fflush(stderr);
    }
    // 0x100ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x100EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100EA0u;
            // 0x100ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E80u: goto label_100e80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100EA8u;
}

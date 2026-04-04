#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226980
// Address: 0x226980 - 0x2269f8
void sub_00226980_0x226980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226980_0x226980");
#endif

    ctx->pc = 0x226980u;

    // 0x226980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226984: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226988: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x226988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22698c: 0x2442a350  addiu       $v0, $v0, -0x5CB0
    ctx->pc = 0x22698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943568));
    // 0x226990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22699c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22699cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2269a0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2269a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2269A4u;
    {
        const bool branch_taken_0x2269a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2269A4u;
            // 0x2269a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269a4) {
            ctx->pc = 0x2269B4u;
            goto label_2269b4;
        }
    }
    ctx->pc = 0x2269ACu;
    // 0x2269ac: 0xc04c9da  jal         func_132768
    ctx->pc = 0x2269ACu;
    SET_GPR_U32(ctx, 31, 0x2269B4u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269B4u; }
        if (ctx->pc != 0x2269B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269B4u; }
        if (ctx->pc != 0x2269B4u) { return; }
    }
    ctx->pc = 0x2269B4u;
label_2269b4:
    // 0x2269b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2269b8: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x2269bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2269bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2269c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2269c4: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2269c8: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x2269C8u;
    SET_GPR_U32(ctx, 31, 0x2269D0u);
    ctx->pc = 0x2269CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2269C8u;
            // 0x2269cc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269D0u; }
        if (ctx->pc != 0x2269D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269D0u; }
        if (ctx->pc != 0x2269D0u) { return; }
    }
    ctx->pc = 0x2269D0u;
    // 0x2269d0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2269d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2269d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2269D4u;
    {
        const bool branch_taken_0x2269d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269d4) {
            ctx->pc = 0x2269D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2269D4u;
            // 0x2269d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2269E8u;
            goto label_2269e8;
        }
    }
    ctx->pc = 0x2269DCu;
    // 0x2269dc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2269DCu;
    SET_GPR_U32(ctx, 31, 0x2269E4u);
    ctx->pc = 0x2269E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2269DCu;
            // 0x2269e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269E4u; }
        if (ctx->pc != 0x2269E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269E4u; }
        if (ctx->pc != 0x2269E4u) { return; }
    }
    ctx->pc = 0x2269E4u;
    // 0x2269e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2269e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2269e8:
    // 0x2269e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2269e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2269ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2269ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2269f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2269F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2269F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2269F0u;
            // 0x2269f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2269B4u: goto label_2269b4;
            case 0x2269E8u: goto label_2269e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2269F8u;
}

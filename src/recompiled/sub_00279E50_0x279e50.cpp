#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279E50
// Address: 0x279e50 - 0x279ec8
void sub_00279E50_0x279e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E50_0x279e50");
#endif

    ctx->pc = 0x279e50u;

    // 0x279e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279e54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x279e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279e58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279e5c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x279e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x279e60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x279e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x279e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x279e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x279e6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x279e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279e70: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x279e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x279e74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x279E74u;
    {
        const bool branch_taken_0x279e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E74u;
            // 0x279e78: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e74) {
            ctx->pc = 0x279EA8u;
            goto label_279ea8;
        }
    }
    ctx->pc = 0x279E7Cu;
    // 0x279e7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_279e80:
    // 0x279e80: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279E80u;
    {
        const bool branch_taken_0x279e80 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x279e80) {
            ctx->pc = 0x279E98u;
            goto label_279e98;
        }
    }
    ctx->pc = 0x279E88u;
    // 0x279e88: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279E88u;
    SET_GPR_U32(ctx, 31, 0x279E90u);
    ctx->pc = 0x279E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E88u;
            // 0x279e8c: 0x26444a18  addiu       $a0, $s2, 0x4A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E90u; }
        if (ctx->pc != 0x279E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E90u; }
        if (ctx->pc != 0x279E90u) { return; }
    }
    ctx->pc = 0x279E90u;
    // 0x279e90: 0xc09e8a6  jal         func_27A298
    ctx->pc = 0x279E90u;
    SET_GPR_U32(ctx, 31, 0x279E98u);
    ctx->pc = 0x279E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E90u;
            // 0x279e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A298u;
    if (runtime->hasFunction(0x27A298u)) {
        auto targetFn = runtime->lookupFunction(0x27A298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E98u; }
        if (ctx->pc != 0x279E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a298_0x27a340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E98u; }
        if (ctx->pc != 0x279E98u) { return; }
    }
    ctx->pc = 0x279E98u;
label_279e98:
    // 0x279e98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x279e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279e9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x279e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x279ea0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279EA0u;
    {
        const bool branch_taken_0x279ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EA0u;
            // 0x279ea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ea0) {
            ctx->pc = 0x279E80u;
            runtime->cooperativeGuestYield();
            goto label_279e80;
        }
    }
    ctx->pc = 0x279EA8u;
label_279ea8:
    // 0x279ea8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x279eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x279EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EB8u;
            // 0x279ebc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279E80u: goto label_279e80;
            case 0x279E98u: goto label_279e98;
            case 0x279EA8u: goto label_279ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279EC0u;
    // 0x279ec0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x279ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x279ec4: 0x0  nop
    ctx->pc = 0x279ec4u;
    // NOP
}

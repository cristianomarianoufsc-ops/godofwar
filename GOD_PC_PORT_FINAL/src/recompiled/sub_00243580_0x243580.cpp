#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243580
// Address: 0x243580 - 0x2435e0
void sub_00243580_0x243580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243580_0x243580");
#endif

    ctx->pc = 0x243580u;

    // 0x243580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243584: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243588: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24358c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x24358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24359c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x24359cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2435a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2435a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2435a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2435A4u;
    {
        const bool branch_taken_0x2435a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2435A4u;
            // 0x2435a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435a4) {
            ctx->pc = 0x2435B8u;
            goto label_2435b8;
        }
    }
    ctx->pc = 0x2435ACu;
    // 0x2435ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2435b0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2435B0u;
    SET_GPR_U32(ctx, 31, 0x2435B8u);
    ctx->pc = 0x2435B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435B0u;
            // 0x2435b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435B8u; }
        if (ctx->pc != 0x2435B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435B8u; }
        if (ctx->pc != 0x2435B8u) { return; }
    }
    ctx->pc = 0x2435B8u;
label_2435b8:
    // 0x2435b8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2435b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2435bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2435BCu;
    {
        const bool branch_taken_0x2435bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2435bc) {
            ctx->pc = 0x2435C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2435BCu;
            // 0x2435c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2435D0u;
            goto label_2435d0;
        }
    }
    ctx->pc = 0x2435C4u;
    // 0x2435c4: 0xc063ee8  jal         func_18FBA0
    ctx->pc = 0x2435C4u;
    SET_GPR_U32(ctx, 31, 0x2435CCu);
    ctx->pc = 0x2435C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435C4u;
            // 0x2435c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FBA0u;
    if (runtime->hasFunction(0x18FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435CCu; }
        if (ctx->pc != 0x2435CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18fba0_0x18fbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435CCu; }
        if (ctx->pc != 0x2435CCu) { return; }
    }
    ctx->pc = 0x2435CCu;
    // 0x2435cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2435ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2435d0:
    // 0x2435d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2435d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2435d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2435d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2435d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2435D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2435DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2435D8u;
            // 0x2435dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2435B8u: goto label_2435b8;
            case 0x2435D0u: goto label_2435d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2435E0u;
}

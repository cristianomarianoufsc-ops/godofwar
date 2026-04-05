#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244BE8
// Address: 0x244be8 - 0x244c48
void sub_00244BE8_0x244be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244BE8_0x244be8");
#endif

    ctx->pc = 0x244be8u;

    // 0x244be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244bec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244bf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244bf4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x244bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244c04: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x244c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x244c08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x244c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x244C0Cu;
    {
        const bool branch_taken_0x244c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C0Cu;
            // 0x244c10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c0c) {
            ctx->pc = 0x244C20u;
            goto label_244c20;
        }
    }
    ctx->pc = 0x244C14u;
    // 0x244c14: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x244c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244c18: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x244C18u;
    SET_GPR_U32(ctx, 31, 0x244C20u);
    ctx->pc = 0x244C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C18u;
            // 0x244c1c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C20u; }
        if (ctx->pc != 0x244C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C20u; }
        if (ctx->pc != 0x244C20u) { return; }
    }
    ctx->pc = 0x244C20u;
label_244c20:
    // 0x244c20: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x244c24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244C24u;
    {
        const bool branch_taken_0x244c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c24) {
            ctx->pc = 0x244C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244C24u;
            // 0x244c28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244C38u;
            goto label_244c38;
        }
    }
    ctx->pc = 0x244C2Cu;
    // 0x244c2c: 0xc07cf6a  jal         func_1F3DA8
    ctx->pc = 0x244C2Cu;
    SET_GPR_U32(ctx, 31, 0x244C34u);
    ctx->pc = 0x244C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C2Cu;
            // 0x244c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3DA8u;
    if (runtime->hasFunction(0x1F3DA8u)) {
        auto targetFn = runtime->lookupFunction(0x1F3DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C34u; }
        if (ctx->pc != 0x244C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3da8_0x1f3dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C34u; }
        if (ctx->pc != 0x244C34u) { return; }
    }
    ctx->pc = 0x244C34u;
    // 0x244c34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244c38:
    // 0x244c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244c40: 0x3e00008  jr          $ra
    ctx->pc = 0x244C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C40u;
            // 0x244c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244C20u: goto label_244c20;
            case 0x244C38u: goto label_244c38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244C48u;
}

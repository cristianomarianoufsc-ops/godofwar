#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2BE8
// Address: 0x1d2be8 - 0x1d2cb0
void sub_001D2BE8_0x1d2be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2BE8_0x1d2be8");
#endif

    ctx->pc = 0x1d2be8u;

    // 0x1d2be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2bec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d2bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2c00: 0x8e22cd44  lw          $v0, -0x32BC($s1)
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954308)));
    // 0x1d2c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c08: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D2C08u;
    {
        const bool branch_taken_0x1d2c08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D2C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C08u;
            // 0x1d2c0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c08) {
            ctx->pc = 0x1D2C98u;
            goto label_1d2c98;
        }
    }
    ctx->pc = 0x1D2C10u;
    // 0x1d2c10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2c14: 0x0  nop
    ctx->pc = 0x1d2c14u;
    // NOP
label_1d2c18:
    // 0x1d2c18: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1d2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d2c1c: 0x24426160  addiu       $v0, $v0, 0x6160
    ctx->pc = 0x1d2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24928));
    // 0x1d2c20: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1d2c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2c24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d2c28: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2C28u;
    {
        const bool branch_taken_0x1d2c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D2C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C28u;
            // 0x1d2c2c: 0x8e22cd44  lw          $v0, -0x32BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c28) {
            ctx->pc = 0x1D2C88u;
            goto label_1d2c88;
        }
    }
    ctx->pc = 0x1D2C30u;
    // 0x1d2c30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d2c38: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2C38u;
    {
        const bool branch_taken_0x1d2c38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D2C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C38u;
            // 0x1d2c3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c38) {
            ctx->pc = 0x1D2C98u;
            goto label_1d2c98;
        }
    }
    ctx->pc = 0x1D2C40u;
    // 0x1d2c40: 0x8e26cd44  lw          $a2, -0x32BC($s1)
    ctx->pc = 0x1d2c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954308)));
    // 0x1d2c44: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d2c48: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1d2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d2c4c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1D2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C54u);
    ctx->pc = 0x1D2C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C4Cu;
            // 0x1d2c50: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C54u; }
        if (ctx->pc != 0x1D2C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C54u; }
        if (ctx->pc != 0x1D2C54u) { return; }
    }
    ctx->pc = 0x1D2C54u;
    // 0x1d2c54: 0x8e23cd44  lw          $v1, -0x32BC($s1)
    ctx->pc = 0x1d2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954308)));
    // 0x1d2c58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2c5c: 0x8c444f58  lw          $a0, 0x4F58($v0)
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20312)));
    // 0x1d2c60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d2c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d2c68: 0xae23cd44  sw          $v1, -0x32BC($s1)
    ctx->pc = 0x1d2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954308), GPR_U32(ctx, 3));
    // 0x1d2c6c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D2C6Cu;
    {
        const bool branch_taken_0x1d2c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C6Cu;
            // 0x1d2c70: 0xac44cd48  sw          $a0, -0x32B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c6c) {
            ctx->pc = 0x1D2C98u;
            goto label_1d2c98;
        }
    }
    ctx->pc = 0x1D2C74u;
    // 0x1d2c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c78: 0xc074cda  jal         func_1D3368
    ctx->pc = 0x1D2C78u;
    SET_GPR_U32(ctx, 31, 0x1D2C80u);
    ctx->pc = 0x1D2C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C78u;
            // 0x1d2c7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3368u;
    if (runtime->hasFunction(0x1D3368u)) {
        auto targetFn = runtime->lookupFunction(0x1D3368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C80u; }
        if (ctx->pc != 0x1D2C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3368_0x1d3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C80u; }
        if (ctx->pc != 0x1D2C80u) { return; }
    }
    ctx->pc = 0x1D2C80u;
    // 0x1d2c80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2C80u;
    {
        const bool branch_taken_0x1d2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C80u;
            // 0x1d2c84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c80) {
            ctx->pc = 0x1D2C9Cu;
            goto label_1d2c9c;
        }
    }
    ctx->pc = 0x1D2C88u;
label_1d2c88:
    // 0x1d2c88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d2c8c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1d2c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2c90: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D2C90u;
    {
        const bool branch_taken_0x1d2c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C90u;
            // 0x1d2c94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c90) {
            ctx->pc = 0x1D2C18u;
            runtime->cooperativeGuestYield();
            goto label_1d2c18;
        }
    }
    ctx->pc = 0x1D2C98u;
label_1d2c98:
    // 0x1d2c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2c9c:
    // 0x1d2c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CA4u;
            // 0x1d2ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2C18u: goto label_1d2c18;
            case 0x1D2C88u: goto label_1d2c88;
            case 0x1D2C98u: goto label_1d2c98;
            case 0x1D2C9Cu: goto label_1d2c9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2CACu;
    // 0x1d2cac: 0x0  nop
    ctx->pc = 0x1d2cacu;
    // NOP
}

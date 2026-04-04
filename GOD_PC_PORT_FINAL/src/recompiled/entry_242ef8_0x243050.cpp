#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242ef8
// Address: 0x242ef8 - 0x243050
void entry_242ef8_0x243050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242ef8_0x243050");
#endif

    ctx->pc = 0x242ef8u;

label_242ef8:
    // 0x242ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242f00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x242f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242f04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x242f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242f0c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x242f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x242f10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242F10u;
    {
        const bool branch_taken_0x242f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F10u;
            // 0x242f14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f10) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242F18u;
    // 0x242f18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x242F18u;
    {
        const bool branch_taken_0x242f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F18u;
            // 0x242f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f18) {
            ctx->pc = 0x242FB0u;
            goto label_242fb0;
        }
    }
    ctx->pc = 0x242F20u;
label_242f20:
    // 0x242f20: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x242f24: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x242f28: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x242F28u;
    SET_GPR_U32(ctx, 31, 0x242F30u);
    ctx->pc = 0x242F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242F28u;
            // 0x242f2c: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F30u; }
        if (ctx->pc != 0x242F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F30u; }
        if (ctx->pc != 0x242F30u) { return; }
    }
    ctx->pc = 0x242F30u;
    // 0x242f30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242f38: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x242f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x242f3c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x242f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x242f40: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x242f40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x242f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242f48: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x242f48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x242f4c: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x242f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x242f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242f54: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x242f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x242f58: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x242f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x242f5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x242f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x242f60: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x242F60u;
    {
        const bool branch_taken_0x242f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242f60) {
            ctx->pc = 0x242F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242F60u;
            // 0x242f64: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242FA0u;
            goto label_242fa0;
        }
    }
    ctx->pc = 0x242F68u;
    // 0x242f68: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x242f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x242f6c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x242f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x242f70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x242f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x242f74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242F74u;
    {
        const bool branch_taken_0x242f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F74u;
            // 0x242f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f74) {
            ctx->pc = 0x242F90u;
            goto label_242f90;
        }
    }
    ctx->pc = 0x242F7Cu;
    // 0x242f7c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x242f80: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x242f84: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x242f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x242f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x242F88u;
    {
        const bool branch_taken_0x242f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f88) {
            ctx->pc = 0x242F94u;
            goto label_242f94;
        }
    }
    ctx->pc = 0x242F90u;
label_242f90:
    // 0x242f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x242f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242f94:
    // 0x242f94: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x242F94u;
    {
        const bool branch_taken_0x242f94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F94u;
            // 0x242f98: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f94) {
            ctx->pc = 0x242FB0u;
            goto label_242fb0;
        }
    }
    ctx->pc = 0x242F9Cu;
    // 0x242f9c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x242f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_242fa0:
    // 0x242fa0: 0xc090bbe  jal         func_242EF8
    ctx->pc = 0x242FA0u;
    SET_GPR_U32(ctx, 31, 0x242FA8u);
    ctx->pc = 0x242FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FA0u;
            // 0x242fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242EF8u;
    runtime->cooperativeGuestYield();
    goto label_242ef8;
    ctx->pc = 0x242FA8u;
label_242fa8:
    // 0x242fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x242facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242fb0:
    // 0x242fb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x242FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242FBCu;
            // 0x242fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242EF8u: goto label_242ef8;
            case 0x242F20u: goto label_242f20;
            case 0x242F90u: goto label_242f90;
            case 0x242F94u: goto label_242f94;
            case 0x242FA0u: goto label_242fa0;
            case 0x242FA8u: goto label_242fa8;
            case 0x242FB0u: goto label_242fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242FC4u;
    // 0x242fc4: 0x0  nop
    ctx->pc = 0x242fc4u;
    // NOP
    // 0x242fc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242fcc: 0x0  nop
    ctx->pc = 0x242fccu;
    // NOP
    // 0x242fd0: 0x8c42c29c  lw          $v0, -0x3D64($v0)
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951580)));
    // 0x242fd4: 0x0  nop
    ctx->pc = 0x242fd4u;
    // NOP
    // 0x242fd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242fdc: 0x0  nop
    ctx->pc = 0x242fdcu;
    // NOP
    // 0x242fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242fe4: 0x0  nop
    ctx->pc = 0x242fe4u;
    // NOP
    // 0x242fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242fec: 0x0  nop
    ctx->pc = 0x242fecu;
    // NOP
    // 0x242ff0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242ff4: 0x0  nop
    ctx->pc = 0x242ff4u;
    // NOP
    // 0x242ff8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242ffc: 0x0  nop
    ctx->pc = 0x242ffcu;
    // NOP
    // 0x243000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243004: 0x0  nop
    ctx->pc = 0x243004u;
    // NOP
    // 0x243008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24300c: 0x0  nop
    ctx->pc = 0x24300cu;
    // NOP
    // 0x243010: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243014: 0x0  nop
    ctx->pc = 0x243014u;
    // NOP
    // 0x243018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24301c: 0x0  nop
    ctx->pc = 0x24301cu;
    // NOP
    // 0x243020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243024: 0x0  nop
    ctx->pc = 0x243024u;
    // NOP
    // 0x243028: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24302c: 0x0  nop
    ctx->pc = 0x24302cu;
    // NOP
    // 0x243030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243034: 0x0  nop
    ctx->pc = 0x243034u;
    // NOP
    // 0x243038: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24303c: 0x0  nop
    ctx->pc = 0x24303cu;
    // NOP
    // 0x243040: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243044: 0x0  nop
    ctx->pc = 0x243044u;
    // NOP
    // 0x243048: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24304c: 0x0  nop
    ctx->pc = 0x24304cu;
    // NOP
}

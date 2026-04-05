#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224BF8
// Address: 0x224bf8 - 0x224c98
void sub_00224BF8_0x224bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224BF8_0x224bf8");
#endif

    ctx->pc = 0x224bf8u;

    // 0x224bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224bfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c10: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x224C10u;
    {
        const bool branch_taken_0x224c10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x224C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C10u;
            // 0x224c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c10) {
            ctx->pc = 0x224C3Cu;
            goto label_224c3c;
        }
    }
    ctx->pc = 0x224C18u;
    // 0x224c18: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x224c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c1c: 0x0  nop
    ctx->pc = 0x224c1cu;
    // NOP
label_224c20:
    // 0x224c20: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224c24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x224c28: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x224c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x224c2c: 0x0  nop
    ctx->pc = 0x224c2cu;
    // NOP
    // 0x224c30: 0x0  nop
    ctx->pc = 0x224c30u;
    // NOP
    // 0x224c34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x224C34u;
    {
        const bool branch_taken_0x224c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C34u;
            // 0x224c38: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c34) {
            ctx->pc = 0x224C20u;
            runtime->cooperativeGuestYield();
            goto label_224c20;
        }
    }
    ctx->pc = 0x224C3Cu;
label_224c3c:
    // 0x224c3c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x224c40: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x224C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C40u;
            // 0x224c44: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C48u; }
        if (ctx->pc != 0x224C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C48u; }
        if (ctx->pc != 0x224C48u) { return; }
    }
    ctx->pc = 0x224C48u;
    // 0x224c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c4c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x224C4Cu;
    {
        const bool branch_taken_0x224c4c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x224C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C4Cu;
            // 0x224c50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c4c) {
            ctx->pc = 0x224C7Cu;
            goto label_224c7c;
        }
    }
    ctx->pc = 0x224C54u;
    // 0x224c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224c58:
    // 0x224c58: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x224c58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224c5c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x224c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x224c60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224C60u;
    {
        const bool branch_taken_0x224c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C60u;
            // 0x224c64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c60) {
            ctx->pc = 0x224C80u;
            goto label_224c80;
        }
    }
    ctx->pc = 0x224C68u;
    // 0x224c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224c6c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x224c70: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x224c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x224c74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x224C74u;
    {
        const bool branch_taken_0x224c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C74u;
            // 0x224c78: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c74) {
            ctx->pc = 0x224C58u;
            runtime->cooperativeGuestYield();
            goto label_224c58;
        }
    }
    ctx->pc = 0x224C7Cu;
label_224c7c:
    // 0x224c7c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_224c80:
    // 0x224c80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x224C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C8Cu;
            // 0x224c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224C20u: goto label_224c20;
            case 0x224C3Cu: goto label_224c3c;
            case 0x224C58u: goto label_224c58;
            case 0x224C7Cu: goto label_224c7c;
            case 0x224C80u: goto label_224c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224C94u;
    // 0x224c94: 0x0  nop
    ctx->pc = 0x224c94u;
    // NOP
}

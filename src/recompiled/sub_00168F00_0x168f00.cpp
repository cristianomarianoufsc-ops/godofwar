#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168F00
// Address: 0x168f00 - 0x168f98
void sub_00168F00_0x168f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F00_0x168f00");
#endif

    ctx->pc = 0x168f00u;

    // 0x168f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168f04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x168f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x168f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168f0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x168f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x168f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x168f14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x168f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x168f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x168f24: 0x26430360  addiu       $v1, $s2, 0x360
    ctx->pc = 0x168f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    // 0x168f28: 0x8e500360  lw          $s0, 0x360($s2)
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 864)));
    // 0x168f2c: 0x0  nop
    ctx->pc = 0x168f2cu;
    // NOP
label_168f30:
    // 0x168f30: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168F30u;
    {
        const bool branch_taken_0x168f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168f30) {
            ctx->pc = 0x168F48u;
            goto label_168f48;
        }
    }
    ctx->pc = 0x168F38u;
    // 0x168f38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x168f3c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x168f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x168f40: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168F40u;
    {
        const bool branch_taken_0x168f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168f40) {
            ctx->pc = 0x168F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168F40u;
            // 0x168f44: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168F30u;
            runtime->cooperativeGuestYield();
            goto label_168f30;
        }
    }
    ctx->pc = 0x168F48u;
label_168f48:
    // 0x168f48: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x168F48u;
    SET_GPR_U32(ctx, 31, 0x168F50u);
    ctx->pc = 0x168F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F48u;
            // 0x168f4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F50u; }
        if (ctx->pc != 0x168F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F50u; }
        if (ctx->pc != 0x168F50u) { return; }
    }
    ctx->pc = 0x168F50u;
    // 0x168f50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x168f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x168f54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x168f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x168f58: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x168f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x168f5c: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x168f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x168f60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x168f64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x168f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x168f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168f6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x168f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x168f70: 0xae44039c  sw          $a0, 0x39C($s2)
    ctx->pc = 0x168f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 924), GPR_U32(ctx, 4));
    // 0x168f74: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x168f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x168f78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x168f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168f7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x168f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168f80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168f84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x168f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x168f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x168f90: 0x3e00008  jr          $ra
    ctx->pc = 0x168F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F90u;
            // 0x168f94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168F30u: goto label_168f30;
            case 0x168F48u: goto label_168f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168F98u;
}

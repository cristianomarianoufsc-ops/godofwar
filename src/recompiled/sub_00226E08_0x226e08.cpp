#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226E08
// Address: 0x226e08 - 0x226ee0
void sub_00226E08_0x226e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226E08_0x226e08");
#endif

    ctx->pc = 0x226e08u;

    // 0x226e08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x226e0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226e10: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x226e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x226e14: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226e18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x226e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x226e1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x226e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e20: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x226e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x226e24: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x226e28: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x226e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x226e2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x226e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x226e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226e34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x226e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e38: 0x8c84d2ac  lw          $a0, -0x2D54($a0)
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955692)));
    // 0x226e3c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x226e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e40: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x226e40u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x226e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e48: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x226e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x226e4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226e50: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x226e50u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x226e54: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x226e54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x226e58: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x226e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x226e5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x226e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e60: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x226e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x226e64: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x226e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x226e68: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x226e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x226e6c: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x226e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x226e70: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226E70u;
    SET_GPR_U32(ctx, 31, 0x226E78u);
    ctx->pc = 0x226E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226E70u;
            // 0x226e74: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E78u; }
        if (ctx->pc != 0x226E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E78u; }
        if (ctx->pc != 0x226E78u) { return; }
    }
    ctx->pc = 0x226E78u;
    // 0x226e78: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x226e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x226e7c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x226e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x226e80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226e84: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226e88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e8c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x226e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x226e90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x226e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e9c: 0xc089a42  jal         func_226908
    ctx->pc = 0x226E9Cu;
    SET_GPR_U32(ctx, 31, 0x226EA4u);
    ctx->pc = 0x226EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226E9Cu;
            // 0x226ea0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226908u;
    if (runtime->hasFunction(0x226908u)) {
        auto targetFn = runtime->lookupFunction(0x226908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EA4u; }
        if (ctx->pc != 0x226EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226908_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EA4u; }
        if (ctx->pc != 0x226EA4u) { return; }
    }
    ctx->pc = 0x226EA4u;
    // 0x226ea4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x226EA4u;
    {
        const bool branch_taken_0x226ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226EA4u;
            // 0x226ea8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ea4) {
            ctx->pc = 0x226EC0u;
            goto label_226ec0;
        }
    }
    ctx->pc = 0x226EACu;
    // 0x226eac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x226eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x226eb0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x226eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x226eb4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x226eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x226eb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x226eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ebc: 0x0  nop
    ctx->pc = 0x226ebcu;
    // NOP
label_226ec0:
    // 0x226ec0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x226ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226ec4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x226ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226ec8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x226ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226ecc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x226eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226ed0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x226ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x226ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226ED4u;
            // 0x226ed8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226EC0u: goto label_226ec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226EDCu;
    // 0x226edc: 0x0  nop
    ctx->pc = 0x226edcu;
    // NOP
}

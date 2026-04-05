#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226D30
// Address: 0x226d30 - 0x226e08
void sub_00226D30_0x226d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D30_0x226d30");
#endif

    ctx->pc = 0x226d30u;

    // 0x226d30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x226d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x226d34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226d38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x226d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x226d3c: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226d40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x226d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x226d44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x226d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d48: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x226d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x226d4c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x226d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x226d50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x226d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x226d54: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x226d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x226d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226d5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x226d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d60: 0x8c84d2ac  lw          $a0, -0x2D54($a0)
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955692)));
    // 0x226d64: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x226d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d68: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x226d68u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x226d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d70: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x226d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x226d74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226d78: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x226d78u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x226d7c: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x226d7cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x226d80: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x226d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x226d84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x226d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d88: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x226d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x226d8c: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x226d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x226d90: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x226d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x226d94: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x226d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x226d98: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226D98u;
    SET_GPR_U32(ctx, 31, 0x226DA0u);
    ctx->pc = 0x226D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D98u;
            // 0x226d9c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DA0u; }
        if (ctx->pc != 0x226DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DA0u; }
        if (ctx->pc != 0x226DA0u) { return; }
    }
    ctx->pc = 0x226DA0u;
    // 0x226da0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x226da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x226da4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x226da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x226da8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226dac: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226db4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x226db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x226db8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x226dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dc4: 0xc0899c0  jal         func_226700
    ctx->pc = 0x226DC4u;
    SET_GPR_U32(ctx, 31, 0x226DCCu);
    ctx->pc = 0x226DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226DC4u;
            // 0x226dc8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226700u;
    if (runtime->hasFunction(0x226700u)) {
        auto targetFn = runtime->lookupFunction(0x226700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DCCu; }
        if (ctx->pc != 0x226DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226700_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DCCu; }
        if (ctx->pc != 0x226DCCu) { return; }
    }
    ctx->pc = 0x226DCCu;
    // 0x226dcc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x226DCCu;
    {
        const bool branch_taken_0x226dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226DCCu;
            // 0x226dd0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226dcc) {
            ctx->pc = 0x226DE8u;
            goto label_226de8;
        }
    }
    ctx->pc = 0x226DD4u;
    // 0x226dd4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x226dd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x226dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x226ddc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x226ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x226de0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x226de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226de4: 0x0  nop
    ctx->pc = 0x226de4u;
    // NOP
label_226de8:
    // 0x226de8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x226de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226dec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x226decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226df0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x226df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226df4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x226df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226df8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x226df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x226DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226DFCu;
            // 0x226e00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226DE8u: goto label_226de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226E04u;
    // 0x226e04: 0x0  nop
    ctx->pc = 0x226e04u;
    // NOP
}

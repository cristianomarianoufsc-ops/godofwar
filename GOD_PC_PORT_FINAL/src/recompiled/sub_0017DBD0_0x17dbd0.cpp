#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DBD0
// Address: 0x17dbd0 - 0x17dc70
void sub_0017DBD0_0x17dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DBD0_0x17dbd0");
#endif

    ctx->pc = 0x17dbd0u;

    // 0x17dbd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17dbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17dbd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17dbd8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17dbdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17dbe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dbe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17dbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbe8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17dbec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbf0: 0x8e02c718  lw          $v0, -0x38E8($s0)
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952728)));
    // 0x17dbf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17dbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DBF8u;
    {
        const bool branch_taken_0x17dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBF8u;
            // 0x17dbfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbf8) {
            ctx->pc = 0x17DC0Cu;
            goto label_17dc0c;
        }
    }
    ctx->pc = 0x17DC00u;
    // 0x17dc00: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DC00u;
    SET_GPR_U32(ctx, 31, 0x17DC08u);
    ctx->pc = 0x17DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC00u;
            // 0x17dc04: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC08u; }
        if (ctx->pc != 0x17DC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC08u; }
        if (ctx->pc != 0x17DC08u) { return; }
    }
    ctx->pc = 0x17DC08u;
    // 0x17dc08: 0xae02c718  sw          $v0, -0x38E8($s0)
    ctx->pc = 0x17dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952728), GPR_U32(ctx, 2));
label_17dc0c:
    // 0x17dc0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DC0Cu;
    SET_GPR_U32(ctx, 31, 0x17DC14u);
    ctx->pc = 0x17DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC0Cu;
            // 0x17dc10: 0x8e04c718  lw          $a0, -0x38E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC14u; }
        if (ctx->pc != 0x17DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC14u; }
        if (ctx->pc != 0x17DC14u) { return; }
    }
    ctx->pc = 0x17DC14u;
    // 0x17dc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17dc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dc1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc20: 0xc060292  jal         func_180A48
    ctx->pc = 0x17DC20u;
    SET_GPR_U32(ctx, 31, 0x17DC28u);
    ctx->pc = 0x17DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC20u;
            // 0x17dc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC28u; }
        if (ctx->pc != 0x17DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC28u; }
        if (ctx->pc != 0x17DC28u) { return; }
    }
    ctx->pc = 0x17DC28u;
    // 0x17dc28: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17dc2c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17dc30: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x17dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x17dc34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17dc38: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17dc3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc40: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17dc44: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DC44u;
    SET_GPR_U32(ctx, 31, 0x17DC4Cu);
    ctx->pc = 0x17DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC44u;
            // 0x17dc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC4Cu; }
        if (ctx->pc != 0x17DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC4Cu; }
        if (ctx->pc != 0x17DC4Cu) { return; }
    }
    ctx->pc = 0x17DC4Cu;
    // 0x17dc4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17dc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dc54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dc58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dc5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dc5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc64: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC64u;
            // 0x17dc68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DC0Cu: goto label_17dc0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DC6Cu;
    // 0x17dc6c: 0x0  nop
    ctx->pc = 0x17dc6cu;
    // NOP
}

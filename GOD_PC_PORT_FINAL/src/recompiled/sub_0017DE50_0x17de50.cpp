#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DE50
// Address: 0x17de50 - 0x17def0
void sub_0017DE50_0x17de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DE50_0x17de50");
#endif

    ctx->pc = 0x17de50u;

    // 0x17de50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17de54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17de58: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17de5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17de60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17de64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17de64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17de6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17de6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de70: 0x8e02c708  lw          $v0, -0x38F8($s0)
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
    // 0x17de74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17de74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DE78u;
    {
        const bool branch_taken_0x17de78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE78u;
            // 0x17de7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de78) {
            ctx->pc = 0x17DE8Cu;
            goto label_17de8c;
        }
    }
    ctx->pc = 0x17DE80u;
    // 0x17de80: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DE80u;
    SET_GPR_U32(ctx, 31, 0x17DE88u);
    ctx->pc = 0x17DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE80u;
            // 0x17de84: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE88u; }
        if (ctx->pc != 0x17DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE88u; }
        if (ctx->pc != 0x17DE88u) { return; }
    }
    ctx->pc = 0x17DE88u;
    // 0x17de88: 0xae02c708  sw          $v0, -0x38F8($s0)
    ctx->pc = 0x17de88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952712), GPR_U32(ctx, 2));
label_17de8c:
    // 0x17de8c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DE8Cu;
    SET_GPR_U32(ctx, 31, 0x17DE94u);
    ctx->pc = 0x17DE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE8Cu;
            // 0x17de90: 0x8e04c708  lw          $a0, -0x38F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE94u; }
        if (ctx->pc != 0x17DE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE94u; }
        if (ctx->pc != 0x17DE94u) { return; }
    }
    ctx->pc = 0x17DE94u;
    // 0x17de94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17de9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dea0: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DEA0u;
    SET_GPR_U32(ctx, 31, 0x17DEA8u);
    ctx->pc = 0x17DEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEA0u;
            // 0x17dea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEA8u; }
        if (ctx->pc != 0x17DEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEA8u; }
        if (ctx->pc != 0x17DEA8u) { return; }
    }
    ctx->pc = 0x17DEA8u;
    // 0x17dea8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17deac: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17deacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17deb0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x17deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x17deb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17deb8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17debc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17dec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17dec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec8: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DEC8u;
    SET_GPR_U32(ctx, 31, 0x17DED0u);
    ctx->pc = 0x17DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEC8u;
            // 0x17decc: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DED0u; }
        if (ctx->pc != 0x17DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DED0u; }
        if (ctx->pc != 0x17DED0u) { return; }
    }
    ctx->pc = 0x17DED0u;
    // 0x17ded0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ded0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ded4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17ded4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ded8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17ded8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dedc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dee0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dee8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEE8u;
            // 0x17deec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DE8Cu: goto label_17de8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DEF0u;
}

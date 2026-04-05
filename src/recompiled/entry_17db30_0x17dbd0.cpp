#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17db30
// Address: 0x17db30 - 0x17dbd0
void entry_17db30_0x17dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17db30_0x17dbd0");
#endif

    ctx->pc = 0x17db30u;

    // 0x17db30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17db34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17db38: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17db3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17db40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17db44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17db4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db50: 0x8e02c718  lw          $v0, -0x38E8($s0)
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952728)));
    // 0x17db54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17db54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DB58u;
    {
        const bool branch_taken_0x17db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB58u;
            // 0x17db5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db58) {
            ctx->pc = 0x17DB6Cu;
            goto label_17db6c;
        }
    }
    ctx->pc = 0x17DB60u;
    // 0x17db60: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DB60u;
    SET_GPR_U32(ctx, 31, 0x17DB68u);
    ctx->pc = 0x17DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB60u;
            // 0x17db64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB68u; }
        if (ctx->pc != 0x17DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB68u; }
        if (ctx->pc != 0x17DB68u) { return; }
    }
    ctx->pc = 0x17DB68u;
    // 0x17db68: 0xae02c718  sw          $v0, -0x38E8($s0)
    ctx->pc = 0x17db68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952728), GPR_U32(ctx, 2));
label_17db6c:
    // 0x17db6c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DB6Cu;
    SET_GPR_U32(ctx, 31, 0x17DB74u);
    ctx->pc = 0x17DB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB6Cu;
            // 0x17db70: 0x8e04c718  lw          $a0, -0x38E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB74u; }
        if (ctx->pc != 0x17DB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB74u; }
        if (ctx->pc != 0x17DB74u) { return; }
    }
    ctx->pc = 0x17DB74u;
    // 0x17db74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17db7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db80: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DB80u;
    SET_GPR_U32(ctx, 31, 0x17DB88u);
    ctx->pc = 0x17DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB80u;
            // 0x17db84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB88u; }
        if (ctx->pc != 0x17DB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB88u; }
        if (ctx->pc != 0x17DB88u) { return; }
    }
    ctx->pc = 0x17DB88u;
    // 0x17db88: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17db8c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17db90: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x17db94: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17db94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17db98: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17db98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17db9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dba0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17dba4: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DBA4u;
    SET_GPR_U32(ctx, 31, 0x17DBACu);
    ctx->pc = 0x17DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBA4u;
            // 0x17dba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBACu; }
        if (ctx->pc != 0x17DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBACu; }
        if (ctx->pc != 0x17DBACu) { return; }
    }
    ctx->pc = 0x17DBACu;
    // 0x17dbac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17dbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dbb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dbb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dbbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x17DBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBC4u;
            // 0x17dbc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DB6Cu: goto label_17db6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DBCCu;
    // 0x17dbcc: 0x0  nop
    ctx->pc = 0x17dbccu;
    // NOP
}

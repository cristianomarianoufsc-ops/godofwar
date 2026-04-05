#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F1C8
// Address: 0x17f1c8 - 0x17f260
void sub_0017F1C8_0x17f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1C8_0x17f1c8");
#endif

    ctx->pc = 0x17f1c8u;

    // 0x17f1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f1d0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F1D0u;
    SET_GPR_U32(ctx, 31, 0x17F1D8u);
    ctx->pc = 0x17F1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1D0u;
            // 0x17f1d4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1D8u; }
        if (ctx->pc != 0x17F1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1D8u; }
        if (ctx->pc != 0x17F1D8u) { return; }
    }
    ctx->pc = 0x17F1D8u;
    // 0x17f1d8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f1dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x17f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17f1e0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F1E0u;
    SET_GPR_U32(ctx, 31, 0x17F1E8u);
    ctx->pc = 0x17F1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1E0u;
            // 0x17f1e4: 0xac62c79c  sw          $v0, -0x3864($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1E8u; }
        if (ctx->pc != 0x17F1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1E8u; }
        if (ctx->pc != 0x17F1E8u) { return; }
    }
    ctx->pc = 0x17F1E8u;
    // 0x17f1e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f1ec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17f1f0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F1F0u;
    SET_GPR_U32(ctx, 31, 0x17F1F8u);
    ctx->pc = 0x17F1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1F0u;
            // 0x17f1f4: 0xac62c7a0  sw          $v0, -0x3860($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F8u; }
        if (ctx->pc != 0x17F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F8u; }
        if (ctx->pc != 0x17F1F8u) { return; }
    }
    ctx->pc = 0x17F1F8u;
    // 0x17f1f8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f1fc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f200: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F200u;
    SET_GPR_U32(ctx, 31, 0x17F208u);
    ctx->pc = 0x17F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F200u;
            // 0x17f204: 0xac62c7a4  sw          $v0, -0x385C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    }
    ctx->pc = 0x17F208u;
    // 0x17f208: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f20c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x17f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17f210: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F210u;
    SET_GPR_U32(ctx, 31, 0x17F218u);
    ctx->pc = 0x17F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F210u;
            // 0x17f214: 0xac62c7a8  sw          $v0, -0x3858($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F218u; }
        if (ctx->pc != 0x17F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F218u; }
        if (ctx->pc != 0x17F218u) { return; }
    }
    ctx->pc = 0x17F218u;
    // 0x17f218: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f21c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17f220: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F220u;
    SET_GPR_U32(ctx, 31, 0x17F228u);
    ctx->pc = 0x17F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F220u;
            // 0x17f224: 0xac62c7ac  sw          $v0, -0x3854($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F228u; }
        if (ctx->pc != 0x17F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F228u; }
        if (ctx->pc != 0x17F228u) { return; }
    }
    ctx->pc = 0x17F228u;
    // 0x17f228: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f22c: 0x24040438  addiu       $a0, $zero, 0x438
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
    // 0x17f230: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F230u;
    SET_GPR_U32(ctx, 31, 0x17F238u);
    ctx->pc = 0x17F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F230u;
            // 0x17f234: 0xac62c7b0  sw          $v0, -0x3850($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F238u; }
        if (ctx->pc != 0x17F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F238u; }
        if (ctx->pc != 0x17F238u) { return; }
    }
    ctx->pc = 0x17F238u;
    // 0x17f238: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f23c: 0x24040a28  addiu       $a0, $zero, 0xA28
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x17f240: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17F240u;
    SET_GPR_U32(ctx, 31, 0x17F248u);
    ctx->pc = 0x17F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F240u;
            // 0x17f244: 0xac62c7b4  sw          $v0, -0x384C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F248u; }
        if (ctx->pc != 0x17F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F248u; }
        if (ctx->pc != 0x17F248u) { return; }
    }
    ctx->pc = 0x17F248u;
    // 0x17f248: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17f24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f250: 0xac62c7b8  sw          $v0, -0x3848($v1)
    ctx->pc = 0x17f250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952888), GPR_U32(ctx, 2));
    // 0x17f254: 0x3e00008  jr          $ra
    ctx->pc = 0x17F254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F254u;
            // 0x17f258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F25Cu;
    // 0x17f25c: 0x0  nop
    ctx->pc = 0x17f25cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f6b8
// Address: 0x13f6b8 - 0x13f730
void entry_13f6b8_0x13f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f6b8_0x13f730");
#endif

    ctx->pc = 0x13f6b8u;

    // 0x13f6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f6bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f6c8: 0xc09e7d4  jal         func_279F50
    ctx->pc = 0x13F6C8u;
    SET_GPR_U32(ctx, 31, 0x13F6D0u);
    ctx->pc = 0x13F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6C8u;
            // 0x13f6cc: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279F50u;
    if (runtime->hasFunction(0x279F50u)) {
        auto targetFn = runtime->lookupFunction(0x279F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D0u; }
        if (ctx->pc != 0x13F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279F50_0x279f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D0u; }
        if (ctx->pc != 0x13F6D0u) { return; }
    }
    ctx->pc = 0x13F6D0u;
    // 0x13f6d0: 0xc09e7ca  jal         func_279F28
    ctx->pc = 0x13F6D0u;
    SET_GPR_U32(ctx, 31, 0x13F6D8u);
    ctx->pc = 0x13F6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6D0u;
            // 0x13f6d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279F28u;
    if (runtime->hasFunction(0x279F28u)) {
        auto targetFn = runtime->lookupFunction(0x279F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D8u; }
        if (ctx->pc != 0x13F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279f28_0x279f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D8u; }
        if (ctx->pc != 0x13F6D8u) { return; }
    }
    ctx->pc = 0x13F6D8u;
    // 0x13f6d8: 0xae021020  sw          $v0, 0x1020($s0)
    ctx->pc = 0x13f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4128), GPR_U32(ctx, 2));
    // 0x13f6dc: 0xc09e7ca  jal         func_279F28
    ctx->pc = 0x13F6DCu;
    SET_GPR_U32(ctx, 31, 0x13F6E4u);
    ctx->pc = 0x13F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6DCu;
            // 0x13f6e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279F28u;
    if (runtime->hasFunction(0x279F28u)) {
        auto targetFn = runtime->lookupFunction(0x279F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6E4u; }
        if (ctx->pc != 0x13F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279f28_0x279f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6E4u; }
        if (ctx->pc != 0x13F6E4u) { return; }
    }
    ctx->pc = 0x13F6E4u;
    // 0x13f6e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f6e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13f6ec: 0xc09e7ca  jal         func_279F28
    ctx->pc = 0x13F6ECu;
    SET_GPR_U32(ctx, 31, 0x13F6F4u);
    ctx->pc = 0x13F6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6ECu;
            // 0x13f6f0: 0xac621024  sw          $v0, 0x1024($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279F28u;
    if (runtime->hasFunction(0x279F28u)) {
        auto targetFn = runtime->lookupFunction(0x279F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6F4u; }
        if (ctx->pc != 0x13F6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279f28_0x279f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6F4u; }
        if (ctx->pc != 0x13F6F4u) { return; }
    }
    ctx->pc = 0x13F6F4u;
    // 0x13f6f4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f6f8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13f6fc: 0xc09e7ca  jal         func_279F28
    ctx->pc = 0x13F6FCu;
    SET_GPR_U32(ctx, 31, 0x13F704u);
    ctx->pc = 0x13F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6FCu;
            // 0x13f700: 0xac621028  sw          $v0, 0x1028($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279F28u;
    if (runtime->hasFunction(0x279F28u)) {
        auto targetFn = runtime->lookupFunction(0x279F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F704u; }
        if (ctx->pc != 0x13F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279f28_0x279f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F704u; }
        if (ctx->pc != 0x13F704u) { return; }
    }
    ctx->pc = 0x13F704u;
    // 0x13f704: 0x8e041020  lw          $a0, 0x1020($s0)
    ctx->pc = 0x13f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x13f708: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f70c: 0xac62102c  sw          $v0, 0x102C($v1)
    ctx->pc = 0x13f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4140), GPR_U32(ctx, 2));
    // 0x13f710: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f718: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13f71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f720: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f724: 0x3e00008  jr          $ra
    ctx->pc = 0x13F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F724u;
            // 0x13f728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F72Cu;
    // 0x13f72c: 0x0  nop
    ctx->pc = 0x13f72cu;
    // NOP
}

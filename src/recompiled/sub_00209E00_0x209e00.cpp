#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209E00
// Address: 0x209e00 - 0x209eb8
void sub_00209E00_0x209e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E00_0x209e00");
#endif

    ctx->pc = 0x209e00u;

    // 0x209e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209e04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209e0c: 0xc05d656  jal         func_175958
    ctx->pc = 0x209E0Cu;
    SET_GPR_U32(ctx, 31, 0x209E14u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E14u; }
        if (ctx->pc != 0x209E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E14u; }
        if (ctx->pc != 0x209E14u) { return; }
    }
    ctx->pc = 0x209E14u;
    // 0x209e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e18: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e1c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e20: 0x24a57c00  addiu       $a1, $a1, 0x7C00
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31744));
    // 0x209e24: 0x24c697a0  addiu       $a2, $a2, -0x6860
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940576));
    // 0x209e28: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209E28u;
    SET_GPR_U32(ctx, 31, 0x209E30u);
    ctx->pc = 0x209E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E28u;
            // 0x209e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E30u; }
        if (ctx->pc != 0x209E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E30u; }
        if (ctx->pc != 0x209E30u) { return; }
    }
    ctx->pc = 0x209E30u;
    // 0x209e30: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e34: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e38: 0x24a57c18  addiu       $a1, $a1, 0x7C18
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31768));
    // 0x209e3c: 0x24c69828  addiu       $a2, $a2, -0x67D8
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940712));
    // 0x209e40: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209E40u;
    SET_GPR_U32(ctx, 31, 0x209E48u);
    ctx->pc = 0x209E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E40u;
            // 0x209e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E48u; }
        if (ctx->pc != 0x209E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E48u; }
        if (ctx->pc != 0x209E48u) { return; }
    }
    ctx->pc = 0x209E48u;
    // 0x209e48: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e4c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e50: 0x24a57c28  addiu       $a1, $a1, 0x7C28
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31784));
    // 0x209e54: 0x24c69890  addiu       $a2, $a2, -0x6770
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940816));
    // 0x209e58: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209E58u;
    SET_GPR_U32(ctx, 31, 0x209E60u);
    ctx->pc = 0x209E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E58u;
            // 0x209e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E60u; }
        if (ctx->pc != 0x209E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E60u; }
        if (ctx->pc != 0x209E60u) { return; }
    }
    ctx->pc = 0x209E60u;
    // 0x209e60: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e64: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e68: 0x24a57a50  addiu       $a1, $a1, 0x7A50
    ctx->pc = 0x209e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31312));
    // 0x209e6c: 0x24c699c8  addiu       $a2, $a2, -0x6638
    ctx->pc = 0x209e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941128));
    // 0x209e70: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209E70u;
    SET_GPR_U32(ctx, 31, 0x209E78u);
    ctx->pc = 0x209E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E70u;
            // 0x209e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E78u; }
        if (ctx->pc != 0x209E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E78u; }
        if (ctx->pc != 0x209E78u) { return; }
    }
    ctx->pc = 0x209E78u;
    // 0x209e78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e7c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e80: 0x24a57c38  addiu       $a1, $a1, 0x7C38
    ctx->pc = 0x209e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31800));
    // 0x209e84: 0x24c69b78  addiu       $a2, $a2, -0x6488
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941560));
    // 0x209e88: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209E88u;
    SET_GPR_U32(ctx, 31, 0x209E90u);
    ctx->pc = 0x209E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E88u;
            // 0x209e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E90u; }
        if (ctx->pc != 0x209E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E90u; }
        if (ctx->pc != 0x209E90u) { return; }
    }
    ctx->pc = 0x209E90u;
    // 0x209e90: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x209e94: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x209e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e9c: 0x24a57c48  addiu       $a1, $a1, 0x7C48
    ctx->pc = 0x209e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
    // 0x209ea0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x209EA0u;
    SET_GPR_U32(ctx, 31, 0x209EA8u);
    ctx->pc = 0x209EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209EA0u;
            // 0x209ea4: 0x24c69d18  addiu       $a2, $a2, -0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EA8u; }
        if (ctx->pc != 0x209EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EA8u; }
        if (ctx->pc != 0x209EA8u) { return; }
    }
    ctx->pc = 0x209EA8u;
    // 0x209ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x209EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209EB0u;
            // 0x209eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209EB8u;
}

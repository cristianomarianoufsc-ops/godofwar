#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1FC8
// Address: 0x1c1fc8 - 0x1c2070
void sub_001C1FC8_0x1c1fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FC8_0x1c1fc8");
#endif

    ctx->pc = 0x1c1fc8u;

    // 0x1c1fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1fd4: 0xc0704ba  jal         func_1C12E8
    ctx->pc = 0x1C1FD4u;
    SET_GPR_U32(ctx, 31, 0x1C1FDCu);
    ctx->pc = 0x1C12E8u;
    if (runtime->hasFunction(0x1C12E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C12E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FDCu; }
        if (ctx->pc != 0x1C1FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C12E8_0x1c12e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FDCu; }
        if (ctx->pc != 0x1C1FDCu) { return; }
    }
    ctx->pc = 0x1C1FDCu;
    // 0x1c1fdc: 0xc05d656  jal         func_175958
    ctx->pc = 0x1C1FDCu;
    SET_GPR_U32(ctx, 31, 0x1C1FE4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FE4u; }
        if (ctx->pc != 0x1C1FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FE4u; }
        if (ctx->pc != 0x1C1FE4u) { return; }
    }
    ctx->pc = 0x1C1FE4u;
    // 0x1c1fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fe8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1fec: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c1fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c1ff0: 0x24a56238  addiu       $a1, $a1, 0x6238
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25144));
    // 0x1c1ff4: 0x24c61920  addiu       $a2, $a2, 0x1920
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6432));
    // 0x1c1ff8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1C1FF8u;
    SET_GPR_U32(ctx, 31, 0x1C2000u);
    ctx->pc = 0x1C1FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FF8u;
            // 0x1c1ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2000u; }
        if (ctx->pc != 0x1C2000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2000u; }
        if (ctx->pc != 0x1C2000u) { return; }
    }
    ctx->pc = 0x1C2000u;
    // 0x1c2000: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c2004: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c2004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c2008: 0x24a56250  addiu       $a1, $a1, 0x6250
    ctx->pc = 0x1c2008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25168));
    // 0x1c200c: 0x24c619c8  addiu       $a2, $a2, 0x19C8
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6600));
    // 0x1c2010: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1C2010u;
    SET_GPR_U32(ctx, 31, 0x1C2018u);
    ctx->pc = 0x1C2014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2010u;
            // 0x1c2014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2018u; }
        if (ctx->pc != 0x1C2018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2018u; }
        if (ctx->pc != 0x1C2018u) { return; }
    }
    ctx->pc = 0x1C2018u;
    // 0x1c2018: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c2018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c201c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c201cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c2020: 0x24a56268  addiu       $a1, $a1, 0x6268
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25192));
    // 0x1c2024: 0x24c61a38  addiu       $a2, $a2, 0x1A38
    ctx->pc = 0x1c2024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6712));
    // 0x1c2028: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1C2028u;
    SET_GPR_U32(ctx, 31, 0x1C2030u);
    ctx->pc = 0x1C202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2028u;
            // 0x1c202c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2030u; }
        if (ctx->pc != 0x1C2030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2030u; }
        if (ctx->pc != 0x1C2030u) { return; }
    }
    ctx->pc = 0x1C2030u;
    // 0x1c2030: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c2030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c2034: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c2038: 0x24a56280  addiu       $a1, $a1, 0x6280
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25216));
    // 0x1c203c: 0x24c61ba8  addiu       $a2, $a2, 0x1BA8
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7080));
    // 0x1c2040: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1C2040u;
    SET_GPR_U32(ctx, 31, 0x1C2048u);
    ctx->pc = 0x1C2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2040u;
            // 0x1c2044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2048u; }
        if (ctx->pc != 0x1C2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2048u; }
        if (ctx->pc != 0x1C2048u) { return; }
    }
    ctx->pc = 0x1C2048u;
    // 0x1c2048: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c2048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c204c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c2050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2054: 0x24a56290  addiu       $a1, $a1, 0x6290
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    // 0x1c2058: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1C2058u;
    SET_GPR_U32(ctx, 31, 0x1C2060u);
    ctx->pc = 0x1C205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2058u;
            // 0x1c205c: 0x24c61e00  addiu       $a2, $a2, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2060u; }
        if (ctx->pc != 0x1C2060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2060u; }
        if (ctx->pc != 0x1C2060u) { return; }
    }
    ctx->pc = 0x1C2060u;
    // 0x1c2060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2068: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2068u;
            // 0x1c206c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2070u;
}

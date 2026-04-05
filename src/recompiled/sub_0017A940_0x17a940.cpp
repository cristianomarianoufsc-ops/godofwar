#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A940
// Address: 0x17a940 - 0x17a9b0
void sub_0017A940_0x17a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A940_0x17a940");
#endif

    ctx->pc = 0x17a940u;

    // 0x17a940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a948: 0xc05d65e  jal         func_175978
    ctx->pc = 0x17A948u;
    SET_GPR_U32(ctx, 31, 0x17A950u);
    ctx->pc = 0x175978u;
    if (runtime->hasFunction(0x175978u)) {
        auto targetFn = runtime->lookupFunction(0x175978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A950u; }
        if (ctx->pc != 0x17A950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175978_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A950u; }
        if (ctx->pc != 0x17A950u) { return; }
    }
    ctx->pc = 0x17A950u;
    // 0x17a950: 0xc05d734  jal         func_175CD0
    ctx->pc = 0x17A950u;
    SET_GPR_U32(ctx, 31, 0x17A958u);
    ctx->pc = 0x175CD0u;
    if (runtime->hasFunction(0x175CD0u)) {
        auto targetFn = runtime->lookupFunction(0x175CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A958u; }
        if (ctx->pc != 0x17A958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175CD0_0x175cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A958u; }
        if (ctx->pc != 0x17A958u) { return; }
    }
    ctx->pc = 0x17A958u;
    // 0x17a958: 0xc05f94c  jal         func_17E530
    ctx->pc = 0x17A958u;
    SET_GPR_U32(ctx, 31, 0x17A960u);
    ctx->pc = 0x17E530u;
    if (runtime->hasFunction(0x17E530u)) {
        auto targetFn = runtime->lookupFunction(0x17E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A960u; }
        if (ctx->pc != 0x17A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E530_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A960u; }
        if (ctx->pc != 0x17A960u) { return; }
    }
    ctx->pc = 0x17A960u;
    // 0x17a960: 0xc05effc  jal         func_17BFF0
    ctx->pc = 0x17A960u;
    SET_GPR_U32(ctx, 31, 0x17A968u);
    ctx->pc = 0x17BFF0u;
    if (runtime->hasFunction(0x17BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x17BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A968u; }
        if (ctx->pc != 0x17A968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bff0_0x17c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A968u; }
        if (ctx->pc != 0x17A968u) { return; }
    }
    ctx->pc = 0x17A968u;
    // 0x17a968: 0xc04c696  jal         func_131A58
    ctx->pc = 0x17A968u;
    SET_GPR_U32(ctx, 31, 0x17A970u);
    ctx->pc = 0x131A58u;
    if (runtime->hasFunction(0x131A58u)) {
        auto targetFn = runtime->lookupFunction(0x131A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A970u; }
        if (ctx->pc != 0x17A970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131a58_0x131ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A970u; }
        if (ctx->pc != 0x17A970u) { return; }
    }
    ctx->pc = 0x17A970u;
    // 0x17a970: 0xc0461e6  jal         func_118798
    ctx->pc = 0x17A970u;
    SET_GPR_U32(ctx, 31, 0x17A978u);
    ctx->pc = 0x118798u;
    if (runtime->hasFunction(0x118798u)) {
        auto targetFn = runtime->lookupFunction(0x118798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A978u; }
        if (ctx->pc != 0x17A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118798_0x118798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A978u; }
        if (ctx->pc != 0x17A978u) { return; }
    }
    ctx->pc = 0x17A978u;
    // 0x17a978: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x17a978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x17a97c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x17a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17a980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a984: 0xc0a4e4c  jal         func_293930
    ctx->pc = 0x17A984u;
    SET_GPR_U32(ctx, 31, 0x17A98Cu);
    ctx->pc = 0x17A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A984u;
            // 0x17a988: 0x24a57358  addiu       $a1, $a1, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293930u;
    if (runtime->hasFunction(0x293930u)) {
        auto targetFn = runtime->lookupFunction(0x293930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A98Cu; }
        if (ctx->pc != 0x17A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293930_0x293940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A98Cu; }
        if (ctx->pc != 0x17A98Cu) { return; }
    }
    ctx->pc = 0x17A98Cu;
    // 0x17a98c: 0xc060a04  jal         func_182810
    ctx->pc = 0x17A98Cu;
    SET_GPR_U32(ctx, 31, 0x17A994u);
    ctx->pc = 0x182810u;
    if (runtime->hasFunction(0x182810u)) {
        auto targetFn = runtime->lookupFunction(0x182810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A994u; }
        if (ctx->pc != 0x17A994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182810_0x182810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A994u; }
        if (ctx->pc != 0x17A994u) { return; }
    }
    ctx->pc = 0x17A994u;
    // 0x17a994: 0xc0871e2  jal         func_21C788
    ctx->pc = 0x17A994u;
    SET_GPR_U32(ctx, 31, 0x17A99Cu);
    ctx->pc = 0x21C788u;
    if (runtime->hasFunction(0x21C788u)) {
        auto targetFn = runtime->lookupFunction(0x21C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A99Cu; }
        if (ctx->pc != 0x17A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021C788_0x21c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A99Cu; }
        if (ctx->pc != 0x17A99Cu) { return; }
    }
    ctx->pc = 0x17A99Cu;
    // 0x17a99c: 0xc05f5de  jal         func_17D778
    ctx->pc = 0x17A99Cu;
    SET_GPR_U32(ctx, 31, 0x17A9A4u);
    ctx->pc = 0x17D778u;
    if (runtime->hasFunction(0x17D778u)) {
        auto targetFn = runtime->lookupFunction(0x17D778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9A4u; }
        if (ctx->pc != 0x17A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d778_0x17d948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9A4u; }
        if (ctx->pc != 0x17A9A4u) { return; }
    }
    ctx->pc = 0x17A9A4u;
    // 0x17a9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9A8u;
            // 0x17a9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A9B0u;
}

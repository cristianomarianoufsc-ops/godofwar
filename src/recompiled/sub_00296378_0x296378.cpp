#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296378
// Address: 0x296378 - 0x2963c0
void sub_00296378_0x296378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296378_0x296378");
#endif

    ctx->pc = 0x296378u;

    // 0x296378: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x296378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29637c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x29637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x296380: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x296380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x296384: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x296384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296388: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x296388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x29638c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296390: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x296390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x296394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296398: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x296398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x29639c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x29639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x2963a0: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x2963a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x2963a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2963a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963a8: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x2963a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x2963ac: 0xc0a555a  jal         func_295568
    ctx->pc = 0x2963ACu;
    SET_GPR_U32(ctx, 31, 0x2963B4u);
    ctx->pc = 0x2963B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2963ACu;
            // 0x2963b0: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295568u;
    if (runtime->hasFunction(0x295568u)) {
        auto targetFn = runtime->lookupFunction(0x295568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963B4u; }
        if (ctx->pc != 0x2963B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295568_0x295568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963B4u; }
        if (ctx->pc != 0x2963B4u) { return; }
    }
    ctx->pc = 0x2963B4u;
    // 0x2963b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2963b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2963b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2963B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2963BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2963B8u;
            // 0x2963bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2963C0u;
}

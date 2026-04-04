#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002963C0
// Address: 0x2963c0 - 0x296440
void sub_002963C0_0x2963c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963C0_0x2963c0");
#endif

    ctx->pc = 0x2963c0u;

    // 0x2963c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2963c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2963c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2963c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2963c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2963c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2963cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2963ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2963d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2963d4: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x2963d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x2963d8: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x2963d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x2963dc: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x2963dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x2963e0: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x2963e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x2963e4: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x2963e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x2963e8: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x2963e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x2963ec: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x2963ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x2963f0: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2963F0u;
    SET_GPR_U32(ctx, 31, 0x2963F8u);
    ctx->pc = 0x2963F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2963F0u;
            // 0x2963f4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963F8u; }
        if (ctx->pc != 0x2963F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963F8u; }
        if (ctx->pc != 0x2963F8u) { return; }
    }
    ctx->pc = 0x2963F8u;
    // 0x2963f8: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x2963fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x296400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296404: 0x248462d8  addiu       $a0, $a0, 0x62D8
    ctx->pc = 0x296404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25304));
    // 0x296408: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x296408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29640c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296410: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x296414: 0xc0a555a  jal         func_295568
    ctx->pc = 0x296414u;
    SET_GPR_U32(ctx, 31, 0x29641Cu);
    ctx->pc = 0x296418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296414u;
            // 0x296418: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295568u;
    if (runtime->hasFunction(0x295568u)) {
        auto targetFn = runtime->lookupFunction(0x295568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29641Cu; }
        if (ctx->pc != 0x29641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295568_0x295568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29641Cu; }
        if (ctx->pc != 0x29641Cu) { return; }
    }
    ctx->pc = 0x29641Cu;
    // 0x29641c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29641Cu;
    {
        const bool branch_taken_0x29641c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29641Cu;
            // 0x296420: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29641c) {
            ctx->pc = 0x296430u;
            goto label_296430;
        }
    }
    ctx->pc = 0x296424u;
    // 0x296424: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296424u;
    SET_GPR_U32(ctx, 31, 0x29642Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29642Cu; }
        if (ctx->pc != 0x29642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29642Cu; }
        if (ctx->pc != 0x29642Cu) { return; }
    }
    ctx->pc = 0x29642Cu;
    // 0x29642c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_296430:
    // 0x296430: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x296430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296434: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296438: 0x3e00008  jr          $ra
    ctx->pc = 0x296438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296438u;
            // 0x29643c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296430u: goto label_296430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296440u;
}

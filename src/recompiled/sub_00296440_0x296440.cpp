#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296440
// Address: 0x296440 - 0x2964f0
void sub_00296440_0x296440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296440_0x296440");
#endif

    ctx->pc = 0x296440u;

    // 0x296440: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x296444: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296448: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x296448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29644c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29644cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296450: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296454: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x296454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x296458: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x296458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x29645c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x29645cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x296460: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x296460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x296464: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x296464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x296468: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x296468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x29646c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x29646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x296470: 0xc0a648c  jal         func_299230
    ctx->pc = 0x296470u;
    SET_GPR_U32(ctx, 31, 0x296478u);
    ctx->pc = 0x296474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296470u;
            // 0x296474: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296478u; }
        if (ctx->pc != 0x296478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296478u; }
        if (ctx->pc != 0x296478u) { return; }
    }
    ctx->pc = 0x296478u;
    // 0x296478: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x29647c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x296480: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296484: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x296484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x296488: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x296488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29648c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296490: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x296490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x296494: 0xc0a555a  jal         func_295568
    ctx->pc = 0x296494u;
    SET_GPR_U32(ctx, 31, 0x29649Cu);
    ctx->pc = 0x296498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296494u;
            // 0x296498: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295568u;
    if (runtime->hasFunction(0x295568u)) {
        auto targetFn = runtime->lookupFunction(0x295568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29649Cu; }
        if (ctx->pc != 0x29649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295568_0x295568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29649Cu; }
        if (ctx->pc != 0x29649Cu) { return; }
    }
    ctx->pc = 0x29649Cu;
    // 0x29649c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29649Cu;
    {
        const bool branch_taken_0x29649c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29649Cu;
            // 0x2964a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29649c) {
            ctx->pc = 0x2964B0u;
            goto label_2964b0;
        }
    }
    ctx->pc = 0x2964A4u;
    // 0x2964a4: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2964A4u;
    SET_GPR_U32(ctx, 31, 0x2964ACu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964ACu; }
        if (ctx->pc != 0x2964ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964ACu; }
        if (ctx->pc != 0x2964ACu) { return; }
    }
    ctx->pc = 0x2964ACu;
    // 0x2964ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2964acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2964b0:
    // 0x2964b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2964b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2964b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2964b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2964B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2964BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964B8u;
            // 0x2964bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2964B0u: goto label_2964b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2964C0u;
    // 0x2964c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2964c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2964c4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2964c8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2964cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2964ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2964d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2964d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2964d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2964D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2964D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964D4u;
            // 0x2964d8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2964B0u: goto label_2964b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2964DCu;
    // 0x2964dc: 0x0  nop
    ctx->pc = 0x2964dcu;
    // NOP
    // 0x2964e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2964e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2964E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2964E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964E4u;
            // 0x2964e8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2964B0u: goto label_2964b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2964ECu;
    // 0x2964ec: 0x0  nop
    ctx->pc = 0x2964ecu;
    // NOP
}

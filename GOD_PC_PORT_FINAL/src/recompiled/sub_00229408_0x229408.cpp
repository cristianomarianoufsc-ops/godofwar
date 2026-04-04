#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229408
// Address: 0x229408 - 0x229510
void sub_00229408_0x229408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229408_0x229408");
#endif

    ctx->pc = 0x229408u;

    // 0x229408: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x229408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22940c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x229410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x229410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229414: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x229414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x229418: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x229418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22941c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229420: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x229420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x229424: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x229428: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x229428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x22942c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x22942cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_229430:
    // 0x229430: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x229430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x229434: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x229434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x229438: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x229438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22943c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229440: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x229440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x229444: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x229444u;
    {
        const bool branch_taken_0x229444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x229448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229444u;
            // 0x229448: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229444) {
            ctx->pc = 0x229430u;
            runtime->cooperativeGuestYield();
            goto label_229430;
        }
    }
    ctx->pc = 0x22944Cu;
    // 0x22944c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229454: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x229458: 0xa240003c  sb          $zero, 0x3C($s2)
    ctx->pc = 0x229458u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x22945c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229460: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x229460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x229464: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x229464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x229468: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x229468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x22946c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x22946cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x229470: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x229470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x229474: 0xc05c162  jal         func_170588
    ctx->pc = 0x229474u;
    SET_GPR_U32(ctx, 31, 0x22947Cu);
    ctx->pc = 0x229478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229474u;
            // 0x229478: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170588u;
    if (runtime->hasFunction(0x170588u)) {
        auto targetFn = runtime->lookupFunction(0x170588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22947Cu; }
        if (ctx->pc != 0x22947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170588_0x170620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22947Cu; }
        if (ctx->pc != 0x22947Cu) { return; }
    }
    ctx->pc = 0x22947Cu;
    // 0x22947c: 0x97a20046  lhu         $v0, 0x46($sp)
    ctx->pc = 0x22947cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
    // 0x229480: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x229480u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229484: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x229488: 0xa7a20046  sh          $v0, 0x46($sp)
    ctx->pc = 0x229488u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x22948c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x22948cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x229490: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x229490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x229494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229498: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x229498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22949c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2294a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2294a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2294a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2294a8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2294ac: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2294b0: 0x40f809  jalr        $v0
    ctx->pc = 0x2294B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2294B8u);
        ctx->pc = 0x2294B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2294B0u;
            // 0x2294b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2294B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229430u: goto label_229430;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2294B8u; }
            if (ctx->pc != 0x2294B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2294B8u;
    // 0x2294b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2294bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2294c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2294c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2294c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2294c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2294c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2294c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2294ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2294d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2294d4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2294d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2294d8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2294d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2294dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2294DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2294E4u);
        ctx->pc = 0x2294E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2294DCu;
            // 0x2294e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2294E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229430u: goto label_229430;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2294E4u; }
            if (ctx->pc != 0x2294E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2294E4u;
    // 0x2294e4: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x2294e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x2294e8: 0xc05c402  jal         func_171008
    ctx->pc = 0x2294E8u;
    SET_GPR_U32(ctx, 31, 0x2294F0u);
    ctx->pc = 0x2294ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2294E8u;
            // 0x2294ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171008u;
    if (runtime->hasFunction(0x171008u)) {
        auto targetFn = runtime->lookupFunction(0x171008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294F0u; }
        if (ctx->pc != 0x2294F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_171008_0x1710e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294F0u; }
        if (ctx->pc != 0x2294F0u) { return; }
    }
    ctx->pc = 0x2294F0u;
    // 0x2294f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2294f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2294f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2294f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2294f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2294fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2294fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229500: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229504: 0x3e00008  jr          $ra
    ctx->pc = 0x229504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229504u;
            // 0x229508: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229430u: goto label_229430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22950Cu;
    // 0x22950c: 0x0  nop
    ctx->pc = 0x22950cu;
    // NOP
}

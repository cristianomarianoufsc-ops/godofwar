#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001873E8
// Address: 0x1873e8 - 0x187508
void sub_001873E8_0x1873e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873E8_0x1873e8");
#endif

    ctx->pc = 0x1873e8u;

    // 0x1873e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1873ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1873ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1873f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1873f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1873f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1873f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1873f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1873fc: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1873fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x187400: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x187400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x187404: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x187404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187408: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x187408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18740c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x187410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187414: 0x0  nop
    ctx->pc = 0x187414u;
    // NOP
label_187418:
    // 0x187418: 0x26b20084  addiu       $s2, $s5, 0x84
    ctx->pc = 0x187418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
    // 0x18741c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x18741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x187420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187424: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x187424u;
    {
        const bool branch_taken_0x187424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187424) {
            ctx->pc = 0x187428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187424u;
            // 0x187428: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1874D0u;
            goto label_1874d0;
        }
    }
    ctx->pc = 0x18742Cu;
    // 0x18742c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18742cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187434: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x187434u;
    {
        const bool branch_taken_0x187434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187434u;
            // 0x187438: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187434) {
            ctx->pc = 0x187460u;
            goto label_187460;
        }
    }
    ctx->pc = 0x18743Cu;
    // 0x18743c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x18743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_187440:
    // 0x187440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187444: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187448: 0xc04f6ca  jal         func_13DB28
    ctx->pc = 0x187448u;
    SET_GPR_U32(ctx, 31, 0x187450u);
    ctx->pc = 0x18744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187448u;
            // 0x18744c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB28u;
    if (runtime->hasFunction(0x13DB28u)) {
        auto targetFn = runtime->lookupFunction(0x13DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187450u; }
        if (ctx->pc != 0x187450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB28_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187450u; }
        if (ctx->pc != 0x187450u) { return; }
    }
    ctx->pc = 0x187450u;
    // 0x187450: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x187454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187458: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x187458u;
    {
        const bool branch_taken_0x187458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18745Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187458u;
            // 0x18745c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187458) {
            ctx->pc = 0x187440u;
            runtime->cooperativeGuestYield();
            goto label_187440;
        }
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x187464: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187468: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x187468u;
    {
        const bool branch_taken_0x187468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187468) {
            ctx->pc = 0x18746Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187468u;
            // 0x18746c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1874CCu;
            goto label_1874cc;
        }
    }
    ctx->pc = 0x187470u;
    // 0x187470: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x187470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x187474: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x187478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x187478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18747c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18747cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x187480: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x187484: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x187484u;
    {
        const bool branch_taken_0x187484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x187484) {
            ctx->pc = 0x187488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187484u;
            // 0x187488: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1874B8u;
            goto label_1874b8;
        }
    }
    ctx->pc = 0x18748Cu;
    // 0x18748c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_187490:
    // 0x187490: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x187494: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x187494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x187498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x187498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18749c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x18749Cu;
    SET_GPR_U32(ctx, 31, 0x1874A4u);
    ctx->pc = 0x1874A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18749Cu;
            // 0x1874a0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874A4u; }
        if (ctx->pc != 0x1874A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874A4u; }
        if (ctx->pc != 0x1874A4u) { return; }
    }
    ctx->pc = 0x1874A4u;
    // 0x1874a4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1874a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1874a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1874ac: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1874ACu;
    {
        const bool branch_taken_0x1874ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1874B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1874ACu;
            // 0x1874b0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874ac) {
            ctx->pc = 0x187490u;
            runtime->cooperativeGuestYield();
            goto label_187490;
        }
    }
    ctx->pc = 0x1874B4u;
    // 0x1874b4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x1874b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_1874b8:
    // 0x1874b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1874b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874bc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1874BCu;
    SET_GPR_U32(ctx, 31, 0x1874C4u);
    ctx->pc = 0x1874C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874BCu;
            // 0x1874c0: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874C4u; }
        if (ctx->pc != 0x1874C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874C4u; }
        if (ctx->pc != 0x1874C4u) { return; }
    }
    ctx->pc = 0x1874C4u;
    // 0x1874c4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1874c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1874c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1874cc:
    // 0x1874cc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1874d0:
    // 0x1874d0: 0x681ffd1  bgez        $s4, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1874D0u;
    {
        const bool branch_taken_0x1874d0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1874D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1874D0u;
            // 0x1874d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874d0) {
            ctx->pc = 0x187418u;
            runtime->cooperativeGuestYield();
            goto label_187418;
        }
    }
    ctx->pc = 0x1874D8u;
    // 0x1874d8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1874d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1874dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1874dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1874e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1874e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1874e4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1874e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1874e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1874e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1874ec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1874ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1874f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1874f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1874f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1874F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1874F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1874F4u;
            // 0x1874f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187418u: goto label_187418;
            case 0x187440u: goto label_187440;
            case 0x187460u: goto label_187460;
            case 0x187490u: goto label_187490;
            case 0x1874B8u: goto label_1874b8;
            case 0x1874CCu: goto label_1874cc;
            case 0x1874D0u: goto label_1874d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1874FCu;
    // 0x1874fc: 0x0  nop
    ctx->pc = 0x1874fcu;
    // NOP
    // 0x187500: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x187500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187504: 0x0  nop
    ctx->pc = 0x187504u;
    // NOP
}

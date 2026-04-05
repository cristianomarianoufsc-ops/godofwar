#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023F1D8
// Address: 0x23f1d8 - 0x23f560
void sub_0023F1D8_0x23f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F1D8_0x23f1d8");
#endif

    ctx->pc = 0x23f1d8u;

    // 0x23f1d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f1dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f1e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f1e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f1ec: 0xc04c012  jal         func_130048
    ctx->pc = 0x23F1ECu;
    SET_GPR_U32(ctx, 31, 0x23F1F4u);
    ctx->pc = 0x23F1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1ECu;
            // 0x23f1f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1F4u; }
        if (ctx->pc != 0x23F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1F4u; }
        if (ctx->pc != 0x23F1F4u) { return; }
    }
    ctx->pc = 0x23F1F4u;
    // 0x23f1f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23f1f8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23f1fc: 0x2463c478  addiu       $v1, $v1, -0x3B88
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952056));
    // 0x23f200: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x23f204: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x23f204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x23f208: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x23f208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x23f20c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f210: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x23f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x23f214: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x23f214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x23f218: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x23f218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x23f21c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x23f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x23f220: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f22c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F22Cu;
            // 0x23f230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F234u;
    // 0x23f234: 0x0  nop
    ctx->pc = 0x23f234u;
    // NOP
    // 0x23f238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f23c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f240: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f244: 0x2442c8d8  addiu       $v0, $v0, -0x3728
    ctx->pc = 0x23f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953176));
    // 0x23f248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f258: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23f258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23f25c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x23f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x23f260: 0xc04addc  jal         func_12B770
    ctx->pc = 0x23F260u;
    SET_GPR_U32(ctx, 31, 0x23F268u);
    ctx->pc = 0x23F264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F260u;
            // 0x23f264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B770u;
    if (runtime->hasFunction(0x12B770u)) {
        auto targetFn = runtime->lookupFunction(0x12B770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F268u; }
        if (ctx->pc != 0x23F268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B770_0x12b770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F268u; }
        if (ctx->pc != 0x23F268u) { return; }
    }
    ctx->pc = 0x23F268u;
    // 0x23f268: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f270: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23f274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23f274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f278: 0xc08e218  jal         func_238860
    ctx->pc = 0x23F278u;
    SET_GPR_U32(ctx, 31, 0x23F280u);
    ctx->pc = 0x23F27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F278u;
            // 0x23f27c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F280u; }
        if (ctx->pc != 0x23F280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F280u; }
        if (ctx->pc != 0x23F280u) { return; }
    }
    ctx->pc = 0x23F280u;
    // 0x23f280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f28c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F28Cu;
            // 0x23f290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F294u;
    // 0x23f294: 0x0  nop
    ctx->pc = 0x23f294u;
    // NOP
    // 0x23f298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f29c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f2a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23f2a4: 0x2442c7f8  addiu       $v0, $v0, -0x3808
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x23f2a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23f2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23f2b4: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x23f2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f2bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23f2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23f2c4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x23f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23f2c8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x23f2cc: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x23F2CCu;
    {
        const bool branch_taken_0x23f2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x23F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F2CCu;
            // 0x23f2d0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2cc) {
            ctx->pc = 0x23F2FCu;
            goto label_23f2fc;
        }
    }
    ctx->pc = 0x23F2D4u;
    // 0x23f2d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23f2d8:
    // 0x23f2d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f2dc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23f2e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f2e4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23F2E4u;
    SET_GPR_U32(ctx, 31, 0x23F2ECu);
    ctx->pc = 0x23F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F2E4u;
            // 0x23f2e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2ECu; }
        if (ctx->pc != 0x23F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2ECu; }
        if (ctx->pc != 0x23F2ECu) { return; }
    }
    ctx->pc = 0x23F2ECu;
    // 0x23f2ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23f2f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f2f4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F2F4u;
    {
        const bool branch_taken_0x23f2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F2F4u;
            // 0x23f2f8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2f4) {
            ctx->pc = 0x23F2D8u;
            runtime->cooperativeGuestYield();
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23F2FCu;
label_23f2fc:
    // 0x23f2fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f300: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x23f300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x23f304: 0x2442c8d8  addiu       $v0, $v0, -0x3728
    ctx->pc = 0x23f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953176));
    // 0x23f308: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x23f308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x23f30c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23f310: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x23f314: 0xc04addc  jal         func_12B770
    ctx->pc = 0x23F314u;
    SET_GPR_U32(ctx, 31, 0x23F31Cu);
    ctx->pc = 0x23F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F314u;
            // 0x23f318: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B770u;
    if (runtime->hasFunction(0x12B770u)) {
        auto targetFn = runtime->lookupFunction(0x12B770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F31Cu; }
        if (ctx->pc != 0x23F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B770_0x12b770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F31Cu; }
        if (ctx->pc != 0x23F31Cu) { return; }
    }
    ctx->pc = 0x23F31Cu;
    // 0x23f31c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f324: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23f328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f32c: 0xc08e218  jal         func_238860
    ctx->pc = 0x23F32Cu;
    SET_GPR_U32(ctx, 31, 0x23F334u);
    ctx->pc = 0x23F330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F32Cu;
            // 0x23f330: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F334u; }
        if (ctx->pc != 0x23F334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F334u; }
        if (ctx->pc != 0x23F334u) { return; }
    }
    ctx->pc = 0x23F334u;
    // 0x23f334: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23f334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f338: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23f338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f33c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23f33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f344: 0x3e00008  jr          $ra
    ctx->pc = 0x23F344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F344u;
            // 0x23f348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F34Cu;
    // 0x23f34c: 0x0  nop
    ctx->pc = 0x23f34cu;
    // NOP
    // 0x23f350: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23f354: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23f358: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x23f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23f35c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23f35cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f360: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x23f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x23f364: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23f364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f368: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x23f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x23f36c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x23f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x23f370: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x23f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x23f374: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x23f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x23f378: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x23f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x23f37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f380: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23f384: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x23f388: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f38c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x23f390: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x23f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x23f394: 0x40f809  jalr        $v0
    ctx->pc = 0x23F394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F39Cu);
        ctx->pc = 0x23F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F394u;
            // 0x23f398: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F39Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F39Cu; }
            if (ctx->pc != 0x23F39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23F39Cu;
    // 0x23f39c: 0x8e920024  lw          $s2, 0x24($s4)
    ctx->pc = 0x23f39cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x23f3a0: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x23F3A0u;
    {
        const bool branch_taken_0x23f3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3A0u;
            // 0x23f3a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3a0) {
            ctx->pc = 0x23F510u;
            goto label_23f510;
        }
    }
    ctx->pc = 0x23F3A8u;
    // 0x23f3a8: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x23f3ac: 0x0  nop
    ctx->pc = 0x23f3acu;
    // NOP
label_23f3b0:
    // 0x23f3b0: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23f3b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23f3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3b8: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x23f3b8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x23f3bc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x23f3bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f3c0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x23f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x23f3c4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x23F3C4u;
    {
        const bool branch_taken_0x23f3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3C4u;
            // 0x23f3c8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3c4) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F3CCu;
    // 0x23f3cc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x23f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23f3d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F3D0u;
    {
        const bool branch_taken_0x23f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3D0u;
            // 0x23f3d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3d0) {
            ctx->pc = 0x23F3F8u;
            goto label_23f3f8;
        }
    }
    ctx->pc = 0x23F3D8u;
    // 0x23f3d8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x23f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x23f3dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x23f3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x23f3e0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x23f3e4: 0x40f809  jalr        $v0
    ctx->pc = 0x23F3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F3ECu);
        ctx->pc = 0x23F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3E4u;
            // 0x23f3e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F3ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F3ECu; }
            if (ctx->pc != 0x23F3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x23F3ECu;
    // 0x23f3ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x23F3ECu;
    {
        const bool branch_taken_0x23f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f3ec) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F3F4u;
    // 0x23f3f4: 0x0  nop
    ctx->pc = 0x23f3f4u;
    // NOP
label_23f3f8:
    // 0x23f3f8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23f3fc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x23F3FCu;
    {
        const bool branch_taken_0x23f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f3fc) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F404u;
    // 0x23f404: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x23f404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x23f408: 0x12710017  beq         $s3, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23F408u;
    {
        const bool branch_taken_0x23f408 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x23F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F408u;
            // 0x23f40c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f408) {
            ctx->pc = 0x23F468u;
            goto label_23f468;
        }
    }
    ctx->pc = 0x23F410u;
    // 0x23f410: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F410u;
    {
        const bool branch_taken_0x23f410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F410u;
            // 0x23f414: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f410) {
            ctx->pc = 0x23F430u;
            goto label_23f430;
        }
    }
    ctx->pc = 0x23F418u;
    // 0x23f418: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x23f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x23f41c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f420: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23f420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x23f424: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x23f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x23f428: 0x40f809  jalr        $v0
    ctx->pc = 0x23F428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F430u);
        ctx->pc = 0x23F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F428u;
            // 0x23f42c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F430u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F430u; }
            if (ctx->pc != 0x23F430u) { return; }
        }
        }
    }
    ctx->pc = 0x23F430u;
label_23f430:
    // 0x23f430: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x23f430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f434: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x23f434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23f438: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23f43c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x23f440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f448: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23f448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f44c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f450: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x23f450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f454: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f458: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x23f458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x23f45c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x23f460: 0x40f809  jalr        $v0
    ctx->pc = 0x23F460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F468u);
        ctx->pc = 0x23F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F460u;
            // 0x23f464: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F468u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F468u; }
            if (ctx->pc != 0x23F468u) { return; }
        }
        }
    }
    ctx->pc = 0x23F468u;
label_23f468:
    // 0x23f468: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23f468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f46c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x23f470: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x23f474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f478: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f47c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f480: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f484: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x23f488: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x23f48c: 0x40f809  jalr        $v0
    ctx->pc = 0x23F48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F494u);
        ctx->pc = 0x23F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F48Cu;
            // 0x23f490: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F494u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F494u; }
            if (ctx->pc != 0x23F494u) { return; }
        }
        }
    }
    ctx->pc = 0x23F494u;
    // 0x23f494: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F494u;
    {
        const bool branch_taken_0x23f494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23F498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F494u;
            // 0x23f498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f494) {
            ctx->pc = 0x23F4C8u;
            goto label_23f4c8;
        }
    }
    ctx->pc = 0x23F49Cu;
    // 0x23f49c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23f49cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f4a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f4a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f4a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f4ac: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f4b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f4b4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x23f4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x23f4b8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x23f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x23f4bc: 0x40f809  jalr        $v0
    ctx->pc = 0x23F4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F4C4u);
        ctx->pc = 0x23F4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4BCu;
            // 0x23f4c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F4C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F4C4u; }
            if (ctx->pc != 0x23F4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x23F4C4u;
    // 0x23f4c4: 0x0  nop
    ctx->pc = 0x23f4c4u;
    // NOP
label_23f4c8:
    // 0x23f4c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23f4cc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x23f4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23f4d0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23f4d4: 0x40f809  jalr        $v0
    ctx->pc = 0x23F4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F4DCu);
        ctx->pc = 0x23F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4D4u;
            // 0x23f4d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F4DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F4DCu; }
            if (ctx->pc != 0x23F4DCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F4DCu;
    // 0x23f4dc: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x23F4DCu;
    {
        const bool branch_taken_0x23f4dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4dc) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F4E4u;
    // 0x23f4e4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23f4e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f4e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f4ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f4f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f4f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f4f8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23f4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x23f4fc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x23f500: 0x40f809  jalr        $v0
    ctx->pc = 0x23F500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F508u);
        ctx->pc = 0x23F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F500u;
            // 0x23f504: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F508u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F508u; }
            if (ctx->pc != 0x23F508u) { return; }
        }
        }
    }
    ctx->pc = 0x23F508u;
label_23f508:
    // 0x23f508: 0x16c0ffa9  bnez        $s6, . + 4 + (-0x57 << 2)
    ctx->pc = 0x23F508u;
    {
        const bool branch_taken_0x23f508 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F508u;
            // 0x23f50c: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f508) {
            ctx->pc = 0x23F3B0u;
            runtime->cooperativeGuestYield();
            goto label_23f3b0;
        }
    }
    ctx->pc = 0x23F510u;
label_23f510:
    // 0x23f510: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F510u;
    {
        const bool branch_taken_0x23f510 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F510u;
            // 0x23f514: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f510) {
            ctx->pc = 0x23F530u;
            goto label_23f530;
        }
    }
    ctx->pc = 0x23F518u;
    // 0x23f518: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x23f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x23f51c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f520: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23f520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x23f524: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x23f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x23f528: 0x40f809  jalr        $v0
    ctx->pc = 0x23F528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F530u);
        ctx->pc = 0x23F52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F528u;
            // 0x23f52c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F530u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F530u; }
            if (ctx->pc != 0x23F530u) { return; }
        }
        }
    }
    ctx->pc = 0x23F530u;
label_23f530:
    // 0x23f530: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x23f530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f534: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23f534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f538: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x23f538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f53c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x23f53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f540: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23f540u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f544: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23f544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f548: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x23f548u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f54c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x23f54cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f554: 0x3e00008  jr          $ra
    ctx->pc = 0x23F554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F554u;
            // 0x23f558: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F2D8u: goto label_23f2d8;
            case 0x23F2FCu: goto label_23f2fc;
            case 0x23F3B0u: goto label_23f3b0;
            case 0x23F3F8u: goto label_23f3f8;
            case 0x23F430u: goto label_23f430;
            case 0x23F468u: goto label_23f468;
            case 0x23F4C8u: goto label_23f4c8;
            case 0x23F508u: goto label_23f508;
            case 0x23F510u: goto label_23f510;
            case 0x23F530u: goto label_23f530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F55Cu;
    // 0x23f55c: 0x0  nop
    ctx->pc = 0x23f55cu;
    // NOP
}

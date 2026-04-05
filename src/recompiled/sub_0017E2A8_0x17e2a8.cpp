#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E2A8
// Address: 0x17e2a8 - 0x17e478
void sub_0017E2A8_0x17e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E2A8_0x17e2a8");
#endif

    ctx->pc = 0x17e2a8u;

    // 0x17e2a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e2ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e2b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17e2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e2bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17e2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e2c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17e2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e2cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17e2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2d0: 0xc060292  jal         func_180A48
    ctx->pc = 0x17E2D0u;
    SET_GPR_U32(ctx, 31, 0x17E2D8u);
    ctx->pc = 0x17E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2D0u;
            // 0x17e2d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2D8u; }
        if (ctx->pc != 0x17E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2D8u; }
        if (ctx->pc != 0x17E2D8u) { return; }
    }
    ctx->pc = 0x17E2D8u;
    // 0x17e2d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17e2dc: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x17e2e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x17e2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x17e2e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17e2e8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x17e2e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x17e2ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17e2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e2f0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x17e2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x17e2f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17e2f8: 0x1297c0  sll         $s2, $s2, 31
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 31));
    // 0x17e2fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17e2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17e300: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x17e304: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x17e308: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17e308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17e30c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x17e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17e310: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x17e310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x17e314: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e318: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x17e318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x17e31c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x17e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x17e320: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17e320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17e324: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e328: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e32c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e330: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17e330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e338: 0x3e00008  jr          $ra
    ctx->pc = 0x17E338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E338u;
            // 0x17e33c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E378u: goto label_17e378;
            case 0x17E3B4u: goto label_17e3b4;
            case 0x17E3D0u: goto label_17e3d0;
            case 0x17E410u: goto label_17e410;
            case 0x17E418u: goto label_17e418;
            case 0x17E454u: goto label_17e454;
            case 0x17E45Cu: goto label_17e45c;
            case 0x17E460u: goto label_17e460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E340u;
    // 0x17e340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17e344: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x17e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x17e348: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x17e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x17e34c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x17e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x17e350: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17e350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x17e354: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17e358: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x17e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17e35c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17E35Cu;
    {
        const bool branch_taken_0x17e35c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E35Cu;
            // 0x17e360: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e35c) {
            ctx->pc = 0x17E3D0u;
            goto label_17e3d0;
        }
    }
    ctx->pc = 0x17E364u;
    // 0x17e364: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17e368: 0x8c930018  lw          $s3, 0x18($a0)
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17e36c: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17e370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17e370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e374: 0x0  nop
    ctx->pc = 0x17e374u;
    // NOP
label_17e378:
    // 0x17e378: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x17e378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17e37c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E37Cu;
    {
        const bool branch_taken_0x17e37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E37Cu;
            // 0x17e380: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e37c) {
            ctx->pc = 0x17E3B4u;
            goto label_17e3b4;
        }
    }
    ctx->pc = 0x17E384u;
    // 0x17e384: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17e388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e38c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17e38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17e390: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17e394: 0x40f809  jalr        $v0
    ctx->pc = 0x17E394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E39Cu);
        ctx->pc = 0x17E398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E394u;
            // 0x17e398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E39Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E378u: goto label_17e378;
            case 0x17E3B4u: goto label_17e3b4;
            case 0x17E3D0u: goto label_17e3d0;
            case 0x17E410u: goto label_17e410;
            case 0x17E418u: goto label_17e418;
            case 0x17E454u: goto label_17e454;
            case 0x17E45Cu: goto label_17e45c;
            case 0x17E460u: goto label_17e460;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E39Cu; }
            if (ctx->pc != 0x17E39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17E39Cu;
    // 0x17e39c: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x17e39cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e3a0: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x17e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x17e3a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17e3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e3a8: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x17e3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e3ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17E3ACu;
    {
        const bool branch_taken_0x17e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3ACu;
            // 0x17e3b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3ac) {
            ctx->pc = 0x17E378u;
            runtime->cooperativeGuestYield();
            goto label_17e378;
        }
    }
    ctx->pc = 0x17E3B4u;
label_17e3b4:
    // 0x17e3b4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x17e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x17e3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3bc: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x17e3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e3c0: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x17E3C0u;
    SET_GPR_U32(ctx, 31, 0x17E3C8u);
    ctx->pc = 0x17E3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3C0u;
            // 0x17e3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3C8u; }
        if (ctx->pc != 0x17E3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3C8u; }
        if (ctx->pc != 0x17E3C8u) { return; }
    }
    ctx->pc = 0x17E3C8u;
    // 0x17e3c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17E3C8u;
    {
        const bool branch_taken_0x17e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3C8u;
            // 0x17e3cc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3c8) {
            ctx->pc = 0x17E45Cu;
            goto label_17e45c;
        }
    }
    ctx->pc = 0x17E3D0u;
label_17e3d0:
    // 0x17e3d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17e3d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e3d8: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x17e3d8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17e3dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17E3DCu;
    {
        const bool branch_taken_0x17e3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3DCu;
            // 0x17e3e0: 0x8c910018  lw          $s1, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3dc) {
            ctx->pc = 0x17E410u;
            goto label_17e410;
        }
    }
    ctx->pc = 0x17E3E4u;
    // 0x17e3e4: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x17E3E4u;
    SET_GPR_U32(ctx, 31, 0x17E3ECu);
    ctx->pc = 0x17E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3E4u;
            // 0x17e3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3ECu; }
        if (ctx->pc != 0x17E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3ECu; }
        if (ctx->pc != 0x17E3ECu) { return; }
    }
    ctx->pc = 0x17E3ECu;
    // 0x17e3ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17e3f0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x17e3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3f8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x17e3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17e3fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x17e400: 0x40f809  jalr        $v0
    ctx->pc = 0x17E400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E408u);
        ctx->pc = 0x17E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E400u;
            // 0x17e404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E408u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E378u: goto label_17e378;
            case 0x17E3B4u: goto label_17e3b4;
            case 0x17E3D0u: goto label_17e3d0;
            case 0x17E410u: goto label_17e410;
            case 0x17E418u: goto label_17e418;
            case 0x17E454u: goto label_17e454;
            case 0x17E45Cu: goto label_17e45c;
            case 0x17E460u: goto label_17e460;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E408u; }
            if (ctx->pc != 0x17E408u) { return; }
        }
        }
    }
    ctx->pc = 0x17E408u;
    // 0x17e408: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17E408u;
    {
        const bool branch_taken_0x17e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E408u;
            // 0x17e40c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e408) {
            ctx->pc = 0x17E460u;
            goto label_17e460;
        }
    }
    ctx->pc = 0x17E410u;
label_17e410:
    // 0x17e410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e414: 0x0  nop
    ctx->pc = 0x17e414u;
    // NOP
label_17e418:
    // 0x17e418: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x17e418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17e41c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E41Cu;
    {
        const bool branch_taken_0x17e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E41Cu;
            // 0x17e420: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e41c) {
            ctx->pc = 0x17E454u;
            goto label_17e454;
        }
    }
    ctx->pc = 0x17E424u;
    // 0x17e424: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17e428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e42c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17e42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17e430: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x17e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17e434: 0x40f809  jalr        $v0
    ctx->pc = 0x17E434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E43Cu);
        ctx->pc = 0x17E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E434u;
            // 0x17e438: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E43Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E378u: goto label_17e378;
            case 0x17E3B4u: goto label_17e3b4;
            case 0x17E3D0u: goto label_17e3d0;
            case 0x17E410u: goto label_17e410;
            case 0x17E418u: goto label_17e418;
            case 0x17E454u: goto label_17e454;
            case 0x17E45Cu: goto label_17e45c;
            case 0x17E460u: goto label_17e460;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E43Cu; }
            if (ctx->pc != 0x17E43Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17E43Cu;
    // 0x17e43c: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x17e43cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e440: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x17e444: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17e444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e448: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x17e448u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e44c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17E44Cu;
    {
        const bool branch_taken_0x17e44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E44Cu;
            // 0x17e450: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e44c) {
            ctx->pc = 0x17E418u;
            runtime->cooperativeGuestYield();
            goto label_17e418;
        }
    }
    ctx->pc = 0x17E454u;
label_17e454:
    // 0x17e454: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x17e458: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x17e458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_17e45c:
    // 0x17e45c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x17e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17e460:
    // 0x17e460: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x17e460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e464: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x17e464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e468: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x17e468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e46c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17e46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e470: 0x3e00008  jr          $ra
    ctx->pc = 0x17E470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E470u;
            // 0x17e474: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E378u: goto label_17e378;
            case 0x17E3B4u: goto label_17e3b4;
            case 0x17E3D0u: goto label_17e3d0;
            case 0x17E410u: goto label_17e410;
            case 0x17E418u: goto label_17e418;
            case 0x17E454u: goto label_17e454;
            case 0x17E45Cu: goto label_17e45c;
            case 0x17E460u: goto label_17e460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E478u;
}

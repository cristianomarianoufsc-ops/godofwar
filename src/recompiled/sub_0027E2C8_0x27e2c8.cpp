#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027E2C8
// Address: 0x27e2c8 - 0x27ebf8
void sub_0027E2C8_0x27e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E2C8_0x27e2c8");
#endif

    ctx->pc = 0x27e2c8u;

    // 0x27e2c8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x27e2cc: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x27e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27e2d0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x27e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x27e2d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27e2d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27e2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2dc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x27e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x27e2e0: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x27e2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e2e4: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27e2e8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x27e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x27e2ec: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x27e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x27e2f0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x27e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x27e2f4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x27e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x27e2f8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x27e2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e2fc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x27e2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x27e300: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x27e300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x27e304: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x27e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x27e308: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x27E308u;
    SET_GPR_U32(ctx, 31, 0x27E310u);
    ctx->pc = 0x27E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E308u;
            // 0x27e30c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E310u; }
        if (ctx->pc != 0x27E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E310u; }
        if (ctx->pc != 0x27E310u) { return; }
    }
    ctx->pc = 0x27E310u;
    // 0x27e310: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E310u;
    {
        const bool branch_taken_0x27e310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E310u;
            // 0x27e314: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e310) {
            ctx->pc = 0x27E324u;
            goto label_27e324;
        }
    }
    ctx->pc = 0x27E318u;
    // 0x27e318: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e31c: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x27E31Cu;
    {
        const bool branch_taken_0x27e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E31Cu;
            // 0x27e320: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e31c) {
            ctx->pc = 0x27EBC4u;
            goto label_27ebc4;
        }
    }
    ctx->pc = 0x27E324u;
label_27e324:
    // 0x27e324: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x27e324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x27e328: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x27e328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e32c: 0x2482c9c8  addiu       $v0, $a0, -0x3638
    ctx->pc = 0x27e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    // 0x27e330: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x27e330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e334: 0x244a0808  addiu       $t2, $v0, 0x808
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x27e338: 0x3c0b002c  lui         $t3, 0x2C
    ctx->pc = 0x27e338u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)44 << 16));
    // 0x27e33c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e340: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27e340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e344: 0xacc00894  sw          $zero, 0x894($a2)
    ctx->pc = 0x27e344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2196), GPR_U32(ctx, 0));
    // 0x27e348: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x27e348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e34c: 0xace90800  sw          $t1, 0x800($a3)
    ctx->pc = 0x27e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2048), GPR_U32(ctx, 9));
    // 0x27e350: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x27e350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e354: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x27e354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e358: 0xad090804  sw          $t1, 0x804($t0)
    ctx->pc = 0x27e358u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 2052), GPR_U32(ctx, 9));
    // 0x27e35c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x27e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x27e360: 0xac400890  sw          $zero, 0x890($v0)
    ctx->pc = 0x27e360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 0));
    // 0x27e364: 0x25695238  addiu       $t1, $t3, 0x5238
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 21048));
    // 0x27e368: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x27e368u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27e36c: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x27e36cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x27e370: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x27e370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x27e374: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x27e374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x27e378: 0xc0a0552  jal         func_281548
    ctx->pc = 0x27E378u;
    SET_GPR_U32(ctx, 31, 0x27E380u);
    ctx->pc = 0x27E37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E378u;
            // 0x27e37c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281548u;
    if (runtime->hasFunction(0x281548u)) {
        auto targetFn = runtime->lookupFunction(0x281548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E380u; }
        if (ctx->pc != 0x27E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281548_0x281548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E380u; }
        if (ctx->pc != 0x27E380u) { return; }
    }
    ctx->pc = 0x27E380u;
    // 0x27e380: 0x104001fc  beqz        $v0, . + 4 + (0x1FC << 2)
    ctx->pc = 0x27E380u;
    {
        const bool branch_taken_0x27e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e380) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27E388u;
    // 0x27e388: 0xc0a056a  jal         func_2815A8
    ctx->pc = 0x27E388u;
    SET_GPR_U32(ctx, 31, 0x27E390u);
    ctx->pc = 0x27E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E388u;
            // 0x27e38c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2815A8u;
    if (runtime->hasFunction(0x2815A8u)) {
        auto targetFn = runtime->lookupFunction(0x2815A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E390u; }
        if (ctx->pc != 0x27E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002815A8_0x2815a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E390u; }
        if (ctx->pc != 0x27E390u) { return; }
    }
    ctx->pc = 0x27E390u;
    // 0x27e390: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x27E390u;
    {
        const bool branch_taken_0x27e390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E390u;
            // 0x27e394: 0x3c10002c  lui         $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e390) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27E398u;
    // 0x27e398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e39c: 0x26055240  addiu       $a1, $s0, 0x5240
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 21056));
    // 0x27e3a0: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x27E3A0u;
    SET_GPR_U32(ctx, 31, 0x27E3A8u);
    ctx->pc = 0x27E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3A0u;
            // 0x27e3a4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3A8u; }
        if (ctx->pc != 0x27E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3A8u; }
        if (ctx->pc != 0x27E3A8u) { return; }
    }
    ctx->pc = 0x27E3A8u;
    // 0x27e3a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E3A8u;
    {
        const bool branch_taken_0x27e3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3A8u;
            // 0x27e3ac: 0x264600d0  addiu       $a2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3a8) {
            ctx->pc = 0x27E3F0u;
            goto label_27e3f0;
        }
    }
    ctx->pc = 0x27E3B0u;
    // 0x27e3b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x27e3b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27e3b8: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27e3bc: 0x2642014c  addiu       $v0, $s2, 0x14C
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
label_27e3c0:
    // 0x27e3c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27e3c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27e3c8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27e3cc: 0x0  nop
    ctx->pc = 0x27e3ccu;
    // NOP
    // 0x27e3d0: 0x0  nop
    ctx->pc = 0x27e3d0u;
    // NOP
    // 0x27e3d4: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E3D4u;
    {
        const bool branch_taken_0x27e3d4 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x27e3d4) {
            ctx->pc = 0x27E3C0u;
            runtime->cooperativeGuestYield();
            goto label_27e3c0;
        }
    }
    ctx->pc = 0x27E3DCu;
    // 0x27e3dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3e0: 0xc0a079e  jal         func_281E78
    ctx->pc = 0x27E3E0u;
    SET_GPR_U32(ctx, 31, 0x27E3E8u);
    ctx->pc = 0x27E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3E0u;
            // 0x27e3e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E78u;
    if (runtime->hasFunction(0x281E78u)) {
        auto targetFn = runtime->lookupFunction(0x281E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3E8u; }
        if (ctx->pc != 0x27E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281E78_0x281e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3E8u; }
        if (ctx->pc != 0x27E3E8u) { return; }
    }
    ctx->pc = 0x27E3E8u;
    // 0x27e3e8: 0x104001e2  beqz        $v0, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x27E3E8u;
    {
        const bool branch_taken_0x27e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3e8) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27E3F0u;
label_27e3f0:
    // 0x27e3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3f8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27E3F8u;
    SET_GPR_U32(ctx, 31, 0x27E400u);
    ctx->pc = 0x27E3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3F8u;
            // 0x27e3fc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E400u; }
        if (ctx->pc != 0x27E400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E400u; }
        if (ctx->pc != 0x27E400u) { return; }
    }
    ctx->pc = 0x27E400u;
    // 0x27e400: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x27e400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x27e404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e408: 0x26075240  addiu       $a3, $s0, 0x5240
    ctx->pc = 0x27e408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 21056));
    // 0x27e40c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x27e40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27e410: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x27e410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27e414: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x27e414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27e418: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x27e418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27e41c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x27e41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27e420: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x27e420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27e424: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x27e424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e428: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x27e428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e42c: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x27e42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e430: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x27e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e434: 0xb2460017  sdl         $a2, 0x17($s2)
    ctx->pc = 0x27e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e438: 0xb6460010  sdr         $a2, 0x10($s2)
    ctx->pc = 0x27e438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e43c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x27e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27e440: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x27e440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x27e444: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x27E444u;
    SET_GPR_U32(ctx, 31, 0x27E44Cu);
    ctx->pc = 0x27E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E444u;
            // 0x27e448: 0x24a55260  addiu       $a1, $a1, 0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E44Cu; }
        if (ctx->pc != 0x27E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E44Cu; }
        if (ctx->pc != 0x27E44Cu) { return; }
    }
    ctx->pc = 0x27E44Cu;
    // 0x27e44c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e450: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x27e450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27e454: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x27e454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e458: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x27e458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x27e45c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x27e45cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e460: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x27e460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e464: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x27e464u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e468: 0x2408002b  addiu       $t0, $zero, 0x2B
    ctx->pc = 0x27e468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27e46c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E46Cu;
    {
        const bool branch_taken_0x27e46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e46c) {
            ctx->pc = 0x27E470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E46Cu;
            // 0x27e470: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E474u;
            goto label_27e474;
        }
    }
    ctx->pc = 0x27E474u;
label_27e474:
    // 0x27e474: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x27e474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27e478: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27e47c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27e47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e480: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x27e480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27e484: 0xa645002e  sh          $a1, 0x2E($s2)
    ctx->pc = 0x27e484u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x27e488: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x27e488u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e48c: 0x3812  mflo        $a3
    ctx->pc = 0x27e48cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x27e490: 0xa647002a  sh          $a3, 0x2A($s2)
    ctx->pc = 0x27e490u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 7));
    // 0x27e494: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x27e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x27e498: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x27e498u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e49c: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x27e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x27e4a0: 0x9645002a  lhu         $a1, 0x2A($s2)
    ctx->pc = 0x27e4a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x27e4a4: 0x9644002c  lhu         $a0, 0x2C($s2)
    ctx->pc = 0x27e4a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x27e4a8: 0xa24a0150  sb          $t2, 0x150($s2)
    ctx->pc = 0x27e4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 10));
    // 0x27e4ac: 0xa2480151  sb          $t0, 0x151($s2)
    ctx->pc = 0x27e4acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 337), (uint8_t)GPR_U32(ctx, 8));
    // 0x27e4b0: 0xae490158  sw          $t1, 0x158($s2)
    ctx->pc = 0x27e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 9));
    // 0x27e4b4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x27e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x27e4b8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x27e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x27e4bc: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x27e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x27e4c0: 0xae400170  sw          $zero, 0x170($s2)
    ctx->pc = 0x27e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    // 0x27e4c4: 0x3812  mflo        $a3
    ctx->pc = 0x27e4c4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x27e4c8: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x27e4c8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x27e4cc: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x27e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x27e4d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27e4d4: 0xae460180  sw          $a2, 0x180($s2)
    ctx->pc = 0x27e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 6));
    // 0x27e4d8: 0xae400164  sw          $zero, 0x164($s2)
    ctx->pc = 0x27e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 0));
    // 0x27e4dc: 0xae400168  sw          $zero, 0x168($s2)
    ctx->pc = 0x27e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 0));
    // 0x27e4e0: 0xae40016c  sw          $zero, 0x16C($s2)
    ctx->pc = 0x27e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 0));
    // 0x27e4e4: 0xae460174  sw          $a2, 0x174($s2)
    ctx->pc = 0x27e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 6));
    // 0x27e4e8: 0xae460178  sw          $a2, 0x178($s2)
    ctx->pc = 0x27e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 6));
    // 0x27e4ec: 0xae46017c  sw          $a2, 0x17C($s2)
    ctx->pc = 0x27e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 6));
    // 0x27e4f0: 0x2012  mflo        $a0
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x27e4f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x27e4f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e4f8: 0xae44015c  sw          $a0, 0x15C($s2)
    ctx->pc = 0x27e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 4));
    // 0x27e4fc: 0x1812  mflo        $v1
    ctx->pc = 0x27e4fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x27e500: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e504: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x27e504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x27e508: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x27e50c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E50Cu;
    {
        const bool branch_taken_0x27e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E50Cu;
            // 0x27e510: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e50c) {
            ctx->pc = 0x27E520u;
            goto label_27e520;
        }
    }
    ctx->pc = 0x27E514u;
    // 0x27e514: 0x0  nop
    ctx->pc = 0x27e514u;
    // NOP
label_27e518:
    // 0x27e518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27e51c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x27e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_27e520:
    // 0x27e520: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x27e520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x27e524: 0xc0a077a  jal         func_281DE8
    ctx->pc = 0x27E524u;
    SET_GPR_U32(ctx, 31, 0x27E52Cu);
    ctx->pc = 0x27E528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E524u;
            // 0x27e528: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DE8u;
    if (runtime->hasFunction(0x281DE8u)) {
        auto targetFn = runtime->lookupFunction(0x281DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E52Cu; }
        if (ctx->pc != 0x27E52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281de8_0x281e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E52Cu; }
        if (ctx->pc != 0x27E52Cu) { return; }
    }
    ctx->pc = 0x27E52Cu;
    // 0x27e52c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E52Cu;
    {
        const bool branch_taken_0x27e52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E52Cu;
            // 0x27e530: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e52c) {
            ctx->pc = 0x27E518u;
            runtime->cooperativeGuestYield();
            goto label_27e518;
        }
    }
    ctx->pc = 0x27E534u;
    // 0x27e534: 0x0  nop
    ctx->pc = 0x27e534u;
    // NOP
label_27e538:
    // 0x27e538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27e53c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x27e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x27e540: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x27e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x27e544: 0xc0a077a  jal         func_281DE8
    ctx->pc = 0x27E544u;
    SET_GPR_U32(ctx, 31, 0x27E54Cu);
    ctx->pc = 0x27E548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E544u;
            // 0x27e548: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DE8u;
    if (runtime->hasFunction(0x281DE8u)) {
        auto targetFn = runtime->lookupFunction(0x281DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E54Cu; }
        if (ctx->pc != 0x27E54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281de8_0x281e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E54Cu; }
        if (ctx->pc != 0x27E54Cu) { return; }
    }
    ctx->pc = 0x27E54Cu;
    // 0x27e54c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e550: 0x5620fff9  bnel        $s1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27E550u;
    {
        const bool branch_taken_0x27e550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e550) {
            ctx->pc = 0x27E554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E550u;
            // 0x27e554: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E538u;
            runtime->cooperativeGuestYield();
            goto label_27e538;
        }
    }
    ctx->pc = 0x27E558u;
    // 0x27e558: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x27e558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x27e55c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e560: 0xc0a0882  jal         func_282208
    ctx->pc = 0x27E560u;
    SET_GPR_U32(ctx, 31, 0x27E568u);
    ctx->pc = 0x27E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E560u;
            // 0x27e564: 0x8e460040  lw          $a2, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282208u;
    if (runtime->hasFunction(0x282208u)) {
        auto targetFn = runtime->lookupFunction(0x282208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E568u; }
        if (ctx->pc != 0x27E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282208_0x282230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E568u; }
        if (ctx->pc != 0x27E568u) { return; }
    }
    ctx->pc = 0x27E568u;
    // 0x27e568: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x27e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x27e56c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27e56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e570: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27e570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e578: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x27e578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27e57c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x27e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e580: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x27e580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27e584: 0x246303fe  addiu       $v1, $v1, 0x3FE
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1022));
    // 0x27e588: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x27e588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x27e58c: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x27e58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x27e590: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x27e590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x27e594: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x27e594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e598: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x27e59c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x27e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27e5a0: 0x24c303ff  addiu       $v1, $a2, 0x3FF
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1023));
    // 0x27e5a4: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x27e5a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e5a8: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x27e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x27e5ac: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x27e5acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x27e5b0: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x27e5b0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27e5b4: 0xc7180b  movn        $v1, $a2, $a3
    ctx->pc = 0x27e5b4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x27e5b8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x27e5bc: 0x32a83  sra         $a1, $v1, 10
    ctx->pc = 0x27e5bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 10));
    // 0x27e5c0: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x27e5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27e5c4: 0x2aa30021  slti        $v1, $s5, 0x21
    ctx->pc = 0x27e5c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x27e5c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E5C8u;
    {
        const bool branch_taken_0x27e5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5C8u;
            // 0x27e5cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5c8) {
            ctx->pc = 0x27E5D8u;
            goto label_27e5d8;
        }
    }
    ctx->pc = 0x27E5D0u;
    // 0x27e5d0: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27e5d4: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x27e5d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27e5d8:
    // 0x27e5d8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x27e5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e5e0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27E5E0u;
    SET_GPR_U32(ctx, 31, 0x27E5E8u);
    ctx->pc = 0x27E5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5E0u;
            // 0x27e5e4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5E8u; }
        if (ctx->pc != 0x27E5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5E8u; }
        if (ctx->pc != 0x27E5E8u) { return; }
    }
    ctx->pc = 0x27E5E8u;
    // 0x27e5e8: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x27e5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27e5ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27E5ECu;
    {
        const bool branch_taken_0x27e5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5ECu;
            // 0x27e5f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5ec) {
            ctx->pc = 0x27E644u;
            goto label_27e644;
        }
    }
    ctx->pc = 0x27E5F4u;
    // 0x27e5f4: 0x2697ffff  addiu       $s7, $s4, -0x1
    ctx->pc = 0x27e5f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_27e5f8:
    // 0x27e5f8: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27e5fc: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x27e5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_27e600:
    // 0x27e600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e604: 0xc0a078c  jal         func_281E30
    ctx->pc = 0x27E604u;
    SET_GPR_U32(ctx, 31, 0x27E60Cu);
    ctx->pc = 0x27E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E604u;
            // 0x27e608: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E30u;
    if (runtime->hasFunction(0x281E30u)) {
        auto targetFn = runtime->lookupFunction(0x281E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E60Cu; }
        if (ctx->pc != 0x27E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281e30_0x281e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E60Cu; }
        if (ctx->pc != 0x27E60Cu) { return; }
    }
    ctx->pc = 0x27E60Cu;
    // 0x27e60c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e610: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x27e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e614: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x27e614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x27e618: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27E618u;
    {
        const bool branch_taken_0x27e618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E618u;
            // 0x27e61c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e618) {
            ctx->pc = 0x27E600u;
            runtime->cooperativeGuestYield();
            goto label_27e600;
        }
    }
    ctx->pc = 0x27E620u;
    // 0x27e620: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x27e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x27e624: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x27e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27e628: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x27e628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e62c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x27e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x27e630: 0x275182a  slt         $v1, $s3, $s5
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27e634: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E634u;
            // 0x27e638: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E5F8u;
            runtime->cooperativeGuestYield();
            goto label_27e5f8;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E63Cu;
    {
        const bool branch_taken_0x27e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E63Cu;
            // 0x27e640: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e63c) {
            ctx->pc = 0x27E64Cu;
            goto label_27e64c;
        }
    }
    ctx->pc = 0x27E644u;
label_27e644:
    // 0x27e644: 0x2697ffff  addiu       $s7, $s4, -0x1
    ctx->pc = 0x27e644u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x27e648: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_27e64c:
    // 0x27e64c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x27e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x27e650: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x27e650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e654: 0x2463c9c8  addiu       $v1, $v1, -0x3638
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x27e658: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27e658u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e65c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e65cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e660: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e664: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e66c: 0x244203fc  addiu       $v0, $v0, 0x3FC
    ctx->pc = 0x27e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
label_27e670:
    // 0x27e670: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27e670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27e674: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27e678: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27e678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27e67c: 0x0  nop
    ctx->pc = 0x27e67cu;
    // NOP
    // 0x27e680: 0x0  nop
    ctx->pc = 0x27e680u;
    // NOP
    // 0x27e684: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E684u;
    {
        const bool branch_taken_0x27e684 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x27e684) {
            ctx->pc = 0x27E670u;
            runtime->cooperativeGuestYield();
            goto label_27e670;
        }
    }
    ctx->pc = 0x27E68Cu;
    // 0x27e68c: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27e690: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x27e694: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x27e694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e698: 0x2463c9c8  addiu       $v1, $v1, -0x3638
    ctx->pc = 0x27e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x27e69c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e6a0: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x27e6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e6a8: 0x244207fc  addiu       $v0, $v0, 0x7FC
    ctx->pc = 0x27e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2044));
    // 0x27e6ac: 0x0  nop
    ctx->pc = 0x27e6acu;
    // NOP
label_27e6b0:
    // 0x27e6b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27e6b4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x27e6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27e6b8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27e6bc: 0x0  nop
    ctx->pc = 0x27e6bcu;
    // NOP
    // 0x27e6c0: 0x0  nop
    ctx->pc = 0x27e6c0u;
    // NOP
    // 0x27e6c4: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E6C4u;
    {
        const bool branch_taken_0x27e6c4 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x27e6c4) {
            ctx->pc = 0x27E6B0u;
            runtime->cooperativeGuestYield();
            goto label_27e6b0;
        }
    }
    ctx->pc = 0x27E6CCu;
    // 0x27e6cc: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x27e6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6d0: 0x6620039  bltzl       $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x27E6D0u;
    {
        const bool branch_taken_0x27e6d0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x27e6d0) {
            ctx->pc = 0x27E6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6D0u;
            // 0x27e6d4: 0x9644002a  lhu         $a0, 0x2A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E7B8u;
            goto label_27e7b8;
        }
    }
    ctx->pc = 0x27E6D8u;
    // 0x27e6d8: 0x3c170032  lui         $s7, 0x32
    ctx->pc = 0x27e6d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
    // 0x27e6dc: 0x0  nop
    ctx->pc = 0x27e6dcu;
    // NOP
label_27e6e0:
    // 0x27e6e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6e4: 0xc0a078c  jal         func_281E30
    ctx->pc = 0x27E6E4u;
    SET_GPR_U32(ctx, 31, 0x27E6ECu);
    ctx->pc = 0x27E6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6E4u;
            // 0x27e6e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E30u;
    if (runtime->hasFunction(0x281E30u)) {
        auto targetFn = runtime->lookupFunction(0x281E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6ECu; }
        if (ctx->pc != 0x27E6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281e30_0x281e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6ECu; }
        if (ctx->pc != 0x27E6ECu) { return; }
    }
    ctx->pc = 0x27E6ECu;
    // 0x27e6ec: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x27E6ECu;
    {
        const bool branch_taken_0x27e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e6ec) {
            ctx->pc = 0x27E6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6ECu;
            // 0x27e6f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E6E0u;
            runtime->cooperativeGuestYield();
            goto label_27e6e0;
        }
    }
    ctx->pc = 0x27E6F4u;
    // 0x27e6f4: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27e6f8: 0x26f5cdc8  addiu       $s5, $s7, -0x3238
    ctx->pc = 0x27e6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954440));
    // 0x27e6fc: 0x2c28818  mult        $s1, $s6, $v0
    ctx->pc = 0x27e6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x27e700: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e704: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27e704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e708: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27e708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e70c: 0xc0a0608  jal         func_281820
    ctx->pc = 0x27E70Cu;
    SET_GPR_U32(ctx, 31, 0x27E714u);
    ctx->pc = 0x27E710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E70Cu;
            // 0x27e710: 0x2352821  addu        $a1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (runtime->hasFunction(0x281820u)) {
        auto targetFn = runtime->lookupFunction(0x281820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E714u; }
        if (ctx->pc != 0x27E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281820_0x281860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E714u; }
        if (ctx->pc != 0x27E714u) { return; }
    }
    ctx->pc = 0x27E714u;
    // 0x27e714: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x27E714u;
    {
        const bool branch_taken_0x27e714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E714u;
            // 0x27e718: 0x26a5fc00  addiu       $a1, $s5, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e714) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27E71Cu;
    // 0x27e71c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x27e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x27e720: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27e724: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27e724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27e728: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27e72c: 0x2a830100  slti        $v1, $s4, 0x100
    ctx->pc = 0x27e72cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x27e730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E730u;
    {
        const bool branch_taken_0x27e730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E730u;
            // 0x27e734: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e730) {
            ctx->pc = 0x27E740u;
            goto label_27e740;
        }
    }
    ctx->pc = 0x27E738u;
    // 0x27e738: 0x1660001a  bnez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x27E738u;
    {
        const bool branch_taken_0x27e738 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E738u;
            // 0x27e73c: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e738) {
            ctx->pc = 0x27E7A4u;
            goto label_27e7a4;
        }
    }
    ctx->pc = 0x27E740u;
label_27e740:
    // 0x27e740: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x27e740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x27e744: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x27e744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x27e748: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x27e748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x27e74c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x27e74cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x27e750: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e758: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27e758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e75c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e760: 0xc0a0608  jal         func_281820
    ctx->pc = 0x27E760u;
    SET_GPR_U32(ctx, 31, 0x27E768u);
    ctx->pc = 0x27E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E760u;
            // 0x27e764: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (runtime->hasFunction(0x281820u)) {
        auto targetFn = runtime->lookupFunction(0x281820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E768u; }
        if (ctx->pc != 0x27E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281820_0x281860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E768u; }
        if (ctx->pc != 0x27E768u) { return; }
    }
    ctx->pc = 0x27E768u;
    // 0x27e768: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x27E768u;
    {
        const bool branch_taken_0x27e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E768u;
            // 0x27e76c: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e768) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27E770u;
    // 0x27e770: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x27e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27e774: 0x262503fc  addiu       $a1, $s1, 0x3FC
    ctx->pc = 0x27e774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1020));
    // 0x27e778: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e77c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x27e77cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27e780:
    // 0x27e780: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27e780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x27e784: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x27e784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x27e788: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x27e788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x27e78c: 0x0  nop
    ctx->pc = 0x27e78cu;
    // NOP
    // 0x27e790: 0x0  nop
    ctx->pc = 0x27e790u;
    // NOP
    // 0x27e794: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E794u;
    {
        const bool branch_taken_0x27e794 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x27e794) {
            ctx->pc = 0x27E780u;
            runtime->cooperativeGuestYield();
            goto label_27e780;
        }
    }
    ctx->pc = 0x27E79Cu;
    // 0x27e79c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E79Cu;
    {
        const bool branch_taken_0x27e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E79Cu;
            // 0x27e7a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e79c) {
            ctx->pc = 0x27E7A8u;
            goto label_27e7a8;
        }
    }
    ctx->pc = 0x27E7A4u;
label_27e7a4:
    // 0x27e7a4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x27e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_27e7a8:
    // 0x27e7a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27e7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7ac: 0x661ffcc  bgez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27E7ACu;
    {
        const bool branch_taken_0x27e7ac = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x27E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7ACu;
            // 0x27e7b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7ac) {
            ctx->pc = 0x27E6E0u;
            runtime->cooperativeGuestYield();
            goto label_27e6e0;
        }
    }
    ctx->pc = 0x27E7B4u;
    // 0x27e7b4: 0x9644002a  lhu         $a0, 0x2A($s2)
    ctx->pc = 0x27e7b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
label_27e7b8:
    // 0x27e7b8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x27e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x27e7bc: 0xae500034  sw          $s0, 0x34($s2)
    ctx->pc = 0x27e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 16));
    // 0x27e7c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27e7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7c4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E7C4u;
    {
        const bool branch_taken_0x27e7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7c4) {
            ctx->pc = 0x27E7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7C4u;
            // 0x27e7c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E7CCu;
            goto label_27e7cc;
        }
    }
    ctx->pc = 0x27E7CCu;
label_27e7cc:
    // 0x27e7cc: 0x9646002c  lhu         $a2, 0x2C($s2)
    ctx->pc = 0x27e7ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x27e7d0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x27e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x27e7d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27e7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7d8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x27e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x27e7dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x27e7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e7e0: 0x7065001a  div1        $zero, $v1, $a1
    ctx->pc = 0x27e7e0u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x27e7e4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x27e7e4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e7e8: 0x70001812  mflo1       $v1
    ctx->pc = 0x27e7e8u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x27e7ec: 0x1012  mflo        $v0
    ctx->pc = 0x27e7ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x27e7f0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x27e7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e7f4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x27e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e7f8: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x27e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x27e7fc: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27E7FCu;
    {
        const bool branch_taken_0x27e7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7FCu;
            // 0x27e800: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7fc) {
            ctx->pc = 0x27E894u;
            goto label_27e894;
        }
    }
    ctx->pc = 0x27E804u;
    // 0x27e804: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x27e804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27e808:
    // 0x27e808: 0x16350004  bne         $s1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E808u;
    {
        const bool branch_taken_0x27e808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x27E80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E808u;
            // 0x27e80c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e808) {
            ctx->pc = 0x27E81Cu;
            goto label_27e81c;
        }
    }
    ctx->pc = 0x27E810u;
    // 0x27e810: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x27e814: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x27e814u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27e818: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x27e818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_27e81c:
    // 0x27e81c: 0xc0a078c  jal         func_281E30
    ctx->pc = 0x27E81Cu;
    SET_GPR_U32(ctx, 31, 0x27E824u);
    ctx->pc = 0x27E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E81Cu;
            // 0x27e820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E30u;
    if (runtime->hasFunction(0x281E30u)) {
        auto targetFn = runtime->lookupFunction(0x281E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E824u; }
        if (ctx->pc != 0x27E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281e30_0x281e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E824u; }
        if (ctx->pc != 0x27E824u) { return; }
    }
    ctx->pc = 0x27E824u;
    // 0x27e824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e828: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27E828u;
    {
        const bool branch_taken_0x27e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E828u;
            // 0x27e82c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e828) {
            ctx->pc = 0x27E854u;
            goto label_27e854;
        }
    }
    ctx->pc = 0x27E830u;
    // 0x27e830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e834: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x27e834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27e838: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27E838u;
    SET_GPR_U32(ctx, 31, 0x27E840u);
    ctx->pc = 0x27E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E838u;
            // 0x27e83c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E840u; }
        if (ctx->pc != 0x27E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E840u; }
        if (ctx->pc != 0x27E840u) { return; }
    }
    ctx->pc = 0x27E840u;
    // 0x27e840: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e844: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27E844u;
    {
        const bool branch_taken_0x27e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E844u;
            // 0x27e848: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e844) {
            ctx->pc = 0x27E880u;
            goto label_27e880;
        }
    }
    ctx->pc = 0x27E84Cu;
    // 0x27e84c: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x27E84Cu;
    {
        const bool branch_taken_0x27e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E84Cu;
            // 0x27e850: 0xdfbe00c0  ld          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e84c) {
            ctx->pc = 0x27EBCCu;
            goto label_27ebcc;
        }
    }
    ctx->pc = 0x27E854u;
label_27e854:
    // 0x27e854: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E854u;
    {
        const bool branch_taken_0x27e854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e854) {
            ctx->pc = 0x27E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E854u;
            // 0x27e858: 0xae500034  sw          $s0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E85Cu;
            goto label_27e85c;
        }
    }
    ctx->pc = 0x27E85Cu;
label_27e85c:
    // 0x27e85c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x27e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x27e860: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e864: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e868: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x27e868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x27e86c: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27E86Cu;
    SET_GPR_U32(ctx, 31, 0x27E874u);
    ctx->pc = 0x27E870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E86Cu;
            // 0x27e870: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E874u; }
        if (ctx->pc != 0x27E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E874u; }
        if (ctx->pc != 0x27E874u) { return; }
    }
    ctx->pc = 0x27E874u;
    // 0x27e874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e878: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x27E878u;
    {
        const bool branch_taken_0x27e878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E878u;
            // 0x27e87c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e878) {
            ctx->pc = 0x27EBC4u;
            goto label_27ebc4;
        }
    }
    ctx->pc = 0x27E880u;
label_27e880:
    // 0x27e880: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x27e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x27e884: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27e884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27e888: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27e888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27e88c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x27E88Cu;
    {
        const bool branch_taken_0x27e88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E88Cu;
            // 0x27e890: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e88c) {
            ctx->pc = 0x27E808u;
            runtime->cooperativeGuestYield();
            goto label_27e808;
        }
    }
    ctx->pc = 0x27E894u;
label_27e894:
    // 0x27e894: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x27e894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27e898: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27E898u;
    {
        const bool branch_taken_0x27e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E898u;
            // 0x27e89c: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e898) {
            ctx->pc = 0x27E900u;
            goto label_27e900;
        }
    }
    ctx->pc = 0x27E8A0u;
    // 0x27e8a0: 0x9646002c  lhu         $a2, 0x2C($s2)
    ctx->pc = 0x27e8a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x27e8a4: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x27e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x27e8a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8ac: 0x9643002a  lhu         $v1, 0x2A($s2)
    ctx->pc = 0x27e8acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x27e8b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8b4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x27e8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e8b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E8B8u;
    {
        const bool branch_taken_0x27e8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8b8) {
            ctx->pc = 0x27E8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8B8u;
            // 0x27e8bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E8C0u;
            goto label_27e8c0;
        }
    }
    ctx->pc = 0x27E8C0u;
label_27e8c0:
    // 0x27e8c0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x27e8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x27e8c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x27e8c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e8c8: 0x1012  mflo        $v0
    ctx->pc = 0x27e8c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x27e8cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x27e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27e8d0: 0xc09f6b0  jal         func_27DAC0
    ctx->pc = 0x27E8D0u;
    SET_GPR_U32(ctx, 31, 0x27E8D8u);
    ctx->pc = 0x27E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8D0u;
            // 0x27e8d4: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DAC0u;
    if (runtime->hasFunction(0x27DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x27DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8D8u; }
        if (ctx->pc != 0x27E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DAC0_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8D8u; }
        if (ctx->pc != 0x27E8D8u) { return; }
    }
    ctx->pc = 0x27E8D8u;
    // 0x27e8d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e8dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E8DCu;
    {
        const bool branch_taken_0x27e8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8DCu;
            // 0x27e8e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8dc) {
            ctx->pc = 0x27E8ECu;
            goto label_27e8ec;
        }
    }
    ctx->pc = 0x27E8E4u;
    // 0x27e8e4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x27E8E4u;
    {
        const bool branch_taken_0x27e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8E4u;
            // 0x27e8e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8e4) {
            ctx->pc = 0x27EBC4u;
            goto label_27ebc4;
        }
    }
    ctx->pc = 0x27E8ECu;
label_27e8ec:
    // 0x27e8ec: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E8ECu;
    {
        const bool branch_taken_0x27e8ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8ECu;
            // 0x27e8f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8ec) {
            ctx->pc = 0x27E90Cu;
            goto label_27e90c;
        }
    }
    ctx->pc = 0x27E8F4u;
    // 0x27e8f4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27e8f8: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27E8F8u;
    SET_GPR_U32(ctx, 31, 0x27E900u);
    ctx->pc = 0x27E8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8F8u;
            // 0x27e8fc: 0x24845270  addiu       $a0, $a0, 0x5270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E900u; }
        if (ctx->pc != 0x27E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E900u; }
        if (ctx->pc != 0x27E900u) { return; }
    }
    ctx->pc = 0x27E900u;
label_27e900:
    // 0x27e900: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e904: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x27E904u;
    {
        const bool branch_taken_0x27e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E904u;
            // 0x27e908: 0x34429001  ori         $v0, $v0, 0x9001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36865);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e904) {
            ctx->pc = 0x27EBC4u;
            goto label_27ebc4;
        }
    }
    ctx->pc = 0x27E90Cu;
label_27e90c:
    // 0x27e90c: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x27e90cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x27e910: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e914: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e918: 0xc0a0a12  jal         func_282848
    ctx->pc = 0x27E918u;
    SET_GPR_U32(ctx, 31, 0x27E920u);
    ctx->pc = 0x27E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E918u;
            // 0x27e91c: 0x2650db00  addiu       $s0, $s2, -0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282848u;
    if (runtime->hasFunction(0x282848u)) {
        auto targetFn = runtime->lookupFunction(0x282848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E920u; }
        if (ctx->pc != 0x27E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282848_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E920u; }
        if (ctx->pc != 0x27E920u) { return; }
    }
    ctx->pc = 0x27E920u;
    // 0x27e920: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x27e920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27e924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e92c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27E92Cu;
    SET_GPR_U32(ctx, 31, 0x27E934u);
    ctx->pc = 0x27E930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E92Cu;
            // 0x27e930: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E934u; }
        if (ctx->pc != 0x27E934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E934u; }
        if (ctx->pc != 0x27E934u) { return; }
    }
    ctx->pc = 0x27E934u;
    // 0x27e934: 0x93a30017  lbu         $v1, 0x17($sp)
    ctx->pc = 0x27e934u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x27e938: 0x340e8427  ori         $t6, $zero, 0x8427
    ctx->pc = 0x27e938u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
    // 0x27e93c: 0x93ad0016  lbu         $t5, 0x16($sp)
    ctx->pc = 0x27e93cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x27e940: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x27e940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e944: 0x93a80015  lbu         $t0, 0x15($sp)
    ctx->pc = 0x27e944u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x27e948: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x27e948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x27e94c: 0x93a60013  lbu         $a2, 0x13($sp)
    ctx->pc = 0x27e94cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x27e950: 0xd4902  srl         $t1, $t5, 4
    ctx->pc = 0x27e950u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x27e954: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x27e954u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x27e958: 0x85102  srl         $t2, $t0, 4
    ctx->pc = 0x27e958u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x27e95c: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x27e95cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x27e960: 0x65902  srl         $t3, $a2, 4
    ctx->pc = 0x27e960u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x27e964: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x27e964u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x27e968: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x27e968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e96c: 0x43902  srl         $a3, $a0, 4
    ctx->pc = 0x27e96cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x27e970: 0x1314818  mult        $t1, $t1, $s1
    ctx->pc = 0x27e970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x27e974: 0x71515018  mult1       $t2, $t2, $s1
    ctx->pc = 0x27e974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x27e978: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x27e978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x27e97c: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x27e97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x27e980: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x27e980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x27e984: 0x71916018  mult1       $t4, $t4, $s1
    ctx->pc = 0x27e984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x27e988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e98c: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x27e98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27e990: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x27e990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x27e994: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x27e994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x27e998: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x27e998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x27e99c: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x27e99cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x27e9a0: 0xa64edb00  sh          $t6, -0x2500($s2)
    ctx->pc = 0x27e9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294957824), (uint16_t)GPR_U32(ctx, 14));
    // 0x27e9a4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27e9a8: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x27e9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x27e9ac: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x27e9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x27e9b0: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x27e9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x27e9b4: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x27e9b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x27e9b8: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x27e9b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x27e9bc: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x27e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x27e9c0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x27e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x27e9c4: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x27e9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9cc: 0xa209000d  sb          $t1, 0xD($s0)
    ctx->pc = 0x27e9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 9));
    // 0x27e9d0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x27e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27e9d4: 0xa20a000c  sb          $t2, 0xC($s0)
    ctx->pc = 0x27e9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 10));
    // 0x27e9d8: 0xa20b000b  sb          $t3, 0xB($s0)
    ctx->pc = 0x27e9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 11));
    // 0x27e9dc: 0xa20c000a  sb          $t4, 0xA($s0)
    ctx->pc = 0x27e9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 12));
    // 0x27e9e0: 0xa2070009  sb          $a3, 0x9($s0)
    ctx->pc = 0x27e9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x27e9e4: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x27e9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e9e8: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x27e9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e9ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27e9f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x27e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x27e9f4: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x27e9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27e9f8: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x27e9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27e9fc: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x27e9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ea00: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x27ea00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ea04: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27ea08: 0x24675220  addiu       $a3, $v1, 0x5220
    ctx->pc = 0x27ea08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 21024));
    // 0x27ea0c: 0x80e90000  lb          $t1, 0x0($a3)
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ea10: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x27ea10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x27ea14: 0xa2090040  sb          $t1, 0x40($s0)
    ctx->pc = 0x27ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 9));
    // 0x27ea18: 0xa2020041  sb          $v0, 0x41($s0)
    ctx->pc = 0x27ea18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ea1c: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x27ea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x27ea20: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27EA20u;
    SET_GPR_U32(ctx, 31, 0x27EA28u);
    ctx->pc = 0x27EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA20u;
            // 0x27ea24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA28u; }
        if (ctx->pc != 0x27EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA28u; }
        if (ctx->pc != 0x27EA28u) { return; }
    }
    ctx->pc = 0x27EA28u;
    // 0x27ea28: 0x93a30017  lbu         $v1, 0x17($sp)
    ctx->pc = 0x27ea28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x27ea2c: 0x340ea426  ori         $t6, $zero, 0xA426
    ctx->pc = 0x27ea2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42022);
    // 0x27ea30: 0x93ad0016  lbu         $t5, 0x16($sp)
    ctx->pc = 0x27ea30u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x27ea34: 0x3c0f002c  lui         $t7, 0x2C
    ctx->pc = 0x27ea34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)44 << 16));
    // 0x27ea38: 0x93ab0015  lbu         $t3, 0x15($sp)
    ctx->pc = 0x27ea38u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x27ea3c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x27ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x27ea40: 0x93a90013  lbu         $t1, 0x13($sp)
    ctx->pc = 0x27ea40u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x27ea44: 0xd3102  srl         $a2, $t5, 4
    ctx->pc = 0x27ea44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x27ea48: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x27ea48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x27ea4c: 0xb3902  srl         $a3, $t3, 4
    ctx->pc = 0x27ea4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x27ea50: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x27ea50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x27ea54: 0x95102  srl         $t2, $t1, 4
    ctx->pc = 0x27ea54u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x27ea58: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x27ea58u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x27ea5c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x27ea5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ea60: 0x44102  srl         $t0, $a0, 4
    ctx->pc = 0x27ea60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x27ea64: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x27ea64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x27ea68: 0x70f13818  mult1       $a3, $a3, $s1
    ctx->pc = 0x27ea68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27ea6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x27ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x27ea70: 0x1114018  mult        $t0, $t0, $s1
    ctx->pc = 0x27ea70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x27ea74: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x27ea74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x27ea78: 0x71515018  mult1       $t2, $t2, $s1
    ctx->pc = 0x27ea78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x27ea7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ea80: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x27ea80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x27ea84: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x27ea84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x27ea88: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x27ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x27ea8c: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x27ea8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x27ea90: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x27ea90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x27ea94: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27ea94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27ea98: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x27ea9c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27eaa0: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x27eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x27eaa4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x27eaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x27eaa8: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x27eaa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x27eaac: 0xa206000d  sb          $a2, 0xD($s0)
    ctx->pc = 0x27eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x27eab0: 0xa207000c  sb          $a3, 0xC($s0)
    ctx->pc = 0x27eab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x27eab4: 0x2645db00  addiu       $a1, $s2, -0x2500
    ctx->pc = 0x27eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957824));
    // 0x27eab8: 0xa60e0000  sh          $t6, 0x0($s0)
    ctx->pc = 0x27eab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x27eabc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eac0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x27eac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27eac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27eac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eac8: 0xa20a000b  sb          $t2, 0xB($s0)
    ctx->pc = 0x27eac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 10));
    // 0x27eacc: 0xa20c000a  sb          $t4, 0xA($s0)
    ctx->pc = 0x27eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 12));
    // 0x27ead0: 0xa2080009  sb          $t0, 0x9($s0)
    ctx->pc = 0x27ead0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 8));
    // 0x27ead4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27ead8: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x27ead8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x27eadc: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x27eadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x27eae0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27eae4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x27eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x27eae8: 0x6a08000f  ldl         $t0, 0xF($s0)
    ctx->pc = 0x27eae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27eaec: 0x6e080008  ldr         $t0, 0x8($s0)
    ctx->pc = 0x27eaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27eaf0: 0xb208001f  sdl         $t0, 0x1F($s0)
    ctx->pc = 0x27eaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eaf4: 0xb6080018  sdr         $t0, 0x18($s0)
    ctx->pc = 0x27eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eaf8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27eafc: 0x25e35228  addiu       $v1, $t7, 0x5228
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 21032));
    // 0x27eb00: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x27eb00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27eb04: 0x80690001  lb          $t1, 0x1($v1)
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x27eb08: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x27eb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27eb0c: 0xa2080040  sb          $t0, 0x40($s0)
    ctx->pc = 0x27eb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x27eb10: 0xa2090041  sb          $t1, 0x41($s0)
    ctx->pc = 0x27eb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 9));
    // 0x27eb14: 0xa2020042  sb          $v0, 0x42($s0)
    ctx->pc = 0x27eb14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x27eb18: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x27EB18u;
    SET_GPR_U32(ctx, 31, 0x27EB20u);
    ctx->pc = 0x27EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB18u;
            // 0x27eb1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB20u; }
        if (ctx->pc != 0x27EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB20u; }
        if (ctx->pc != 0x27EB20u) { return; }
    }
    ctx->pc = 0x27EB20u;
    // 0x27eb20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27EB20u;
    {
        const bool branch_taken_0x27eb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB20u;
            // 0x27eb24: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb20) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27EB28u;
    // 0x27eb28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb30: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27EB30u;
    SET_GPR_U32(ctx, 31, 0x27EB38u);
    ctx->pc = 0x27EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB30u;
            // 0x27eb34: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB38u; }
        if (ctx->pc != 0x27EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB38u; }
        if (ctx->pc != 0x27EB38u) { return; }
    }
    ctx->pc = 0x27EB38u;
    // 0x27eb38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eb3c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27EB3Cu;
    {
        const bool branch_taken_0x27eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB3Cu;
            // 0x27eb40: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb3c) {
            ctx->pc = 0x27EBC8u;
            goto label_27ebc8;
        }
    }
    ctx->pc = 0x27EB44u;
    // 0x27eb44: 0xc0a0618  jal         func_281860
    ctx->pc = 0x27EB44u;
    SET_GPR_U32(ctx, 31, 0x27EB4Cu);
    ctx->pc = 0x27EB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB44u;
            // 0x27eb48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB4Cu; }
        if (ctx->pc != 0x27EB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB4Cu; }
        if (ctx->pc != 0x27EB4Cu) { return; }
    }
    ctx->pc = 0x27EB4Cu;
    // 0x27eb4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27EB4Cu;
    {
        const bool branch_taken_0x27eb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eb4c) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27EB54u;
    // 0x27eb54: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x27EB54u;
    SET_GPR_U32(ctx, 31, 0x27EB5Cu);
    ctx->pc = 0x27EB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB54u;
            // 0x27eb58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB5Cu; }
        if (ctx->pc != 0x27EB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB5Cu; }
        if (ctx->pc != 0x27EB5Cu) { return; }
    }
    ctx->pc = 0x27EB5Cu;
    // 0x27eb5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27EB5Cu;
    {
        const bool branch_taken_0x27eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eb5c) {
            ctx->pc = 0x27EB74u;
            goto label_27eb74;
        }
    }
    ctx->pc = 0x27EB64u;
    // 0x27eb64: 0xc0a05b0  jal         func_2816C0
    ctx->pc = 0x27EB64u;
    SET_GPR_U32(ctx, 31, 0x27EB6Cu);
    ctx->pc = 0x27EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB64u;
            // 0x27eb68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2816C0u;
    if (runtime->hasFunction(0x2816C0u)) {
        auto targetFn = runtime->lookupFunction(0x2816C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB6Cu; }
        if (ctx->pc != 0x27EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002816C0_0x2816c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB6Cu; }
        if (ctx->pc != 0x27EB6Cu) { return; }
    }
    ctx->pc = 0x27EB6Cu;
    // 0x27eb6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB6Cu;
    {
        const bool branch_taken_0x27eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27eb6c) {
            ctx->pc = 0x27EB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB6Cu;
            // 0x27eb70: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27EB80u;
            goto label_27eb80;
        }
    }
    ctx->pc = 0x27EB74u;
label_27eb74:
    // 0x27eb74: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27eb78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27EB78u;
    {
        const bool branch_taken_0x27eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB78u;
            // 0x27eb7c: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb78) {
            ctx->pc = 0x27EBC4u;
            goto label_27ebc4;
        }
    }
    ctx->pc = 0x27EB80u;
label_27eb80:
    // 0x27eb80: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x27eb84: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x27eb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27eb88: 0x2483c9c8  addiu       $v1, $a0, -0x3638
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    // 0x27eb8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eb90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27eb9c: 0xc09f7cc  jal         func_27DF30
    ctx->pc = 0x27EB9Cu;
    SET_GPR_U32(ctx, 31, 0x27EBA4u);
    ctx->pc = 0x27EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB9Cu;
            // 0x27eba0: 0xac660888  sw          $a2, 0x888($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2184), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DF30u;
    if (runtime->hasFunction(0x27DF30u)) {
        auto targetFn = runtime->lookupFunction(0x27DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBA4u; }
        if (ctx->pc != 0x27EBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DF30_0x27df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBA4u; }
        if (ctx->pc != 0x27EBA4u) { return; }
    }
    ctx->pc = 0x27EBA4u;
    // 0x27eba4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27eba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebac: 0x34639003  ori         $v1, $v1, 0x9003
    ctx->pc = 0x27ebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36867);
    // 0x27ebb0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EBB0u;
    {
        const bool branch_taken_0x27ebb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBB0u;
            // 0x27ebb4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebb0) {
            ctx->pc = 0x27EBC0u;
            goto label_27ebc0;
        }
    }
    ctx->pc = 0x27EBB8u;
    // 0x27ebb8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27ebbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ebc0:
    // 0x27ebc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27ebc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ebc4:
    // 0x27ebc4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x27ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_27ebc8:
    // 0x27ebc8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x27ebc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_27ebcc:
    // 0x27ebcc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x27ebccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27ebd0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x27ebd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27ebd4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x27ebd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27ebd8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x27ebd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27ebdc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x27ebdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ebe0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x27ebe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ebe4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x27ebe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ebe8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27ebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ebec: 0x3e00008  jr          $ra
    ctx->pc = 0x27EBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBECu;
            // 0x27ebf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E324u: goto label_27e324;
            case 0x27E3C0u: goto label_27e3c0;
            case 0x27E3F0u: goto label_27e3f0;
            case 0x27E474u: goto label_27e474;
            case 0x27E518u: goto label_27e518;
            case 0x27E520u: goto label_27e520;
            case 0x27E538u: goto label_27e538;
            case 0x27E5D8u: goto label_27e5d8;
            case 0x27E5F8u: goto label_27e5f8;
            case 0x27E600u: goto label_27e600;
            case 0x27E644u: goto label_27e644;
            case 0x27E64Cu: goto label_27e64c;
            case 0x27E670u: goto label_27e670;
            case 0x27E6B0u: goto label_27e6b0;
            case 0x27E6E0u: goto label_27e6e0;
            case 0x27E740u: goto label_27e740;
            case 0x27E780u: goto label_27e780;
            case 0x27E7A4u: goto label_27e7a4;
            case 0x27E7A8u: goto label_27e7a8;
            case 0x27E7B8u: goto label_27e7b8;
            case 0x27E7CCu: goto label_27e7cc;
            case 0x27E808u: goto label_27e808;
            case 0x27E81Cu: goto label_27e81c;
            case 0x27E854u: goto label_27e854;
            case 0x27E85Cu: goto label_27e85c;
            case 0x27E880u: goto label_27e880;
            case 0x27E894u: goto label_27e894;
            case 0x27E8C0u: goto label_27e8c0;
            case 0x27E8ECu: goto label_27e8ec;
            case 0x27E900u: goto label_27e900;
            case 0x27E90Cu: goto label_27e90c;
            case 0x27EB74u: goto label_27eb74;
            case 0x27EB80u: goto label_27eb80;
            case 0x27EBC0u: goto label_27ebc0;
            case 0x27EBC4u: goto label_27ebc4;
            case 0x27EBC8u: goto label_27ebc8;
            case 0x27EBCCu: goto label_27ebcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27EBF4u;
    // 0x27ebf4: 0x0  nop
    ctx->pc = 0x27ebf4u;
    // NOP
}

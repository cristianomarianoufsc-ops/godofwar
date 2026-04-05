#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC1F8
// Address: 0x1bc1f8 - 0x1bc5d0
void sub_001BC1F8_0x1bc1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC1F8_0x1bc1f8");
#endif

    ctx->pc = 0x1bc1f8u;

    // 0x1bc1f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bc1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bc1fc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bc1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1bc200: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1bc200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1bc204: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bc204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1bc208: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc20c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bc20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1bc210: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1bc210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1bc214: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1bc214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1bc218: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bc218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1bc21c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1bc21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1bc220: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1bc220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1bc224: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1bc224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1bc228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bc22c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1bc230:
    // 0x1bc230: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bc230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bc234: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1bc234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1bc238: 0x0  nop
    ctx->pc = 0x1bc238u;
    // NOP
    // 0x1bc23c: 0x0  nop
    ctx->pc = 0x1bc23cu;
    // NOP
    // 0x1bc240: 0x0  nop
    ctx->pc = 0x1bc240u;
    // NOP
    // 0x1bc244: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BC244u;
    {
        const bool branch_taken_0x1bc244 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1BC248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC244u;
            // 0x1bc248: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc244) {
            ctx->pc = 0x1BC230u;
            runtime->cooperativeGuestYield();
            goto label_1bc230;
        }
    }
    ctx->pc = 0x1BC24Cu;
    // 0x1bc24c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc250: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1bc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bc254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc258: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC258u;
    SET_GPR_U32(ctx, 31, 0x1BC260u);
    ctx->pc = 0x1BC25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC258u;
            // 0x1bc25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC260u; }
        if (ctx->pc != 0x1BC260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC260u; }
        if (ctx->pc != 0x1BC260u) { return; }
    }
    ctx->pc = 0x1BC260u;
    // 0x1bc260: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bc260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc264: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bc264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc268:
    // 0x1bc268: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x1bc268u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x1bc26c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc270: 0x26a25280  addiu       $v0, $s5, 0x5280
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21120));
    // 0x1bc274: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1bc274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bc278: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1bc278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc27c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bc280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bc284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc288: 0x8062000a  lb          $v0, 0xA($v1)
    ctx->pc = 0x1bc288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bc28c: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x1BC28Cu;
    {
        const bool branch_taken_0x1bc28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc28c) {
            ctx->pc = 0x1BC290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC28Cu;
            // 0x1bc290: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4A4u;
            goto label_1bc4a4;
        }
    }
    ctx->pc = 0x1BC294u;
    // 0x1bc294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bc294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bc298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc29c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_1bc2a0:
    // 0x1bc2a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bc2a4: 0x26435a30  addiu       $v1, $s2, 0x5A30
    ctx->pc = 0x1bc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 23088));
    // 0x1bc2a8: 0x26a45280  addiu       $a0, $s5, 0x5280
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21120));
    // 0x1bc2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc2b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc2b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc2b8: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x1bc2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc2bc: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x1bc2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1bc2c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bc2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc2cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc2d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC2D0u;
    {
        const bool branch_taken_0x1bc2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2D0u;
            // 0x1bc2d4: 0x24a3000a  addiu       $v1, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d0) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2D8u;
    // 0x1bc2d8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1bc2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bc2dc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC2DCu;
    SET_GPR_U32(ctx, 31, 0x1BC2E4u);
    ctx->pc = 0x1BC2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2DCu;
            // 0x1bc2e0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2E4u; }
        if (ctx->pc != 0x1BC2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2E4u; }
        if (ctx->pc != 0x1BC2E4u) { return; }
    }
    ctx->pc = 0x1BC2E4u;
    // 0x1bc2e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC2E4u;
    {
        const bool branch_taken_0x1bc2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2e4) {
            ctx->pc = 0x1BC2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2E4u;
            // 0x1bc2e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2F8u;
            goto label_1bc2f8;
        }
    }
    ctx->pc = 0x1BC2ECu;
label_1bc2ec:
    // 0x1bc2ec: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1bc2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc2f0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BC2F0u;
    {
        const bool branch_taken_0x1bc2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2f0) {
            ctx->pc = 0x1BC2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2F0u;
            // 0x1bc2f4: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2A0u;
            runtime->cooperativeGuestYield();
            goto label_1bc2a0;
        }
    }
    ctx->pc = 0x1BC2F8u;
label_1bc2f8:
    // 0x1bc2f8: 0x5660006a  bnel        $s3, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1BC2F8u;
    {
        const bool branch_taken_0x1bc2f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2f8) {
            ctx->pc = 0x1BC2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2F8u;
            // 0x1bc2fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4A4u;
            goto label_1bc4a4;
        }
    }
    ctx->pc = 0x1BC300u;
    // 0x1bc300: 0x8e425a30  lw          $v0, 0x5A30($s2)
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23088)));
    // 0x1bc304: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1bc304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc308: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc30c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc310: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC310u;
    {
        const bool branch_taken_0x1bc310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC310u;
            // 0x1bc314: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc310) {
            ctx->pc = 0x1BC330u;
            goto label_1bc330;
        }
    }
    ctx->pc = 0x1BC318u;
    // 0x1bc318: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bc318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC31Cu;
    {
        const bool branch_taken_0x1bc31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC31Cu;
            // 0x1bc320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc31c) {
            ctx->pc = 0x1BC334u;
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC324u;
    // 0x1bc324: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BC324u;
    {
        const bool branch_taken_0x1bc324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC324u;
            // 0x1bc328: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc324) {
            ctx->pc = 0x1BC370u;
            goto label_1bc370;
        }
    }
    ctx->pc = 0x1BC32Cu;
    // 0x1bc32c: 0x0  nop
    ctx->pc = 0x1bc32cu;
    // NOP
label_1bc330:
    // 0x1bc330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bc334:
    // 0x1bc334: 0x26425a30  addiu       $v0, $s2, 0x5A30
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 23088));
    // 0x1bc338: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1bc338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bc33c: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x1bc33cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc344: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC344u;
    {
        const bool branch_taken_0x1bc344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC344u;
            // 0x1bc348: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc344) {
            ctx->pc = 0x1BC370u;
            goto label_1bc370;
        }
    }
    ctx->pc = 0x1BC34Cu;
    // 0x1bc34c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc350: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc358: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BC358u;
    {
        const bool branch_taken_0x1bc358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc358) {
            ctx->pc = 0x1BC35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC358u;
            // 0x1bc35c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC334u;
            runtime->cooperativeGuestYield();
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC360u;
    // 0x1bc360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc364: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BC364u;
    {
        const bool branch_taken_0x1bc364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc364) {
            ctx->pc = 0x1BC368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC364u;
            // 0x1bc368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC334u;
            runtime->cooperativeGuestYield();
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC36Cu;
    // 0x1bc36c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1bc36cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc370:
    // 0x1bc370: 0x6a10035  bgez        $s5, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BC370u;
    {
        const bool branch_taken_0x1bc370 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x1BC374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC370u;
            // 0x1bc374: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc370) {
            ctx->pc = 0x1BC448u;
            goto label_1bc448;
        }
    }
    ctx->pc = 0x1BC378u;
    // 0x1bc378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc37c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc380:
    // 0x1bc380: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1bc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bc384: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x1bc384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bc388: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BC388u;
    {
        const bool branch_taken_0x1bc388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC388u;
            // 0x1bc38c: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc388) {
            ctx->pc = 0x1BC430u;
            goto label_1bc430;
        }
    }
    ctx->pc = 0x1BC390u;
    // 0x1bc390: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bc390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc398: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x1bc398u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x1bc39c: 0x0  nop
    ctx->pc = 0x1bc39cu;
    // NOP
label_1bc3a0:
    // 0x1bc3a0: 0x12b880  sll         $s7, $s2, 2
    ctx->pc = 0x1bc3a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bc3a4: 0x27c25280  addiu       $v0, $fp, 0x5280
    ctx->pc = 0x1bc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 21120));
    // 0x1bc3a8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1bc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1bc3ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc3b0: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc3b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc3b8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC3B8u;
    {
        const bool branch_taken_0x1bc3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3b8) {
            ctx->pc = 0x1BC3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3B8u;
            // 0x1bc3bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC414u;
            goto label_1bc414;
        }
    }
    ctx->pc = 0x1BC3C0u;
    // 0x1bc3c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bc3c8:
    // 0x1bc3c8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1bc3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bc3cc: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1bc3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bc3d0: 0x27c35280  addiu       $v1, $fp, 0x5280
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 21120));
    // 0x1bc3d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bc3d8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1bc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1bc3dc: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1bc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1bc3e0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x1bc3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bc3e4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1bc3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc3e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC3E8u;
    {
        const bool branch_taken_0x1bc3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3E8u;
            // 0x1bc3ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3e8) {
            ctx->pc = 0x1BC410u;
            goto label_1bc410;
        }
    }
    ctx->pc = 0x1BC3F0u;
    // 0x1bc3f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc3f4: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x1bc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1bc3f8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc3fc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC3FCu;
    SET_GPR_U32(ctx, 31, 0x1BC404u);
    ctx->pc = 0x1BC400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3FCu;
            // 0x1bc400: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC404u; }
        if (ctx->pc != 0x1BC404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC404u; }
        if (ctx->pc != 0x1BC404u) { return; }
    }
    ctx->pc = 0x1BC404u;
    // 0x1bc404: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC404u;
            // 0x1bc408: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC3C8u;
            runtime->cooperativeGuestYield();
            goto label_1bc3c8;
        }
    }
    ctx->pc = 0x1BC40Cu;
    // 0x1bc40c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1bc410:
    // 0x1bc410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bc414:
    // 0x1bc414: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1bc414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC418u;
    {
        const bool branch_taken_0x1bc418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc418) {
            ctx->pc = 0x1BC428u;
            goto label_1bc428;
        }
    }
    ctx->pc = 0x1BC420u;
    // 0x1bc420: 0x52c0ffdf  beql        $s6, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1BC420u;
    {
        const bool branch_taken_0x1bc420 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc420) {
            ctx->pc = 0x1BC424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC420u;
            // 0x1bc424: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC3A0u;
            runtime->cooperativeGuestYield();
            goto label_1bc3a0;
        }
    }
    ctx->pc = 0x1BC428u;
label_1bc428:
    // 0x1bc428: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC428u;
            // 0x1bc42c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC440u;
            goto label_1bc440;
        }
    }
    ctx->pc = 0x1BC430u;
label_1bc430:
    // 0x1bc430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bc434: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1bc434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc438: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1BC438u;
    {
        const bool branch_taken_0x1bc438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC438u;
            // 0x1bc43c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc438) {
            ctx->pc = 0x1BC380u;
            runtime->cooperativeGuestYield();
            goto label_1bc380;
        }
    }
    ctx->pc = 0x1BC440u;
label_1bc440:
    // 0x1bc440: 0x6a00017  bltz        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BC440u;
    {
        const bool branch_taken_0x1bc440 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1BC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC440u;
            // 0x1bc444: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc440) {
            ctx->pc = 0x1BC4A0u;
            goto label_1bc4a0;
        }
    }
    ctx->pc = 0x1BC448u;
label_1bc448:
    // 0x1bc448: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1bc448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc44c: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1bc44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bc450: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bc454: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x1bc454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bc458: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc45c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc460: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bc464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc468: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bc468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc46c: 0x24e7000a  addiu       $a3, $a3, 0xA
    ctx->pc = 0x1bc46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x1bc470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc474: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC474u;
    SET_GPR_U32(ctx, 31, 0x1BC47Cu);
    ctx->pc = 0x1BC478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC474u;
            // 0x1bc478: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC47Cu; }
        if (ctx->pc != 0x1BC47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC47Cu; }
        if (ctx->pc != 0x1BC47Cu) { return; }
    }
    ctx->pc = 0x1BC47Cu;
    // 0x1bc47c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bc47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bc480: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bc480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc488: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC488u;
    SET_GPR_U32(ctx, 31, 0x1BC490u);
    ctx->pc = 0x1BC48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC488u;
            // 0x1bc48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC490u; }
        if (ctx->pc != 0x1BC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC490u; }
        if (ctx->pc != 0x1BC490u) { return; }
    }
    ctx->pc = 0x1BC490u;
    // 0x1bc490: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1bc494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc498: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bc49c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1bc4a0:
    // 0x1bc4a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bc4a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bc4a4:
    // 0x1bc4a4: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1bc4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc4a8: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x1BC4A8u;
    {
        const bool branch_taken_0x1bc4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4A8u;
            // 0x1bc4ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4a8) {
            ctx->pc = 0x1BC268u;
            runtime->cooperativeGuestYield();
            goto label_1bc268;
        }
    }
    ctx->pc = 0x1BC4B0u;
    // 0x1bc4b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4b4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1bc4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bc4b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4bc: 0x0  nop
    ctx->pc = 0x1bc4bcu;
    // NOP
label_1bc4c0:
    // 0x1bc4c0: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x1bc4c0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x1bc4c4: 0x27c25a30  addiu       $v0, $fp, 0x5A30
    ctx->pc = 0x1bc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23088));
    // 0x1bc4c8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1bc4cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc4d0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc4d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc4d8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BC4D8u;
    {
        const bool branch_taken_0x1bc4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4D8u;
            // 0x1bc4dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4d8) {
            ctx->pc = 0x1BC588u;
            goto label_1bc588;
        }
    }
    ctx->pc = 0x1BC4E0u;
    // 0x1bc4e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4e4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x1bc4e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
label_1bc4e8:
    // 0x1bc4e8: 0x12a880  sll         $s5, $s2, 2
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bc4ec: 0x26e25280  addiu       $v0, $s7, 0x5280
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21120));
    // 0x1bc4f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1bc4f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc4f8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc4fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc500: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BC500u;
    {
        const bool branch_taken_0x1bc500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc500) {
            ctx->pc = 0x1BC504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC500u;
            // 0x1bc504: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC554u;
            goto label_1bc554;
        }
    }
    ctx->pc = 0x1BC508u;
    // 0x1bc508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc50c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bc50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bc510:
    // 0x1bc510: 0x26e35280  addiu       $v1, $s7, 0x5280
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21120));
    // 0x1bc514: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1bc514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bc518: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x1bc518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1bc51c: 0x27c25a30  addiu       $v0, $fp, 0x5A30
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23088));
    // 0x1bc520: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1bc520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc524: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1bc528: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC528u;
    {
        const bool branch_taken_0x1bc528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC528u;
            // 0x1bc52c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc528) {
            ctx->pc = 0x1BC550u;
            goto label_1bc550;
        }
    }
    ctx->pc = 0x1BC530u;
    // 0x1bc530: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bc534: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x1bc534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1bc538: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bc538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc53c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC53Cu;
    SET_GPR_U32(ctx, 31, 0x1BC544u);
    ctx->pc = 0x1BC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC53Cu;
            // 0x1bc540: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC544u; }
        if (ctx->pc != 0x1BC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC544u; }
        if (ctx->pc != 0x1BC544u) { return; }
    }
    ctx->pc = 0x1BC544u;
    // 0x1bc544: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BC544u;
    {
        const bool branch_taken_0x1bc544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC544u;
            // 0x1bc548: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc544) {
            ctx->pc = 0x1BC510u;
            runtime->cooperativeGuestYield();
            goto label_1bc510;
        }
    }
    ctx->pc = 0x1BC54Cu;
    // 0x1bc54c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bc550:
    // 0x1bc550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bc554:
    // 0x1bc554: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1bc554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC558u;
    {
        const bool branch_taken_0x1bc558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc558) {
            ctx->pc = 0x1BC568u;
            goto label_1bc568;
        }
    }
    ctx->pc = 0x1BC560u;
    // 0x1bc560: 0x5220ffe1  beql        $s1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1BC560u;
    {
        const bool branch_taken_0x1bc560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc560) {
            ctx->pc = 0x1BC564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC560u;
            // 0x1bc564: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4E8u;
            runtime->cooperativeGuestYield();
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC568u;
label_1bc568:
    // 0x1bc568: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC568u;
    {
        const bool branch_taken_0x1bc568 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc568) {
            ctx->pc = 0x1BC56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC568u;
            // 0x1bc56c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC58Cu;
            goto label_1bc58c;
        }
    }
    ctx->pc = 0x1BC570u;
    // 0x1bc570: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bc574: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bc574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc57c: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC57Cu;
    SET_GPR_U32(ctx, 31, 0x1BC584u);
    ctx->pc = 0x1BC580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC57Cu;
            // 0x1bc580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC584u; }
        if (ctx->pc != 0x1BC584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC584u; }
        if (ctx->pc != 0x1BC584u) { return; }
    }
    ctx->pc = 0x1BC584u;
    // 0x1bc584: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1bc584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1bc588:
    // 0x1bc588: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bc58c:
    // 0x1bc58c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1bc58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1bc590: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1bc590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc594: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1BC594u;
    {
        const bool branch_taken_0x1bc594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC594u;
            // 0x1bc598: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc594) {
            ctx->pc = 0x1BC4C0u;
            runtime->cooperativeGuestYield();
            goto label_1bc4c0;
        }
    }
    ctx->pc = 0x1BC59Cu;
    // 0x1bc59c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bc59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bc5a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bc5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bc5a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1bc5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bc5a8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1bc5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bc5ac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bc5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc5b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bc5b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc5b4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1bc5b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc5b8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc5bc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1bc5bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5C4u;
            // 0x1bc5c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC230u: goto label_1bc230;
            case 0x1BC268u: goto label_1bc268;
            case 0x1BC2A0u: goto label_1bc2a0;
            case 0x1BC2ECu: goto label_1bc2ec;
            case 0x1BC2F8u: goto label_1bc2f8;
            case 0x1BC330u: goto label_1bc330;
            case 0x1BC334u: goto label_1bc334;
            case 0x1BC370u: goto label_1bc370;
            case 0x1BC380u: goto label_1bc380;
            case 0x1BC3A0u: goto label_1bc3a0;
            case 0x1BC3C8u: goto label_1bc3c8;
            case 0x1BC410u: goto label_1bc410;
            case 0x1BC414u: goto label_1bc414;
            case 0x1BC428u: goto label_1bc428;
            case 0x1BC430u: goto label_1bc430;
            case 0x1BC440u: goto label_1bc440;
            case 0x1BC448u: goto label_1bc448;
            case 0x1BC4A0u: goto label_1bc4a0;
            case 0x1BC4A4u: goto label_1bc4a4;
            case 0x1BC4C0u: goto label_1bc4c0;
            case 0x1BC4E8u: goto label_1bc4e8;
            case 0x1BC510u: goto label_1bc510;
            case 0x1BC550u: goto label_1bc550;
            case 0x1BC554u: goto label_1bc554;
            case 0x1BC568u: goto label_1bc568;
            case 0x1BC588u: goto label_1bc588;
            case 0x1BC58Cu: goto label_1bc58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC5CCu;
    // 0x1bc5cc: 0x0  nop
    ctx->pc = 0x1bc5ccu;
    // NOP
}

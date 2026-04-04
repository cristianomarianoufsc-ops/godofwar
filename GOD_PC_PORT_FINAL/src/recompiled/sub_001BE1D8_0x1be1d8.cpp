#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE1D8
// Address: 0x1be1d8 - 0x1be338
void sub_001BE1D8_0x1be1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE1D8_0x1be1d8");
#endif

    ctx->pc = 0x1be1d8u;

    // 0x1be1d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1be1dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be1e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1be1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1be1e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1be1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be1e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1be1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1be1ec: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1be1f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1be1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1be1f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1be1f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1be1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1be1fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1be1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1be200: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1be200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1be204: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1be204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1be208: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1be208u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be20c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1be20cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be210: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1be214: 0x0  nop
    ctx->pc = 0x1be214u;
    // NOP
label_1be218:
    // 0x1be218: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1be218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be21c: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1be220: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1be220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1be224: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x1be224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1be228: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1be22c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1be22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be230: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BE230u;
    {
        const bool branch_taken_0x1be230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be230) {
            ctx->pc = 0x1BE234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE230u;
            // 0x1be234: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE308u;
            goto label_1be308;
        }
    }
    ctx->pc = 0x1BE238u;
    // 0x1be238: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be23c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1be240:
    // 0x1be240: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1be244: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1be244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1be248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1be24c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be254: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be258: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1be25c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be260: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BE260u;
    {
        const bool branch_taken_0x1be260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE260u;
            // 0x1be264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be260) {
            ctx->pc = 0x1BE2F8u;
            goto label_1be2f8;
        }
    }
    ctx->pc = 0x1BE268u;
    // 0x1be268: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BE268u;
    SET_GPR_U32(ctx, 31, 0x1BE270u);
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE270u; }
        if (ctx->pc != 0x1BE270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE270u; }
        if (ctx->pc != 0x1BE270u) { return; }
    }
    ctx->pc = 0x1BE270u;
    // 0x1be270: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE270u;
    {
        const bool branch_taken_0x1be270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE270u;
            // 0x1be274: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be270) {
            ctx->pc = 0x1BE2FCu;
            goto label_1be2fc;
        }
    }
    ctx->pc = 0x1BE278u;
    // 0x1be278: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be27c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be280: 0x24a55ac0  addiu       $a1, $a1, 0x5AC0
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23232));
    // 0x1be284: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1be284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be288: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BE288u;
    SET_GPR_U32(ctx, 31, 0x1BE290u);
    ctx->pc = 0x1BE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE288u;
            // 0x1be28c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE290u; }
        if (ctx->pc != 0x1BE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE290u; }
        if (ctx->pc != 0x1BE290u) { return; }
    }
    ctx->pc = 0x1BE290u;
    // 0x1be290: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1be290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1be294: 0xc061a06  jal         func_186818
    ctx->pc = 0x1BE294u;
    SET_GPR_U32(ctx, 31, 0x1BE29Cu);
    ctx->pc = 0x1BE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE294u;
            // 0x1be298: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE29Cu; }
        if (ctx->pc != 0x1BE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE29Cu; }
        if (ctx->pc != 0x1BE29Cu) { return; }
    }
    ctx->pc = 0x1BE29Cu;
    // 0x1be29c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2a0: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BE2A0u;
    {
        const bool branch_taken_0x1be2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2A0u;
            // 0x1be2a4: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2a0) {
            ctx->pc = 0x1BE304u;
            goto label_1be304;
        }
    }
    ctx->pc = 0x1BE2A8u;
    // 0x1be2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1be2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2b0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BE2B0u;
    SET_GPR_U32(ctx, 31, 0x1BE2B8u);
    ctx->pc = 0x1BE2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2B0u;
            // 0x1be2b4: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2B8u; }
        if (ctx->pc != 0x1BE2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2B8u; }
        if (ctx->pc != 0x1BE2B8u) { return; }
    }
    ctx->pc = 0x1BE2B8u;
    // 0x1be2b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1be2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1be2bc: 0xc061a06  jal         func_186818
    ctx->pc = 0x1BE2BCu;
    SET_GPR_U32(ctx, 31, 0x1BE2C4u);
    ctx->pc = 0x1BE2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2BCu;
            // 0x1be2c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C4u; }
        if (ctx->pc != 0x1BE2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C4u; }
        if (ctx->pc != 0x1BE2C4u) { return; }
    }
    ctx->pc = 0x1BE2C4u;
    // 0x1be2c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be2c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2c8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE2C8u;
    {
        const bool branch_taken_0x1be2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2C8u;
            // 0x1be2cc: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2c8) {
            ctx->pc = 0x1BE304u;
            goto label_1be304;
        }
    }
    ctx->pc = 0x1BE2D0u;
    // 0x1be2d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be2d4: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1be2d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be2dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be2e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be2e4: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE2E4u;
    {
        const bool branch_taken_0x1be2e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be2e4) {
            ctx->pc = 0x1BE2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2E4u;
            // 0x1be2e8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE304u;
            goto label_1be304;
        }
    }
    ctx->pc = 0x1BE2ECu;
    // 0x1be2ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE2ECu;
    {
        const bool branch_taken_0x1be2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2ECu;
            // 0x1be2f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2ec) {
            ctx->pc = 0x1BE308u;
            goto label_1be308;
        }
    }
    ctx->pc = 0x1BE2F4u;
    // 0x1be2f4: 0x0  nop
    ctx->pc = 0x1be2f4u;
    // NOP
label_1be2f8:
    // 0x1be2f8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1be2fc:
    // 0x1be2fc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1BE2FCu;
    {
        const bool branch_taken_0x1be2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2FCu;
            // 0x1be300: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2fc) {
            ctx->pc = 0x1BE240u;
            runtime->cooperativeGuestYield();
            goto label_1be240;
        }
    }
    ctx->pc = 0x1BE304u;
label_1be304:
    // 0x1be304: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1be308:
    // 0x1be308: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1be30c: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1BE30Cu;
    {
        const bool branch_taken_0x1be30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be30c) {
            ctx->pc = 0x1BE310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE30Cu;
            // 0x1be310: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE218u;
            runtime->cooperativeGuestYield();
            goto label_1be218;
        }
    }
    ctx->pc = 0x1BE314u;
    // 0x1be314: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1be314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be318: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1be318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be31c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1be31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be320: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1be320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be324: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1be324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1be328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be32c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1be32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be330: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE330u;
            // 0x1be334: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE218u: goto label_1be218;
            case 0x1BE240u: goto label_1be240;
            case 0x1BE2F8u: goto label_1be2f8;
            case 0x1BE2FCu: goto label_1be2fc;
            case 0x1BE304u: goto label_1be304;
            case 0x1BE308u: goto label_1be308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE338u;
}

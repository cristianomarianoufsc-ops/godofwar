#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD230
// Address: 0x1dd230 - 0x1dd3b0
void sub_001DD230_0x1dd230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD230_0x1dd230");
#endif

    ctx->pc = 0x1dd230u;

    // 0x1dd230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1dd234: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dd234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd238: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1dd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1dd23c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1dd23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1dd240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd244: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1dd244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1dd248: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dd248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd24c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1dd24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1dd250: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1dd250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1dd254: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1dd254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd258: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1dd258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1dd25c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd25cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd260: 0x0  nop
    ctx->pc = 0x1dd260u;
    // NOP
    // 0x1dd264: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1DD264u;
    {
        const bool branch_taken_0x1dd264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD264u;
            // 0x1dd268: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd264) {
            ctx->pc = 0x1DD394u;
            goto label_1dd394;
        }
    }
    ctx->pc = 0x1DD26Cu;
    // 0x1dd26c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd270: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dd270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd274: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1dd278: 0x240303f1  addiu       $v1, $zero, 0x3F1
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    // 0x1dd27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd280: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dd280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd284: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x1dd284u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dd288: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1dd288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1dd28c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1dd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1dd290: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1dd290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1dd294: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1DD294u;
    SET_GPR_U32(ctx, 31, 0x1DD29Cu);
    ctx->pc = 0x1DD298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD294u;
            // 0x1dd298: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD29Cu; }
        if (ctx->pc != 0x1DD29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD29Cu; }
        if (ctx->pc != 0x1DD29Cu) { return; }
    }
    ctx->pc = 0x1DD29Cu;
    // 0x1dd29c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD29Cu;
    {
        const bool branch_taken_0x1dd29c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD29Cu;
            // 0x1dd2a0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd29c) {
            ctx->pc = 0x1DD2B0u;
            goto label_1dd2b0;
        }
    }
    ctx->pc = 0x1DD2A4u;
    // 0x1dd2a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD2A4u;
    {
        const bool branch_taken_0x1dd2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2A4u;
            // 0x1dd2a8: 0x8450002a  lh          $s0, 0x2A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2a4) {
            ctx->pc = 0x1DD2B4u;
            goto label_1dd2b4;
        }
    }
    ctx->pc = 0x1DD2ACu;
    // 0x1dd2ac: 0x0  nop
    ctx->pc = 0x1dd2acu;
    // NOP
label_1dd2b0:
    // 0x1dd2b0: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x1dd2b0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1dd2b4:
    // 0x1dd2b4: 0x600002b  bltz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DD2B4u;
    {
        const bool branch_taken_0x1dd2b4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1dd2b4) {
            ctx->pc = 0x1DD364u;
            goto label_1dd364;
        }
    }
    ctx->pc = 0x1DD2BCu;
    // 0x1dd2bc: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dd2c0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1dd2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1dd2c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD2C4u;
    {
        const bool branch_taken_0x1dd2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2C4u;
            // 0x1dd2c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2c4) {
            ctx->pc = 0x1DD2FCu;
            goto label_1dd2fc;
        }
    }
    ctx->pc = 0x1DD2CCu;
    // 0x1dd2cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1dd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dd2d0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1dd2d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1dd2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dd2d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dd2dc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1dd2e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dd2e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd2e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd2ec: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DD2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2ECu;
            // 0x1dd2f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2F4u;
    // 0x1dd2f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD2F4u;
    {
        const bool branch_taken_0x1dd2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2F4u;
            // 0x1dd2f8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2f4) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2FCu;
label_1dd2fc:
    // 0x1dd2fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dd2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd300:
    // 0x1dd300: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD300u;
    {
        const bool branch_taken_0x1dd300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd300) {
            ctx->pc = 0x1DD324u;
            goto label_1dd324;
        }
    }
    ctx->pc = 0x1DD308u;
    // 0x1dd308: 0xc06a1f6  jal         func_1A87D8
    ctx->pc = 0x1DD308u;
    SET_GPR_U32(ctx, 31, 0x1DD310u);
    ctx->pc = 0x1DD30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD308u;
            // 0x1dd30c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A87D8u;
    if (runtime->hasFunction(0x1A87D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A87D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD310u; }
        if (ctx->pc != 0x1DD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A87D8_0x1a87d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD310u; }
        if (ctx->pc != 0x1DD310u) { return; }
    }
    ctx->pc = 0x1DD310u;
    // 0x1dd310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD310u;
    {
        const bool branch_taken_0x1dd310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd310) {
            ctx->pc = 0x1DD324u;
            goto label_1dd324;
        }
    }
    ctx->pc = 0x1DD318u;
    // 0x1dd318: 0xc06a258  jal         func_1A8960
    ctx->pc = 0x1DD318u;
    SET_GPR_U32(ctx, 31, 0x1DD320u);
    ctx->pc = 0x1DD31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD318u;
            // 0x1dd31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8960u;
    if (runtime->hasFunction(0x1A8960u)) {
        auto targetFn = runtime->lookupFunction(0x1A8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD320u; }
        if (ctx->pc != 0x1DD320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8960_0x1a8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD320u; }
        if (ctx->pc != 0x1DD320u) { return; }
    }
    ctx->pc = 0x1DD320u;
    // 0x1dd320: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd324:
    // 0x1dd324: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD324u;
    {
        const bool branch_taken_0x1dd324 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD324u;
            // 0x1dd328: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd324) {
            ctx->pc = 0x1DD364u;
            goto label_1dd364;
        }
    }
    ctx->pc = 0x1DD32Cu;
    // 0x1dd32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd330: 0x8c441198  lw          $a0, 0x1198($v0)
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4504)));
    // 0x1dd334: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1DD334u;
    SET_GPR_U32(ctx, 31, 0x1DD33Cu);
    ctx->pc = 0x1DD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD334u;
            // 0x1dd338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD33Cu; }
        if (ctx->pc != 0x1DD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD33Cu; }
        if (ctx->pc != 0x1DD33Cu) { return; }
    }
    ctx->pc = 0x1DD33Cu;
    // 0x1dd33c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dd33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd344: 0xc04c612  jal         func_131848
    ctx->pc = 0x1DD344u;
    SET_GPR_U32(ctx, 31, 0x1DD34Cu);
    ctx->pc = 0x1DD348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD344u;
            // 0x1dd348: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131848u;
    if (runtime->hasFunction(0x131848u)) {
        auto targetFn = runtime->lookupFunction(0x131848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD34Cu; }
        if (ctx->pc != 0x1DD34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131848_0x131848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD34Cu; }
        if (ctx->pc != 0x1DD34Cu) { return; }
    }
    ctx->pc = 0x1DD34Cu;
    // 0x1dd34c: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x1dd34cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd354: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dd354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd35c: 0xc089344  jal         func_224D10
    ctx->pc = 0x1DD35Cu;
    SET_GPR_U32(ctx, 31, 0x1DD364u);
    ctx->pc = 0x1DD360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD35Cu;
            // 0x1dd360: 0x70063ca9  por         $a3, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224D10u;
    if (runtime->hasFunction(0x224D10u)) {
        auto targetFn = runtime->lookupFunction(0x224D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD364u; }
        if (ctx->pc != 0x1DD364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224D10_0x224d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD364u; }
        if (ctx->pc != 0x1DD364u) { return; }
    }
    ctx->pc = 0x1DD364u;
label_1dd364:
    // 0x1dd364: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD364u;
    {
        const bool branch_taken_0x1dd364 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD364u;
            // 0x1dd368: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd364) {
            ctx->pc = 0x1DD374u;
            goto label_1dd374;
        }
    }
    ctx->pc = 0x1DD36Cu;
    // 0x1dd36c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD36Cu;
    {
        const bool branch_taken_0x1dd36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD36Cu;
            // 0x1dd370: 0x8445002e  lh          $a1, 0x2E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd36c) {
            ctx->pc = 0x1DD378u;
            goto label_1dd378;
        }
    }
    ctx->pc = 0x1DD374u;
label_1dd374:
    // 0x1dd374: 0x8445002c  lh          $a1, 0x2C($v0)
    ctx->pc = 0x1dd374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1dd378:
    // 0x1dd378: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD378u;
    {
        const bool branch_taken_0x1dd378 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD378u;
            // 0x1dd37c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd378) {
            ctx->pc = 0x1DD394u;
            goto label_1dd394;
        }
    }
    ctx->pc = 0x1DD380u;
    // 0x1dd380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd384: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1DD384u;
    SET_GPR_U32(ctx, 31, 0x1DD38Cu);
    ctx->pc = 0x1DD388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD384u;
            // 0x1dd388: 0x8c44cd64  lw          $a0, -0x329C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD38Cu; }
        if (ctx->pc != 0x1DD38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD38Cu; }
        if (ctx->pc != 0x1DD38Cu) { return; }
    }
    ctx->pc = 0x1DD38Cu;
    // 0x1dd38c: 0xc07507e  jal         func_1D41F8
    ctx->pc = 0x1DD38Cu;
    SET_GPR_U32(ctx, 31, 0x1DD394u);
    ctx->pc = 0x1DD390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD38Cu;
            // 0x1dd390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F8u;
    if (runtime->hasFunction(0x1D41F8u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD394u; }
        if (ctx->pc != 0x1DD394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F8_0x1d41f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD394u; }
        if (ctx->pc != 0x1DD394u) { return; }
    }
    ctx->pc = 0x1DD394u;
label_1dd394:
    // 0x1dd394: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1dd394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dd398: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1dd398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dd39c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1dd39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dd3a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1dd3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dd3a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3A8u;
            // 0x1dd3ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD2B0u: goto label_1dd2b0;
            case 0x1DD2B4u: goto label_1dd2b4;
            case 0x1DD2FCu: goto label_1dd2fc;
            case 0x1DD300u: goto label_1dd300;
            case 0x1DD324u: goto label_1dd324;
            case 0x1DD364u: goto label_1dd364;
            case 0x1DD374u: goto label_1dd374;
            case 0x1DD378u: goto label_1dd378;
            case 0x1DD394u: goto label_1dd394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD3B0u;
}

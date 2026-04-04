#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202F48
// Address: 0x202f48 - 0x2038b0
void sub_00202F48_0x202f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202F48_0x202f48");
#endif

    ctx->pc = 0x202f48u;

    // 0x202f48: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x202f4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x202f50: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x202f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x202f54: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x202f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202f58: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x202f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x202f5c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x202f5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x202f60: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x202f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x202f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f68: 0x8c435e80  lw          $v1, 0x5E80($v0)
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24192)));
    // 0x202f6c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x202f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f70: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x202f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x202f74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x202f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f78: 0xafaa00bc  sw          $t2, 0xBC($sp)
    ctx->pc = 0x202f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 10));
    // 0x202f7c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x202f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x202f80: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x202f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x202f84: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x202f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x202f88: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x202f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x202f8c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x202f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x202f90: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x202f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x202f94: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x202f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x202f98: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x202f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x202f9c: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x202f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x202fa0: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x202fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
    // 0x202fa4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x202fa8: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x202fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x202facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202fb0: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x202fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x202fb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202FB4u;
    {
        const bool branch_taken_0x202fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FB4u;
            // 0x202fb8: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb4) {
            ctx->pc = 0x202FC0u;
            goto label_202fc0;
        }
    }
    ctx->pc = 0x202FBCu;
    // 0x202fbc: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x202fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_202fc0:
    // 0x202fc0: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
    // 0x202fc4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x202fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x202fc8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202FC8u;
    {
        const bool branch_taken_0x202fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202fc8) {
            ctx->pc = 0x202FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202FC8u;
            // 0x202fcc: 0x8ef70018  lw          $s7, 0x18($s7) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202FD0u;
            goto label_202fd0;
        }
    }
    ctx->pc = 0x202FD0u;
label_202fd0:
    // 0x202fd0: 0x56370003  bnel        $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FD0u;
    {
        const bool branch_taken_0x202fd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x202fd0) {
            ctx->pc = 0x202FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202FD0u;
            // 0x202fd4: 0x8e2300f4  lw          $v1, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202FE0u;
            goto label_202fe0;
        }
    }
    ctx->pc = 0x202FD8u;
    // 0x202fd8: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x202FD8u;
    {
        const bool branch_taken_0x202fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FD8u;
            // 0x202fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fd8) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x202FE0u;
label_202fe0:
    // 0x202fe0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x202fe4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x202fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x202fe8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FE8u;
            // 0x202fec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x20313Cu;
            goto label_20313c;
        }
    }
    ctx->pc = 0x202FF0u;
    // 0x202ff0: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
    // 0x202ff4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x202ff8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x202FF8u;
    {
        const bool branch_taken_0x202ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FF8u;
            // 0x202ffc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ff8) {
            ctx->pc = 0x20313Cu;
            goto label_20313c;
        }
    }
    ctx->pc = 0x203000u;
    // 0x203000: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x203004: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x203004u;
    {
        const bool branch_taken_0x203004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203004u;
            // 0x203008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203004) {
            ctx->pc = 0x203054u;
            goto label_203054;
        }
    }
    ctx->pc = 0x20300Cu;
    // 0x20300c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x203010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203014: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x203014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x203018: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x203018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20301c: 0x5044000e  beql        $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x20301Cu;
    {
        const bool branch_taken_0x20301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x20301c) {
            ctx->pc = 0x203020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20301Cu;
            // 0x203020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203058u;
            goto label_203058;
        }
    }
    ctx->pc = 0x203024u;
    // 0x203024: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x203024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_203028:
    // 0x203028: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x203028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20302c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x20302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x203030: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x203030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x203034: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x203034u;
    {
        const bool branch_taken_0x203034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203034) {
            ctx->pc = 0x203038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203034u;
            // 0x203038: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203058u;
            goto label_203058;
        }
    }
    ctx->pc = 0x20303Cu;
    // 0x20303c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203040: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203044: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x203044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x203048: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20304c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20304Cu;
    {
        const bool branch_taken_0x20304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x203050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20304Cu;
            // 0x203050: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20304c) {
            ctx->pc = 0x203028u;
            runtime->cooperativeGuestYield();
            goto label_203028;
        }
    }
    ctx->pc = 0x203054u;
label_203054:
    // 0x203054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203058:
    // 0x203058: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x203058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x20305c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x20305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x203060: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203060u;
    {
        const bool branch_taken_0x203060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203060u;
            // 0x203064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203060) {
            ctx->pc = 0x203094u;
            goto label_203094;
        }
    }
    ctx->pc = 0x203068u;
    // 0x203068: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20306c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x203070: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x203070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203074: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203078: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x20307c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x203080: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x203080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203088: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x203088u;
    {
        const bool branch_taken_0x203088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x203088) {
            ctx->pc = 0x203094u;
            goto label_203094;
        }
    }
    ctx->pc = 0x203090u;
    // 0x203090: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x203090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_203094:
    // 0x203094: 0x108001fa  beqz        $a0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x203094u;
    {
        const bool branch_taken_0x203094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203094u;
            // 0x203098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203094) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x20309Cu;
    // 0x20309c: 0x8ee500fc  lw          $a1, 0xFC($s7)
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x2030a0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2030A0u;
    {
        const bool branch_taken_0x2030a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2030A0u;
            // 0x2030a4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a0) {
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x2030A8u;
    // 0x2030a8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2030a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2030ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2030acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2030b0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2030b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2030b4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2030b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2030b8: 0x5045000e  beql        $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2030B8u;
    {
        const bool branch_taken_0x2030b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2030b8) {
            ctx->pc = 0x2030BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2030B8u;
            // 0x2030bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2030F4u;
            goto label_2030f4;
        }
    }
    ctx->pc = 0x2030C0u;
    // 0x2030c0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2030c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2030c4: 0x0  nop
    ctx->pc = 0x2030c4u;
    // NOP
label_2030c8:
    // 0x2030c8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2030c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2030cc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2030ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2030d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2030D0u;
    {
        const bool branch_taken_0x2030d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2030d0) {
            ctx->pc = 0x2030D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2030D0u;
            // 0x2030d4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2030F4u;
            goto label_2030f4;
        }
    }
    ctx->pc = 0x2030D8u;
    // 0x2030d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2030d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2030dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2030dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2030e0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2030e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2030e4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2030e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2030e8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2030E8u;
    {
        const bool branch_taken_0x2030e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2030ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2030E8u;
            // 0x2030ec: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030e8) {
            ctx->pc = 0x2030C8u;
            runtime->cooperativeGuestYield();
            goto label_2030c8;
        }
    }
    ctx->pc = 0x2030F0u;
label_2030f0:
    // 0x2030f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2030f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2030f4:
    // 0x2030f4: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2030f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2030f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2030F8u;
    {
        const bool branch_taken_0x2030f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2030FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2030F8u;
            // 0x2030fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030f8) {
            ctx->pc = 0x20312Cu;
            goto label_20312c;
        }
    }
    ctx->pc = 0x203100u;
    // 0x203100: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203104: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x203108: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x203108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20310c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203110: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x203114: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x203114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x203118: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x203118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20311c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203120: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x203120u;
    {
        const bool branch_taken_0x203120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x203120) {
            ctx->pc = 0x20312Cu;
            goto label_20312c;
        }
    }
    ctx->pc = 0x203128u;
    // 0x203128: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x203128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20312c:
    // 0x20312c: 0xc077646  jal         func_1DD918
    ctx->pc = 0x20312Cu;
    SET_GPR_U32(ctx, 31, 0x203134u);
    ctx->pc = 0x203130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20312Cu;
            // 0x203130: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD918u;
    if (runtime->hasFunction(0x1DD918u)) {
        auto targetFn = runtime->lookupFunction(0x1DD918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203134u; }
        if (ctx->pc != 0x203134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD918_0x1dd918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203134u; }
        if (ctx->pc != 0x203134u) { return; }
    }
    ctx->pc = 0x203134u;
    // 0x203134: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x203134u;
    {
        const bool branch_taken_0x203134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203134u;
            // 0x203138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203134) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x20313Cu;
label_20313c:
    // 0x20313c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x203140: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x203140u;
    {
        const bool branch_taken_0x203140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203140u;
            // 0x203144: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203140) {
            ctx->pc = 0x20328Cu;
            goto label_20328c;
        }
    }
    ctx->pc = 0x203148u;
    // 0x203148: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
    // 0x20314c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x203150: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x203150u;
    {
        const bool branch_taken_0x203150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203150u;
            // 0x203154: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203150) {
            ctx->pc = 0x20328Cu;
            goto label_20328c;
        }
    }
    ctx->pc = 0x203158u;
    // 0x203158: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x20315c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20315Cu;
    {
        const bool branch_taken_0x20315c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20315Cu;
            // 0x203160: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20315c) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203164u;
    // 0x203164: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x203164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x203168: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20316c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x20316cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x203170: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x203174: 0x5044000d  beql        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x203174u;
    {
        const bool branch_taken_0x203174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x203174) {
            ctx->pc = 0x203178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203174u;
            // 0x203178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x20317Cu;
    // 0x20317c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x20317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_203180:
    // 0x203180: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x203180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203184: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x203184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x203188: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x203188u;
    {
        const bool branch_taken_0x203188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203188) {
            ctx->pc = 0x20318Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203188u;
            // 0x20318c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203190u;
    // 0x203190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203194: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203198: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x203198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x20319c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2031a0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2031A0u;
    {
        const bool branch_taken_0x2031a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2031A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031A0u;
            // 0x2031a4: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031a0) {
            ctx->pc = 0x203180u;
            runtime->cooperativeGuestYield();
            goto label_203180;
        }
    }
    ctx->pc = 0x2031A8u;
label_2031a8:
    // 0x2031a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2031a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2031ac:
    // 0x2031ac: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2031acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2031b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2031B0u;
    {
        const bool branch_taken_0x2031b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2031B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031B0u;
            // 0x2031b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031b0) {
            ctx->pc = 0x2031E4u;
            goto label_2031e4;
        }
    }
    ctx->pc = 0x2031B8u;
    // 0x2031b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2031bc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2031c0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2031c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2031c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2031c8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2031cc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2031d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2031d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2031d8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2031D8u;
    {
        const bool branch_taken_0x2031d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2031d8) {
            ctx->pc = 0x2031E4u;
            goto label_2031e4;
        }
    }
    ctx->pc = 0x2031E0u;
    // 0x2031e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2031e4:
    // 0x2031e4: 0x108001a6  beqz        $a0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2031E4u;
    {
        const bool branch_taken_0x2031e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031E4u;
            // 0x2031e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e4) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x2031ECu;
    // 0x2031ec: 0x8ee500fc  lw          $a1, 0xFC($s7)
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x2031f0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2031F0u;
    {
        const bool branch_taken_0x2031f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031F0u;
            // 0x2031f4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031f0) {
            ctx->pc = 0x203240u;
            goto label_203240;
        }
    }
    ctx->pc = 0x2031F8u;
    // 0x2031f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2031f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2031fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2031fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203200: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x203200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x203204: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x203208: 0x5045000e  beql        $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x203208) {
            ctx->pc = 0x20320Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203208u;
            // 0x20320c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203244u;
            goto label_203244;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x203214: 0x0  nop
    ctx->pc = 0x203214u;
    // NOP
label_203218:
    // 0x203218: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x203218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20321c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x20321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x203220: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x203220u;
    {
        const bool branch_taken_0x203220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203220) {
            ctx->pc = 0x203224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203220u;
            // 0x203224: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203244u;
            goto label_203244;
        }
    }
    ctx->pc = 0x203228u;
    // 0x203228: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20322c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x20322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203230: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x203230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x203234: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x203234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x203238: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203238u;
    {
        const bool branch_taken_0x203238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203238u;
            // 0x20323c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203238) {
            ctx->pc = 0x203218u;
            runtime->cooperativeGuestYield();
            goto label_203218;
        }
    }
    ctx->pc = 0x203240u;
label_203240:
    // 0x203240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203244:
    // 0x203244: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x203244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x203248: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203248u;
    {
        const bool branch_taken_0x203248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203248u;
            // 0x20324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203248) {
            ctx->pc = 0x20327Cu;
            goto label_20327c;
        }
    }
    ctx->pc = 0x203250u;
    // 0x203250: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x203250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203254: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x203254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x203258: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x203258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20325c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203260: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x203264: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x203268: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x203268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20326c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203270: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x203270u;
    {
        const bool branch_taken_0x203270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x203270) {
            ctx->pc = 0x20327Cu;
            goto label_20327c;
        }
    }
    ctx->pc = 0x203278u;
    // 0x203278: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20327c:
    // 0x20327c: 0xc085394  jal         func_214E50
    ctx->pc = 0x20327Cu;
    SET_GPR_U32(ctx, 31, 0x203284u);
    ctx->pc = 0x203280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20327Cu;
            // 0x203280: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214E50u;
    if (runtime->hasFunction(0x214E50u)) {
        auto targetFn = runtime->lookupFunction(0x214E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203284u; }
        if (ctx->pc != 0x203284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214E50_0x214e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203284u; }
        if (ctx->pc != 0x203284u) { return; }
    }
    ctx->pc = 0x203284u;
    // 0x203284: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x203284u;
    {
        const bool branch_taken_0x203284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203284u;
            // 0x203288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203284) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x20328Cu;
label_20328c:
    // 0x20328c: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x20328Cu;
    {
        const bool branch_taken_0x20328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20328Cu;
            // 0x203290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20328c) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x203294u;
    // 0x203294: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
    // 0x203298: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x203298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20329c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20329Cu;
    {
        const bool branch_taken_0x20329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20329c) {
            ctx->pc = 0x2032A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20329Cu;
            // 0x2032a0: 0x8e2300fc  lw          $v1, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2032ACu;
            goto label_2032ac;
        }
    }
    ctx->pc = 0x2032A4u;
    // 0x2032a4: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x2032A4u;
    {
        const bool branch_taken_0x2032a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032A4u;
            // 0x2032a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032a4) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x2032ACu;
label_2032ac:
    // 0x2032ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2032ACu;
    {
        const bool branch_taken_0x2032ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032ACu;
            // 0x2032b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032ac) {
            ctx->pc = 0x2032E8u;
            goto label_2032e8;
        }
    }
    ctx->pc = 0x2032B4u;
    // 0x2032b4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x2032b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x2032b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2032B8u;
    {
        const bool branch_taken_0x2032b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032B8u;
            // 0x2032bc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b8) {
            ctx->pc = 0x2032D8u;
            goto label_2032d8;
        }
    }
    ctx->pc = 0x2032C0u;
label_2032c0:
    // 0x2032c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2032c4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2032c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2032c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2032C8u;
    {
        const bool branch_taken_0x2032c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032c8) {
            ctx->pc = 0x2032CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2032C8u;
            // 0x2032cc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2032ECu;
            goto label_2032ec;
        }
    }
    ctx->pc = 0x2032D0u;
    // 0x2032d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2032d4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2032d8:
    // 0x2032d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2032d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2032dc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2032e0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2032E0u;
    {
        const bool branch_taken_0x2032e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2032E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032E0u;
            // 0x2032e4: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032e0) {
            ctx->pc = 0x2032C0u;
            runtime->cooperativeGuestYield();
            goto label_2032c0;
        }
    }
    ctx->pc = 0x2032E8u;
label_2032e8:
    // 0x2032e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2032e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2032ec:
    // 0x2032ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2032ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032f0: 0x33c20007  andi        $v0, $fp, 0x7
    ctx->pc = 0x2032f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)7);
    // 0x2032f4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2032F4u;
    {
        const bool branch_taken_0x2032f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032F4u;
            // 0x2032f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f4) {
            ctx->pc = 0x20332Cu;
            goto label_20332c;
        }
    }
    ctx->pc = 0x2032FCu;
    // 0x2032fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2032fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203300: 0x1e1dc2  srl         $v1, $fp, 23
    ctx->pc = 0x203300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 23));
    // 0x203304: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x203304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20330c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x203310: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x203310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x203314: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x203314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20331c: 0x145e0002  bne         $v0, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x20331Cu;
    {
        const bool branch_taken_0x20331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x203320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20331Cu;
            // 0x203320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20331c) {
            ctx->pc = 0x203328u;
            goto label_203328;
        }
    }
    ctx->pc = 0x203324u;
    // 0x203324: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_203328:
    // 0x203328: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20332c:
    // 0x20332c: 0x8ee300fc  lw          $v1, 0xFC($s7)
    ctx->pc = 0x20332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x203330: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x203330u;
    {
        const bool branch_taken_0x203330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203330u;
            // 0x203334: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203330) {
            ctx->pc = 0x203370u;
            goto label_203370;
        }
    }
    ctx->pc = 0x203338u;
    // 0x203338: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x203338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x20333c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20333Cu;
    {
        const bool branch_taken_0x20333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20333Cu;
            // 0x203340: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20333c) {
            ctx->pc = 0x203360u;
            goto label_203360;
        }
    }
    ctx->pc = 0x203344u;
    // 0x203344: 0x0  nop
    ctx->pc = 0x203344u;
    // NOP
label_203348:
    // 0x203348: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x203348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20334c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x20334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x203350: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x203350u;
    {
        const bool branch_taken_0x203350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203350) {
            ctx->pc = 0x203354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203350u;
            // 0x203354: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203374u;
            goto label_203374;
        }
    }
    ctx->pc = 0x203358u;
    // 0x203358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20335c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_203360:
    // 0x203360: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x203360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x203364: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x203364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x203368: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203368u;
    {
        const bool branch_taken_0x203368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203368u;
            // 0x20336c: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203368) {
            ctx->pc = 0x203348u;
            runtime->cooperativeGuestYield();
            goto label_203348;
        }
    }
    ctx->pc = 0x203370u;
label_203370:
    // 0x203370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203374:
    // 0x203374: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x203374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x203378: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x203378u;
    {
        const bool branch_taken_0x203378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203378u;
            // 0x20337c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203378) {
            ctx->pc = 0x2033B0u;
            goto label_2033b0;
        }
    }
    ctx->pc = 0x203380u;
    // 0x203380: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203384: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x203388: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x203388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20338c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203390: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x203394: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x203398: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x203398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20339c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2033a0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033A0u;
            // 0x2033a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x2033ACu;
            goto label_2033ac;
        }
    }
    ctx->pc = 0x2033A8u;
    // 0x2033a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2033ac:
    // 0x2033ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2033b0:
    // 0x2033b0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2033b4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2033b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2033b8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2033b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2033bc: 0x40f809  jalr        $v0
    ctx->pc = 0x2033BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2033C4u);
        ctx->pc = 0x2033C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033BCu;
            // 0x2033c0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2033C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2033C4u; }
            if (ctx->pc != 0x2033C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2033C4u;
    // 0x2033c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2033c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033c8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2033c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2033cc: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x2033CCu;
    {
        const bool branch_taken_0x2033cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033CCu;
            // 0x2033d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033cc) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x2033D4u;
    // 0x2033d4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2033d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2033d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2033dc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2033e0: 0x40f809  jalr        $v0
    ctx->pc = 0x2033E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2033E8u);
        ctx->pc = 0x2033E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033E0u;
            // 0x2033e4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2033E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2033E8u; }
            if (ctx->pc != 0x2033E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2033E8u;
    // 0x2033e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2033e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033ec: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2033f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2033F0u;
    {
        const bool branch_taken_0x2033f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033F0u;
            // 0x2033f4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033f0) {
            ctx->pc = 0x203418u;
            goto label_203418;
        }
    }
    ctx->pc = 0x2033F8u;
    // 0x2033f8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x2033f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2033fc: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x203400: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203400u;
    {
        const bool branch_taken_0x203400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203400u;
            // 0x203404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203400) {
            ctx->pc = 0x20341Cu;
            goto label_20341c;
        }
    }
    ctx->pc = 0x203408u;
    // 0x203408: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x203408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    // 0x20340c: 0xc081522  jal         func_205488
    ctx->pc = 0x20340Cu;
    SET_GPR_U32(ctx, 31, 0x203414u);
    ctx->pc = 0x203410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20340Cu;
            // 0x203410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203414u; }
        if (ctx->pc != 0x203414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203414u; }
        if (ctx->pc != 0x203414u) { return; }
    }
    ctx->pc = 0x203414u;
    // 0x203414: 0x0  nop
    ctx->pc = 0x203414u;
    // NOP
label_203418:
    // 0x203418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x203418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20341c:
    // 0x20341c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203420: 0xc090d5c  jal         func_243570
    ctx->pc = 0x203420u;
    SET_GPR_U32(ctx, 31, 0x203428u);
    ctx->pc = 0x203424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203420u;
            // 0x203424: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203428u; }
        if (ctx->pc != 0x203428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203428u; }
        if (ctx->pc != 0x203428u) { return; }
    }
    ctx->pc = 0x203428u;
    // 0x203428: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203428u;
    {
        const bool branch_taken_0x203428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203428) {
            ctx->pc = 0x20342Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203428u;
            // 0x20342c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203430u;
    // 0x203430: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x203430u;
    SET_GPR_U32(ctx, 31, 0x203438u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203438u; }
        if (ctx->pc != 0x203438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203438u; }
        if (ctx->pc != 0x203438u) { return; }
    }
    ctx->pc = 0x203438u;
    // 0x203438: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x203438u;
    {
        const bool branch_taken_0x203438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203438) {
            ctx->pc = 0x20343Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203438u;
            // 0x20343c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203440u;
label_203440:
    // 0x203440: 0x1600010f  bnez        $s0, . + 4 + (0x10F << 2)
    ctx->pc = 0x203440u;
    {
        const bool branch_taken_0x203440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x203444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203440u;
            // 0x203444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203440) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x203448u;
    // 0x203448: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x203448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20344c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203450: 0xc0823c4  jal         func_208F10
    ctx->pc = 0x203450u;
    SET_GPR_U32(ctx, 31, 0x203458u);
    ctx->pc = 0x203454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203450u;
            // 0x203454: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208F10u;
    if (runtime->hasFunction(0x208F10u)) {
        auto targetFn = runtime->lookupFunction(0x208F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203458u; }
        if (ctx->pc != 0x203458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208f10_0x2090b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203458u; }
        if (ctx->pc != 0x203458u) { return; }
    }
    ctx->pc = 0x203458u;
    // 0x203458: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20345c: 0x12800108  beqz        $s4, . + 4 + (0x108 << 2)
    ctx->pc = 0x20345Cu;
    {
        const bool branch_taken_0x20345c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x203460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20345Cu;
            // 0x203460: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20345c) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x203464u;
    // 0x203464: 0xc0909c4  jal         func_242710
    ctx->pc = 0x203464u;
    SET_GPR_U32(ctx, 31, 0x20346Cu);
    ctx->pc = 0x203468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203464u;
            // 0x203468: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20346Cu; }
        if (ctx->pc != 0x20346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20346Cu; }
        if (ctx->pc != 0x20346Cu) { return; }
    }
    ctx->pc = 0x20346Cu;
    // 0x20346c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x20346cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203470: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x203470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203474: 0xc0909c4  jal         func_242710
    ctx->pc = 0x203474u;
    SET_GPR_U32(ctx, 31, 0x20347Cu);
    ctx->pc = 0x203478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203474u;
            // 0x203478: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20347Cu; }
        if (ctx->pc != 0x20347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20347Cu; }
        if (ctx->pc != 0x20347Cu) { return; }
    }
    ctx->pc = 0x20347Cu;
    // 0x20347c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x20347cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203480: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x203480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203484: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x203484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x203488: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x203488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20348c: 0x9282001a  lbu         $v0, 0x1A($s4)
    ctx->pc = 0x20348cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x203490: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x203490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x203494: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x203494u;
    {
        const bool branch_taken_0x203494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203494u;
            // 0x203498: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203494) {
            ctx->pc = 0x203500u;
            goto label_203500;
        }
    }
    ctx->pc = 0x20349Cu;
    // 0x20349c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x20349Cu;
    SET_GPR_U32(ctx, 31, 0x2034A4u);
    ctx->pc = 0x2034A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20349Cu;
            // 0x2034a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034A4u; }
        if (ctx->pc != 0x2034A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034A4u; }
        if (ctx->pc != 0x2034A4u) { return; }
    }
    ctx->pc = 0x2034A4u;
    // 0x2034a4: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2034a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2034a8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x2034a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2034ac: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2034acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2034b0: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x2034b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2034b4: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2034b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2034b8: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x2034b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2034bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2034bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2034c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2034c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2034c4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2034c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2034c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2034c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2034cc: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x2034ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2034d0: 0x4a0002ff  vnop
    ctx->pc = 0x2034d0u;
    // NOP operation, no action needed for VU0
    // 0x2034d4: 0x4a0002ff  vnop
    ctx->pc = 0x2034d4u;
    // NOP operation, no action needed for VU0
    // 0x2034d8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2034d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2034dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2034dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2034e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2034e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2034e4: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x2034e4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x2034e8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2034e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2034ec: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2034ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2034f0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2034f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2034f4: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x2034f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2034f8: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x2034f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2034fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2034fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_203500:
    // 0x203500: 0x8c425e70  lw          $v0, 0x5E70($v0)
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24176)));
    // 0x203504: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x203508: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20350c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x203510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x203514: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x203514u;
    {
        const bool branch_taken_0x203514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203514u;
            // 0x203518: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203514) {
            ctx->pc = 0x20387Cu;
            goto label_20387c;
        }
    }
    ctx->pc = 0x20351Cu;
    // 0x20351c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203520: 0xc08242c  jal         func_2090B0
    ctx->pc = 0x203520u;
    SET_GPR_U32(ctx, 31, 0x203528u);
    ctx->pc = 0x203524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203520u;
            // 0x203524: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2090B0u;
    if (runtime->hasFunction(0x2090B0u)) {
        auto targetFn = runtime->lookupFunction(0x2090B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203528u; }
        if (ctx->pc != 0x203528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2090b0_0x2090d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203528u; }
        if (ctx->pc != 0x203528u) { return; }
    }
    ctx->pc = 0x203528u;
    // 0x203528: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x20352c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20352Cu;
            // 0x203530: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x203548u;
            goto label_203548;
        }
    }
    ctx->pc = 0x203534u;
    // 0x203534: 0xc090d56  jal         func_243558
    ctx->pc = 0x203534u;
    SET_GPR_U32(ctx, 31, 0x20353Cu);
    ctx->pc = 0x203538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203534u;
            // 0x203538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20353Cu; }
        if (ctx->pc != 0x20353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20353Cu; }
        if (ctx->pc != 0x20353Cu) { return; }
    }
    ctx->pc = 0x20353Cu;
    // 0x20353c: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x203540: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x203540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x203544: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x203544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_203548:
    // 0x203548: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x203548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20354c: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20354Cu;
    {
        const bool branch_taken_0x20354c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x203550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20354Cu;
            // 0x203550: 0x8e7e0054  lw          $fp, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20354c) {
            ctx->pc = 0x2035B0u;
            goto label_2035b0;
        }
    }
    ctx->pc = 0x203554u;
    // 0x203554: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x203554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x203558: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x203558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20355c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20355Cu;
    {
        const bool branch_taken_0x20355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20355c) {
            ctx->pc = 0x2035B0u;
            goto label_2035b0;
        }
    }
    ctx->pc = 0x203564u;
    // 0x203564: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x203564u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x203568: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x203568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20356c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20356Cu;
    {
        const bool branch_taken_0x20356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20356Cu;
            // 0x203570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20356c) {
            ctx->pc = 0x2035B0u;
            goto label_2035b0;
        }
    }
    ctx->pc = 0x203574u;
    // 0x203574: 0x96660058  lhu         $a2, 0x58($s3)
    ctx->pc = 0x203574u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x203578: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x203578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20357c: 0xc0809a8  jal         func_2026A0
    ctx->pc = 0x20357Cu;
    SET_GPR_U32(ctx, 31, 0x203584u);
    ctx->pc = 0x203580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20357Cu;
            // 0x203580: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2026A0u;
    if (runtime->hasFunction(0x2026A0u)) {
        auto targetFn = runtime->lookupFunction(0x2026A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203584u; }
        if (ctx->pc != 0x203584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002026A0_0x2026a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203584u; }
        if (ctx->pc != 0x203584u) { return; }
    }
    ctx->pc = 0x203584u;
    // 0x203584: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203584u;
    {
        const bool branch_taken_0x203584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203584) {
            ctx->pc = 0x2035B0u;
            goto label_2035b0;
        }
    }
    ctx->pc = 0x20358Cu;
    // 0x20358c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x20358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x203590: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203590u;
    {
        const bool branch_taken_0x203590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203590u;
            // 0x203594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203590) {
            ctx->pc = 0x2035ACu;
            goto label_2035ac;
        }
    }
    ctx->pc = 0x203598u;
    // 0x203598: 0xc090d56  jal         func_243558
    ctx->pc = 0x203598u;
    SET_GPR_U32(ctx, 31, 0x2035A0u);
    ctx->pc = 0x20359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203598u;
            // 0x20359c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035A0u; }
        if (ctx->pc != 0x2035A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035A0u; }
        if (ctx->pc != 0x2035A0u) { return; }
    }
    ctx->pc = 0x2035A0u;
    // 0x2035a0: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x2035a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2035a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2035a8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2035ac:
    // 0x2035ac: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2035acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2035b0:
    // 0x2035b0: 0x12000071  beqz        $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2035B0u;
    {
        const bool branch_taken_0x2035b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035B0u;
            // 0x2035b4: 0x7ba500d0  lq          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b0) {
            ctx->pc = 0x203778u;
            goto label_203778;
        }
    }
    ctx->pc = 0x2035B8u;
    // 0x2035b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035bc: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x2035BCu;
    SET_GPR_U32(ctx, 31, 0x2035C4u);
    ctx->pc = 0x2035C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2035BCu;
            // 0x2035c0: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035C4u; }
        if (ctx->pc != 0x2035C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035C4u; }
        if (ctx->pc != 0x2035C4u) { return; }
    }
    ctx->pc = 0x2035C4u;
    // 0x2035c4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2035c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2035c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2035c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2035cc: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2035CCu;
    {
        const bool branch_taken_0x2035cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035CCu;
            // 0x2035d0: 0x8fa200b4  lw          $v0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035cc) {
            ctx->pc = 0x203684u;
            goto label_203684;
        }
    }
    ctx->pc = 0x2035D4u;
    // 0x2035d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2035d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035d8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2035d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2035dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2035dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035e0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2035e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2035e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035e8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2035ec: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2035ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f0: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2035f4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2035f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2035f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2035fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2035fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x203600: 0xc0809c6  jal         func_202718
    ctx->pc = 0x203600u;
    SET_GPR_U32(ctx, 31, 0x203608u);
    ctx->pc = 0x203604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203600u;
            // 0x203604: 0xafb40010  sw          $s4, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202718u;
    if (runtime->hasFunction(0x202718u)) {
        auto targetFn = runtime->lookupFunction(0x202718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203608u; }
        if (ctx->pc != 0x203608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202718_0x202718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203608u; }
        if (ctx->pc != 0x203608u) { return; }
    }
    ctx->pc = 0x203608u;
    // 0x203608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x203608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20360c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x20360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x203610: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x203610u;
    {
        const bool branch_taken_0x203610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203610) {
            ctx->pc = 0x203614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203610u;
            // 0x203614: 0x8ec301b0  lw          $v1, 0x1B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203660u;
            goto label_203660;
        }
    }
    ctx->pc = 0x203618u;
    // 0x203618: 0x8ea301b0  lw          $v1, 0x1B0($s5)
    ctx->pc = 0x203618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x20361c: 0x8e7001b0  lw          $s0, 0x1B0($s3)
    ctx->pc = 0x20361cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x203620: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x203624: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x203624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x203628: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x203628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x20362c: 0x40f809  jalr        $v0
    ctx->pc = 0x20362Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203634u);
        ctx->pc = 0x203630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20362Cu;
            // 0x203630: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203634u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203634u; }
            if (ctx->pc != 0x203634u) { return; }
        }
        }
    }
    ctx->pc = 0x203634u;
    // 0x203634: 0xc6a00178  lwc1        $f0, 0x178($s5)
    ctx->pc = 0x203634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20363c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20363cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x203640: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x203640u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x203644: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x203644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203648: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x203648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20364c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20364cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x203650: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x203650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203654: 0xc080e2c  jal         func_2038B0
    ctx->pc = 0x203654u;
    SET_GPR_U32(ctx, 31, 0x20365Cu);
    ctx->pc = 0x203658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203654u;
            // 0x203658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2038B0u;
    if (runtime->hasFunction(0x2038B0u)) {
        auto targetFn = runtime->lookupFunction(0x2038B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20365Cu; }
        if (ctx->pc != 0x20365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002038B0_0x2038b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20365Cu; }
        if (ctx->pc != 0x20365Cu) { return; }
    }
    ctx->pc = 0x20365Cu;
    // 0x20365c: 0x8ec301b0  lw          $v1, 0x1B0($s6)
    ctx->pc = 0x20365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
label_203660:
    // 0x203660: 0x8e5001b0  lw          $s0, 0x1B0($s2)
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x203664: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x203668: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20366c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203670: 0x40f809  jalr        $v0
    ctx->pc = 0x203670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203678u);
        ctx->pc = 0x203674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203670u;
            // 0x203674: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203678u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203678u; }
            if (ctx->pc != 0x203678u) { return; }
        }
        }
    }
    ctx->pc = 0x203678u;
    // 0x203678: 0xc6c00178  lwc1        $f0, 0x178($s6)
    ctx->pc = 0x203678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20367c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20367Cu;
    {
        const bool branch_taken_0x20367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20367Cu;
            // 0x203680: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20367c) {
            ctx->pc = 0x203724u;
            goto label_203724;
        }
    }
    ctx->pc = 0x203684u;
label_203684:
    // 0x203684: 0x8ea301b0  lw          $v1, 0x1B0($s5)
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x203688: 0x8290001b  lb          $s0, 0x1B($s4)
    ctx->pc = 0x203688u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 27)));
    // 0x20368c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x203690: 0x8e7101b0  lw          $s1, 0x1B0($s3)
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x203694: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x203698: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x203698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x20369c: 0x40f809  jalr        $v0
    ctx->pc = 0x20369Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2036A4u);
        ctx->pc = 0x2036A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20369Cu;
            // 0x2036a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2036A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2036A4u; }
            if (ctx->pc != 0x2036A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2036A4u;
    // 0x2036a4: 0xc6a00178  lwc1        $f0, 0x178($s5)
    ctx->pc = 0x2036a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2036a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2036a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2036ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2036acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2036b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2036b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2036b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036bc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2036bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2036c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2036c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036c4: 0xc082146  jal         func_208518
    ctx->pc = 0x2036C4u;
    SET_GPR_U32(ctx, 31, 0x2036CCu);
    ctx->pc = 0x2036C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036C4u;
            // 0x2036c8: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036CCu; }
        if (ctx->pc != 0x2036CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036CCu; }
        if (ctx->pc != 0x2036CCu) { return; }
    }
    ctx->pc = 0x2036CCu;
    // 0x2036cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2036D0u;
    {
        const bool branch_taken_0x2036d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2036D0u;
            // 0x2036d4: 0x264301c0  addiu       $v1, $s2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036d0) {
            ctx->pc = 0x2036F8u;
            goto label_2036f8;
        }
    }
    ctx->pc = 0x2036D8u;
    // 0x2036d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2036d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2036dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2036dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2036e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2036e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036e4: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x2036e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2036e8: 0xc082218  jal         func_208860
    ctx->pc = 0x2036E8u;
    SET_GPR_U32(ctx, 31, 0x2036F0u);
    ctx->pc = 0x2036ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036E8u;
            // 0x2036ec: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F0u; }
        if (ctx->pc != 0x2036F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F0u; }
        if (ctx->pc != 0x2036F0u) { return; }
    }
    ctx->pc = 0x2036F0u;
    // 0x2036f0: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x2036F0u;
    SET_GPR_U32(ctx, 31, 0x2036F8u);
    ctx->pc = 0x2036F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036F0u;
            // 0x2036f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F8u; }
        if (ctx->pc != 0x2036F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F8u; }
        if (ctx->pc != 0x2036F8u) { return; }
    }
    ctx->pc = 0x2036F8u;
label_2036f8:
    // 0x2036f8: 0xc082440  jal         func_209100
    ctx->pc = 0x2036F8u;
    SET_GPR_U32(ctx, 31, 0x203700u);
    ctx->pc = 0x2036FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036F8u;
            // 0x2036fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209100u;
    if (runtime->hasFunction(0x209100u)) {
        auto targetFn = runtime->lookupFunction(0x209100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203700u; }
        if (ctx->pc != 0x203700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209100_0x209120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203700u; }
        if (ctx->pc != 0x203700u) { return; }
    }
    ctx->pc = 0x203700u;
    // 0x203700: 0x8ec301b0  lw          $v1, 0x1B0($s6)
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
    // 0x203704: 0x8e5001b0  lw          $s0, 0x1B0($s2)
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x203708: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20370c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x203710: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203714: 0x40f809  jalr        $v0
    ctx->pc = 0x203714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20371Cu);
        ctx->pc = 0x203718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203714u;
            // 0x203718: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20371Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20371Cu; }
            if (ctx->pc != 0x20371Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20371Cu;
    // 0x20371c: 0xc6c00178  lwc1        $f0, 0x178($s6)
    ctx->pc = 0x20371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203720: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203724:
    // 0x203724: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x203724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x203728: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x203728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20372c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20372cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203730: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x203730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x203734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203738: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x203738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20373c: 0xc082146  jal         func_208518
    ctx->pc = 0x20373Cu;
    SET_GPR_U32(ctx, 31, 0x203744u);
    ctx->pc = 0x203740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20373Cu;
            // 0x203740: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203744u; }
        if (ctx->pc != 0x203744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203744u; }
        if (ctx->pc != 0x203744u) { return; }
    }
    ctx->pc = 0x203744u;
    // 0x203744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203748: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x203748u;
    {
        const bool branch_taken_0x203748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203748u;
            // 0x20374c: 0x266301c0  addiu       $v1, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203748) {
            ctx->pc = 0x20387Cu;
            goto label_20387c;
        }
    }
    ctx->pc = 0x203750u;
    // 0x203750: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x203750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x203754: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203758: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20375c: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x20375cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x203760: 0xc082218  jal         func_208860
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203760u;
            // 0x203764: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203768u; }
        if (ctx->pc != 0x203768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203768u; }
        if (ctx->pc != 0x203768u) { return; }
    }
    ctx->pc = 0x203768u;
    // 0x203768: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x203768u;
    SET_GPR_U32(ctx, 31, 0x203770u);
    ctx->pc = 0x20376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203768u;
            // 0x20376c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203770u; }
        if (ctx->pc != 0x203770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203770u; }
        if (ctx->pc != 0x203770u) { return; }
    }
    ctx->pc = 0x203770u;
    // 0x203770: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x203770u;
    {
        const bool branch_taken_0x203770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203770u;
            // 0x203774: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203770) {
            ctx->pc = 0x203880u;
            goto label_203880;
        }
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x20377c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203780: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x203780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x203784: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x203784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203788: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x203788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20378c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20378cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203794: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x203794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x203798: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20379c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x20379cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037a0: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x2037a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2037a4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2037a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2037a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2037ac: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x2037acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x2037b0: 0xc0809c6  jal         func_202718
    ctx->pc = 0x2037B0u;
    SET_GPR_U32(ctx, 31, 0x2037B8u);
    ctx->pc = 0x2037B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2037B0u;
            // 0x2037b4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202718u;
    if (runtime->hasFunction(0x202718u)) {
        auto targetFn = runtime->lookupFunction(0x202718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037B8u; }
        if (ctx->pc != 0x2037B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202718_0x202718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037B8u; }
        if (ctx->pc != 0x2037B8u) { return; }
    }
    ctx->pc = 0x2037B8u;
    // 0x2037b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2037b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037bc: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2037bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2037c0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x2037C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2037C0u;
            // 0x2037c4: 0x8ec301b0  lw          $v1, 0x1B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203810u;
            goto label_203810;
        }
    }
    ctx->pc = 0x2037C8u;
    // 0x2037c8: 0x8ea301b0  lw          $v1, 0x1B0($s5)
    ctx->pc = 0x2037c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x2037cc: 0x8e7001b0  lw          $s0, 0x1B0($s3)
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x2037d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2037d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2037d4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2037d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2037d8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2037dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2037DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2037E4u);
        ctx->pc = 0x2037E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2037DCu;
            // 0x2037e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2037E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2037E4u; }
            if (ctx->pc != 0x2037E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2037E4u;
    // 0x2037e4: 0xc6a00178  lwc1        $f0, 0x178($s5)
    ctx->pc = 0x2037e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2037e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2037e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2037ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2037f0: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x2037f0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2037f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2037f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2037f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2037fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x203800: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x203800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203804: 0xc080e2c  jal         func_2038B0
    ctx->pc = 0x203804u;
    SET_GPR_U32(ctx, 31, 0x20380Cu);
    ctx->pc = 0x203808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203804u;
            // 0x203808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2038B0u;
    if (runtime->hasFunction(0x2038B0u)) {
        auto targetFn = runtime->lookupFunction(0x2038B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20380Cu; }
        if (ctx->pc != 0x20380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002038B0_0x2038b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20380Cu; }
        if (ctx->pc != 0x20380Cu) { return; }
    }
    ctx->pc = 0x20380Cu;
    // 0x20380c: 0x8ec301b0  lw          $v1, 0x1B0($s6)
    ctx->pc = 0x20380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
label_203810:
    // 0x203810: 0x8e5001b0  lw          $s0, 0x1B0($s2)
    ctx->pc = 0x203810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x203814: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x203814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x203818: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x203818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20381c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x20381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203820: 0x40f809  jalr        $v0
    ctx->pc = 0x203820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203828u);
        ctx->pc = 0x203824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203820u;
            // 0x203824: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203828u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203828u; }
            if (ctx->pc != 0x203828u) { return; }
        }
        }
    }
    ctx->pc = 0x203828u;
    // 0x203828: 0xc6c00178  lwc1        $f0, 0x178($s6)
    ctx->pc = 0x203828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20382c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x20382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x203830: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x203830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x203834: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x203834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203838: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x203838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20383c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x20383cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x203840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203844: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x203844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203848: 0xc082146  jal         func_208518
    ctx->pc = 0x203848u;
    SET_GPR_U32(ctx, 31, 0x203850u);
    ctx->pc = 0x20384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203848u;
            // 0x20384c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203850u; }
        if (ctx->pc != 0x203850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203850u; }
        if (ctx->pc != 0x203850u) { return; }
    }
    ctx->pc = 0x203850u;
    // 0x203850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203854: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x203854u;
    {
        const bool branch_taken_0x203854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x203858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203854u;
            // 0x203858: 0x266301c0  addiu       $v1, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203854) {
            ctx->pc = 0x20387Cu;
            goto label_20387c;
        }
    }
    ctx->pc = 0x20385Cu;
    // 0x20385c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x203860: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203868: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x203868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x20386c: 0xc082218  jal         func_208860
    ctx->pc = 0x20386Cu;
    SET_GPR_U32(ctx, 31, 0x203874u);
    ctx->pc = 0x203870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20386Cu;
            // 0x203870: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203874u; }
        if (ctx->pc != 0x203874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203874u; }
        if (ctx->pc != 0x203874u) { return; }
    }
    ctx->pc = 0x203874u;
    // 0x203874: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x203874u;
    SET_GPR_U32(ctx, 31, 0x20387Cu);
    ctx->pc = 0x203878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203874u;
            // 0x203878: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20387Cu; }
        if (ctx->pc != 0x20387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20387Cu; }
        if (ctx->pc != 0x20387Cu) { return; }
    }
    ctx->pc = 0x20387Cu;
label_20387c:
    // 0x20387c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x20387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203880:
    // 0x203880: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x203880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x203884: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x203884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x203888: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x203888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x20388c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x20388cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x203890: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x203890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x203894: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x203894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x203898: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x203898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20389c: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x20389cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2038a0: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2038a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2038a4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2038a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2038a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2038A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038A8u;
            // 0x2038ac: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202FC0u: goto label_202fc0;
            case 0x202FD0u: goto label_202fd0;
            case 0x202FE0u: goto label_202fe0;
            case 0x203028u: goto label_203028;
            case 0x203054u: goto label_203054;
            case 0x203058u: goto label_203058;
            case 0x203094u: goto label_203094;
            case 0x2030C8u: goto label_2030c8;
            case 0x2030F0u: goto label_2030f0;
            case 0x2030F4u: goto label_2030f4;
            case 0x20312Cu: goto label_20312c;
            case 0x20313Cu: goto label_20313c;
            case 0x203180u: goto label_203180;
            case 0x2031A8u: goto label_2031a8;
            case 0x2031ACu: goto label_2031ac;
            case 0x2031E4u: goto label_2031e4;
            case 0x203218u: goto label_203218;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x20327Cu: goto label_20327c;
            case 0x20328Cu: goto label_20328c;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032C0u: goto label_2032c0;
            case 0x2032D8u: goto label_2032d8;
            case 0x2032E8u: goto label_2032e8;
            case 0x2032ECu: goto label_2032ec;
            case 0x203328u: goto label_203328;
            case 0x20332Cu: goto label_20332c;
            case 0x203348u: goto label_203348;
            case 0x203360u: goto label_203360;
            case 0x203370u: goto label_203370;
            case 0x203374u: goto label_203374;
            case 0x2033ACu: goto label_2033ac;
            case 0x2033B0u: goto label_2033b0;
            case 0x203418u: goto label_203418;
            case 0x20341Cu: goto label_20341c;
            case 0x203440u: goto label_203440;
            case 0x203500u: goto label_203500;
            case 0x203548u: goto label_203548;
            case 0x2035ACu: goto label_2035ac;
            case 0x2035B0u: goto label_2035b0;
            case 0x203660u: goto label_203660;
            case 0x203684u: goto label_203684;
            case 0x2036F8u: goto label_2036f8;
            case 0x203724u: goto label_203724;
            case 0x203778u: goto label_203778;
            case 0x203810u: goto label_203810;
            case 0x20387Cu: goto label_20387c;
            case 0x203880u: goto label_203880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2038B0u;
}

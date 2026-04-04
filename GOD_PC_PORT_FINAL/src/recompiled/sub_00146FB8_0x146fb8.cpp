#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146FB8
// Address: 0x146fb8 - 0x147520
void sub_00146FB8_0x146fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146FB8_0x146fb8");
#endif

    ctx->pc = 0x146fb8u;

    // 0x146fb8: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x146fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
    // 0x146fbc: 0x7fb10350  sq          $s1, 0x350($sp)
    ctx->pc = 0x146fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 17));
    // 0x146fc0: 0x7fb30330  sq          $s3, 0x330($sp)
    ctx->pc = 0x146fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 19));
    // 0x146fc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fc8: 0x7fb40320  sq          $s4, 0x320($sp)
    ctx->pc = 0x146fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 20));
    // 0x146fcc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x146fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fd0: 0x7fb50310  sq          $s5, 0x310($sp)
    ctx->pc = 0x146fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 21));
    // 0x146fd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x146fd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fd8: 0x7fbe02e0  sq          $fp, 0x2E0($sp)
    ctx->pc = 0x146fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 30));
    // 0x146fdc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x146fdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fe0: 0x7fb00360  sq          $s0, 0x360($sp)
    ctx->pc = 0x146fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 16));
    // 0x146fe4: 0x7fb20340  sq          $s2, 0x340($sp)
    ctx->pc = 0x146fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 18));
    // 0x146fe8: 0x7fb60300  sq          $s6, 0x300($sp)
    ctx->pc = 0x146fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 22));
    // 0x146fec: 0x7fb702f0  sq          $s7, 0x2F0($sp)
    ctx->pc = 0x146fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 23));
    // 0x146ff0: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x146ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
    // 0x146ff4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x146ff8: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x146FF8u;
    {
        const bool branch_taken_0x146ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FF8u;
            // 0x146ffc: 0x30deffff  andi        $fp, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ff8) {
            ctx->pc = 0x1474F0u;
            goto label_1474f0;
        }
    }
    ctx->pc = 0x147000u;
    // 0x147000: 0x8e360020  lw          $s6, 0x20($s1)
    ctx->pc = 0x147000u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x147004: 0x8ec20cfc  lw          $v0, 0xCFC($s6)
    ctx->pc = 0x147004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3324)));
    // 0x147008: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x147008u;
    {
        const bool branch_taken_0x147008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147008) {
            ctx->pc = 0x14700Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147008u;
            // 0x14700c: 0xc6220040  lwc1        $f2, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14718Cu;
            goto label_14718c;
        }
    }
    ctx->pc = 0x147010u;
    // 0x147010: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x147010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x147014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147018: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x147018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14701c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x14701cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x147020: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147020u;
    {
        const bool branch_taken_0x147020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x147024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147020u;
            // 0x147024: 0x2c570001  sltiu       $s7, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147020) {
            ctx->pc = 0x147034u;
            goto label_147034;
        }
    }
    ctx->pc = 0x147028u;
    // 0x147028: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x147028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14702c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14702Cu;
    {
        const bool branch_taken_0x14702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14702Cu;
            // 0x147030: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14702c) {
            ctx->pc = 0x14707Cu;
            goto label_14707c;
        }
    }
    ctx->pc = 0x147034u;
label_147034:
    // 0x147034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147038: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147038u;
    {
        const bool branch_taken_0x147038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147038u;
            // 0x14703c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147038) {
            ctx->pc = 0x147048u;
            goto label_147048;
        }
    }
    ctx->pc = 0x147040u;
    // 0x147040: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x147040u;
    {
        const bool branch_taken_0x147040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147040u;
            // 0x147044: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147040) {
            ctx->pc = 0x147080u;
            goto label_147080;
        }
    }
    ctx->pc = 0x147048u;
label_147048:
    // 0x147048: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147048u;
    {
        const bool branch_taken_0x147048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147048u;
            // 0x14704c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147048) {
            ctx->pc = 0x14705Cu;
            goto label_14705c;
        }
    }
    ctx->pc = 0x147050u;
    // 0x147050: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x147054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x147054u;
    {
        const bool branch_taken_0x147054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147054u;
            // 0x147058: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147054) {
            ctx->pc = 0x14707Cu;
            goto label_14707c;
        }
    }
    ctx->pc = 0x14705Cu;
label_14705c:
    // 0x14705c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14705Cu;
    {
        const bool branch_taken_0x14705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14705c) {
            ctx->pc = 0x147060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14705Cu;
            // 0x147060: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147070u;
            goto label_147070;
        }
    }
    ctx->pc = 0x147064u;
    // 0x147064: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x147064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x147068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147068u;
    {
        const bool branch_taken_0x147068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147068u;
            // 0x14706c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147068) {
            ctx->pc = 0x14707Cu;
            goto label_14707c;
        }
    }
    ctx->pc = 0x147070u;
label_147070:
    // 0x147070: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147070u;
    {
        const bool branch_taken_0x147070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147070) {
            ctx->pc = 0x147074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147070u;
            // 0x147074: 0x96830000  lhu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147084u;
            goto label_147084;
        }
    }
    ctx->pc = 0x147078u;
    // 0x147078: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_14707c:
    // 0x14707c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14707cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_147080:
    // 0x147080: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x147080u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_147084:
    // 0x147084: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x147088: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x147088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14708c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14708Cu;
    {
        const bool branch_taken_0x14708c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14708c) {
            ctx->pc = 0x147090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14708Cu;
            // 0x147090: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1470BCu;
            goto label_1470bc;
        }
    }
    ctx->pc = 0x147094u;
    // 0x147094: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x147094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147098: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x147098u;
    {
        const bool branch_taken_0x147098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147098) {
            ctx->pc = 0x14709Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147098u;
            // 0x14709c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1470B8u;
            goto label_1470b8;
        }
    }
    ctx->pc = 0x1470A0u;
    // 0x1470a0: 0x8ec20cf8  lw          $v0, 0xCF8($s6)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3320)));
    // 0x1470a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1470A4u;
    {
        const bool branch_taken_0x1470a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470A4u;
            // 0x1470a8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470a4) {
            ctx->pc = 0x1470B4u;
            goto label_1470b4;
        }
    }
    ctx->pc = 0x1470ACu;
    // 0x1470ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1470ACu;
    {
        const bool branch_taken_0x1470ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470ACu;
            // 0x1470b0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470ac) {
            ctx->pc = 0x1470B8u;
            goto label_1470b8;
        }
    }
    ctx->pc = 0x1470B4u;
label_1470b4:
    // 0x1470b4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1470b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1470b8:
    // 0x1470b8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1470b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1470bc:
    // 0x1470bc: 0x54c5000b  bnel        $a2, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1470BCu;
    {
        const bool branch_taken_0x1470bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1470bc) {
            ctx->pc = 0x1470C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1470BCu;
            // 0x1470c0: 0x96860004  lhu         $a2, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1470ECu;
            goto label_1470ec;
        }
    }
    ctx->pc = 0x1470C4u;
    // 0x1470c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1470c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1470C8u;
    {
        const bool branch_taken_0x1470c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1470c8) {
            ctx->pc = 0x1470CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1470C8u;
            // 0x1470cc: 0x96860004  lhu         $a2, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1470ECu;
            goto label_1470ec;
        }
    }
    ctx->pc = 0x1470D0u;
    // 0x1470d0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1470d4: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x1470d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1470d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1470D8u;
    {
        const bool branch_taken_0x1470d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1470DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470D8u;
            // 0x1470dc: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470d8) {
            ctx->pc = 0x1470E8u;
            goto label_1470e8;
        }
    }
    ctx->pc = 0x1470E0u;
    // 0x1470e0: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1470E0u;
    {
        const bool branch_taken_0x1470e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1470e0) {
            ctx->pc = 0x1470E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1470E0u;
            // 0x1470e4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147170u;
            goto label_147170;
        }
    }
    ctx->pc = 0x1470E8u;
label_1470e8:
    // 0x1470e8: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x1470e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_1470ec:
    // 0x1470ec: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1470ECu;
    {
        const bool branch_taken_0x1470ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470ECu;
            // 0x1470f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470ec) {
            ctx->pc = 0x14716Cu;
            goto label_14716c;
        }
    }
    ctx->pc = 0x1470F4u;
    // 0x1470f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1470f8:
    // 0x1470f8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1470f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1470fc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1470fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x147100: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147104: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x147104u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147108: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147108u;
    {
        const bool branch_taken_0x147108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147108u;
            // 0x14710c: 0xa2102b  sltu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147108) {
            ctx->pc = 0x147154u;
            goto label_147154;
        }
    }
    ctx->pc = 0x147110u;
    // 0x147110: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x147110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x147114: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x147114u;
    {
        const bool branch_taken_0x147114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147114u;
            // 0x147118: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147114) {
            ctx->pc = 0x14716Cu;
            goto label_14716c;
        }
    }
    ctx->pc = 0x14711Cu;
    // 0x14711c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_147120:
    // 0x147120: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x147124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147128: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x147128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14712c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147134: 0xc051830  jal         func_1460C0
    ctx->pc = 0x147134u;
    SET_GPR_U32(ctx, 31, 0x14713Cu);
    ctx->pc = 0x147138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147134u;
            // 0x147138: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460C0u;
    if (runtime->hasFunction(0x1460C0u)) {
        auto targetFn = runtime->lookupFunction(0x1460C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14713Cu; }
        if (ctx->pc != 0x14713Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460C0_0x1460c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14713Cu; }
        if (ctx->pc != 0x14713Cu) { return; }
    }
    ctx->pc = 0x14713Cu;
    // 0x14713c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14713cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x147140: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x147140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147144: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x147144u;
    {
        const bool branch_taken_0x147144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147144) {
            ctx->pc = 0x147148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147144u;
            // 0x147148: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147120u;
            runtime->cooperativeGuestYield();
            goto label_147120;
        }
    }
    ctx->pc = 0x14714Cu;
    // 0x14714c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14714Cu;
    {
        const bool branch_taken_0x14714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14714Cu;
            // 0x147150: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14714c) {
            ctx->pc = 0x147170u;
            goto label_147170;
        }
    }
    ctx->pc = 0x147154u;
label_147154:
    // 0x147154: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x147154u;
    {
        const bool branch_taken_0x147154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147154) {
            ctx->pc = 0x147158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147154u;
            // 0x147158: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147170u;
            goto label_147170;
        }
    }
    ctx->pc = 0x14715Cu;
    // 0x14715c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14715cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147160: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x147160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147164: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x147164u;
    {
        const bool branch_taken_0x147164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147164u;
            // 0x147168: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147164) {
            ctx->pc = 0x1470F8u;
            runtime->cooperativeGuestYield();
            goto label_1470f8;
        }
    }
    ctx->pc = 0x14716Cu;
label_14716c:
    // 0x14716c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_147170:
    // 0x147170: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x147170u;
    {
        const bool branch_taken_0x147170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147170) {
            ctx->pc = 0x147174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147170u;
            // 0x147174: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147188u;
            goto label_147188;
        }
    }
    ctx->pc = 0x147178u;
    // 0x147178: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14717c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147180: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x147180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x147184: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x147184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_147188:
    // 0x147188: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x147188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14718c:
    // 0x14718c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x147190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147194: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x147194u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147198: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x147198u;
    {
        const bool branch_taken_0x147198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147198) {
            ctx->pc = 0x1471E8u;
            goto label_1471e8;
        }
    }
    ctx->pc = 0x1471A0u;
    // 0x1471a0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1471a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1471a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x1471E8u;
            goto label_1471e8;
        }
    }
    ctx->pc = 0x1471B0u;
    // 0x1471b0: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1471b0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1471b4: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1471b4u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1471b8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1471b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1471bc: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1471bcu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1471c0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1471c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1471c4: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1471c4u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1471c8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1471c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1471cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1471ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1471d0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1471d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1471d4: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1471d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1471d8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1471d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1471dc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1471DCu;
    {
        const bool branch_taken_0x1471dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471DCu;
            // 0x1471e0: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471dc) {
            ctx->pc = 0x147288u;
            goto label_147288;
        }
    }
    ctx->pc = 0x1471E4u;
    // 0x1471e4: 0x0  nop
    ctx->pc = 0x1471e4u;
    // NOP
label_1471e8:
    // 0x1471e8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1471e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1471ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1471ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1471f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1471f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471f4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1471f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1471f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1471f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471fc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1471fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x147200: 0x70862b89  pcpyld      $a1, $a0, $a2
    ctx->pc = 0x147200u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x147204: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x147204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147208: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x147208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x14720c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x14720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x147210: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x147210u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x147214: 0x70852cc8  ppacw       $a1, $a0, $a1
    ctx->pc = 0x147214u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x147218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x147218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14721c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x14721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x147220: 0x7fa50280  sq          $a1, 0x280($sp)
    ctx->pc = 0x147220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 5));
    // 0x147224: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x147224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x147228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x147228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14722c: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x14722cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x147230: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x147230u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x147234: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x147234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x147238: 0x7fa40290  sq          $a0, 0x290($sp)
    ctx->pc = 0x147238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 4));
    // 0x14723c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x14723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x147240: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x147240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x147244: 0x70473389  pcpyld      $a2, $v0, $a3
    ctx->pc = 0x147244u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x147248: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x14724c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x147250: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x147250u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x147254: 0x70661cc8  ppacw       $v1, $v1, $a2
    ctx->pc = 0x147254u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x147258: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x147258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x14725c: 0x7fa302a0  sq          $v1, 0x2A0($sp)
    ctx->pc = 0x14725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 3));
    // 0x147260: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x147260u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x147264: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x147264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x147268: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x147268u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x14726c: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x14726cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x147270: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x147270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x147274: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x147274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x147278: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x147278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x14727c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x14727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x147280: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x147280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x147284: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x147284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
label_147288:
    // 0x147288: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x147288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14728c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14728cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147290: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147290u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147294: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x147294u;
    {
        const bool branch_taken_0x147294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147294) {
            ctx->pc = 0x147380u;
            goto label_147380;
        }
    }
    ctx->pc = 0x14729Cu;
    // 0x14729c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x14729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1472a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1472a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1472a4: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1472a4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1472a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1472ac: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1472acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1472b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1472b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1472b4: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1472b4u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1472b8: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x1472b8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[12];
    // 0x1472bc: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1472bcu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1472c0: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1472c0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1472c4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1472c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1472c8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1472c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1472cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1472d0: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1472d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1472d4: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1472d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1472d8: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1472d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1472dc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1472dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1472e0: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1472e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1472e4: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1472e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1472e8: 0xc06119a  jal         func_184668
    ctx->pc = 0x1472E8u;
    SET_GPR_U32(ctx, 31, 0x1472F0u);
    ctx->pc = 0x1472ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1472E8u;
            // 0x1472ec: 0xfba40130  sqc2        $vf4, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472F0u; }
        if (ctx->pc != 0x1472F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472F0u; }
        if (ctx->pc != 0x1472F0u) { return; }
    }
    ctx->pc = 0x1472F0u;
    // 0x1472f0: 0xdba600c0  lqc2        $vf6, 0xC0($sp)
    ctx->pc = 0x1472f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1472f4: 0xdba700d0  lqc2        $vf7, 0xD0($sp)
    ctx->pc = 0x1472f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1472f8: 0xdba800e0  lqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x1472f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1472fc: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1472fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x147300: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x147300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147304: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147308: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x147308u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14730c: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x14730cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147310: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x147310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147314: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x147314u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147318: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x147318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14731c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x14731cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147320: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x147320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147324: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x147324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147328: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x147328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14732c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x14732cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147330: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x147330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147334: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x147334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147338: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x147338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14733c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x14733cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147340: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x147340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147344: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x147344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147348: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x147348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14734c: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x14734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147350: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x147350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147354: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x147354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147358: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x147358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14735c: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x14735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147360: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x147360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147364: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x147364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147368: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14736c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x14736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147370: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x147370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147374: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x147374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147378: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x147378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14737c: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x14737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
label_147380:
    // 0x147380: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x147384: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x147384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147388: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x147388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14738c: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x14738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147390: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x147390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x147394: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x147394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x147398: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x147398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14739c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x14739cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1473a0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1473a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1473a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1473a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1473a8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1473ac: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1473acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1473b0: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1473b0u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1473b4: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x1473b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1473b8: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x1473b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1473bc: 0xfba402c0  sqc2        $vf4, 0x2C0($sp)
    ctx->pc = 0x1473bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1473c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1473c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1473c4: 0xda660000  lqc2        $vf6, 0x0($s3)
    ctx->pc = 0x1473c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1473c8: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x1473c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1473cc: 0xda670010  lqc2        $vf7, 0x10($s3)
    ctx->pc = 0x1473ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1473d0: 0xda680020  lqc2        $vf8, 0x20($s3)
    ctx->pc = 0x1473d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1473d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1473d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1473d8: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1473d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1473dc: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1473dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1473e0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1473e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1473e4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1473e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1473e8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1473e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1473ec: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1473ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1473f0: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1473f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1473f4: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1473f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1473f8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1473f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1473fc: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1473fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147400: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x147400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147404: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x147404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147408: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x147408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14740c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x14740cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147410: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x147410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147414: 0x4be328cb  vmaddw.xyzw $vf3, $vf5, $vf3w
    ctx->pc = 0x147414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147418: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x147418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14741c: 0xfba30230  sqc2        $vf3, 0x230($sp)
    ctx->pc = 0x14741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147420: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x147420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147424: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x147424u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147428: 0x4be4294b  vmaddw.xyzw $vf5, $vf5, $vf4w
    ctx->pc = 0x147428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14742c: 0xfba50240  sqc2        $vf5, 0x240($sp)
    ctx->pc = 0x14742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x147430: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x147430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147434: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x147438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14743c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x14743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147440: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x147440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147444: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147448: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14744c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x14744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147450: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x147450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x147454: 0xfba201e0  sqc2        $vf2, 0x1E0($sp)
    ctx->pc = 0x147454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147458: 0xfba301f0  sqc2        $vf3, 0x1F0($sp)
    ctx->pc = 0x147458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14745c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14745Cu;
    {
        const bool branch_taken_0x14745c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14745Cu;
            // 0x147460: 0xfba50200  sqc2        $vf5, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14745c) {
            ctx->pc = 0x147480u;
            goto label_147480;
        }
    }
    ctx->pc = 0x147464u;
    // 0x147464: 0x6aa80007  ldl         $t0, 0x7($s5)
    ctx->pc = 0x147464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x147468: 0x6ea80000  ldr         $t0, 0x0($s5)
    ctx->pc = 0x147468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14746c: 0xb3a80257  sdl         $t0, 0x257($sp)
    ctx->pc = 0x14746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147470: 0xb7a80250  sdr         $t0, 0x250($sp)
    ctx->pc = 0x147470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147474: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x147474u;
    {
        const bool branch_taken_0x147474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147474u;
            // 0x147478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147474) {
            ctx->pc = 0x1474D0u;
            goto label_1474d0;
        }
    }
    ctx->pc = 0x14747Cu;
    // 0x14747c: 0x0  nop
    ctx->pc = 0x14747cu;
    // NOP
label_147480:
    // 0x147480: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x147480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x147484: 0x6aa50007  ldl         $a1, 0x7($s5)
    ctx->pc = 0x147484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x147488: 0x6ea50000  ldr         $a1, 0x0($s5)
    ctx->pc = 0x147488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14748c: 0xb3a50277  sdl         $a1, 0x277($sp)
    ctx->pc = 0x14748cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 631); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147490: 0xb7a50270  sdr         $a1, 0x270($sp)
    ctx->pc = 0x147490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 624); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14749c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14749cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1474a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1474a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1474a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1474a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1474a8: 0xa7a20276  sh          $v0, 0x276($sp)
    ctx->pc = 0x1474a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 630), (uint16_t)GPR_U32(ctx, 2));
    // 0x1474ac: 0x6ba20277  ldl         $v0, 0x277($sp)
    ctx->pc = 0x1474acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 631); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1474b0: 0x6fa20270  ldr         $v0, 0x270($sp)
    ctx->pc = 0x1474b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 624); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1474b4: 0xb3a20267  sdl         $v0, 0x267($sp)
    ctx->pc = 0x1474b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1474b8: 0xb7a20260  sdr         $v0, 0x260($sp)
    ctx->pc = 0x1474b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1474bc: 0x6ba60267  ldl         $a2, 0x267($sp)
    ctx->pc = 0x1474bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1474c0: 0x6fa60260  ldr         $a2, 0x260($sp)
    ctx->pc = 0x1474c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1474c4: 0xb3a60257  sdl         $a2, 0x257($sp)
    ctx->pc = 0x1474c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1474c8: 0xb7a60250  sdr         $a2, 0x250($sp)
    ctx->pc = 0x1474c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1474cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1474ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1474d0:
    // 0x1474d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1474d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474d4: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1474d8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1474d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474dc: 0x94ab0010  lhu         $t3, 0x10($a1)
    ctx->pc = 0x1474dcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1474e0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1474e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474e4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1474e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474e8: 0xc051d48  jal         func_147520
    ctx->pc = 0x1474E8u;
    SET_GPR_U32(ctx, 31, 0x1474F0u);
    ctx->pc = 0x1474ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1474E8u;
            // 0x1474ec: 0x27aa0250  addiu       $t2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147520u;
    if (runtime->hasFunction(0x147520u)) {
        auto targetFn = runtime->lookupFunction(0x147520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474F0u; }
        if (ctx->pc != 0x1474F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00147520_0x147520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474F0u; }
        if (ctx->pc != 0x1474F0u) { return; }
    }
    ctx->pc = 0x1474F0u;
label_1474f0:
    // 0x1474f0: 0x7bb00360  lq          $s0, 0x360($sp)
    ctx->pc = 0x1474f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1474f4: 0x7bb10350  lq          $s1, 0x350($sp)
    ctx->pc = 0x1474f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1474f8: 0x7bb20340  lq          $s2, 0x340($sp)
    ctx->pc = 0x1474f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1474fc: 0x7bb30330  lq          $s3, 0x330($sp)
    ctx->pc = 0x1474fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x147500: 0x7bb40320  lq          $s4, 0x320($sp)
    ctx->pc = 0x147500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x147504: 0x7bb50310  lq          $s5, 0x310($sp)
    ctx->pc = 0x147504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x147508: 0x7bb60300  lq          $s6, 0x300($sp)
    ctx->pc = 0x147508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x14750c: 0x7bb702f0  lq          $s7, 0x2F0($sp)
    ctx->pc = 0x14750cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x147510: 0x7bbe02e0  lq          $fp, 0x2E0($sp)
    ctx->pc = 0x147510u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x147514: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x147514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x147518: 0x3e00008  jr          $ra
    ctx->pc = 0x147518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147518u;
            // 0x14751c: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147034u: goto label_147034;
            case 0x147048u: goto label_147048;
            case 0x14705Cu: goto label_14705c;
            case 0x147070u: goto label_147070;
            case 0x14707Cu: goto label_14707c;
            case 0x147080u: goto label_147080;
            case 0x147084u: goto label_147084;
            case 0x1470B4u: goto label_1470b4;
            case 0x1470B8u: goto label_1470b8;
            case 0x1470BCu: goto label_1470bc;
            case 0x1470E8u: goto label_1470e8;
            case 0x1470ECu: goto label_1470ec;
            case 0x1470F8u: goto label_1470f8;
            case 0x147120u: goto label_147120;
            case 0x147154u: goto label_147154;
            case 0x14716Cu: goto label_14716c;
            case 0x147170u: goto label_147170;
            case 0x147188u: goto label_147188;
            case 0x14718Cu: goto label_14718c;
            case 0x1471E8u: goto label_1471e8;
            case 0x147288u: goto label_147288;
            case 0x147380u: goto label_147380;
            case 0x147480u: goto label_147480;
            case 0x1474D0u: goto label_1474d0;
            case 0x1474F0u: goto label_1474f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147520u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107008
// Address: 0x107008 - 0x107200
void sub_00107008_0x107008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107008_0x107008");
#endif

    ctx->pc = 0x107008u;

    // 0x107008: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10700c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10700cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107010: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x107010u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x107014: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107018: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x107018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10701c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x107020: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x107020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x107024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x107024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x107028: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x107028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10702c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107030: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x107030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x107034: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107038: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x107038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10703c: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x10703cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x107040: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x107040u;
    {
        const bool branch_taken_0x107040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107040u;
            // 0x107044: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107040) {
            ctx->pc = 0x1070B8u;
            goto label_1070b8;
        }
    }
    ctx->pc = 0x107048u;
label_107048:
    // 0x107048: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x107048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10704c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x107050: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x107050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x107054: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x107058: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x107058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10705c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x10705cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x107060: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x107060u;
    {
        const bool branch_taken_0x107060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107060) {
            ctx->pc = 0x107064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107060u;
            // 0x107064: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1070A8u;
            goto label_1070a8;
        }
    }
    ctx->pc = 0x107068u;
    // 0x107068: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10706c: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x10706cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x107070: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x107070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x107074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107078: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107078u;
    {
        const bool branch_taken_0x107078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107078u;
            // 0x10707c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107078) {
            ctx->pc = 0x1070B8u;
            goto label_1070b8;
        }
    }
    ctx->pc = 0x107080u;
    // 0x107080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107080u;
    {
        const bool branch_taken_0x107080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107080u;
            // 0x107084: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107080) {
            ctx->pc = 0x107098u;
            goto label_107098;
        }
    }
    ctx->pc = 0x107088u;
    // 0x107088: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x107088u;
    {
        const bool branch_taken_0x107088 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x107088) {
            ctx->pc = 0x10708Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107088u;
            // 0x10708c: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107098u;
            goto label_107098;
        }
    }
    ctx->pc = 0x107090u;
    // 0x107090: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x107094: 0x0  nop
    ctx->pc = 0x107094u;
    // NOP
label_107098:
    // 0x107098: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10709c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1070a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1070A0u;
    {
        const bool branch_taken_0x1070a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070A0u;
            // 0x1070a4: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070a0) {
            ctx->pc = 0x1070C0u;
            goto label_1070c0;
        }
    }
    ctx->pc = 0x1070A8u;
label_1070a8:
    // 0x1070a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1070a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1070ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1070acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1070b0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1070B0u;
    {
        const bool branch_taken_0x1070b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070B0u;
            // 0x1070b4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070b0) {
            ctx->pc = 0x107048u;
            runtime->cooperativeGuestYield();
            goto label_107048;
        }
    }
    ctx->pc = 0x1070B8u;
label_1070b8:
    // 0x1070b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1070b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070bc: 0x0  nop
    ctx->pc = 0x1070bcu;
    // NOP
label_1070c0:
    // 0x1070c0: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1070c4: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1070c8: 0x12340044  beq         $s1, $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x1070C8u;
    {
        const bool branch_taken_0x1070c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1070CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070C8u;
            // 0x1070cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070c8) {
            ctx->pc = 0x1071DCu;
            goto label_1071dc;
        }
    }
    ctx->pc = 0x1070D0u;
    // 0x1070d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1070d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1070d4: 0x0  nop
    ctx->pc = 0x1070d4u;
    // NOP
label_1070d8:
    // 0x1070d8: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x1070d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x1070dc: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1070DCu;
    {
        const bool branch_taken_0x1070dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1070dc) {
            ctx->pc = 0x1070E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1070DCu;
            // 0x1070e0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1071D0u;
            goto label_1071d0;
        }
    }
    ctx->pc = 0x1070E4u;
    // 0x1070e4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1070e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1070e8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1070E8u;
    {
        const bool branch_taken_0x1070e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070E8u;
            // 0x1070ec: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070e8) {
            ctx->pc = 0x10715Cu;
            goto label_10715c;
        }
    }
    ctx->pc = 0x1070F0u;
    // 0x1070f0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1070f4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1070f8: 0x52120035  beql        $s0, $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x1070F8u;
    {
        const bool branch_taken_0x1070f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1070f8) {
            ctx->pc = 0x1070FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1070F8u;
            // 0x1070fc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1071D0u;
            goto label_1071d0;
        }
    }
    ctx->pc = 0x107100u;
    // 0x107100: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x107104: 0x0  nop
    ctx->pc = 0x107104u;
    // NOP
label_107108:
    // 0x107108: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x107108u;
    {
        const bool branch_taken_0x107108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x107108) {
            ctx->pc = 0x10710Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107108u;
            // 0x10710c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10714Cu;
            goto label_10714c;
        }
    }
    ctx->pc = 0x107110u;
    // 0x107110: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x107114: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x107114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x107118: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x107118u;
    {
        const bool branch_taken_0x107118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107118) {
            ctx->pc = 0x10711Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107118u;
            // 0x10711c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10714Cu;
            goto label_10714c;
        }
    }
    ctx->pc = 0x107120u;
    // 0x107120: 0xe6150050  swc1        $f21, 0x50($s0)
    ctx->pc = 0x107120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x107124: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x107124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x107128: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x107128u;
    {
        const bool branch_taken_0x107128 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107128u;
            // 0x10712c: 0xae130054  sw          $s3, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107128) {
            ctx->pc = 0x107134u;
            goto label_107134;
        }
    }
    ctx->pc = 0x107130u;
    // 0x107130: 0xc674001c  lwc1        $f20, 0x1C($s3)
    ctx->pc = 0x107130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_107134:
    // 0x107134: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x107134u;
    SET_GPR_U32(ctx, 31, 0x10713Cu);
    ctx->pc = 0x107138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107134u;
            // 0x107138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10713Cu; }
        if (ctx->pc != 0x10713Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10713Cu; }
        if (ctx->pc != 0x10713Cu) { return; }
    }
    ctx->pc = 0x10713Cu;
    // 0x10713c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x10713cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x107140: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x107140u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x107144: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x107144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x107148: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10714c:
    // 0x10714c: 0x5612ffee  bnel        $s0, $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10714Cu;
    {
        const bool branch_taken_0x10714c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x10714c) {
            ctx->pc = 0x107150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10714Cu;
            // 0x107150: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107108u;
            runtime->cooperativeGuestYield();
            goto label_107108;
        }
    }
    ctx->pc = 0x107154u;
    // 0x107154: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x107154u;
    {
        const bool branch_taken_0x107154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107154u;
            // 0x107158: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107154) {
            ctx->pc = 0x1071D0u;
            goto label_1071d0;
        }
    }
    ctx->pc = 0x10715Cu;
label_10715c:
    // 0x10715c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x10715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x107160: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x107160u;
    {
        const bool branch_taken_0x107160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107160u;
            // 0x107164: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107160) {
            ctx->pc = 0x1071CCu;
            goto label_1071cc;
        }
    }
    ctx->pc = 0x107168u;
    // 0x107168: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x107168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10716c: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10716Cu;
    {
        const bool branch_taken_0x10716c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10716c) {
            ctx->pc = 0x107170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10716Cu;
            // 0x107170: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1071D0u;
            goto label_1071d0;
        }
    }
    ctx->pc = 0x107174u;
    // 0x107174: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x107174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x107178: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x107178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10717c: 0x52120014  beql        $s0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x10717Cu;
    {
        const bool branch_taken_0x10717c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x10717c) {
            ctx->pc = 0x107180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10717Cu;
            // 0x107180: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1071D0u;
            goto label_1071d0;
        }
    }
    ctx->pc = 0x107184u;
    // 0x107184: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x107184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_107188:
    // 0x107188: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x107188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x10718c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x10718Cu;
    {
        const bool branch_taken_0x10718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10718c) {
            ctx->pc = 0x107190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10718Cu;
            // 0x107190: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1071C4u;
            goto label_1071c4;
        }
    }
    ctx->pc = 0x107194u;
    // 0x107194: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x107198: 0xe6150050  swc1        $f21, 0x50($s0)
    ctx->pc = 0x107198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x10719c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10719cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1071a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1071A0u;
    {
        const bool branch_taken_0x1071a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1071A0u;
            // 0x1071a4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071a0) {
            ctx->pc = 0x1071ACu;
            goto label_1071ac;
        }
    }
    ctx->pc = 0x1071A8u;
    // 0x1071a8: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x1071a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1071ac:
    // 0x1071ac: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1071ACu;
    SET_GPR_U32(ctx, 31, 0x1071B4u);
    ctx->pc = 0x1071B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1071ACu;
            // 0x1071b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1071B4u; }
        if (ctx->pc != 0x1071B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1071B4u; }
        if (ctx->pc != 0x1071B4u) { return; }
    }
    ctx->pc = 0x1071B4u;
    // 0x1071b4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1071b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1071b8: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x1071b8u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x1071bc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1071bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1071c0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1071c4:
    // 0x1071c4: 0x5612fff0  bnel        $s0, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1071C4u;
    {
        const bool branch_taken_0x1071c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1071c4) {
            ctx->pc = 0x1071C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1071C4u;
            // 0x1071c8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107188u;
            runtime->cooperativeGuestYield();
            goto label_107188;
        }
    }
    ctx->pc = 0x1071CCu;
label_1071cc:
    // 0x1071cc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1071ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1071d0:
    // 0x1071d0: 0x5634ffc1  bnel        $s1, $s4, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1071D0u;
    {
        const bool branch_taken_0x1071d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x1071d0) {
            ctx->pc = 0x1071D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1071D0u;
            // 0x1071d4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1070D8u;
            runtime->cooperativeGuestYield();
            goto label_1070d8;
        }
    }
    ctx->pc = 0x1071D8u;
    // 0x1071d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1071d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1071dc:
    // 0x1071dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1071dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1071e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1071e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1071e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1071e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1071e8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1071e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1071ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1071ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1071f0: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1071f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1071f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1071f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1071f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1071F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1071FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1071F8u;
            // 0x1071fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107048u: goto label_107048;
            case 0x107098u: goto label_107098;
            case 0x1070A8u: goto label_1070a8;
            case 0x1070B8u: goto label_1070b8;
            case 0x1070C0u: goto label_1070c0;
            case 0x1070D8u: goto label_1070d8;
            case 0x107108u: goto label_107108;
            case 0x107134u: goto label_107134;
            case 0x10714Cu: goto label_10714c;
            case 0x10715Cu: goto label_10715c;
            case 0x107188u: goto label_107188;
            case 0x1071ACu: goto label_1071ac;
            case 0x1071C4u: goto label_1071c4;
            case 0x1071CCu: goto label_1071cc;
            case 0x1071D0u: goto label_1071d0;
            case 0x1071DCu: goto label_1071dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107200u;
}

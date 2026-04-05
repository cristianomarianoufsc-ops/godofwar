#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223C00
// Address: 0x223c00 - 0x2242a0
void sub_00223C00_0x223c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C00_0x223c00");
#endif

    ctx->pc = 0x223c00u;

label_223c00:
    // 0x223c00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x223c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x223c04: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x223c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x223c08: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x223c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x223c0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x223c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c10: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x223c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x223c14: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x223c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x223c18: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x223c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x223c1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x223c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x223c20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x223c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223c24: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x223c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x223c28: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x223C28u;
    {
        const bool branch_taken_0x223c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C28u;
            // 0x223c2c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c28) {
            ctx->pc = 0x223D90u;
            goto label_223d90;
        }
    }
    ctx->pc = 0x223C30u;
    // 0x223c30: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x223c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x223c34: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x223c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x223c38: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x223C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C38u;
            // 0x223c3c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223D90u;
            goto label_223d90;
        }
    }
    ctx->pc = 0x223C40u;
    // 0x223c40: 0x8e70003c  lw          $s0, 0x3C($s3)
    ctx->pc = 0x223c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x223c44: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x223c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x223c48: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223C48u;
    {
        const bool branch_taken_0x223c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x223C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C48u;
            // 0x223c4c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c48) {
            ctx->pc = 0x223C58u;
            goto label_223c58;
        }
    }
    ctx->pc = 0x223C50u;
    // 0x223c50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223C50u;
    {
        const bool branch_taken_0x223c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C50u;
            // 0x223c54: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c50) {
            ctx->pc = 0x223C74u;
            goto label_223c74;
        }
    }
    ctx->pc = 0x223C58u;
label_223c58:
    // 0x223c58: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x223c58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x223c5c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x223c5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x223c60: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x223C60u;
    {
        const bool branch_taken_0x223c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C60u;
            // 0x223c64: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c60) {
            ctx->pc = 0x223C74u;
            goto label_223c74;
        }
    }
    ctx->pc = 0x223C68u;
    // 0x223c68: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x223C68u;
    SET_GPR_U32(ctx, 31, 0x223C70u);
    ctx->pc = 0x223C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C68u;
            // 0x223c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C70u; }
        if (ctx->pc != 0x223C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C70u; }
        if (ctx->pc != 0x223C70u) { return; }
    }
    ctx->pc = 0x223C70u;
    // 0x223c70: 0x26070070  addiu       $a3, $s0, 0x70
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_223c74:
    // 0x223c74: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x223c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x223c78: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x223c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x223c7c: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x223c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x223c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x223c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223c84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x223c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x223c88: 0x8c64c8d8  lw          $a0, -0x3728($v1)
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953176)));
    // 0x223c8c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x223c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x223c90: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x223c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x223c94: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x223c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x223c98: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x223c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x223c9c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x223c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x223ca0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x223ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x223ca4: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x223CA4u;
    SET_GPR_U32(ctx, 31, 0x223CACu);
    ctx->pc = 0x223CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CA4u;
            // 0x223ca8: 0x84a50038  lh          $a1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CACu; }
        if (ctx->pc != 0x223CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CACu; }
        if (ctx->pc != 0x223CACu) { return; }
    }
    ctx->pc = 0x223CACu;
    // 0x223cac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x223cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cb0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x223cb4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x223cb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x223cbc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223CBCu;
    {
        const bool branch_taken_0x223cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223CBCu;
            // 0x223cc0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cbc) {
            ctx->pc = 0x223CF8u;
            goto label_223cf8;
        }
    }
    ctx->pc = 0x223CC4u;
    // 0x223cc4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x223cc4u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x223cc8: 0x4be2233d  vmr32.xyzw  $vf2, $vf4
    ctx->pc = 0x223cc8u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x223ccc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x223cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223cd0: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x223cd0u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x223cd4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x223cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x223cd8: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x223cd8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x223cdc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x223cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223ce0: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x223ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223ce4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x223ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x223ce8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x223ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223cec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223CECu;
    {
        const bool branch_taken_0x223cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223CECu;
            // 0x223cf0: 0xfba30070  sqc2        $vf3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cec) {
            ctx->pc = 0x223D0Cu;
            goto label_223d0c;
        }
    }
    ctx->pc = 0x223CF4u;
    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
label_223cf8:
    // 0x223cf8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x223cf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223cfc: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x223cfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d00: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x223d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x223d04: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x223d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x223d08: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x223d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_223d0c:
    // 0x223d0c: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x223d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x223d10: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x223d10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x223d14: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x223d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x223d18: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x223d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x223d1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x223d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x223d20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x223d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223d24: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x223d28: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x223d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x223d2c: 0x40f809  jalr        $v0
    ctx->pc = 0x223D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223D34u);
        ctx->pc = 0x223D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D2Cu;
            // 0x223d30: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223D34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C00u: goto label_223c00;
            case 0x223C58u: goto label_223c58;
            case 0x223C74u: goto label_223c74;
            case 0x223CF8u: goto label_223cf8;
            case 0x223D0Cu: goto label_223d0c;
            case 0x223D90u: goto label_223d90;
            case 0x223E48u: goto label_223e48;
            case 0x223E4Cu: goto label_223e4c;
            case 0x223E88u: goto label_223e88;
            case 0x223EA8u: goto label_223ea8;
            case 0x223EC0u: goto label_223ec0;
            case 0x223F18u: goto label_223f18;
            case 0x223F38u: goto label_223f38;
            case 0x223F78u: goto label_223f78;
            case 0x223F80u: goto label_223f80;
            case 0x223FE0u: goto label_223fe0;
            case 0x2240B0u: goto label_2240b0;
            case 0x224158u: goto label_224158;
            case 0x224190u: goto label_224190;
            case 0x224194u: goto label_224194;
            case 0x2241D0u: goto label_2241d0;
            case 0x224238u: goto label_224238;
            case 0x22423Cu: goto label_22423c;
            case 0x224284u: goto label_224284;
            case 0x224288u: goto label_224288;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223D34u; }
            if (ctx->pc != 0x223D34u) { return; }
        }
        }
    }
    ctx->pc = 0x223D34u;
    // 0x223d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x223d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x223d3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x223d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223d40: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x223d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x223d44: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x223d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x223d48: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x223d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x223d4c: 0x40f809  jalr        $v0
    ctx->pc = 0x223D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223D54u);
        ctx->pc = 0x223D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D4Cu;
            // 0x223d50: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223D54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C00u: goto label_223c00;
            case 0x223C58u: goto label_223c58;
            case 0x223C74u: goto label_223c74;
            case 0x223CF8u: goto label_223cf8;
            case 0x223D0Cu: goto label_223d0c;
            case 0x223D90u: goto label_223d90;
            case 0x223E48u: goto label_223e48;
            case 0x223E4Cu: goto label_223e4c;
            case 0x223E88u: goto label_223e88;
            case 0x223EA8u: goto label_223ea8;
            case 0x223EC0u: goto label_223ec0;
            case 0x223F18u: goto label_223f18;
            case 0x223F38u: goto label_223f38;
            case 0x223F78u: goto label_223f78;
            case 0x223F80u: goto label_223f80;
            case 0x223FE0u: goto label_223fe0;
            case 0x2240B0u: goto label_2240b0;
            case 0x224158u: goto label_224158;
            case 0x224190u: goto label_224190;
            case 0x224194u: goto label_224194;
            case 0x2241D0u: goto label_2241d0;
            case 0x224238u: goto label_224238;
            case 0x22423Cu: goto label_22423c;
            case 0x224284u: goto label_224284;
            case 0x224288u: goto label_224288;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223D54u; }
            if (ctx->pc != 0x223D54u) { return; }
        }
        }
    }
    ctx->pc = 0x223D54u;
    // 0x223d54: 0x82830031  lb          $v1, 0x31($s4)
    ctx->pc = 0x223d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x223d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d5c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x223d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x223d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223d68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x223d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x223d6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x223d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d70: 0xc064408  jal         func_191020
    ctx->pc = 0x223D70u;
    SET_GPR_U32(ctx, 31, 0x223D78u);
    ctx->pc = 0x223D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D70u;
            // 0x223d74: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x191020u;
    if (runtime->hasFunction(0x191020u)) {
        auto targetFn = runtime->lookupFunction(0x191020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D78u; }
        if (ctx->pc != 0x223D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00191020_0x191020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D78u; }
        if (ctx->pc != 0x223D78u) { return; }
    }
    ctx->pc = 0x223D78u;
    // 0x223d78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x223d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223d7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x223d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x223d80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x223d84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x223d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x223d88: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x223d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x223d8c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x223d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_223d90:
    // 0x223d90: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x223d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x223d94: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x223d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x223d98: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x223d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223d9c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x223d9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223da0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x223da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223da4: 0x3e00008  jr          $ra
    ctx->pc = 0x223DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DA4u;
            // 0x223da8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C00u: goto label_223c00;
            case 0x223C58u: goto label_223c58;
            case 0x223C74u: goto label_223c74;
            case 0x223CF8u: goto label_223cf8;
            case 0x223D0Cu: goto label_223d0c;
            case 0x223D90u: goto label_223d90;
            case 0x223E48u: goto label_223e48;
            case 0x223E4Cu: goto label_223e4c;
            case 0x223E88u: goto label_223e88;
            case 0x223EA8u: goto label_223ea8;
            case 0x223EC0u: goto label_223ec0;
            case 0x223F18u: goto label_223f18;
            case 0x223F38u: goto label_223f38;
            case 0x223F78u: goto label_223f78;
            case 0x223F80u: goto label_223f80;
            case 0x223FE0u: goto label_223fe0;
            case 0x2240B0u: goto label_2240b0;
            case 0x224158u: goto label_224158;
            case 0x224190u: goto label_224190;
            case 0x224194u: goto label_224194;
            case 0x2241D0u: goto label_2241d0;
            case 0x224238u: goto label_224238;
            case 0x22423Cu: goto label_22423c;
            case 0x224284u: goto label_224284;
            case 0x224288u: goto label_224288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223DACu;
    // 0x223dac: 0x0  nop
    ctx->pc = 0x223dacu;
    // NOP
    // 0x223db0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223db4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223db4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223db8: 0x8c44f190  lw          $a0, -0xE70($v0)
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x223dbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223dc0: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x223DC0u;
    SET_GPR_U32(ctx, 31, 0x223DC8u);
    ctx->pc = 0x222B18u;
    if (runtime->hasFunction(0x222B18u)) {
        auto targetFn = runtime->lookupFunction(0x222B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DC8u; }
        if (ctx->pc != 0x223DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00222b18_0x222b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DC8u; }
        if (ctx->pc != 0x223DC8u) { return; }
    }
    ctx->pc = 0x223DC8u;
    // 0x223dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x223DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DCCu;
            // 0x223dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C00u: goto label_223c00;
            case 0x223C58u: goto label_223c58;
            case 0x223C74u: goto label_223c74;
            case 0x223CF8u: goto label_223cf8;
            case 0x223D0Cu: goto label_223d0c;
            case 0x223D90u: goto label_223d90;
            case 0x223E48u: goto label_223e48;
            case 0x223E4Cu: goto label_223e4c;
            case 0x223E88u: goto label_223e88;
            case 0x223EA8u: goto label_223ea8;
            case 0x223EC0u: goto label_223ec0;
            case 0x223F18u: goto label_223f18;
            case 0x223F38u: goto label_223f38;
            case 0x223F78u: goto label_223f78;
            case 0x223F80u: goto label_223f80;
            case 0x223FE0u: goto label_223fe0;
            case 0x2240B0u: goto label_2240b0;
            case 0x224158u: goto label_224158;
            case 0x224190u: goto label_224190;
            case 0x224194u: goto label_224194;
            case 0x2241D0u: goto label_2241d0;
            case 0x224238u: goto label_224238;
            case 0x22423Cu: goto label_22423c;
            case 0x224284u: goto label_224284;
            case 0x224288u: goto label_224288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223DD4u;
    // 0x223dd4: 0x0  nop
    ctx->pc = 0x223dd4u;
    // NOP
    // 0x223dd8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x223ddc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x223ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x223de0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x223de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x223de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223de8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x223de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x223dec: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x223decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x223df0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x223df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x223df4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x223df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x223df8: 0x10600122  beqz        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x223DF8u;
    {
        const bool branch_taken_0x223df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DF8u;
            // 0x223dfc: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223df8) {
            ctx->pc = 0x224284u;
            goto label_224284;
        }
    }
    ctx->pc = 0x223E00u;
    // 0x223e00: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x223e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223e04: 0xc4a1c658  lwc1        $f1, -0x39A8($a1)
    ctx->pc = 0x223e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223e08: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x223e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x223e0c: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x223e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x223e10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x223e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223e14: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x223e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x223e18: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x223E18u;
    {
        const bool branch_taken_0x223e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E18u;
            // 0x223e1c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e18) {
            ctx->pc = 0x223EC0u;
            goto label_223ec0;
        }
    }
    ctx->pc = 0x223E20u;
    // 0x223e20: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x223e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223e2c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x223e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x223e30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223E30u;
    {
        const bool branch_taken_0x223e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E30u;
            // 0x223e34: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e30) {
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E38u;
    // 0x223e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x223e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223E3Cu;
    {
        const bool branch_taken_0x223e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E3Cu;
            // 0x223e40: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e3c) {
            ctx->pc = 0x223E4Cu;
            goto label_223e4c;
        }
    }
    ctx->pc = 0x223E44u;
    // 0x223e44: 0x0  nop
    ctx->pc = 0x223e44u;
    // NOP
label_223e48:
    // 0x223e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x223e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e4c:
    // 0x223e4c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x223e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x223e50: 0x84a20038  lh          $v0, 0x38($a1)
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x223e54: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223E54u;
    {
        const bool branch_taken_0x223e54 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x223e54) {
            ctx->pc = 0x223E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223E54u;
            // 0x223e58: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x223E88u;
            goto label_223e88;
        }
    }
    ctx->pc = 0x223E5Cu;
    // 0x223e5c: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x223e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223e60: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x223e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223e64: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x223e64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x223e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x223e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223e74: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x223e74u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x223e78: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x223e78u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x223e7c: 0xc054104  jal         func_150410
    ctx->pc = 0x223E7Cu;
    SET_GPR_U32(ctx, 31, 0x223E84u);
    ctx->pc = 0x223E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E7Cu;
            // 0x223e80: 0x46016329  min.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E84u; }
        if (ctx->pc != 0x223E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E84u; }
        if (ctx->pc != 0x223E84u) { return; }
    }
    ctx->pc = 0x223E84u;
    // 0x223e84: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x223e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223e88:
    // 0x223e88: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x223e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x223e8c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x223e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x223e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223e94: 0x0  nop
    ctx->pc = 0x223e94u;
    // NOP
    // 0x223e98: 0x450200fb  bc1fl       . + 4 + (0xFB << 2)
    ctx->pc = 0x223E98u;
    {
        const bool branch_taken_0x223e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223e98) {
            ctx->pc = 0x223E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223E98u;
            // 0x223e9c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x223EA0u;
    // 0x223ea0: 0xc088f00  jal         func_223C00
    ctx->pc = 0x223EA0u;
    SET_GPR_U32(ctx, 31, 0x223EA8u);
    ctx->pc = 0x223EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223EA0u;
            // 0x223ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223C00u;
    runtime->cooperativeGuestYield();
    goto label_223c00;
    ctx->pc = 0x223EA8u;
label_223ea8:
    // 0x223ea8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x223eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x223eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x223eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223eb4: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x223EB4u;
    {
        const bool branch_taken_0x223eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EB4u;
            // 0x223eb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eb4) {
            ctx->pc = 0x224284u;
            goto label_224284;
        }
    }
    ctx->pc = 0x223EBCu;
    // 0x223ebc: 0x0  nop
    ctx->pc = 0x223ebcu;
    // NOP
label_223ec0:
    // 0x223ec0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x223ec4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x223ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ec8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x223ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223ecc: 0x0  nop
    ctx->pc = 0x223eccu;
    // NOP
    // 0x223ed0: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x223ED0u;
    {
        const bool branch_taken_0x223ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223ed0) {
            ctx->pc = 0x223ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223ED0u;
            // 0x223ed4: 0x78620020  lq          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223F38u;
            goto label_223f38;
        }
    }
    ctx->pc = 0x223ED8u;
    // 0x223ed8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x223ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x223edc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x223edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x223ee0: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x223ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x223ee4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223ee8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x223eec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x223eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x223ef0: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x223ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x223ef4: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x223ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x223ef8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x223ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x223efc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x223efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x223f00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223f04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x223f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223f08: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F08u;
    {
        const bool branch_taken_0x223f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x223F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F08u;
            // 0x223f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f08) {
            ctx->pc = 0x223F18u;
            goto label_223f18;
        }
    }
    ctx->pc = 0x223F10u;
    // 0x223f10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x223f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x223f14: 0x0  nop
    ctx->pc = 0x223f14u;
    // NOP
label_223f18:
    // 0x223f18: 0x508000db  beql        $a0, $zero, . + 4 + (0xDB << 2)
    ctx->pc = 0x223F18u;
    {
        const bool branch_taken_0x223f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x223f18) {
            ctx->pc = 0x223F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223F18u;
            // 0x223f1c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x223F20u;
    // 0x223f20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x223f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223f24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x223f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x223f28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x223f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x223f2c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x223F2Cu;
    {
        const bool branch_taken_0x223f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F2Cu;
            // 0x223f30: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f2c) {
            ctx->pc = 0x224284u;
            goto label_224284;
        }
    }
    ctx->pc = 0x223F34u;
    // 0x223f34: 0x0  nop
    ctx->pc = 0x223f34u;
    // NOP
label_223f38:
    // 0x223f38: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x223f3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x223f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x223f40: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x223f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x223f44: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x223f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x223f48: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x223f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223f4c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x223f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x223f50: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x223f50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x223f54: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x223f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x223f58: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x223f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x223f5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223F5Cu;
    {
        const bool branch_taken_0x223f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F5Cu;
            // 0x223f60: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f5c) {
            ctx->pc = 0x223F78u;
            goto label_223f78;
        }
    }
    ctx->pc = 0x223F64u;
    // 0x223f64: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x223f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223f68: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x223f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x223f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223F70u;
    {
        const bool branch_taken_0x223f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F70u;
            // 0x223f74: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f70) {
            ctx->pc = 0x223F80u;
            goto label_223f80;
        }
    }
    ctx->pc = 0x223F78u;
label_223f78:
    // 0x223f78: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x223f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223f7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x223f7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_223f80:
    // 0x223f80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x223f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x223f84: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x223f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x223f88: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x223f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223f8c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x223f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223f90: 0x8ca5c658  lw          $a1, -0x39A8($a1)
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952536)));
    // 0x223f94: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x223f94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x223f98: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x223f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223f9c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x223f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223fa0: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x223fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x223fa4: 0x4be11128  vadd.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x223fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x223fa8: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x223fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223fac: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x223facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x223fb0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223fb4: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x223fb8: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x223fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x223fbc: 0x8e64d2ac  lw          $a0, -0x2D54($s3)
    ctx->pc = 0x223fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955692)));
    // 0x223fc0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x223fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x223fc4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x223fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x223fc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223fcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223fd0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223FD0u;
    {
        const bool branch_taken_0x223fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x223FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FD0u;
            // 0x223fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd0) {
            ctx->pc = 0x223FE0u;
            goto label_223fe0;
        }
    }
    ctx->pc = 0x223FD8u;
    // 0x223fd8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x223fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223fdc: 0x0  nop
    ctx->pc = 0x223fdcu;
    // NOP
label_223fe0:
    // 0x223fe0: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x223FE0u;
    {
        const bool branch_taken_0x223fe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fe0) {
            ctx->pc = 0x2240B0u;
            goto label_2240b0;
        }
    }
    ctx->pc = 0x223FE8u;
    // 0x223fe8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x223fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x223fec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223ff0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x223ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x223ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223ff8: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x223FF8u;
    {
        const bool branch_taken_0x223ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223ff8) {
            ctx->pc = 0x2240B0u;
            goto label_2240b0;
        }
    }
    ctx->pc = 0x224000u;
    // 0x224000: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x224000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x224004: 0xd8c10050  lqc2        $vf1, 0x50($a2)
    ctx->pc = 0x224004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x224008: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x224008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22400c: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x22400cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x224010: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x224010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224014: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x224014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x224018: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x224018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22401c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x22401cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x224020: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x224020u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x224024: 0x4a0003bf  vwaitq
    ctx->pc = 0x224024u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x224028: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x224028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22402c: 0x4a0002ff  vnop
    ctx->pc = 0x22402cu;
    // NOP operation, no action needed for VU0
    // 0x224030: 0x4a0002ff  vnop
    ctx->pc = 0x224030u;
    // NOP operation, no action needed for VU0
    // 0x224034: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x224034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x224038: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x224038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22403c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x22403cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x224040: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x224040u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x224044: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x224044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224048: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x224048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22404c: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x224050: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x224050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x224054: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x224054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224058: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x224058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22405c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x224060: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x224060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x224064: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x224064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224068: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x224068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22406c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x22406cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224070: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x224070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224074: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x224074u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x224078: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x224078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22407c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x22407cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x224080: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x224080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x224084: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x224084u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x224088: 0x4a0003bf  vwaitq
    ctx->pc = 0x224088u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x22408c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x22408cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x224090: 0x4a0002ff  vnop
    ctx->pc = 0x224090u;
    // NOP operation, no action needed for VU0
    // 0x224094: 0x4a0002ff  vnop
    ctx->pc = 0x224094u;
    // NOP operation, no action needed for VU0
    // 0x224098: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x224098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22409c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2240a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2240a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2240a4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2240a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2240a8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2240a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2240ac: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2240acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2240b0:
    // 0x2240b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2240b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2240b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2240b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2240b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2240b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240bc: 0xc088a68  jal         func_2229A0
    ctx->pc = 0x2240BCu;
    SET_GPR_U32(ctx, 31, 0x2240C4u);
    ctx->pc = 0x2240C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2240BCu;
            // 0x2240c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2229A0u;
    if (runtime->hasFunction(0x2229A0u)) {
        auto targetFn = runtime->lookupFunction(0x2229A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240C4u; }
        if (ctx->pc != 0x2240C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2229a0_0x222b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240C4u; }
        if (ctx->pc != 0x2240C4u) { return; }
    }
    ctx->pc = 0x2240C4u;
    // 0x2240c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2240c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2240c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2240c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2240cc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2240d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2240d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2240d4: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2240d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2240d8: 0x34421ff3  ori         $v0, $v0, 0x1FF3
    ctx->pc = 0x2240d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8179);
    // 0x2240dc: 0x34631ff0  ori         $v1, $v1, 0x1FF0
    ctx->pc = 0x2240dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8176);
    // 0x2240e0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2240e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2240e4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x2240e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2240e8: 0x3c060d33  lui         $a2, 0xD33
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3379 << 16));
    // 0x2240ec: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2240ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2240f0: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x2240f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x2240f4: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x2240f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x2240f8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x2240f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x2240fc: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x2240fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x224100: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x224100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x224104: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x224104u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x224108: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x224108u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x22410c: 0x24e73db0  addiu       $a3, $a3, 0x3DB0
    ctx->pc = 0x22410cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15792));
    // 0x224110: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224114: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x224114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x224118: 0x701134a9  por         $a2, $zero, $s1
    ctx->pc = 0x224118u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x22411c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x22411cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x224120: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x224120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x224124: 0xac5d0024  sw          $sp, 0x24($v0)
    ctx->pc = 0x224124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 29));
    // 0x224128: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x224128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x22412c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x22412cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x224130: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x224130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x224134: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x224134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x224138: 0xc047864  jal         func_11E190
    ctx->pc = 0x224138u;
    SET_GPR_U32(ctx, 31, 0x224140u);
    ctx->pc = 0x22413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224138u;
            // 0x22413c: 0xac500020  sw          $s0, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224140u; }
        if (ctx->pc != 0x224140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224140u; }
        if (ctx->pc != 0x224140u) { return; }
    }
    ctx->pc = 0x224140u;
    // 0x224140: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224140u;
    {
        const bool branch_taken_0x224140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224140) {
            ctx->pc = 0x224144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224140u;
            // 0x224144: 0xc6010040  lwc1        $f1, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x224158u;
            goto label_224158;
        }
    }
    ctx->pc = 0x224148u;
    // 0x224148: 0xc088b56  jal         func_222D58
    ctx->pc = 0x224148u;
    SET_GPR_U32(ctx, 31, 0x224150u);
    ctx->pc = 0x22414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224148u;
            // 0x22414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222D58u;
    if (runtime->hasFunction(0x222D58u)) {
        auto targetFn = runtime->lookupFunction(0x222D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224150u; }
        if (ctx->pc != 0x224150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222D58_0x222d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224150u; }
        if (ctx->pc != 0x224150u) { return; }
    }
    ctx->pc = 0x224150u;
    // 0x224150: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x224150u;
    {
        const bool branch_taken_0x224150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224150u;
            // 0x224154: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224150) {
            ctx->pc = 0x224194u;
            goto label_224194;
        }
    }
    ctx->pc = 0x224158u;
label_224158:
    // 0x224158: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x22415c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22415cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x224160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224168: 0x0  nop
    ctx->pc = 0x224168u;
    // NOP
    // 0x22416c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22416Cu;
    {
        const bool branch_taken_0x22416c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22416Cu;
            // 0x224170: 0x70112ca9  por         $a1, $zero, $s1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22416c) {
            ctx->pc = 0x224190u;
            goto label_224190;
        }
    }
    ctx->pc = 0x224174u;
    // 0x224174: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x224178: 0xc047864  jal         func_11E190
    ctx->pc = 0x224178u;
    SET_GPR_U32(ctx, 31, 0x224180u);
    ctx->pc = 0x22417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224178u;
            // 0x22417c: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224180u; }
        if (ctx->pc != 0x224180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224180u; }
        if (ctx->pc != 0x224180u) { return; }
    }
    ctx->pc = 0x224180u;
    // 0x224180: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x224180u;
    {
        const bool branch_taken_0x224180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224180) {
            ctx->pc = 0x224184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224180u;
            // 0x224184: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224194u;
            goto label_224194;
        }
    }
    ctx->pc = 0x224188u;
    // 0x224188: 0xc088b56  jal         func_222D58
    ctx->pc = 0x224188u;
    SET_GPR_U32(ctx, 31, 0x224190u);
    ctx->pc = 0x22418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224188u;
            // 0x22418c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222D58u;
    if (runtime->hasFunction(0x222D58u)) {
        auto targetFn = runtime->lookupFunction(0x222D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224190u; }
        if (ctx->pc != 0x224190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222D58_0x222d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224190u; }
        if (ctx->pc != 0x224190u) { return; }
    }
    ctx->pc = 0x224190u;
label_224190:
    // 0x224190: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x224190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_224194:
    // 0x224194: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x224194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x224198: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x22419c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x22419Cu;
    {
        const bool branch_taken_0x22419c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22419c) {
            ctx->pc = 0x2241A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22419Cu;
            // 0x2241a0: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x2241A4u;
    // 0x2241a4: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2241a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2241a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2241a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2241ac: 0x8e64d2ac  lw          $a0, -0x2D54($s3)
    ctx->pc = 0x2241acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955692)));
    // 0x2241b0: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x2241b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2241b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2241b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2241b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2241bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2241c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2241c4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2241C4u;
    {
        const bool branch_taken_0x2241c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2241C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241C4u;
            // 0x2241c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241c4) {
            ctx->pc = 0x2241D0u;
            goto label_2241d0;
        }
    }
    ctx->pc = 0x2241CCu;
    // 0x2241cc: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2241ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2241d0:
    // 0x2241d0: 0x5100001a  beql        $t0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2241D0u;
    {
        const bool branch_taken_0x2241d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2241d0) {
            ctx->pc = 0x2241D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2241D0u;
            // 0x2241d4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22423Cu;
            goto label_22423c;
        }
    }
    ctx->pc = 0x2241D8u;
    // 0x2241d8: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x2241d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2241dc: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2241DCu;
    {
        const bool branch_taken_0x2241dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241DCu;
            // 0x2241e0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241dc) {
            ctx->pc = 0x224238u;
            goto label_224238;
        }
    }
    ctx->pc = 0x2241E4u;
    // 0x2241e4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2241e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2241e8: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x2241e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x2241ec: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2241ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241f0: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x2241f0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x2241f4: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x2241f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2241f8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x2241f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x2241fc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2241fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224200: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x224200u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x224204: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x224204u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x224208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22420c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x22420cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x224210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224214: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x224214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224218: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x224218u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x22421c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x22421cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224220: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x224220u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x224224: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x224224u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x224228: 0xfce30068  sd          $v1, 0x68($a3)
    ctx->pc = 0x224228u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
    // 0x22422c: 0xc089c58  jal         func_227160
    ctx->pc = 0x22422Cu;
    SET_GPR_U32(ctx, 31, 0x224234u);
    ctx->pc = 0x224230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22422Cu;
            // 0x224230: 0x7a050010  lq          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227160u;
    if (runtime->hasFunction(0x227160u)) {
        auto targetFn = runtime->lookupFunction(0x227160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224234u; }
        if (ctx->pc != 0x224234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227160_0x2271b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224234u; }
        if (ctx->pc != 0x224234u) { return; }
    }
    ctx->pc = 0x224234u;
    // 0x224234: 0x0  nop
    ctx->pc = 0x224234u;
    // NOP
label_224238:
    // 0x224238: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x224238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_22423c:
    // 0x22423c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22423cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x224240: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x224240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224244: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x224244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x224248: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x224248u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x22424c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x22424cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x224250: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x224250u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x224254: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x224254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224258: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x224258u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x22425c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x22425cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x224260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224264: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x224264u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x224268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22426c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x22426cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224270: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x224270u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x224274: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x224274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224278: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x224278u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x22427c: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x22427cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x224280: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x224280u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_224284:
    // 0x224284: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x224284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_224288:
    // 0x224288: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x224288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22428c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x22428cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x224290: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x224290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x224294: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x224294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x224298: 0x3e00008  jr          $ra
    ctx->pc = 0x224298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224298u;
            // 0x22429c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C00u: goto label_223c00;
            case 0x223C58u: goto label_223c58;
            case 0x223C74u: goto label_223c74;
            case 0x223CF8u: goto label_223cf8;
            case 0x223D0Cu: goto label_223d0c;
            case 0x223D90u: goto label_223d90;
            case 0x223E48u: goto label_223e48;
            case 0x223E4Cu: goto label_223e4c;
            case 0x223E88u: goto label_223e88;
            case 0x223EA8u: goto label_223ea8;
            case 0x223EC0u: goto label_223ec0;
            case 0x223F18u: goto label_223f18;
            case 0x223F38u: goto label_223f38;
            case 0x223F78u: goto label_223f78;
            case 0x223F80u: goto label_223f80;
            case 0x223FE0u: goto label_223fe0;
            case 0x2240B0u: goto label_2240b0;
            case 0x224158u: goto label_224158;
            case 0x224190u: goto label_224190;
            case 0x224194u: goto label_224194;
            case 0x2241D0u: goto label_2241d0;
            case 0x224238u: goto label_224238;
            case 0x22423Cu: goto label_22423c;
            case 0x224284u: goto label_224284;
            case 0x224288u: goto label_224288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2242A0u;
}

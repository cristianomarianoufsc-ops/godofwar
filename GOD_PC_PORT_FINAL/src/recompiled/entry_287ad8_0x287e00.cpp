#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_287ad8
// Address: 0x287ad8 - 0x287e00
void entry_287ad8_0x287e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_287ad8_0x287e00");
#endif

    ctx->pc = 0x287ad8u;

    // 0x287ad8: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x287ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x287adc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x287adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ae0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x287ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x287ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287ae8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x287ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x287aec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x287AECu;
    {
        const bool branch_taken_0x287aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AECu;
            // 0x287af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287aec) {
            ctx->pc = 0x287B50u;
            goto label_287b50;
        }
    }
    ctx->pc = 0x287AF4u;
    // 0x287af4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x287af8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287afc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x287afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x287b00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287B00u;
    {
        const bool branch_taken_0x287b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B00u;
            // 0x287b04: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b00) {
            ctx->pc = 0x287B10u;
            goto label_287b10;
        }
    }
    ctx->pc = 0x287B08u;
    // 0x287b08: 0x3e00008  jr          $ra
    ctx->pc = 0x287B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B08u;
            // 0x287b0c: 0xc440587c  lwc1        $f0, 0x587C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287B10u;
label_287b10:
    // 0x287b10: 0x4e10009  bgez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x287B10u;
    {
        const bool branch_taken_0x287b10 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x287B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B10u;
            // 0x287b14: 0x2408ffe7  addiu       $t0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b10) {
            ctx->pc = 0x287B38u;
            goto label_287b38;
        }
    }
    ctx->pc = 0x287B18u;
    // 0x287b18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x287b18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287b1c: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x287b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x287b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287b24: 0x0  nop
    ctx->pc = 0x287b24u;
    // NOP
    // 0x287b28: 0x0  nop
    ctx->pc = 0x287b28u;
    // NOP
    // 0x287b2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x287b2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x287b30: 0x3e00008  jr          $ra
    ctx->pc = 0x287B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287B38u;
label_287b38:
    // 0x287b38: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x287b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x287b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287b40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x287b40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287b44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x287b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287b48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x287b48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x287b4c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x287b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287b50:
    // 0x287b50: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x287b54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287b58: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x287b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x287b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287B5Cu;
    {
        const bool branch_taken_0x287b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B5Cu;
            // 0x287b60: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b5c) {
            ctx->pc = 0x287B70u;
            goto label_287b70;
        }
    }
    ctx->pc = 0x287B64u;
    // 0x287b64: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x287b64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287b68: 0x3e00008  jr          $ra
    ctx->pc = 0x287B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B68u;
            // 0x287b6c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287B70u;
label_287b70:
    // 0x287b70: 0x735c3  sra         $a2, $a3, 23
    ctx->pc = 0x287b70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 23));
    // 0x287b74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x287b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x287b78: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x287b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x287b7c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x287b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x287b80: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x287b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x287b84: 0x2502ff81  addiu       $v0, $t0, -0x7F
    ctx->pc = 0x287b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
    // 0x287b88: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x287b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287b8c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x287b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x287b90: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x287b94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x287b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x287b98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x287b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x287b9c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x287b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x287ba0: 0xe22025  or          $a0, $a3, $v0
    ctx->pc = 0x287ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x287ba4: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x287ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287bb0: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x287bb4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x287bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287bb8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x287bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x287bbc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x287bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x287bc0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x287bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x287bc4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x287BC4u;
    {
        const bool branch_taken_0x287bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287BC4u;
            // 0x287bc8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bc4) {
            ctx->pc = 0x287C7Cu;
            goto label_287c7c;
        }
    }
    ctx->pc = 0x287BCCu;
    // 0x287bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287bd0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x287bd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287bd4: 0x0  nop
    ctx->pc = 0x287bd4u;
    // NOP
    // 0x287bd8: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x287BD8u;
    {
        const bool branch_taken_0x287bd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287bd8) {
            ctx->pc = 0x287BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287BD8u;
            // 0x287bdc: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287BE0u;
    // 0x287be0: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x287BE0u;
    {
        const bool branch_taken_0x287be0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x287be0) {
            ctx->pc = 0x287DF4u;
            goto label_287df4;
        }
    }
    ctx->pc = 0x287BE8u;
    // 0x287be8: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x287be8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x287bec: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x287becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x287bf0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x287bf4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x287bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287bfc: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x287c00: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x287c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c08: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x287c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x287c0c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x287c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x287c10: 0x3e00008  jr          $ra
    ctx->pc = 0x287C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C10u;
            // 0x287c14: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x287c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x287c1c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x287c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x287c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x287c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287c2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x287c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x287c30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x287c30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287c34: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287C34u;
    {
        const bool branch_taken_0x287c34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C34u;
            // 0x287c38: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c34) {
            ctx->pc = 0x287C44u;
            goto label_287c44;
        }
    }
    ctx->pc = 0x287C3Cu;
    // 0x287c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x287C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C3Cu;
            // 0x287c40: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287C44u;
label_287c44:
    // 0x287c44: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x287c44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x287c48: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x287c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x287c4c: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x287c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x287c50: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x287c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x287c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c58: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x287c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x287c5c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x287c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x287c60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287c64: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x287c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x287c68: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x287c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x287c6c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x287c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x287c70: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x287c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x287c74: 0x3e00008  jr          $ra
    ctx->pc = 0x287C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C74u;
            // 0x287c78: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287C7Cu;
label_287c7c:
    // 0x287c7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x287c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x287c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c84: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x287c88: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x287c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x287c8c: 0x34218897  ori         $at, $at, 0x8897
    ctx->pc = 0x287c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34967);
    // 0x287c90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287c94: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x287c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x287c98: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x287c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x287c9c: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x287c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x287ca0: 0x34213325  ori         $at, $at, 0x3325
    ctx->pc = 0x287ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13093);
    // 0x287ca4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x287ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x287ca8: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x287cac: 0x3421d04f  ori         $at, $at, 0xD04F
    ctx->pc = 0x287cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53327);
    // 0x287cb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287cb4: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x287cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x287cb8: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x287cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x287cbc: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x287cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x287cc0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287cc4: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x287cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x287cc8: 0x0  nop
    ctx->pc = 0x287cc8u;
    // NOP
    // 0x287ccc: 0x0  nop
    ctx->pc = 0x287cccu;
    // NOP
    // 0x287cd0: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x287cd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[10] = ctx->f[12] / ctx->f[0];
    // 0x287cd4: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x287cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x287cd8: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x287cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x287cdc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x287cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x287ce0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x287ce4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x287ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x287ce8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x287ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x287cec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x287cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x287cf0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x287cf4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x287cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x287cf8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x287cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x287cfc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287d00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287d04: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x287d04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x287d08: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x287d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x287d0c: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x287d0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x287d10: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x287d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x287d14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x287d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287d18: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x287d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287d1c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x287d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x287d20: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x287d20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x287d24: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x287d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287d28: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x287d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287d2c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x287d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x287d30: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x287d30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x287d34: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x287d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287d38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x287d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287d3c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x287d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x287d40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x287d40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x287d44: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x287D44u;
    {
        const bool branch_taken_0x287d44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x287D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D44u;
            // 0x287d48: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d44) {
            ctx->pc = 0x287DB0u;
            goto label_287db0;
        }
    }
    ctx->pc = 0x287D4Cu;
    // 0x287d4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x287d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x287d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287d54: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x287d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x287d58: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287D58u;
    {
        const bool branch_taken_0x287d58 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D58u;
            // 0x287d5c: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d58) {
            ctx->pc = 0x287D74u;
            goto label_287d74;
        }
    }
    ctx->pc = 0x287D60u;
    // 0x287d60: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x287d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x287d64: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x287d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x287d68: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x287d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x287d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x287D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D6Cu;
            // 0x287d70: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287D74u;
label_287d74:
    // 0x287d74: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x287d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x287d78: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x287d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x287d7c: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x287d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x287d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287d84: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x287d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x287d88: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x287d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x287d8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287d90: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x287d90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x287d94: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x287d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x287d98: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x287d98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x287d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287da0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x287da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x287da4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x287da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x287da8: 0x3e00008  jr          $ra
    ctx->pc = 0x287DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DA8u;
            // 0x287dac: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287DB0u;
label_287db0:
    // 0x287db0: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287DB0u;
    {
        const bool branch_taken_0x287db0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DB0u;
            // 0x287db4: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287db0) {
            ctx->pc = 0x287DC4u;
            goto label_287dc4;
        }
    }
    ctx->pc = 0x287DB8u;
    // 0x287db8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x287db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x287dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x287DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DBCu;
            // 0x287dc0: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287DC4u;
label_287dc4:
    // 0x287dc4: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x287dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x287dc8: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x287dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x287dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287dd0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x287dd4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x287dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x287dd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287ddc: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x287ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x287de0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x287de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x287de4: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x287de4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x287de8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287dec: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x287decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x287df0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x287df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_287df4:
    // 0x287df4: 0x3e00008  jr          $ra
    ctx->pc = 0x287DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287B10u: goto label_287b10;
            case 0x287B38u: goto label_287b38;
            case 0x287B50u: goto label_287b50;
            case 0x287B70u: goto label_287b70;
            case 0x287C18u: goto label_287c18;
            case 0x287C44u: goto label_287c44;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287D74u: goto label_287d74;
            case 0x287DB0u: goto label_287db0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DF4u: goto label_287df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287DFCu;
    // 0x287dfc: 0x0  nop
    ctx->pc = 0x287dfcu;
    // NOP
}

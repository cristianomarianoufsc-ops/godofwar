#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143b38
// Address: 0x143b38 - 0x143c08
void entry_143b38_0x143c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143b38_0x143c08");
#endif

    ctx->pc = 0x143b38u;

    // 0x143b38: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x143b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x143b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143b48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x143b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143b4c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x143b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x143b50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x143B50u;
    {
        const bool branch_taken_0x143b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x143B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B50u;
            // 0x143b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b50) {
            ctx->pc = 0x143B88u;
            goto label_143b88;
        }
    }
    ctx->pc = 0x143B58u;
    // 0x143b58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x143b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x143b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x143B60u;
    {
        const bool branch_taken_0x143b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B60u;
            // 0x143b64: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b60) {
            ctx->pc = 0x143B88u;
            goto label_143b88;
        }
    }
    ctx->pc = 0x143B68u;
label_143b68:
    // 0x143b68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x143b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x143b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143b70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x143b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143b74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x143b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143b78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x143b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x143b7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x143b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x143b80: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x143b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b84: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x143b84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_143b88:
    // 0x143b88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143B88u;
    {
        const bool branch_taken_0x143b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B88u;
            // 0x143b8c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b88) {
            ctx->pc = 0x143B98u;
            goto label_143b98;
        }
    }
    ctx->pc = 0x143B90u;
    // 0x143b90: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143B90u;
    {
        const bool branch_taken_0x143b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x143B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B90u;
            // 0x143b94: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b90) {
            ctx->pc = 0x143B68u;
            runtime->cooperativeGuestYield();
            goto label_143b68;
        }
    }
    ctx->pc = 0x143B98u;
label_143b98:
    // 0x143b98: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b9c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x143ba0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x143BA0u;
    {
        const bool branch_taken_0x143ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143ba0) {
            ctx->pc = 0x143BF0u;
            goto label_143bf0;
        }
    }
    ctx->pc = 0x143BA8u;
    // 0x143ba8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x143ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x143bac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x143bacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bb0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143BB0u;
    {
        const bool branch_taken_0x143bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143bb0) {
            ctx->pc = 0x143BE0u;
            goto label_143be0;
        }
    }
    ctx->pc = 0x143BB8u;
label_143bb8:
    // 0x143bb8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x143bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143bbc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x143bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x143bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143bc4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x143bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x143bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x143bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x143bcc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x143bd0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x143bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143bd4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x143bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bd8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x143BD8u;
    {
        const bool branch_taken_0x143bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BD8u;
            // 0x143bdc: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bd8) {
            ctx->pc = 0x143BB8u;
            runtime->cooperativeGuestYield();
            goto label_143bb8;
        }
    }
    ctx->pc = 0x143BE0u;
label_143be0:
    // 0x143be0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x143be0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143be8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x143be8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x143bec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x143becu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_143bf0:
    // 0x143bf0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x143BF0u;
    {
        const bool branch_taken_0x143bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BF0u;
            // 0x143bf4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bf0) {
            ctx->pc = 0x143BFCu;
            goto label_143bfc;
        }
    }
    ctx->pc = 0x143BF8u;
    // 0x143bf8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143bf8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143bfc:
    // 0x143bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x143BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143B68u: goto label_143b68;
            case 0x143B88u: goto label_143b88;
            case 0x143B98u: goto label_143b98;
            case 0x143BB8u: goto label_143bb8;
            case 0x143BE0u: goto label_143be0;
            case 0x143BF0u: goto label_143bf0;
            case 0x143BFCu: goto label_143bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143C04u;
    // 0x143c04: 0x0  nop
    ctx->pc = 0x143c04u;
    // NOP
}

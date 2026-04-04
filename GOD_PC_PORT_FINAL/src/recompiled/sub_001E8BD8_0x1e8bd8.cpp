#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8BD8
// Address: 0x1e8bd8 - 0x1e8d00
void sub_001E8BD8_0x1e8bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8BD8_0x1e8bd8");
#endif

    ctx->pc = 0x1e8bd8u;

    // 0x1e8bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8bdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8be0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e8be4: 0x3463fcff  ori         $v1, $v1, 0xFCFF
    ctx->pc = 0x1e8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64767);
    // 0x1e8be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8bf4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1e8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1e8bf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8bfc: 0x3c05ffef  lui         $a1, 0xFFEF
    ctx->pc = 0x1e8bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
    // 0x1e8c00: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1e8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e8c04: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e8c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e8c08: 0x8e070174  lw          $a3, 0x174($s0)
    ctx->pc = 0x1e8c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8c0c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1e8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8c10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1e8c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e8c14: 0x34c6f800  ori         $a2, $a2, 0xF800
    ctx->pc = 0x1e8c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63488);
    // 0x1e8c18: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1e8c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e8c1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8c20: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x1e8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x1e8c24: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e8c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e8c28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8c2c: 0x3463efff  ori         $v1, $v1, 0xEFFF
    ctx->pc = 0x1e8c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61439);
    // 0x1e8c30: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1e8c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e8c34: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8c38: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1e8c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1e8c3c: 0x34a5fff7  ori         $a1, $a1, 0xFFF7
    ctx->pc = 0x1e8c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65527);
    // 0x1e8c40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8c44: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e8c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e8c48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1e8c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1e8c4c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x1e8c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1e8c50: 0x3c015511  lui         $at, 0x5511
    ctx->pc = 0x1e8c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21777 << 16));
    // 0x1e8c54: 0x342184e7  ori         $at, $at, 0x84E7
    ctx->pc = 0x1e8c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34023);
    // 0x1e8c58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c5c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1e8c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e8c60: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x1e8c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x1e8c64: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e8c68: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1e8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1e8c6c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1e8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1e8c70: 0xae070174  sw          $a3, 0x174($s0)
    ctx->pc = 0x1e8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 7));
    // 0x1e8c74: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1e8c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1e8c78: 0xa46200e0  sh          $v0, 0xE0($v1)
    ctx->pc = 0x1e8c78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8c7c: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e8c80: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e8c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8C84u;
    {
        const bool branch_taken_0x1e8c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C84u;
            // 0x1e8c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c84) {
            ctx->pc = 0x1E8CA0u;
            goto label_1e8ca0;
        }
    }
    ctx->pc = 0x1E8C8Cu;
    // 0x1e8c8c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C94u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C94u; }
        if (ctx->pc != 0x1E8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C94u; }
        if (ctx->pc != 0x1E8C94u) { return; }
    }
    ctx->pc = 0x1E8C94u;
    // 0x1e8c94: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1e8c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1e8c98: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1e8c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1e8c9c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1e8c9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e8ca0:
    // 0x1e8ca0: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8CA0u;
    {
        const bool branch_taken_0x1e8ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ca0) {
            ctx->pc = 0x1E8CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CA0u;
            // 0x1e8ca4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CECu;
            goto label_1e8cec;
        }
    }
    ctx->pc = 0x1E8CA8u;
    // 0x1e8ca8: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e8cac: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e8cb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8CB0u;
    {
        const bool branch_taken_0x1e8cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CB0u;
            // 0x1e8cb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cb0) {
            ctx->pc = 0x1E8CD8u;
            goto label_1e8cd8;
        }
    }
    ctx->pc = 0x1E8CB8u;
    // 0x1e8cb8: 0xc090d58  jal         func_243560
    ctx->pc = 0x1E8CB8u;
    SET_GPR_U32(ctx, 31, 0x1E8CC0u);
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CC0u; }
        if (ctx->pc != 0x1E8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CC0u; }
        if (ctx->pc != 0x1E8CC0u) { return; }
    }
    ctx->pc = 0x1E8CC0u;
    // 0x1e8cc0: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x1e8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ccc: 0x0  nop
    ctx->pc = 0x1e8cccu;
    // NOP
    // 0x1e8cd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8CD0u;
    {
        const bool branch_taken_0x1e8cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8cd0) {
            ctx->pc = 0x1E8CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CD0u;
            // 0x1e8cd4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CD8u;
            goto label_1e8cd8;
        }
    }
    ctx->pc = 0x1E8CD8u;
label_1e8cd8:
    // 0x1e8cd8: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8CD8u;
    {
        const bool branch_taken_0x1e8cd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cd8) {
            ctx->pc = 0x1E8CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CD8u;
            // 0x1e8cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CECu;
            goto label_1e8cec;
        }
    }
    ctx->pc = 0x1E8CE0u;
    // 0x1e8ce0: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1E8CE0u;
    SET_GPR_U32(ctx, 31, 0x1E8CE8u);
    ctx->pc = 0x1E8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CE0u;
            // 0x1e8ce4: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    }
    ctx->pc = 0x1E8CE8u;
    // 0x1e8ce8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8cec:
    // 0x1e8cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CF4u;
            // 0x1e8cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8CA0u: goto label_1e8ca0;
            case 0x1E8CD8u: goto label_1e8cd8;
            case 0x1E8CECu: goto label_1e8cec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8CFCu;
    // 0x1e8cfc: 0x0  nop
    ctx->pc = 0x1e8cfcu;
    // NOP
}

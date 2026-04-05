#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122B00
// Address: 0x122b00 - 0x122c58
void sub_00122B00_0x122b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122B00_0x122b00");
#endif

    ctx->pc = 0x122b00u;

    // 0x122b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122b04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x122b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x122b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122b14: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x122b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x122b18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x122b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x122b1c: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x122b20: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x122b24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x122B24u;
    {
        const bool branch_taken_0x122b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b24) {
            ctx->pc = 0x122B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122B24u;
            // 0x122b28: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122B3Cu;
            goto label_122b3c;
        }
    }
    ctx->pc = 0x122B2Cu;
    // 0x122b2c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x122b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x122b30: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x122b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x122b34: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x122b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x122b38: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x122b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_122b3c:
    // 0x122b3c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x122B3Cu;
    {
        const bool branch_taken_0x122b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B3Cu;
            // 0x122b40: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b3c) {
            ctx->pc = 0x122B9Cu;
            goto label_122b9c;
        }
    }
    ctx->pc = 0x122B44u;
    // 0x122b44: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x122b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x122b48: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x122b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x122b4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x122b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x122b50: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x122B50u;
    {
        const bool branch_taken_0x122b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B50u;
            // 0x122b54: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b50) {
            ctx->pc = 0x122B84u;
            goto label_122b84;
        }
    }
    ctx->pc = 0x122B58u;
    // 0x122b58: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x122b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x122b5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x122b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x122b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122b64: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x122b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x122b68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122B68u;
    {
        const bool branch_taken_0x122b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B68u;
            // 0x122b6c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b68) {
            ctx->pc = 0x122B78u;
            goto label_122b78;
        }
    }
    ctx->pc = 0x122B70u;
    // 0x122b70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122B70u;
    {
        const bool branch_taken_0x122b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B70u;
            // 0x122b74: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b70) {
            ctx->pc = 0x122B7Cu;
            goto label_122b7c;
        }
    }
    ctx->pc = 0x122B78u;
label_122b78:
    // 0x122b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122b7c:
    // 0x122b7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x122B7Cu;
    {
        const bool branch_taken_0x122b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b7c) {
            ctx->pc = 0x122B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122B7Cu;
            // 0x122b80: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122B94u;
            goto label_122b94;
        }
    }
    ctx->pc = 0x122B84u;
label_122b84:
    // 0x122b84: 0xc048aac  jal         func_122AB0
    ctx->pc = 0x122B84u;
    SET_GPR_U32(ctx, 31, 0x122B8Cu);
    ctx->pc = 0x122AB0u;
    if (runtime->hasFunction(0x122AB0u)) {
        auto targetFn = runtime->lookupFunction(0x122AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122B8Cu; }
        if (ctx->pc != 0x122B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122AB0_0x122ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122B8Cu; }
        if (ctx->pc != 0x122B8Cu) { return; }
    }
    ctx->pc = 0x122B8Cu;
    // 0x122b8c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x122b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x122b90: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x122b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_122b94:
    // 0x122b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122B94u;
    {
        const bool branch_taken_0x122b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B94u;
            // 0x122b98: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b94) {
            ctx->pc = 0x122BA8u;
            goto label_122ba8;
        }
    }
    ctx->pc = 0x122B9Cu;
label_122b9c:
    // 0x122b9c: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x122b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x122ba0: 0xc04bbac  jal         func_12EEB0
    ctx->pc = 0x122BA0u;
    SET_GPR_U32(ctx, 31, 0x122BA8u);
    ctx->pc = 0x122BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122BA0u;
            // 0x122ba4: 0xc44cc658  lwc1        $f12, -0x39A8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEB0u;
    if (runtime->hasFunction(0x12EEB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BA8u; }
        if (ctx->pc != 0x122BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12eeb0_0x12eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BA8u; }
        if (ctx->pc != 0x122BA8u) { return; }
    }
    ctx->pc = 0x122BA8u;
label_122ba8:
    // 0x122ba8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x122ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x122bac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x122bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x122bb0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x122bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122bb4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x122bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122bb8: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x122bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x122bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122bc0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x122bc4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x122bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x122bc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122BC8u;
    {
        const bool branch_taken_0x122bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BC8u;
            // 0x122bcc: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bc8) {
            ctx->pc = 0x122BDCu;
            goto label_122bdc;
        }
    }
    ctx->pc = 0x122BD0u;
    // 0x122bd0: 0xc048a44  jal         func_122910
    ctx->pc = 0x122BD0u;
    SET_GPR_U32(ctx, 31, 0x122BD8u);
    ctx->pc = 0x122BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122BD0u;
            // 0x122bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122910u;
    if (runtime->hasFunction(0x122910u)) {
        auto targetFn = runtime->lookupFunction(0x122910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BD8u; }
        if (ctx->pc != 0x122BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122910_0x122910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BD8u; }
        if (ctx->pc != 0x122BD8u) { return; }
    }
    ctx->pc = 0x122BD8u;
    // 0x122bd8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x122bd8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_122bdc:
    // 0x122bdc: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x122bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122be0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x122be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x122be4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x122be8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x122be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x122bec: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x122becu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122bf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x122bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x122bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x122bf8: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x122BF8u;
    {
        const bool branch_taken_0x122bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BF8u;
            // 0x122bfc: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bf8) {
            ctx->pc = 0x122C38u;
            goto label_122c38;
        }
    }
    ctx->pc = 0x122C00u;
    // 0x122c00: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x122c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x122c04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x122c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x122c08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x122C08u;
    {
        const bool branch_taken_0x122c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C08u;
            // 0x122c0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c08) {
            ctx->pc = 0x122C3Cu;
            goto label_122c3c;
        }
    }
    ctx->pc = 0x122C10u;
    // 0x122c10: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x122c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x122c14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x122C14u;
    {
        const bool branch_taken_0x122c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122c14) {
            ctx->pc = 0x122C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122C14u;
            // 0x122c18: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122C28u;
            goto label_122c28;
        }
    }
    ctx->pc = 0x122C1Cu;
    // 0x122c1c: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x122C1Cu;
    SET_GPR_U32(ctx, 31, 0x122C24u);
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122C24u; }
        if (ctx->pc != 0x122C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12ed00_0x12ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122C24u; }
        if (ctx->pc != 0x122C24u) { return; }
    }
    ctx->pc = 0x122C24u;
    // 0x122c24: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x122c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_122c28:
    // 0x122c28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x122c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x122c2c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x122c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x122c30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122c34: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x122c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_122c38:
    // 0x122c38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x122c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122c3c:
    // 0x122c3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x122c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c48: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x122c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x122C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C4Cu;
            // 0x122c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B84u: goto label_122b84;
            case 0x122B94u: goto label_122b94;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122C28u: goto label_122c28;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122C54u;
    // 0x122c54: 0x0  nop
    ctx->pc = 0x122c54u;
    // NOP
}

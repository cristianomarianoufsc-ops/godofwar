#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203AE8
// Address: 0x203ae8 - 0x203df8
void sub_00203AE8_0x203ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203AE8_0x203ae8");
#endif

    ctx->pc = 0x203ae8u;

    // 0x203ae8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x203aec: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x203aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x203af0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x203af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x203af4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x203af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203af8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x203af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x203afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x203b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x203b04: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x203b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x203b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x203b0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x203b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b10: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x203b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x203b14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x203b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b18: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x203b18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x203b1c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x203b1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b20: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x203b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x203b24: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x203b24u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x203b28: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x203b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x203b2c: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x203b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x203b30: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x203b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x203b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x203b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203b38: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x203b38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x203b3c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x203b3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x203b40: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x203B40u;
    {
        const bool branch_taken_0x203b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B40u;
            // 0x203b44: 0x7fa80000  sq          $t0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b40) {
            ctx->pc = 0x203B9Cu;
            goto label_203b9c;
        }
    }
    ctx->pc = 0x203B48u;
    // 0x203b48: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x203b4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203B4Cu;
    {
        const bool branch_taken_0x203b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B4Cu;
            // 0x203b50: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b4c) {
            ctx->pc = 0x203B6Cu;
            goto label_203b6c;
        }
    }
    ctx->pc = 0x203B54u;
    // 0x203b54: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x203b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x203b58: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x203b5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203B5Cu;
    {
        const bool branch_taken_0x203b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B5Cu;
            // 0x203b60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b5c) {
            ctx->pc = 0x203B70u;
            goto label_203b70;
        }
    }
    ctx->pc = 0x203B64u;
    // 0x203b64: 0xc081522  jal         func_205488
    ctx->pc = 0x203B64u;
    SET_GPR_U32(ctx, 31, 0x203B6Cu);
    ctx->pc = 0x203B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203B64u;
            // 0x203b68: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B6Cu; }
        if (ctx->pc != 0x203B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B6Cu; }
        if (ctx->pc != 0x203B6Cu) { return; }
    }
    ctx->pc = 0x203B6Cu;
label_203b6c:
    // 0x203b6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x203b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b70:
    // 0x203b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b74: 0xc090d5c  jal         func_243570
    ctx->pc = 0x203B74u;
    SET_GPR_U32(ctx, 31, 0x203B7Cu);
    ctx->pc = 0x203B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203B74u;
            // 0x203b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B7Cu; }
        if (ctx->pc != 0x203B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B7Cu; }
        if (ctx->pc != 0x203B7Cu) { return; }
    }
    ctx->pc = 0x203B7Cu;
    // 0x203b7c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203B7Cu;
    {
        const bool branch_taken_0x203b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203b7c) {
            ctx->pc = 0x203B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203B7Cu;
            // 0x203b80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203B94u;
            goto label_203b94;
        }
    }
    ctx->pc = 0x203B84u;
    // 0x203b84: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x203B84u;
    SET_GPR_U32(ctx, 31, 0x203B8Cu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B8Cu; }
        if (ctx->pc != 0x203B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B8Cu; }
        if (ctx->pc != 0x203B8Cu) { return; }
    }
    ctx->pc = 0x203B8Cu;
    // 0x203b8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x203B8Cu;
    {
        const bool branch_taken_0x203b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203b8c) {
            ctx->pc = 0x203B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203B8Cu;
            // 0x203b90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203B94u;
            goto label_203b94;
        }
    }
    ctx->pc = 0x203B94u;
label_203b94:
    // 0x203b94: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x203B94u;
    {
        const bool branch_taken_0x203b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x203b94) {
            ctx->pc = 0x203BB8u;
            goto label_203bb8;
        }
    }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x203ba0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x203ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203ba4: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x203ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203ba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x203ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203bac: 0x0  nop
    ctx->pc = 0x203bacu;
    // NOP
    // 0x203bb0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x203BB0u;
    {
        const bool branch_taken_0x203bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x203bb0) {
            ctx->pc = 0x203BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203BB0u;
            // 0x203bb4: 0x8e220174  lw          $v0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203BC4u;
            goto label_203bc4;
        }
    }
    ctx->pc = 0x203BB8u;
label_203bb8:
    // 0x203bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203bbc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x203BBCu;
    {
        const bool branch_taken_0x203bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BBCu;
            // 0x203bc0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bbc) {
            ctx->pc = 0x203DC0u;
            goto label_203dc0;
        }
    }
    ctx->pc = 0x203BC4u;
label_203bc4:
    // 0x203bc4: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203BC4u;
    {
        const bool branch_taken_0x203bc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BC4u;
            // 0x203bc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bc4) {
            ctx->pc = 0x203C0Cu;
            goto label_203c0c;
        }
    }
    ctx->pc = 0x203BCCu;
    // 0x203bcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203bd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x203bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203bd4: 0xc090c5c  jal         func_243170
    ctx->pc = 0x203BD4u;
    SET_GPR_U32(ctx, 31, 0x203BDCu);
    ctx->pc = 0x203BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203BD4u;
            // 0x203bd8: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BDCu; }
        if (ctx->pc != 0x203BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BDCu; }
        if (ctx->pc != 0x203BDCu) { return; }
    }
    ctx->pc = 0x203BDCu;
    // 0x203bdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203BDCu;
    {
        const bool branch_taken_0x203bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BDCu;
            // 0x203be0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bdc) {
            ctx->pc = 0x203C08u;
            goto label_203c08;
        }
    }
    ctx->pc = 0x203BE4u;
    // 0x203be4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x203be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x203be8: 0x90432d3d  lbu         $v1, 0x2D3D($v0)
    ctx->pc = 0x203be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x203bec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x203bf0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x203bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203bf4: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x203bf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203bfc: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x203bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203c00: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x203c00u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x203c04: 0x0  nop
    ctx->pc = 0x203c04u;
    // NOP
label_203c08:
    // 0x203c08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203c0c:
    // 0x203c0c: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x203c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x203c10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203C10u;
    {
        const bool branch_taken_0x203c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C10u;
            // 0x203c14: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c10) {
            ctx->pc = 0x203C44u;
            goto label_203c44;
        }
    }
    ctx->pc = 0x203C18u;
    // 0x203c18: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x203c1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x203c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203c20: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x203c24: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x203c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x203c28: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x203c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x203c2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x203C2Cu;
    {
        const bool branch_taken_0x203c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c2c) {
            ctx->pc = 0x203C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203C2Cu;
            // 0x203c30: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203C48u;
            goto label_203c48;
        }
    }
    ctx->pc = 0x203C34u;
    // 0x203c34: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x203c38: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x203c3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203C3Cu;
    {
        const bool branch_taken_0x203c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c3c) {
            ctx->pc = 0x203C64u;
            goto label_203c64;
        }
    }
    ctx->pc = 0x203C44u;
label_203c44:
    // 0x203c44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_203c48:
    // 0x203c48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x203c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x203c4c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x203c4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c50: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x203c50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x203c54: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x203c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x203c58: 0x40f809  jalr        $v0
    ctx->pc = 0x203C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203C60u);
        ctx->pc = 0x203C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C58u;
            // 0x203c5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203C60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203B6Cu: goto label_203b6c;
            case 0x203B70u: goto label_203b70;
            case 0x203B94u: goto label_203b94;
            case 0x203B9Cu: goto label_203b9c;
            case 0x203BB8u: goto label_203bb8;
            case 0x203BC4u: goto label_203bc4;
            case 0x203C08u: goto label_203c08;
            case 0x203C0Cu: goto label_203c0c;
            case 0x203C44u: goto label_203c44;
            case 0x203C48u: goto label_203c48;
            case 0x203C64u: goto label_203c64;
            case 0x203CC4u: goto label_203cc4;
            case 0x203CDCu: goto label_203cdc;
            case 0x203CFCu: goto label_203cfc;
            case 0x203D0Cu: goto label_203d0c;
            case 0x203DB0u: goto label_203db0;
            case 0x203DBCu: goto label_203dbc;
            case 0x203DC0u: goto label_203dc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203C60u; }
            if (ctx->pc != 0x203C60u) { return; }
        }
        }
    }
    ctx->pc = 0x203C60u;
    // 0x203c60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203c64:
    // 0x203c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c68: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x203c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203c6c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x203c6cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x203c70: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x203c70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x203c74: 0x4600b028  max.s       $f0, $f22, $f0
    ctx->pc = 0x203c74u;
    ctx->f[0] = std::max(ctx->f[22], ctx->f[0]);
    // 0x203c78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x203c78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x203c7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x203c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x203c80: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x203c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x203c84: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x203c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x203c88: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x203c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x203c8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c90: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203C90u;
            // 0x203c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C98u; }
        if (ctx->pc != 0x203C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C98u; }
        if (ctx->pc != 0x203C98u) { return; }
    }
    ctx->pc = 0x203C98u;
    // 0x203c98: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x203c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203ca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x203ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203ca4: 0x0  nop
    ctx->pc = 0x203ca4u;
    // NOP
    // 0x203ca8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CA8u;
            // 0x203cac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CC4u;
            goto label_203cc4;
        }
    }
    ctx->pc = 0x203CB0u;
    // 0x203cb0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cb4: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x203cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x203CBCu;
    {
        const bool branch_taken_0x203cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CBCu;
            // 0x203cc0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cbc) {
            ctx->pc = 0x203CFCu;
            goto label_203cfc;
        }
    }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x203CC4u;
    {
        const bool branch_taken_0x203cc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CC4u;
            // 0x203cc8: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cc4) {
            ctx->pc = 0x203CDCu;
            goto label_203cdc;
        }
    }
    ctx->pc = 0x203CCCu;
    // 0x203ccc: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x203cccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x203CD4u;
    {
        const bool branch_taken_0x203cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CD4u;
            // 0x203cd8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd4) {
            ctx->pc = 0x203CFCu;
            goto label_203cfc;
        }
    }
    ctx->pc = 0x203CDCu;
label_203cdc:
    // 0x203cdc: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x203cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x203ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x203ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x203ce4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CE4u;
            // 0x203ce8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D0Cu;
            goto label_203d0c;
        }
    }
    ctx->pc = 0x203CECu;
    // 0x203cec: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cf0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x203cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cf8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x203cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_203cfc:
    // 0x203cfc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x203cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203d00: 0xc082146  jal         func_208518
    ctx->pc = 0x203D00u;
    SET_GPR_U32(ctx, 31, 0x203D08u);
    ctx->pc = 0x203D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203D00u;
            // 0x203d04: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203D08u; }
        if (ctx->pc != 0x203D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203D08u; }
        if (ctx->pc != 0x203D08u) { return; }
    }
    ctx->pc = 0x203D08u;
    // 0x203d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x203d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203d0c:
    // 0x203d0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x203d10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203d14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x203d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x203d18: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x203d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x203d1c: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x203d20: 0x40f809  jalr        $v0
    ctx->pc = 0x203D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203D28u);
        ctx->pc = 0x203D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D20u;
            // 0x203d24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203D28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203B6Cu: goto label_203b6c;
            case 0x203B70u: goto label_203b70;
            case 0x203B94u: goto label_203b94;
            case 0x203B9Cu: goto label_203b9c;
            case 0x203BB8u: goto label_203bb8;
            case 0x203BC4u: goto label_203bc4;
            case 0x203C08u: goto label_203c08;
            case 0x203C0Cu: goto label_203c0c;
            case 0x203C44u: goto label_203c44;
            case 0x203C48u: goto label_203c48;
            case 0x203C64u: goto label_203c64;
            case 0x203CC4u: goto label_203cc4;
            case 0x203CDCu: goto label_203cdc;
            case 0x203CFCu: goto label_203cfc;
            case 0x203D0Cu: goto label_203d0c;
            case 0x203DB0u: goto label_203db0;
            case 0x203DBCu: goto label_203dbc;
            case 0x203DC0u: goto label_203dc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203D28u; }
            if (ctx->pc != 0x203D28u) { return; }
        }
        }
    }
    ctx->pc = 0x203D28u;
    // 0x203d28: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x203d28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x203d2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x203d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x203d30: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x203d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x203d34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x203d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203d38: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x203d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203d3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x203d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203d40: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x203d40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203d44: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x203d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x203d48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x203d4c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x203d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x203d50: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x203d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203d54: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x203d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203d58: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x203d5c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x203d5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x203d60: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x203d64: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x203d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x203d68: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x203d68u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x203d6c: 0x40f809  jalr        $v0
    ctx->pc = 0x203D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203D74u);
        ctx->pc = 0x203D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D6Cu;
            // 0x203d70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203D74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203B6Cu: goto label_203b6c;
            case 0x203B70u: goto label_203b70;
            case 0x203B94u: goto label_203b94;
            case 0x203B9Cu: goto label_203b9c;
            case 0x203BB8u: goto label_203bb8;
            case 0x203BC4u: goto label_203bc4;
            case 0x203C08u: goto label_203c08;
            case 0x203C0Cu: goto label_203c0c;
            case 0x203C44u: goto label_203c44;
            case 0x203C48u: goto label_203c48;
            case 0x203C64u: goto label_203c64;
            case 0x203CC4u: goto label_203cc4;
            case 0x203CDCu: goto label_203cdc;
            case 0x203CFCu: goto label_203cfc;
            case 0x203D0Cu: goto label_203d0c;
            case 0x203DB0u: goto label_203db0;
            case 0x203DBCu: goto label_203dbc;
            case 0x203DC0u: goto label_203dc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203D74u; }
            if (ctx->pc != 0x203D74u) { return; }
        }
        }
    }
    ctx->pc = 0x203D74u;
    // 0x203d74: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x203d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x203d78: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x203d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x203d7c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D7Cu;
            // 0x203d80: 0xe6150034  swc1        $f21, 0x34($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D84u;
    // 0x203d84: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x203d88: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x203d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d90: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x203d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x203d94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x203d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d98: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x203d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x203d9c: 0xc082218  jal         func_208860
    ctx->pc = 0x203D9Cu;
    SET_GPR_U32(ctx, 31, 0x203DA4u);
    ctx->pc = 0x203DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203D9Cu;
            // 0x203da0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DA4u; }
        if (ctx->pc != 0x203DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DA4u; }
        if (ctx->pc != 0x203DA4u) { return; }
    }
    ctx->pc = 0x203DA4u;
    // 0x203da4: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x203DA4u;
    SET_GPR_U32(ctx, 31, 0x203DACu);
    ctx->pc = 0x203DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DA4u;
            // 0x203da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DACu; }
        if (ctx->pc != 0x203DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DACu; }
        if (ctx->pc != 0x203DACu) { return; }
    }
    ctx->pc = 0x203DACu;
    // 0x203dac: 0x0  nop
    ctx->pc = 0x203dacu;
    // NOP
label_203db0:
    // 0x203db0: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x203DB0u;
    {
        const bool branch_taken_0x203db0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203DB0u;
            // 0x203db4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203db0) {
            ctx->pc = 0x203DBCu;
            goto label_203dbc;
        }
    }
    ctx->pc = 0x203DB8u;
    // 0x203db8: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x203db8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_203dbc:
    // 0x203dbc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x203dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_203dc0:
    // 0x203dc0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x203dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x203dc4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x203dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x203dc8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x203dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203dcc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x203dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203dd0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x203dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203dd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x203dd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203dd8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x203dd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203ddc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x203ddcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203de0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203de4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x203de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x203de8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x203de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x203dec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x203decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203df0: 0x3e00008  jr          $ra
    ctx->pc = 0x203DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203DF0u;
            // 0x203df4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203B6Cu: goto label_203b6c;
            case 0x203B70u: goto label_203b70;
            case 0x203B94u: goto label_203b94;
            case 0x203B9Cu: goto label_203b9c;
            case 0x203BB8u: goto label_203bb8;
            case 0x203BC4u: goto label_203bc4;
            case 0x203C08u: goto label_203c08;
            case 0x203C0Cu: goto label_203c0c;
            case 0x203C44u: goto label_203c44;
            case 0x203C48u: goto label_203c48;
            case 0x203C64u: goto label_203c64;
            case 0x203CC4u: goto label_203cc4;
            case 0x203CDCu: goto label_203cdc;
            case 0x203CFCu: goto label_203cfc;
            case 0x203D0Cu: goto label_203d0c;
            case 0x203DB0u: goto label_203db0;
            case 0x203DBCu: goto label_203dbc;
            case 0x203DC0u: goto label_203dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203DF8u;
}

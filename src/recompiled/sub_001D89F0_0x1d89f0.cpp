#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D89F0
// Address: 0x1d89f0 - 0x1d8b40
void sub_001D89F0_0x1d89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D89F0_0x1d89f0");
#endif

    ctx->pc = 0x1d89f0u;

    // 0x1d89f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d89f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d89f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d89f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d89fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d8a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8a0c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D8A0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A14u);
    ctx->pc = 0x1D8A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A0Cu;
            // 0x1d8a10: 0xc48c017c  lwc1        $f12, 0x17C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A14u; }
        if (ctx->pc != 0x1D8A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A14u; }
        if (ctx->pc != 0x1D8A14u) { return; }
    }
    ctx->pc = 0x1D8A14u;
    // 0x1d8a14: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8a18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d8a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8a1c: 0x24482cc0  addiu       $t0, $v0, 0x2CC0
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d8a20: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8a24: 0x91030077  lbu         $v1, 0x77($t0)
    ctx->pc = 0x1d8a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 119)));
    // 0x1d8a28: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x1d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d8a2c: 0x244a0014  addiu       $t2, $v0, 0x14
    ctx->pc = 0x1d8a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1d8a30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8a34: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d8a38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8a3c: 0x46020068  max.s       $f1, $f0, $f2
    ctx->pc = 0x1d8a3cu;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1d8a40: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1d8a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a44: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1d8a44u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1d8a48: 0x90e3007f  lbu         $v1, 0x7F($a3)
    ctx->pc = 0x1d8a48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 127)));
    // 0x1d8a4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8A50u;
    {
        const bool branch_taken_0x1d8a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A50u;
            // 0x1d8a54: 0xe4e1005c  swc1        $f1, 0x5C($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a50) {
            ctx->pc = 0x1D8A60u;
            goto label_1d8a60;
        }
    }
    ctx->pc = 0x1D8A58u;
    // 0x1d8a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a5c: 0x0  nop
    ctx->pc = 0x1d8a5cu;
    // NOP
label_1d8a60:
    // 0x1d8a60: 0x90e20080  lbu         $v0, 0x80($a3)
    ctx->pc = 0x1d8a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x1d8a64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8A64u;
    {
        const bool branch_taken_0x1d8a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A64u;
            // 0x1d8a68: 0xa0e3007f  sb          $v1, 0x7F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 127), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a64) {
            ctx->pc = 0x1D8A70u;
            goto label_1d8a70;
        }
    }
    ctx->pc = 0x1D8A6Cu;
    // 0x1d8a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8a70:
    // 0x1d8a70: 0x90e30081  lbu         $v1, 0x81($a3)
    ctx->pc = 0x1d8a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 129)));
    // 0x1d8a74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8A74u;
    {
        const bool branch_taken_0x1d8a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A74u;
            // 0x1d8a78: 0xa0e20080  sb          $v0, 0x80($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 128), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a74) {
            ctx->pc = 0x1D8A80u;
            goto label_1d8a80;
        }
    }
    ctx->pc = 0x1D8A7Cu;
    // 0x1d8a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8a80:
    // 0x1d8a80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8a84: 0xa0e30081  sb          $v1, 0x81($a3)
    ctx->pc = 0x1d8a84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d8a88: 0xa0e2007e  sb          $v0, 0x7E($a3)
    ctx->pc = 0x1d8a88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 126), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8a8c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1d8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1d8a90: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1d8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1d8a94: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1d8a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1d8a98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d8a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8a9c: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1d8a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1d8aa0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d8aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d8aa4: 0x8cc202dc  lw          $v0, 0x2DC($a2)
    ctx->pc = 0x1d8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
    // 0x1d8aa8: 0xa4e50082  sh          $a1, 0x82($a3)
    ctx->pc = 0x1d8aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 130), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d8aac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d8ab0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d8ab4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8AB4u;
    {
        const bool branch_taken_0x1d8ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AB4u;
            // 0x1d8ab8: 0xacc202dc  sw          $v0, 0x2DC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ab4) {
            ctx->pc = 0x1D8B28u;
            goto label_1d8b28;
        }
    }
    ctx->pc = 0x1D8ABCu;
    // 0x1d8abc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1d8ac0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ac4: 0x8c82cb94  lw          $v0, -0x346C($a0)
    ctx->pc = 0x1d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953876)));
    // 0x1d8ac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AC8u;
            // 0x1d8acc: 0xa0e3007d  sb          $v1, 0x7D($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 125), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8AD4u;
            goto label_1d8ad4;
        }
    }
    ctx->pc = 0x1D8AD0u;
    // 0x1d8ad0: 0xac430200  sw          $v1, 0x200($v0)
    ctx->pc = 0x1d8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 512), GPR_U32(ctx, 3));
label_1d8ad4:
    // 0x1d8ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8ad8: 0x90e30077  lbu         $v1, 0x77($a3)
    ctx->pc = 0x1d8ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 119)));
    // 0x1d8adc: 0xa0e2007c  sb          $v0, 0x7C($a3)
    ctx->pc = 0x1d8adcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8ae0: 0xa0e20078  sb          $v0, 0x78($a3)
    ctx->pc = 0x1d8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8ae4: 0xa0e20079  sb          $v0, 0x79($a3)
    ctx->pc = 0x1d8ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8ae8: 0xa0e2007a  sb          $v0, 0x7A($a3)
    ctx->pc = 0x1d8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8aec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8AECu;
    {
        const bool branch_taken_0x1d8aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AECu;
            // 0x1d8af0: 0xa0e2007b  sb          $v0, 0x7B($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 123), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aec) {
            ctx->pc = 0x1D8B00u;
            goto label_1d8b00;
        }
    }
    ctx->pc = 0x1D8AF4u;
    // 0x1d8af4: 0x8c82cb94  lw          $v0, -0x346C($a0)
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953876)));
    // 0x1d8af8: 0xa0e90077  sb          $t1, 0x77($a3)
    ctx->pc = 0x1d8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 119), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d8afc: 0xac490058  sw          $t1, 0x58($v0)
    ctx->pc = 0x1d8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 9));
label_1d8b00:
    // 0x1d8b00: 0x91020077  lbu         $v0, 0x77($t0)
    ctx->pc = 0x1d8b00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 119)));
    // 0x1d8b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8b08: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d8b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8b10: 0x46020068  max.s       $f1, $f0, $f2
    ctx->pc = 0x1d8b10u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1d8b14: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1d8b14u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1d8b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b1c: 0xc075aae  jal         func_1D6AB8
    ctx->pc = 0x1D8B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B24u);
    ctx->pc = 0x1D8B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B1Cu;
            // 0x1d8b20: 0xe501005c  swc1        $f1, 0x5C($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6AB8u;
    if (runtime->hasFunction(0x1D6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1D6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B24u; }
        if (ctx->pc != 0x1D8B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d6ab8_0x1d6b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B24u; }
        if (ctx->pc != 0x1D8B24u) { return; }
    }
    ctx->pc = 0x1D8B24u;
    // 0x1d8b24: 0x0  nop
    ctx->pc = 0x1d8b24u;
    // NOP
label_1d8b28:
    // 0x1d8b28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d8b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B34u;
            // 0x1d8b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8A60u: goto label_1d8a60;
            case 0x1D8A70u: goto label_1d8a70;
            case 0x1D8A80u: goto label_1d8a80;
            case 0x1D8AD4u: goto label_1d8ad4;
            case 0x1D8B00u: goto label_1d8b00;
            case 0x1D8B28u: goto label_1d8b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8B3Cu;
    // 0x1d8b3c: 0x0  nop
    ctx->pc = 0x1d8b3cu;
    // NOP
}

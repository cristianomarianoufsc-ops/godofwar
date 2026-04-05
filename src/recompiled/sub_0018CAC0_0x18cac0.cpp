#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018CAC0
// Address: 0x18cac0 - 0x18cc30
void sub_0018CAC0_0x18cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CAC0_0x18cac0");
#endif

    ctx->pc = 0x18cac0u;

    // 0x18cac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18cac4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18cac8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x18cac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18cacc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18cad0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18cad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18cadc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18cae0: 0xc090d26  jal         func_243498
    ctx->pc = 0x18CAE0u;
    SET_GPR_U32(ctx, 31, 0x18CAE8u);
    ctx->pc = 0x18CAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAE0u;
            // 0x18cae4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243498u;
    if (runtime->hasFunction(0x243498u)) {
        auto targetFn = runtime->lookupFunction(0x243498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAE8u; }
        if (ctx->pc != 0x18CAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243498_0x2434a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAE8u; }
        if (ctx->pc != 0x18CAE8u) { return; }
    }
    ctx->pc = 0x18CAE8u;
    // 0x18cae8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x18caec: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x18caecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x18caf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18caf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18caf4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18caf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18caf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cafc: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x18cafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x18cb00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18cb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18cb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18cb08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18cb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cb0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18cb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18cb10: 0x2610de48  addiu       $s0, $s0, -0x21B8
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958664));
    // 0x18cb14: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cb14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x18cb18: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18cb18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cb1c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18cb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x18cb20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cb20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18cb24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18cb24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cb28: 0x3c050a5f  lui         $a1, 0xA5F
    ctx->pc = 0x18cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2655 << 16));
    // 0x18cb2c: 0x27a7001f  addiu       $a3, $sp, 0x1F
    ctx->pc = 0x18cb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x18cb30: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x18cb30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cb34: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x18cb34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cb38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18cb38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb3c: 0xa7a3001a  sh          $v1, 0x1A($sp)
    ctx->pc = 0x18cb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x18cb40: 0x2508c880  addiu       $t0, $t0, -0x3780
    ctx->pc = 0x18cb40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953088));
    // 0x18cb44: 0xa7a0001c  sh          $zero, 0x1C($sp)
    ctx->pc = 0x18cb44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb4c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18cb50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb54: 0xa7a0000c  sh          $zero, 0xC($sp)
    ctx->pc = 0x18cb54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cb58: 0x34a57d1a  ori         $a1, $a1, 0x7D1A
    ctx->pc = 0x18cb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32026);
    // 0x18cb5c: 0xc06078e  jal         func_181E38
    ctx->pc = 0x18CB5Cu;
    SET_GPR_U32(ctx, 31, 0x18CB64u);
    ctx->pc = 0x18CB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB5Cu;
            // 0x18cb60: 0xa7a0000e  sh          $zero, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (runtime->hasFunction(0x181E38u)) {
        auto targetFn = runtime->lookupFunction(0x181E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB64u; }
        if (ctx->pc != 0x18CB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181E38_0x181e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB64u; }
        if (ctx->pc != 0x18CB64u) { return; }
    }
    ctx->pc = 0x18CB64u;
    // 0x18cb64: 0x3c05175d  lui         $a1, 0x175D
    ctx->pc = 0x18cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5981 << 16));
    // 0x18cb68: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18cb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18cb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb74: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18CB74u;
    SET_GPR_U32(ctx, 31, 0x18CB7Cu);
    ctx->pc = 0x18CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB74u;
            // 0x18cb78: 0x34a54cf5  ori         $a1, $a1, 0x4CF5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19701);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB7Cu; }
        if (ctx->pc != 0x18CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB7Cu; }
        if (ctx->pc != 0x18CB7Cu) { return; }
    }
    ctx->pc = 0x18CB7Cu;
    // 0x18cb7c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18cb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb88: 0xc0604ec  jal         func_1813B0
    ctx->pc = 0x18CB88u;
    SET_GPR_U32(ctx, 31, 0x18CB90u);
    ctx->pc = 0x18CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB88u;
            // 0x18cb8c: 0x2405279f  addiu       $a1, $zero, 0x279F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10143));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813B0u;
    if (runtime->hasFunction(0x1813B0u)) {
        auto targetFn = runtime->lookupFunction(0x1813B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB90u; }
        if (ctx->pc != 0x18CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001813B0_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB90u; }
        if (ctx->pc != 0x18CB90u) { return; }
    }
    ctx->pc = 0x18CB90u;
    // 0x18cb90: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x18cb94: 0x27a7001a  addiu       $a3, $sp, 0x1A
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
    // 0x18cb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cba0: 0xc0604ec  jal         func_1813B0
    ctx->pc = 0x18CBA0u;
    SET_GPR_U32(ctx, 31, 0x18CBA8u);
    ctx->pc = 0x18CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBA0u;
            // 0x18cba4: 0x34a5a44f  ori         $a1, $a1, 0xA44F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42063);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813B0u;
    if (runtime->hasFunction(0x1813B0u)) {
        auto targetFn = runtime->lookupFunction(0x1813B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA8u; }
        if (ctx->pc != 0x18CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001813B0_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA8u; }
        if (ctx->pc != 0x18CBA8u) { return; }
    }
    ctx->pc = 0x18CBA8u;
    // 0x18cba8: 0x3c058ba3  lui         $a1, 0x8BA3
    ctx->pc = 0x18cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35747 << 16));
    // 0x18cbac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18cbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbb8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18cbbc: 0xc06085e  jal         func_182178
    ctx->pc = 0x18CBBCu;
    SET_GPR_U32(ctx, 31, 0x18CBC4u);
    ctx->pc = 0x18CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBBCu;
            // 0x18cbc0: 0x34a5a091  ori         $a1, $a1, 0xA091 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41105);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBC4u; }
        if (ctx->pc != 0x18CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBC4u; }
        if (ctx->pc != 0x18CBC4u) { return; }
    }
    ctx->pc = 0x18CBC4u;
    // 0x18cbc4: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18cbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x18cbc8: 0x3c0572f8  lui         $a1, 0x72F8
    ctx->pc = 0x18cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29432 << 16));
    // 0x18cbcc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18cbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18cbd0: 0x2508c8b0  addiu       $t0, $t0, -0x3750
    ctx->pc = 0x18cbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953136));
    // 0x18cbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18cbdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbe0: 0xc06078e  jal         func_181E38
    ctx->pc = 0x18CBE0u;
    SET_GPR_U32(ctx, 31, 0x18CBE8u);
    ctx->pc = 0x18CBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBE0u;
            // 0x18cbe4: 0x34a5629c  ori         $a1, $a1, 0x629C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25244);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (runtime->hasFunction(0x181E38u)) {
        auto targetFn = runtime->lookupFunction(0x181E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBE8u; }
        if (ctx->pc != 0x18CBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181E38_0x181e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBE8u; }
        if (ctx->pc != 0x18CBE8u) { return; }
    }
    ctx->pc = 0x18CBE8u;
    // 0x18cbe8: 0x3c05b0a2  lui         $a1, 0xB0A2
    ctx->pc = 0x18cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45218 << 16));
    // 0x18cbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbf4: 0x27a70016  addiu       $a3, $sp, 0x16
    ctx->pc = 0x18cbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
    // 0x18cbf8: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18CBF8u;
    SET_GPR_U32(ctx, 31, 0x18CC00u);
    ctx->pc = 0x18CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBF8u;
            // 0x18cbfc: 0x34a5d9a0  ori         $a1, $a1, 0xD9A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55712);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC00u; }
        if (ctx->pc != 0x18CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC00u; }
        if (ctx->pc != 0x18CC00u) { return; }
    }
    ctx->pc = 0x18CC00u;
    // 0x18cc00: 0x3c05a86b  lui         $a1, 0xA86B
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43115 << 16));
    // 0x18cc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc0c: 0x34a53138  ori         $a1, $a1, 0x3138
    ctx->pc = 0x18cc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12600);
    // 0x18cc10: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18CC10u;
    SET_GPR_U32(ctx, 31, 0x18CC18u);
    ctx->pc = 0x18CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC10u;
            // 0x18cc14: 0x27a70016  addiu       $a3, $sp, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC18u; }
        if (ctx->pc != 0x18CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC18u; }
        if (ctx->pc != 0x18CC18u) { return; }
    }
    ctx->pc = 0x18CC18u;
    // 0x18cc18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18cc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cc1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18cc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cc20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18cc20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cc24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cc28: 0x3e00008  jr          $ra
    ctx->pc = 0x18CC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC28u;
            // 0x18cc2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CC30u;
}

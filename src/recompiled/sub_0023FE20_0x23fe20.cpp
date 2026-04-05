#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023FE20
// Address: 0x23fe20 - 0x240488
void sub_0023FE20_0x23fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FE20_0x23fe20");
#endif

    ctx->pc = 0x23fe20u;

    // 0x23fe20: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x23fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x23fe24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23fe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23fe28: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x23fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x23fe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23fe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fe30: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x23fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x23fe34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23fe34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe38: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x23fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x23fe3c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x23fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x23fe40: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x23fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x23fe44: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x23fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x23fe48: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x23fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x23fe4c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x23fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x23fe50: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x23fe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x23fe54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23fe58: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x23fe58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x23fe5c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x23fe5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x23fe60: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x23fe60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x23fe64: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x23fe64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x23fe68: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x23fe6c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x23fe70: 0x629018  mult        $s2, $v1, $v0
    ctx->pc = 0x23fe70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x23fe74: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x23fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x23fe78: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x23fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x23fe7c: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x23fe7cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x23fe80: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x23fe80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x23fe84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe88: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x23fe88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x23fe8c: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x23fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x23fe90: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x23fe90u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23fe94: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x23fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x23fe98: 0x480001b  bltz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23FE98u;
    {
        const bool branch_taken_0x23fe98 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE98u;
            // 0x23fe9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe98) {
            ctx->pc = 0x23FF08u;
            goto label_23ff08;
        }
    }
    ctx->pc = 0x23FEA0u;
    // 0x23fea0: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x23fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23fea4: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23FEA4u;
    {
        const bool branch_taken_0x23fea4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEA4u;
            // 0x23fea8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fea4) {
            ctx->pc = 0x23FF00u;
            goto label_23ff00;
        }
    }
    ctx->pc = 0x23FEACu;
    // 0x23feac: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_23feb0:
    // 0x23feb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23feb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23feb4: 0x8e28014c  lw          $t0, 0x14C($s1)
    ctx->pc = 0x23feb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x23feb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23feb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23febc: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x23FEBCu;
    SET_GPR_U32(ctx, 31, 0x23FEC4u);
    ctx->pc = 0x23FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEBCu;
            // 0x23fec0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEC4u; }
        if (ctx->pc != 0x23FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEC4u; }
        if (ctx->pc != 0x23FEC4u) { return; }
    }
    ctx->pc = 0x23FEC4u;
    // 0x23fec4: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x23FEC4u;
    {
        const bool branch_taken_0x23fec4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEC4u;
            // 0x23fec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fec4) {
            ctx->pc = 0x23FEECu;
            goto label_23feec;
        }
    }
    ctx->pc = 0x23FECCu;
    // 0x23fecc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x23feccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23fed0:
    // 0x23fed0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x23fed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23fed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23fed8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x23fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x23fedc: 0x0  nop
    ctx->pc = 0x23fedcu;
    // NOP
    // 0x23fee0: 0x0  nop
    ctx->pc = 0x23fee0u;
    // NOP
    // 0x23fee4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FEE4u;
    {
        const bool branch_taken_0x23fee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEE4u;
            // 0x23fee8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fee4) {
            ctx->pc = 0x23FED0u;
            runtime->cooperativeGuestYield();
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEECu;
label_23feec:
    // 0x23feec: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x23fef0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23fef4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23fef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23fef8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23FEF8u;
    {
        const bool branch_taken_0x23fef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fef8) {
            ctx->pc = 0x23FEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEF8u;
            // 0x23fefc: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FEB0u;
            runtime->cooperativeGuestYield();
            goto label_23feb0;
        }
    }
    ctx->pc = 0x23FF00u;
label_23ff00:
    // 0x23ff00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ff04: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x23ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
label_23ff08:
    // 0x23ff08: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x23ff0c: 0xc6360150  lwc1        $f22, 0x150($s1)
    ctx->pc = 0x23ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23ff10: 0xc680c658  lwc1        $f0, -0x39A8($s4)
    ctx->pc = 0x23ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ff14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff18: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x23ff1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff20: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x23ff20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x23ff24: 0x80420147  lb          $v0, 0x147($v0)
    ctx->pc = 0x23ff24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x23ff28: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x23ff28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x23ff2c: 0xc04b974  jal         func_12E5D0
    ctx->pc = 0x23FF2Cu;
    SET_GPR_U32(ctx, 31, 0x23FF34u);
    ctx->pc = 0x23FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF2Cu;
            // 0x23ff30: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E5D0u;
    if (runtime->hasFunction(0x12E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF34u; }
        if (ctx->pc != 0x23FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E5D0_0x12e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF34u; }
        if (ctx->pc != 0x23FF34u) { return; }
    }
    ctx->pc = 0x23FF34u;
    // 0x23ff34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ff34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff38: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x23ff3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ff40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FF40u;
    {
        const bool branch_taken_0x23ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF40u;
            // 0x23ff44: 0x3ab00001  xori        $s0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff40) {
            ctx->pc = 0x23FF54u;
            goto label_23ff54;
        }
    }
    ctx->pc = 0x23FF48u;
    // 0x23ff48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff4c: 0xc04b974  jal         func_12E5D0
    ctx->pc = 0x23FF4Cu;
    SET_GPR_U32(ctx, 31, 0x23FF54u);
    ctx->pc = 0x23FF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF4Cu;
            // 0x23ff50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E5D0u;
    if (runtime->hasFunction(0x12E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF54u; }
        if (ctx->pc != 0x23FF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E5D0_0x12e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF54u; }
        if (ctx->pc != 0x23FF54u) { return; }
    }
    ctx->pc = 0x23FF54u;
label_23ff54:
    // 0x23ff54: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x23ff58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x23ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x23ff5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF5Cu;
            // 0x23ff60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF6Cu;
            goto label_23ff6c;
        }
    }
    ctx->pc = 0x23FF64u;
    // 0x23ff64: 0xc04b974  jal         func_12E5D0
    ctx->pc = 0x23FF64u;
    SET_GPR_U32(ctx, 31, 0x23FF6Cu);
    ctx->pc = 0x23FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF64u;
            // 0x23ff68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E5D0u;
    if (runtime->hasFunction(0x12E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF6Cu; }
        if (ctx->pc != 0x23FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E5D0_0x12e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF6Cu; }
        if (ctx->pc != 0x23FF6Cu) { return; }
    }
    ctx->pc = 0x23FF6Cu;
label_23ff6c:
    // 0x23ff6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23ff70: 0x26320178  addiu       $s2, $s1, 0x178
    ctx->pc = 0x23ff70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x23ff74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23ff78: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x23ff7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ff80: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x23ff84: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x23FF84u;
    {
        const bool branch_taken_0x23ff84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF84u;
            // 0x23ff88: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff84) {
            ctx->pc = 0x23FFB8u;
            goto label_23ffb8;
        }
    }
    ctx->pc = 0x23FF8Cu;
    // 0x23ff8c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x23ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x23ff90: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x23ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23ff94: 0x26230170  addiu       $v1, $s1, 0x170
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x23ff98: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x23ff98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23ff9c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23FF9Cu;
    {
        const bool branch_taken_0x23ff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff9c) {
            ctx->pc = 0x23FFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF9Cu;
            // 0x23ffa0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FFA4u;
            goto label_23ffa4;
        }
    }
    ctx->pc = 0x23FFA4u;
label_23ffa4:
    // 0x23ffa4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23ffa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffac: 0x3010  mfhi        $a2
    ctx->pc = 0x23ffacu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x23ffb0: 0xc04b946  jal         func_12E518
    ctx->pc = 0x23FFB0u;
    SET_GPR_U32(ctx, 31, 0x23FFB8u);
    ctx->pc = 0x23FFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFB0u;
            // 0x23ffb4: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (runtime->hasFunction(0x12E518u)) {
        auto targetFn = runtime->lookupFunction(0x12E518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFB8u; }
        if (ctx->pc != 0x23FFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E518_0x12e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFB8u; }
        if (ctx->pc != 0x23FFB8u) { return; }
    }
    ctx->pc = 0x23FFB8u;
label_23ffb8:
    // 0x23ffb8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x23ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x23ffbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FFBCu;
    {
        const bool branch_taken_0x23ffbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFBCu;
            // 0x23ffc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffbc) {
            ctx->pc = 0x23FFD8u;
            goto label_23ffd8;
        }
    }
    ctx->pc = 0x23FFC4u;
    // 0x23ffc4: 0xc04c050  jal         func_130140
    ctx->pc = 0x23FFC4u;
    SET_GPR_U32(ctx, 31, 0x23FFCCu);
    ctx->pc = 0x23FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFC4u;
            // 0x23ffc8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFCCu; }
        if (ctx->pc != 0x23FFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFCCu; }
        if (ctx->pc != 0x23FFCCu) { return; }
    }
    ctx->pc = 0x23FFCCu;
    // 0x23ffcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23FFCCu;
    {
        const bool branch_taken_0x23ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFCCu;
            // 0x23ffd0: 0xc68cc658  lwc1        $f12, -0x39A8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffcc) {
            ctx->pc = 0x240000u;
            goto label_240000;
        }
    }
    ctx->pc = 0x23FFD4u;
    // 0x23ffd4: 0x0  nop
    ctx->pc = 0x23ffd4u;
    // NOP
label_23ffd8:
    // 0x23ffd8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23ffdc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x23ffdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23ffe0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23ffe4: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x23ffe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x23ffe8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x23ffec: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x23ffecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x23fff0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x23fff4: 0x78620060  lq          $v0, 0x60($v1)
    ctx->pc = 0x23fff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x23fff8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x23fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x23fffc: 0xc68cc658  lwc1        $f12, -0x39A8($s4)
    ctx->pc = 0x23fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_240000:
    // 0x240000: 0x26330080  addiu       $s3, $s1, 0x80
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x240004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240008: 0xc04bbac  jal         func_12EEB0
    ctx->pc = 0x240008u;
    SET_GPR_U32(ctx, 31, 0x240010u);
    ctx->pc = 0x24000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240008u;
            // 0x24000c: 0x26340120  addiu       $s4, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEB0u;
    if (runtime->hasFunction(0x12EEB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240010u; }
        if (ctx->pc != 0x240010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12eeb0_0x12eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240010u; }
        if (ctx->pc != 0x240010u) { return; }
    }
    ctx->pc = 0x240010u;
    // 0x240010: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x240014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240018: 0xc04bb6a  jal         func_12EDA8
    ctx->pc = 0x240018u;
    SET_GPR_U32(ctx, 31, 0x240020u);
    ctx->pc = 0x24001Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240018u;
            // 0x24001c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EDA8u;
    if (runtime->hasFunction(0x12EDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12EDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240020u; }
        if (ctx->pc != 0x240020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12eda8_0x12eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240020u; }
        if (ctx->pc != 0x240020u) { return; }
    }
    ctx->pc = 0x240020u;
    // 0x240020: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x240024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x240024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240028: 0xc04bd6a  jal         func_12F5A8
    ctx->pc = 0x240028u;
    SET_GPR_U32(ctx, 31, 0x240030u);
    ctx->pc = 0x24002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240028u;
            // 0x24002c: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5A8u;
    if (runtime->hasFunction(0x12F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x12F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240030u; }
        if (ctx->pc != 0x240030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f5a8_0x12f658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240030u; }
        if (ctx->pc != 0x240030u) { return; }
    }
    ctx->pc = 0x240030u;
    // 0x240030: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x240034: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x240034u;
    {
        const bool branch_taken_0x240034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240034u;
            // 0x240038: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240034) {
            ctx->pc = 0x24018Cu;
            goto label_24018c;
        }
    }
    ctx->pc = 0x24003Cu;
    // 0x24003c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240040: 0xc04bca2  jal         func_12F288
    ctx->pc = 0x240040u;
    SET_GPR_U32(ctx, 31, 0x240048u);
    ctx->pc = 0x240044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240040u;
            // 0x240044: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F288u;
    if (runtime->hasFunction(0x12F288u)) {
        auto targetFn = runtime->lookupFunction(0x12F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240048u; }
        if (ctx->pc != 0x240048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f288_0x12f348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240048u; }
        if (ctx->pc != 0x240048u) { return; }
    }
    ctx->pc = 0x240048u;
    // 0x240048: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24004c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x24004cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240050: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x240050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240054: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x240054u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x240058: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x240058u;
    {
        const bool branch_taken_0x240058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240058u;
            // 0x24005c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240058) {
            ctx->pc = 0x240100u;
            goto label_240100;
        }
    }
    ctx->pc = 0x240060u;
    // 0x240060: 0xc04bbb0  jal         func_12EEC0
    ctx->pc = 0x240060u;
    SET_GPR_U32(ctx, 31, 0x240068u);
    ctx->pc = 0x240064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240060u;
            // 0x240064: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEC0u;
    if (runtime->hasFunction(0x12EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240068u; }
        if (ctx->pc != 0x240068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12eec0_0x12f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240068u; }
        if (ctx->pc != 0x240068u) { return; }
    }
    ctx->pc = 0x240068u;
    // 0x240068: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x240068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24006c: 0xc04bd96  jal         func_12F658
    ctx->pc = 0x24006Cu;
    SET_GPR_U32(ctx, 31, 0x240074u);
    ctx->pc = 0x240070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24006Cu;
            // 0x240070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F658u;
    if (runtime->hasFunction(0x12F658u)) {
        auto targetFn = runtime->lookupFunction(0x12F658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240074u; }
        if (ctx->pc != 0x240074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f658_0x12f718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240074u; }
        if (ctx->pc != 0x240074u) { return; }
    }
    ctx->pc = 0x240074u;
    // 0x240074: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x240074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240078: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x240078u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24007c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24007cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x240080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240088: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x240088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24008c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24008cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x240090: 0x46020dc3  div.s       $f23, $f1, $f2
    ctx->pc = 0x240090u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[2];
    // 0x240094: 0x46020583  div.s       $f22, $f0, $f2
    ctx->pc = 0x240094u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[2];
    // 0x240098: 0x52400016  beql        $s2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x240098u;
    {
        const bool branch_taken_0x240098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240098) {
            ctx->pc = 0x24009Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240098u;
            // 0x24009c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400A0u;
    // 0x2400a0: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x2400a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x2400a4: 0x0  nop
    ctx->pc = 0x2400a4u;
    // NOP
label_2400a8:
    // 0x2400a8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2400a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2400ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2400acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2400b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400b4: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x2400b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2400b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2400bc: 0xc04bc20  jal         func_12F080
    ctx->pc = 0x2400BCu;
    SET_GPR_U32(ctx, 31, 0x2400C4u);
    ctx->pc = 0x2400C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2400BCu;
            // 0x2400c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F080u;
    if (runtime->hasFunction(0x12F080u)) {
        auto targetFn = runtime->lookupFunction(0x12F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400C4u; }
        if (ctx->pc != 0x2400C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F080_0x12f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400C4u; }
        if (ctx->pc != 0x2400C4u) { return; }
    }
    ctx->pc = 0x2400C4u;
    // 0x2400c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2400c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2400c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2400c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2400ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2400d0: 0xc04bdc6  jal         func_12F718
    ctx->pc = 0x2400D0u;
    SET_GPR_U32(ctx, 31, 0x2400D8u);
    ctx->pc = 0x2400D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2400D0u;
            // 0x2400d4: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F718u;
    if (runtime->hasFunction(0x12F718u)) {
        auto targetFn = runtime->lookupFunction(0x12F718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400D8u; }
        if (ctx->pc != 0x2400D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f718_0x12f7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400D8u; }
        if (ctx->pc != 0x2400D8u) { return; }
    }
    ctx->pc = 0x2400D8u;
    // 0x2400d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2400d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2400dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400e0: 0xc04ba3c  jal         func_12E8F0
    ctx->pc = 0x2400E0u;
    SET_GPR_U32(ctx, 31, 0x2400E8u);
    ctx->pc = 0x2400E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2400E0u;
            // 0x2400e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8F0u;
    if (runtime->hasFunction(0x12E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400E8u; }
        if (ctx->pc != 0x2400E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8F0_0x12e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400E8u; }
        if (ctx->pc != 0x2400E8u) { return; }
    }
    ctx->pc = 0x2400E8u;
    // 0x2400e8: 0x5640ffef  bnel        $s2, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2400E8u;
    {
        const bool branch_taken_0x2400e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2400e8) {
            ctx->pc = 0x2400ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2400E8u;
            // 0x2400ec: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2400A8u;
            runtime->cooperativeGuestYield();
            goto label_2400a8;
        }
    }
    ctx->pc = 0x2400F0u;
    // 0x2400f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2400f4:
    // 0x2400f4: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2400f8: 0xc04bdee  jal         func_12F7B8
    ctx->pc = 0x2400F8u;
    SET_GPR_U32(ctx, 31, 0x240100u);
    ctx->pc = 0x2400FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2400F8u;
            // 0x2400fc: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F7B8u;
    if (runtime->hasFunction(0x12F7B8u)) {
        auto targetFn = runtime->lookupFunction(0x12F7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240100u; }
        if (ctx->pc != 0x240100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f7b8_0x12f7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240100u; }
        if (ctx->pc != 0x240100u) { return; }
    }
    ctx->pc = 0x240100u;
label_240100:
    // 0x240100: 0xc62c0150  lwc1        $f12, 0x150($s1)
    ctx->pc = 0x240100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x240104: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x240104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240108: 0xc04ba3c  jal         func_12E8F0
    ctx->pc = 0x240108u;
    SET_GPR_U32(ctx, 31, 0x240110u);
    ctx->pc = 0x24010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240108u;
            // 0x24010c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8F0u;
    if (runtime->hasFunction(0x12E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240110u; }
        if (ctx->pc != 0x240110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8F0_0x12e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240110u; }
        if (ctx->pc != 0x240110u) { return; }
    }
    ctx->pc = 0x240110u;
    // 0x240110: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x240114: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x240114u;
    {
        const bool branch_taken_0x240114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240114) {
            ctx->pc = 0x240118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240114u;
            // 0x240118: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240190u;
            goto label_240190;
        }
    }
    ctx->pc = 0x24011Cu;
    // 0x24011c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x240120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240124: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x240124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240128: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x240128u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24012c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24012Cu;
    {
        const bool branch_taken_0x24012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24012c) {
            ctx->pc = 0x240130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24012Cu;
            // 0x240130: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x240134u;
            goto label_240134;
        }
    }
    ctx->pc = 0x240134u;
label_240134:
    // 0x240134: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x240134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x240138: 0x1810  mfhi        $v1
    ctx->pc = 0x240138u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24013c: 0x3812  mflo        $a3
    ctx->pc = 0x24013cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x240140: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x240140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x240144: 0x3012  mflo        $a2
    ctx->pc = 0x240144u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x240148: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x240148u;
    SET_GPR_U32(ctx, 31, 0x240150u);
    ctx->pc = 0x24014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240148u;
            // 0x24014c: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240150u; }
        if (ctx->pc != 0x240150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240150u; }
        if (ctx->pc != 0x240150u) { return; }
    }
    ctx->pc = 0x240150u;
    // 0x240150: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x240154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240158: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x24015c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240160: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x240160u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x240164: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x240164u;
    {
        const bool branch_taken_0x240164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240164) {
            ctx->pc = 0x240168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240164u;
            // 0x240168: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240190u;
            goto label_240190;
        }
    }
    ctx->pc = 0x24016Cu;
    // 0x24016c: 0x0  nop
    ctx->pc = 0x24016cu;
    // NOP
label_240170:
    // 0x240170: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x240170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x240174: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x240174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x240178: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x240178u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24017c: 0x0  nop
    ctx->pc = 0x24017cu;
    // NOP
    // 0x240180: 0x0  nop
    ctx->pc = 0x240180u;
    // NOP
    // 0x240184: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x240184u;
    {
        const bool branch_taken_0x240184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240184u;
            // 0x240188: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240184) {
            ctx->pc = 0x240170u;
            runtime->cooperativeGuestYield();
            goto label_240170;
        }
    }
    ctx->pc = 0x24018Cu;
label_24018c:
    // 0x24018c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x24018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_240190:
    // 0x240190: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x240190u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x240194: 0x26340170  addiu       $s4, $s1, 0x170
    ctx->pc = 0x240194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x240198: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x240198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24019c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2401a0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2401a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2401a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2401a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2401a8: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x2401a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2401ac: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2401acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2401b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2401b4: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2401b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2401bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2401bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2401c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2401c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2401c4: 0x0  nop
    ctx->pc = 0x2401c4u;
    // NOP
    // 0x2401c8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2401C8u;
    {
        const bool branch_taken_0x2401c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2401CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2401C8u;
            // 0x2401cc: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401c8) {
            ctx->pc = 0x24022Cu;
            goto label_24022c;
        }
    }
    ctx->pc = 0x2401D0u;
    // 0x2401d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2401D0u;
    {
        const bool branch_taken_0x2401d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2401D0u;
            // 0x2401d4: 0x26330178  addiu       $s3, $s1, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401d0) {
            ctx->pc = 0x24021Cu;
            goto label_24021c;
        }
    }
    ctx->pc = 0x2401D8u;
label_2401d8:
    // 0x2401d8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x2401D8u;
    SET_GPR_U32(ctx, 31, 0x2401E0u);
    ctx->pc = 0x2401DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401D8u;
            // 0x2401dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (runtime->hasFunction(0x12E518u)) {
        auto targetFn = runtime->lookupFunction(0x12E518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E0u; }
        if (ctx->pc != 0x2401E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E518_0x12e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E0u; }
        if (ctx->pc != 0x2401E0u) { return; }
    }
    ctx->pc = 0x2401E0u;
    // 0x2401e0: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x2401e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2401e8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2401e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2401ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2401ECu;
    {
        const bool branch_taken_0x2401ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2401ec) {
            ctx->pc = 0x2401F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2401ECu;
            // 0x2401f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2401F4u;
            goto label_2401f4;
        }
    }
    ctx->pc = 0x2401F4u;
label_2401f4:
    // 0x2401f4: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2401f8: 0x1010  mfhi        $v0
    ctx->pc = 0x2401f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2401fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2401fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240200: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x240204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240208: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x240208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24020c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24020cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240210: 0x0  nop
    ctx->pc = 0x240210u;
    // NOP
    // 0x240214: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x240214u;
    {
        const bool branch_taken_0x240214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240214) {
            ctx->pc = 0x240218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240214u;
            // 0x240218: 0x159880  sll         $s3, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240230u;
            goto label_240230;
        }
    }
    ctx->pc = 0x24021Cu;
label_24021c:
    // 0x24021c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x24021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x240220: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240224: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x240224u;
    {
        const bool branch_taken_0x240224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x240228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240224u;
            // 0x240228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240224) {
            ctx->pc = 0x2401D8u;
            runtime->cooperativeGuestYield();
            goto label_2401d8;
        }
    }
    ctx->pc = 0x24022Cu;
label_24022c:
    // 0x24022c: 0x159880  sll         $s3, $s5, 2
    ctx->pc = 0x24022cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_240230:
    // 0x240230: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x240234: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x240234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x240238: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x240238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x24023c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240240: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x240240u;
    {
        const bool branch_taken_0x240240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240240u;
            // 0x240244: 0x26230178  addiu       $v1, $s1, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240240) {
            ctx->pc = 0x240338u;
            goto label_240338;
        }
    }
    ctx->pc = 0x240248u;
    // 0x240248: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x24024c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x240250: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x240250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240254: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240258: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x240258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x24025c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240260: 0x12170035  beq         $s0, $s7, . + 4 + (0x35 << 2)
    ctx->pc = 0x240260u;
    {
        const bool branch_taken_0x240260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x240264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240260u;
            // 0x240264: 0x2f043  sra         $fp, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240260) {
            ctx->pc = 0x240338u;
            goto label_240338;
        }
    }
    ctx->pc = 0x240268u;
    // 0x240268: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x240268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x24026c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x240270: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x240274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240278: 0xc4950014  lwc1        $f21, 0x14($a0)
    ctx->pc = 0x240278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24027c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x24027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240280: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x240284: 0x0  nop
    ctx->pc = 0x240284u;
    // NOP
label_240288:
    // 0x240288: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24028c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x24028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x240290: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x240290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240294: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x240294u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240298: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240298u;
    {
        const bool branch_taken_0x240298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240298) {
            ctx->pc = 0x24029Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240298u;
            // 0x24029c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2402A0u;
            goto label_2402a0;
        }
    }
    ctx->pc = 0x2402A0u;
label_2402a0:
    // 0x2402a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2402a4: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2402a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2402a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2402ac: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2402b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2402b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2402b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2402b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2402b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2402b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2402bc: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2402c0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x2402c0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x2402c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2402c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2402c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2402c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2402cc: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x2402ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2402d0: 0x3812  mflo        $a3
    ctx->pc = 0x2402d0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2402d4: 0x4810  mfhi        $t1
    ctx->pc = 0x2402d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2402d8: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x2402d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2402dc: 0x3012  mflo        $a2
    ctx->pc = 0x2402dcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2402e0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x2402E0u;
    SET_GPR_U32(ctx, 31, 0x2402E8u);
    ctx->pc = 0x2402E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402E0u;
            // 0x2402e4: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E8u; }
        if (ctx->pc != 0x2402E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E8u; }
        if (ctx->pc != 0x2402E8u) { return; }
    }
    ctx->pc = 0x2402E8u;
    // 0x2402e8: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2402e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2402ec: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2402ECu;
    {
        const bool branch_taken_0x2402ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2402ec) {
            ctx->pc = 0x2402F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2402ECu;
            // 0x2402f0: 0x8e230144  lw          $v1, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240318u;
            goto label_240318;
        }
    }
    ctx->pc = 0x2402F4u;
    // 0x2402f4: 0x0  nop
    ctx->pc = 0x2402f4u;
    // NOP
label_2402f8:
    // 0x2402f8: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x2402f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x2402fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2402fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x240300: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x240300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
    // 0x240304: 0x0  nop
    ctx->pc = 0x240304u;
    // NOP
    // 0x240308: 0x0  nop
    ctx->pc = 0x240308u;
    // NOP
    // 0x24030c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24030Cu;
    {
        const bool branch_taken_0x24030c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24030Cu;
            // 0x240310: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24030c) {
            ctx->pc = 0x2402F8u;
            runtime->cooperativeGuestYield();
            goto label_2402f8;
        }
    }
    ctx->pc = 0x240314u;
    // 0x240314: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x240314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_240318:
    // 0x240318: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24031c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24031cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240320: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240320u;
    {
        const bool branch_taken_0x240320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240320) {
            ctx->pc = 0x240324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240320u;
            // 0x240324: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x240328u;
            goto label_240328;
        }
    }
    ctx->pc = 0x240328u;
label_240328:
    // 0x240328: 0x1010  mfhi        $v0
    ctx->pc = 0x240328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24032c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24032cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240330: 0x5617ffd5  bnel        $s0, $s7, . + 4 + (-0x2B << 2)
    ctx->pc = 0x240330u;
    {
        const bool branch_taken_0x240330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x240330) {
            ctx->pc = 0x240334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240330u;
            // 0x240334: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240288u;
            runtime->cooperativeGuestYield();
            goto label_240288;
        }
    }
    ctx->pc = 0x240338u;
label_240338:
    // 0x240338: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x24033c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x240340: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x240340u;
    {
        const bool branch_taken_0x240340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240340u;
            // 0x240344: 0x26360178  addiu       $s6, $s1, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240340) {
            ctx->pc = 0x240448u;
            goto label_240448;
        }
    }
    ctx->pc = 0x240348u;
    // 0x240348: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x24034c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x240350: 0x2d32821  addu        $a1, $s6, $s3
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x240354: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x240358: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x240358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24035c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240360: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240364: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x240364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240368: 0x12030037  beq         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x240368u;
    {
        const bool branch_taken_0x240368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x24036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240368u;
            // 0x24036c: 0x2b843  sra         $s7, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240368) {
            ctx->pc = 0x240448u;
            goto label_240448;
        }
    }
    ctx->pc = 0x240370u;
    // 0x240370: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x240374: 0x0  nop
    ctx->pc = 0x240374u;
    // NOP
label_240378:
    // 0x240378: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x240378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24037c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x240380: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x240380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240384: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x240384u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240388: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x240388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24038c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x240390: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240390u;
    {
        const bool branch_taken_0x240390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240390) {
            ctx->pc = 0x240394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240390u;
            // 0x240394: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x240398u;
            goto label_240398;
        }
    }
    ctx->pc = 0x240398u;
label_240398:
    // 0x240398: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x240398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24039c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x24039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2403a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2403a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2403a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2403a8: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x2403a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2403ac: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x2403acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2403b0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2403b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2403b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2403b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2403b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2403bc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2403bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2403c0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x2403c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x2403c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2403c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2403c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2403c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2403cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2403ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2403d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2403d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2403d4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x2403d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2403d8: 0x3812  mflo        $a3
    ctx->pc = 0x2403d8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2403dc: 0x4810  mfhi        $t1
    ctx->pc = 0x2403dcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2403e0: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x2403e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2403e4: 0x3012  mflo        $a2
    ctx->pc = 0x2403e4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2403e8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x2403E8u;
    SET_GPR_U32(ctx, 31, 0x2403F0u);
    ctx->pc = 0x2403ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403E8u;
            // 0x2403ec: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403F0u; }
        if (ctx->pc != 0x2403F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403F0u; }
        if (ctx->pc != 0x2403F0u) { return; }
    }
    ctx->pc = 0x2403F0u;
    // 0x2403f0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x2403f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403f4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2403F4u;
    {
        const bool branch_taken_0x2403f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2403f4) {
            ctx->pc = 0x2403F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2403F4u;
            // 0x2403f8: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240420u;
            goto label_240420;
        }
    }
    ctx->pc = 0x2403FCu;
    // 0x2403fc: 0x0  nop
    ctx->pc = 0x2403fcu;
    // NOP
label_240400:
    // 0x240400: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x240400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x240404: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x240408: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x240408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x24040c: 0x0  nop
    ctx->pc = 0x24040cu;
    // NOP
    // 0x240410: 0x0  nop
    ctx->pc = 0x240410u;
    // NOP
    // 0x240414: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x240414u;
    {
        const bool branch_taken_0x240414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240414u;
            // 0x240418: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240414) {
            ctx->pc = 0x240400u;
            runtime->cooperativeGuestYield();
            goto label_240400;
        }
    }
    ctx->pc = 0x24041Cu;
    // 0x24041c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_240420:
    // 0x240420: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240424: 0x2d32021  addu        $a0, $s6, $s3
    ctx->pc = 0x240424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x240428: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x240428u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24042c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24042Cu;
    {
        const bool branch_taken_0x24042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24042c) {
            ctx->pc = 0x240430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24042Cu;
            // 0x240430: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x240434u;
            goto label_240434;
        }
    }
    ctx->pc = 0x240434u;
label_240434:
    // 0x240434: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x240434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240438: 0x1810  mfhi        $v1
    ctx->pc = 0x240438u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24043c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x24043cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240440: 0x5602ffcd  bnel        $s0, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x240440u;
    {
        const bool branch_taken_0x240440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x240440) {
            ctx->pc = 0x240444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240440u;
            // 0x240444: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240378u;
            runtime->cooperativeGuestYield();
            goto label_240378;
        }
    }
    ctx->pc = 0x240448u;
label_240448:
    // 0x240448: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x240448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24044c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x24044cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x240450: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x240450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x240454: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x240454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x240458: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x240458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24045c: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x24045cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x240460: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x240460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x240464: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x240464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x240468: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x240468u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24046c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24046cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x240470: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x240470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x240474: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x240474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x240478: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x240478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24047c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x24047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240480: 0x3e00008  jr          $ra
    ctx->pc = 0x240480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240480u;
            // 0x240484: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FEB0u: goto label_23feb0;
            case 0x23FED0u: goto label_23fed0;
            case 0x23FEECu: goto label_23feec;
            case 0x23FF00u: goto label_23ff00;
            case 0x23FF08u: goto label_23ff08;
            case 0x23FF54u: goto label_23ff54;
            case 0x23FF6Cu: goto label_23ff6c;
            case 0x23FFA4u: goto label_23ffa4;
            case 0x23FFB8u: goto label_23ffb8;
            case 0x23FFD8u: goto label_23ffd8;
            case 0x240000u: goto label_240000;
            case 0x2400A8u: goto label_2400a8;
            case 0x2400F4u: goto label_2400f4;
            case 0x240100u: goto label_240100;
            case 0x240134u: goto label_240134;
            case 0x240170u: goto label_240170;
            case 0x24018Cu: goto label_24018c;
            case 0x240190u: goto label_240190;
            case 0x2401D8u: goto label_2401d8;
            case 0x2401F4u: goto label_2401f4;
            case 0x24021Cu: goto label_24021c;
            case 0x24022Cu: goto label_24022c;
            case 0x240230u: goto label_240230;
            case 0x240288u: goto label_240288;
            case 0x2402A0u: goto label_2402a0;
            case 0x2402F8u: goto label_2402f8;
            case 0x240318u: goto label_240318;
            case 0x240328u: goto label_240328;
            case 0x240338u: goto label_240338;
            case 0x240378u: goto label_240378;
            case 0x240398u: goto label_240398;
            case 0x240400u: goto label_240400;
            case 0x240420u: goto label_240420;
            case 0x240434u: goto label_240434;
            case 0x240448u: goto label_240448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240488u;
}

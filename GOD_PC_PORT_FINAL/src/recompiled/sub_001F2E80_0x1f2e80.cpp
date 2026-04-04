#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2E80
// Address: 0x1f2e80 - 0x1f3008
void sub_001F2E80_0x1f2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E80_0x1f2e80");
#endif

    ctx->pc = 0x1f2e80u;

    // 0x1f2e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f2e84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f2e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f2e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f2e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f2e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e98: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2E98u;
    {
        const bool branch_taken_0x1f2e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E98u;
            // 0x1f2e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e98) {
            ctx->pc = 0x1F2ECCu;
            goto label_1f2ecc;
        }
    }
    ctx->pc = 0x1F2EA0u;
    // 0x1f2ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ea4: 0x24c30160  addiu       $v1, $a2, 0x160
    ctx->pc = 0x1f2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
label_1f2ea8:
    // 0x1f2ea8: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1f2ea8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2eac: 0x78c50010  lq          $a1, 0x10($a2)
    ctx->pc = 0x1f2eacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f2eb0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1f2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1f2eb4: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x1f2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x1f2eb8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1f2eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f2ebc: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2EBCu;
    {
        const bool branch_taken_0x1f2ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EBCu;
            // 0x1f2ec0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ebc) {
            ctx->pc = 0x1F2EA8u;
            runtime->cooperativeGuestYield();
            goto label_1f2ea8;
        }
    }
    ctx->pc = 0x1F2EC4u;
    // 0x1f2ec4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1f2ec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2ec8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1f2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1f2ecc:
    // 0x1f2ecc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1f2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f2ed0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f2ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ed8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f2edc: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f2ee0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1f2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1f2ee4: 0xe60c004c  swc1        $f12, 0x4C($s0)
    ctx->pc = 0x1f2ee4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1f2ee8: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x1f2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x1f2eec: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1f2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1f2ef0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1f2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1f2ef4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EF4u;
            // 0x1f2ef8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F04u;
            goto label_1f2f04;
        }
    }
    ctx->pc = 0x1F2EFCu;
    // 0x1f2efc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1f2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1f2f00: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1f2f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1f2f04:
    // 0x1f2f04: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1f2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2f08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f2f0c: 0x8c446274  lw          $a0, 0x6274($v0)
    ctx->pc = 0x1f2f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25204)));
    // 0x1f2f10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2f14: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1f2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f2f18: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1F2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F18u;
            // 0x1f2f1c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F20u; }
        if (ctx->pc != 0x1F2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F20u; }
        if (ctx->pc != 0x1F2F20u) { return; }
    }
    ctx->pc = 0x1F2F20u;
    // 0x1f2f20: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1f2f20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f2f24: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1f2f28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f2c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1f2f30: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x1f2f30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x1f2f34: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x1f2f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2f38: 0x7e0300b0  sq          $v1, 0xB0($s0)
    ctx->pc = 0x1f2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 3));
    // 0x1f2f3c: 0x78430040  lq          $v1, 0x40($v0)
    ctx->pc = 0x1f2f3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f2f40: 0x7e0300c0  sq          $v1, 0xC0($s0)
    ctx->pc = 0x1f2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 3));
    // 0x1f2f44: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1f2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2f48: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x1f2f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1f2f4c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1f2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2f50: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x1f2f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x1f2f54: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1f2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2f58: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1f2f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1f2f5c:
    // 0x1f2f5c: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x1f2f5cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2f60: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1f2f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f2f64: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x1f2f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x1f2f68: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x1f2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x1f2f6c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2f70: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2F70u;
    {
        const bool branch_taken_0x1f2f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F2F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F70u;
            // 0x1f2f74: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f70) {
            ctx->pc = 0x1F2F5Cu;
            runtime->cooperativeGuestYield();
            goto label_1f2f5c;
        }
    }
    ctx->pc = 0x1F2F78u;
    // 0x1f2f78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f2f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f80: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1f2f84: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x1f2f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x1f2f88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2F88u;
    {
        const bool branch_taken_0x1f2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F88u;
            // 0x1f2f8c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f88) {
            ctx->pc = 0x1F2FD8u;
            goto label_1f2fd8;
        }
    }
    ctx->pc = 0x1F2F90u;
    // 0x1f2f90: 0xc04faea  jal         func_13EBA8
    ctx->pc = 0x1F2F90u;
    SET_GPR_U32(ctx, 31, 0x1F2F98u);
    ctx->pc = 0x1F2F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F90u;
            // 0x1f2f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EBA8u;
    if (runtime->hasFunction(0x13EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x13EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F98u; }
        if (ctx->pc != 0x1F2F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13eba8_0x13ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F98u; }
        if (ctx->pc != 0x1F2F98u) { return; }
    }
    ctx->pc = 0x1F2F98u;
    // 0x1f2f98: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1f2f98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f2f9c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f2f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f2fa0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2FA0u;
    {
        const bool branch_taken_0x1f2fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FA0u;
            // 0x1f2fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fa0) {
            ctx->pc = 0x1F2FDCu;
            goto label_1f2fdc;
        }
    }
    ctx->pc = 0x1F2FA8u;
    // 0x1f2fa8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2fac: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f2facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f2fb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2FB0u;
    {
        const bool branch_taken_0x1f2fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2fb0) {
            ctx->pc = 0x1F2FDCu;
            goto label_1f2fdc;
        }
    }
    ctx->pc = 0x1F2FB8u;
    // 0x1f2fb8: 0xc04faea  jal         func_13EBA8
    ctx->pc = 0x1F2FB8u;
    SET_GPR_U32(ctx, 31, 0x1F2FC0u);
    ctx->pc = 0x1F2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FB8u;
            // 0x1f2fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EBA8u;
    if (runtime->hasFunction(0x13EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x13EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC0u; }
        if (ctx->pc != 0x1F2FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13eba8_0x13ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC0u; }
        if (ctx->pc != 0x1F2FC0u) { return; }
    }
    ctx->pc = 0x1F2FC0u;
    // 0x1f2fc0: 0xc04012e  jal         func_1004B8
    ctx->pc = 0x1F2FC0u;
    SET_GPR_U32(ctx, 31, 0x1F2FC8u);
    ctx->pc = 0x1F2FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FC0u;
            // 0x1f2fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004B8u;
    if (runtime->hasFunction(0x1004B8u)) {
        auto targetFn = runtime->lookupFunction(0x1004B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC8u; }
        if (ctx->pc != 0x1F2FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004B8_0x1004b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC8u; }
        if (ctx->pc != 0x1F2FC8u) { return; }
    }
    ctx->pc = 0x1F2FC8u;
    // 0x1f2fc8: 0xc04c40e  jal         func_131038
    ctx->pc = 0x1F2FC8u;
    SET_GPR_U32(ctx, 31, 0x1F2FD0u);
    ctx->pc = 0x1F2FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FC8u;
            // 0x1f2fcc: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131038u;
    if (runtime->hasFunction(0x131038u)) {
        auto targetFn = runtime->lookupFunction(0x131038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FD0u; }
        if (ctx->pc != 0x1F2FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131038_0x131038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FD0u; }
        if (ctx->pc != 0x1F2FD0u) { return; }
    }
    ctx->pc = 0x1F2FD0u;
    // 0x1f2fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2fd4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1f2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1f2fd8:
    // 0x1f2fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fdc:
    // 0x1f2fdc: 0xc07caec  jal         func_1F2BB0
    ctx->pc = 0x1F2FDCu;
    SET_GPR_U32(ctx, 31, 0x1F2FE4u);
    ctx->pc = 0x1F2FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FDCu;
            // 0x1f2fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2BB0u;
    if (runtime->hasFunction(0x1F2BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F2BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FE4u; }
        if (ctx->pc != 0x1F2FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2BB0_0x1f2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FE4u; }
        if (ctx->pc != 0x1F2FE4u) { return; }
    }
    ctx->pc = 0x1F2FE4u;
    // 0x1f2fe4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f2fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2fe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2fec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f2fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FF4u;
            // 0x1f2ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2EA8u: goto label_1f2ea8;
            case 0x1F2ECCu: goto label_1f2ecc;
            case 0x1F2F04u: goto label_1f2f04;
            case 0x1F2F5Cu: goto label_1f2f5c;
            case 0x1F2FD8u: goto label_1f2fd8;
            case 0x1F2FDCu: goto label_1f2fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2FFCu;
    // 0x1f2ffc: 0x0  nop
    ctx->pc = 0x1f2ffcu;
    // NOP
    // 0x1f3000: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1f3000u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1f3004: 0x0  nop
    ctx->pc = 0x1f3004u;
    // NOP
}

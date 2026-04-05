#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195DD0
// Address: 0x195dd0 - 0x195ed8
void sub_00195DD0_0x195dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195DD0_0x195dd0");
#endif

    ctx->pc = 0x195dd0u;

    // 0x195dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195ddc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x195de0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x195de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195de8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x195de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x195dec: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x195decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x195df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195df4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x195df8: 0x2484c968  addiu       $a0, $a0, -0x3698
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953320));
    // 0x195dfc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x195DFCu;
    SET_GPR_U32(ctx, 31, 0x195E04u);
    ctx->pc = 0x195E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DFCu;
            // 0x195e00: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E04u; }
        if (ctx->pc != 0x195E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E04u; }
        if (ctx->pc != 0x195E04u) { return; }
    }
    ctx->pc = 0x195E04u;
    // 0x195e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e08: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x195E08u;
    SET_GPR_U32(ctx, 31, 0x195E10u);
    ctx->pc = 0x195E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E08u;
            // 0x195e0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E10u; }
        if (ctx->pc != 0x195E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E10u; }
        if (ctx->pc != 0x195E10u) { return; }
    }
    ctx->pc = 0x195E10u;
    // 0x195e10: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x195e14: 0xa6225048  sh          $v0, 0x5048($s1)
    ctx->pc = 0x195e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20552), (uint16_t)GPR_U32(ctx, 2));
    // 0x195e18: 0x8c64cd58  lw          $a0, -0x32A8($v1)
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x195e1c: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x195E1Cu;
    SET_GPR_U32(ctx, 31, 0x195E24u);
    ctx->pc = 0x195E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E1Cu;
            // 0x195e20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    }
    ctx->pc = 0x195E24u;
    // 0x195e24: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x195e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195e28: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x195e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x195e2c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x195e30: 0x2442e040  addiu       $v0, $v0, -0x1FC0
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959168));
    // 0x195e34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x195e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x195e38: 0xc6140004  lwc1        $f20, 0x4($s0)
    ctx->pc = 0x195e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195e3c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x195e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e40: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x195e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e44: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x195e44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x195e48: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x195e48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x195e4c: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x195E4Cu;
    SET_GPR_U32(ctx, 31, 0x195E54u);
    ctx->pc = 0x195E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E4Cu;
            // 0x195e50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E54u; }
        if (ctx->pc != 0x195E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E54u; }
        if (ctx->pc != 0x195E54u) { return; }
    }
    ctx->pc = 0x195E54u;
    // 0x195e54: 0xc060e52  jal         func_183948
    ctx->pc = 0x195E54u;
    SET_GPR_U32(ctx, 31, 0x195E5Cu);
    ctx->pc = 0x195E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E54u;
            // 0x195e58: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E5Cu; }
        if (ctx->pc != 0x195E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E5Cu; }
        if (ctx->pc != 0x195E5Cu) { return; }
    }
    ctx->pc = 0x195E5Cu;
    // 0x195e5c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x195e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195e60: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x195e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x195e64: 0xc6150014  lwc1        $f21, 0x14($s0)
    ctx->pc = 0x195e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x195e68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x195e6c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x195e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e70: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x195e70u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x195e74: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x195e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195e78: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x195e78u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x195e7c: 0xe440504c  swc1        $f0, 0x504C($v0)
    ctx->pc = 0x195e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20556), bits); }
    // 0x195e80: 0x4602ad43  div.s       $f21, $f21, $f2
    ctx->pc = 0x195e80u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[2];
    // 0x195e84: 0xe4615050  swc1        $f1, 0x5050($v1)
    ctx->pc = 0x195e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20560), bits); }
    // 0x195e88: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x195E88u;
    SET_GPR_U32(ctx, 31, 0x195E90u);
    ctx->pc = 0x195E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E88u;
            // 0x195e8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E90u; }
        if (ctx->pc != 0x195E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E90u; }
        if (ctx->pc != 0x195E90u) { return; }
    }
    ctx->pc = 0x195E90u;
    // 0x195e90: 0xc060e52  jal         func_183948
    ctx->pc = 0x195E90u;
    SET_GPR_U32(ctx, 31, 0x195E98u);
    ctx->pc = 0x195E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E90u;
            // 0x195e94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E98u; }
        if (ctx->pc != 0x195E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E98u; }
        if (ctx->pc != 0x195E98u) { return; }
    }
    ctx->pc = 0x195E98u;
    // 0x195e98: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x195e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x195ea0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x195ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x195ea4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x195ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x195ea8: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x195ea8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x195eac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195eb8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x195eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x195ebc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x195ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195ec0: 0xe4605054  swc1        $f0, 0x5054($v1)
    ctx->pc = 0x195ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20564), bits); }
    // 0x195ec4: 0xac40e160  sw          $zero, -0x1EA0($v0)
    ctx->pc = 0x195ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959456), GPR_U32(ctx, 0));
    // 0x195ec8: 0xe4815058  swc1        $f1, 0x5058($a0)
    ctx->pc = 0x195ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20568), bits); }
    // 0x195ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x195ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195ECCu;
            // 0x195ed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195ED4u;
    // 0x195ed4: 0x0  nop
    ctx->pc = 0x195ed4u;
    // NOP
}

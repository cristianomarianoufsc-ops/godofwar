#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101E88
// Address: 0x101e88 - 0x101fa8
void sub_00101E88_0x101e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101E88_0x101e88");
#endif

    ctx->pc = 0x101e88u;

    // 0x101e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101e8c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x101e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101e94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e98: 0x24c31144  addiu       $v1, $a2, 0x1144
    ctx->pc = 0x101e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4420));
    // 0x101e9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x101e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ea0: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x101ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ea4: 0x8ce20158  lw          $v0, 0x158($a3)
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x101ea8: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x101ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x101eac: 0xacc21208  sw          $v0, 0x1208($a2)
    ctx->pc = 0x101eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4616), GPR_U32(ctx, 2));
    // 0x101eb0: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x101eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101eb4: 0x8ce2015c  lw          $v0, 0x15C($a3)
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x101eb8: 0xe4c0006c  swc1        $f0, 0x6C($a2)
    ctx->pc = 0x101eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
    // 0x101ebc: 0xacc2120c  sw          $v0, 0x120C($a2)
    ctx->pc = 0x101ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4620), GPR_U32(ctx, 2));
    // 0x101ec0: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x101ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ec4: 0x8ce20154  lw          $v0, 0x154($a3)
    ctx->pc = 0x101ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 340)));
    // 0x101ec8: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x101ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x101ecc: 0xacc21210  sw          $v0, 0x1210($a2)
    ctx->pc = 0x101eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4624), GPR_U32(ctx, 2));
    // 0x101ed0: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x101ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ed4: 0x8ce20160  lw          $v0, 0x160($a3)
    ctx->pc = 0x101ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x101ed8: 0xe4c0005c  swc1        $f0, 0x5C($a2)
    ctx->pc = 0x101ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x101edc: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x101edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x101ee0: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x101ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ee4: 0xacc21214  sw          $v0, 0x1214($a2)
    ctx->pc = 0x101ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4628), GPR_U32(ctx, 2));
    // 0x101ee8: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x101ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x101eec: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x101eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ef0: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x101ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x101ef4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x101ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ef8: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101EF8u;
    {
        const bool branch_taken_0x101ef8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x101EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EF8u;
            // 0x101efc: 0xe4c01138  swc1        $f0, 0x1138($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ef8) {
            ctx->pc = 0x101F20u;
            goto label_101f20;
        }
    }
    ctx->pc = 0x101F00u;
label_101f00:
    // 0x101f00: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x101f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x101f04: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x101f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x101f08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101f0c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x101f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101f10: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x101f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x101f14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x101f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x101f18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x101F18u;
    {
        const bool branch_taken_0x101f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F18u;
            // 0x101f1c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f18) {
            ctx->pc = 0x101F00u;
            runtime->cooperativeGuestYield();
            goto label_101f00;
        }
    }
    ctx->pc = 0x101F20u;
label_101f20:
    // 0x101f20: 0x8cca0080  lw          $t2, 0x80($a2)
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x101f24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x101f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f28: 0x19400017  blez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x101F28u;
    {
        const bool branch_taken_0x101f28 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x101F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F28u;
            // 0x101f2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f28) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F30u;
    // 0x101f30: 0x8cc4007c  lw          $a0, 0x7C($a2)
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x101f34: 0x0  nop
    ctx->pc = 0x101f34u;
    // NOP
label_101f38:
    // 0x101f38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x101f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x101f3c: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x101f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x101f40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x101f44: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x101f48: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x101f4c: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x101f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101f54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x101f58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x101f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101f5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x101f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x101f60: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x101f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101f64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x101f64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101f68: 0x0  nop
    ctx->pc = 0x101f68u;
    // NOP
    // 0x101f6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x101F6Cu;
    {
        const bool branch_taken_0x101f6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x101F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F6Cu;
            // 0x101f70: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f6c) {
            ctx->pc = 0x101F7Cu;
            goto label_101f7c;
        }
    }
    ctx->pc = 0x101F74u;
    // 0x101f74: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x101f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x101f78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101f7c:
    // 0x101f7c: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x101f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x101f80: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x101F80u;
    {
        const bool branch_taken_0x101f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101f80) {
            ctx->pc = 0x101F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101F80u;
            // 0x101f84: 0x8cc4007c  lw          $a0, 0x7C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101F38u;
            runtime->cooperativeGuestYield();
            goto label_101f38;
        }
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x101F88u;
    {
        const bool branch_taken_0x101f88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F88u;
            // 0x101f8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f88) {
            ctx->pc = 0x101F9Cu;
            goto label_101f9c;
        }
    }
    ctx->pc = 0x101F90u;
    // 0x101f90: 0xc04069e  jal         func_101A78
    ctx->pc = 0x101F90u;
    SET_GPR_U32(ctx, 31, 0x101F98u);
    ctx->pc = 0x101F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F90u;
            // 0x101f94: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101A78u;
    if (runtime->hasFunction(0x101A78u)) {
        auto targetFn = runtime->lookupFunction(0x101A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F98u; }
        if (ctx->pc != 0x101F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101A78_0x101a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F98u; }
        if (ctx->pc != 0x101F98u) { return; }
    }
    ctx->pc = 0x101F98u;
    // 0x101f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101f9c:
    // 0x101f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x101F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F9Cu;
            // 0x101fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F00u: goto label_101f00;
            case 0x101F20u: goto label_101f20;
            case 0x101F38u: goto label_101f38;
            case 0x101F7Cu: goto label_101f7c;
            case 0x101F88u: goto label_101f88;
            case 0x101F9Cu: goto label_101f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101FA4u;
    // 0x101fa4: 0x0  nop
    ctx->pc = 0x101fa4u;
    // NOP
}

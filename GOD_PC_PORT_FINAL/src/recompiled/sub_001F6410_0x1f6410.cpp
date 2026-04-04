#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6410
// Address: 0x1f6410 - 0x1f6558
void sub_001F6410_0x1f6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6410_0x1f6410");
#endif

    ctx->pc = 0x1f6410u;

    // 0x1f6410: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1f6414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6418: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1f6418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1f641c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f641cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6420: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1f6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1f6424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6428: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1f6428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1f642c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f642cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6430: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1f6430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1f6434: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1f6434u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f6438: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f643c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1f643cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1f6440: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f6440u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1f6444: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1f6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1f6448: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1f6448u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1f644c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1f644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1f6450: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f6450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6454: 0x8e1100ac  lw          $s1, 0xAC($s0)
    ctx->pc = 0x1f6454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f6458: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f6458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f645c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1F645Cu;
    SET_GPR_U32(ctx, 31, 0x1F6464u);
    ctx->pc = 0x1F6460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F645Cu;
            // 0x1f6460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6464u; }
        if (ctx->pc != 0x1F6464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6464u; }
        if (ctx->pc != 0x1F6464u) { return; }
    }
    ctx->pc = 0x1F6464u;
    // 0x1f6464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f646c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6470: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f6470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6474: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x1F6474u;
    SET_GPR_U32(ctx, 31, 0x1F647Cu);
    ctx->pc = 0x1F6478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6474u;
            // 0x1f6478: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F647Cu; }
        if (ctx->pc != 0x1F647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F647Cu; }
        if (ctx->pc != 0x1F647Cu) { return; }
    }
    ctx->pc = 0x1F647Cu;
    // 0x1f647c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f647cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6480: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6484: 0x53a00b  movn        $s4, $v0, $s3
    ctx->pc = 0x1f6484u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x1f6488: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F6488u;
    {
        const bool branch_taken_0x1f6488 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6488u;
            // 0x1f648c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6488) {
            ctx->pc = 0x1F652Cu;
            goto label_1f652c;
        }
    }
    ctx->pc = 0x1F6490u;
    // 0x1f6490: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1f6494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6498: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6498u;
    {
        const bool branch_taken_0x1f6498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6498) {
            ctx->pc = 0x1F649Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6498u;
            // 0x1f649c: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F64A0u;
            goto label_1f64a0;
        }
    }
    ctx->pc = 0x1F64A0u;
label_1f64a0:
    // 0x1f64a0: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x1f64a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f64a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f64a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64a8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1F64A8u;
    SET_GPR_U32(ctx, 31, 0x1F64B0u);
    ctx->pc = 0x1F64ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64A8u;
            // 0x1f64ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (runtime->hasFunction(0x100690u)) {
        auto targetFn = runtime->lookupFunction(0x100690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64B0u; }
        if (ctx->pc != 0x1F64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100690_0x100690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64B0u; }
        if (ctx->pc != 0x1F64B0u) { return; }
    }
    ctx->pc = 0x1F64B0u;
    // 0x1f64b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f64b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f64b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f64b8: 0xc040144  jal         func_100510
    ctx->pc = 0x1F64B8u;
    SET_GPR_U32(ctx, 31, 0x1F64C0u);
    ctx->pc = 0x1F64BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64B8u;
            // 0x1f64bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64C0u; }
        if (ctx->pc != 0x1F64C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64C0u; }
        if (ctx->pc != 0x1F64C0u) { return; }
    }
    ctx->pc = 0x1F64C0u;
    // 0x1f64c0: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1f64c4: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1f64c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x1f64c8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F64C8u;
    {
        const bool branch_taken_0x1f64c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F64CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64C8u;
            // 0x1f64cc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64c8) {
            ctx->pc = 0x1F652Cu;
            goto label_1f652c;
        }
    }
    ctx->pc = 0x1F64D0u;
    // 0x1f64d0: 0x860200dc  lh          $v0, 0xDC($s0)
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f64d4: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1f64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1f64d8: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1f64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1f64dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F64DCu;
    {
        const bool branch_taken_0x1f64dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64DCu;
            // 0x1f64e0: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64dc) {
            ctx->pc = 0x1F64F0u;
            goto label_1f64f0;
        }
    }
    ctx->pc = 0x1F64E4u;
    // 0x1f64e4: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f64e8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1f64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1f64ec: 0x0  nop
    ctx->pc = 0x1f64ecu;
    // NOP
label_1f64f0:
    // 0x1f64f0: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1F64F0u;
    {
        const bool branch_taken_0x1f64f0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F64F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64F0u;
            // 0x1f64f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64f0) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F64F8u;
    // 0x1f64f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64fc: 0x0  nop
    ctx->pc = 0x1f64fcu;
    // NOP
label_1f6500:
    // 0x1f6500: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f6504: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f6508: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f650c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f6510: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x1f6510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
    // 0x1f6514: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x1f6514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f6518: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6518u;
    {
        const bool branch_taken_0x1f6518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6518u;
            // 0x1f651c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6518) {
            ctx->pc = 0x1F6500u;
            runtime->cooperativeGuestYield();
            goto label_1f6500;
        }
    }
    ctx->pc = 0x1F6520u;
label_1f6520:
    // 0x1f6520: 0xa61300dc  sh          $s3, 0xDC($s0)
    ctx->pc = 0x1f6520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 19));
    // 0x1f6524: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1f6524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1f6528: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1f6528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f652c:
    // 0x1f652c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1f652cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f6530: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1f6530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f6534: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1f6534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f6538: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1f6538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f653c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1f653cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f6540: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1f6540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f6544: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1f6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f6548: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1f6548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f654c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F654Cu;
            // 0x1f6550: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F64A0u: goto label_1f64a0;
            case 0x1F64F0u: goto label_1f64f0;
            case 0x1F6500u: goto label_1f6500;
            case 0x1F6520u: goto label_1f6520;
            case 0x1F652Cu: goto label_1f652c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6554u;
    // 0x1f6554: 0x0  nop
    ctx->pc = 0x1f6554u;
    // NOP
}

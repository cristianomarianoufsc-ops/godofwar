#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6760
// Address: 0x1e6760 - 0x1e6988
void sub_001E6760_0x1e6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6760_0x1e6760");
#endif

    ctx->pc = 0x1e6760u;

    // 0x1e6760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6768: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e676c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6770: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1E6770u;
    SET_GPR_U32(ctx, 31, 0x1E6778u);
    ctx->pc = 0x1E6774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6770u;
            // 0x1e6774: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6778u; }
        if (ctx->pc != 0x1E6778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6778u; }
        if (ctx->pc != 0x1E6778u) { return; }
    }
    ctx->pc = 0x1E6778u;
    // 0x1e6778: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1e677c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e6780: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E6780u;
    {
        const bool branch_taken_0x1e6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6780) {
            ctx->pc = 0x1E6784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6780u;
            // 0x1e6784: 0x8e230330  lw          $v1, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6800u;
            goto label_1e6800;
        }
    }
    ctx->pc = 0x1E6788u;
    // 0x1e6788: 0x8e220330  lw          $v0, 0x330($s1)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x1e678c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E678Cu;
    {
        const bool branch_taken_0x1e678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e678c) {
            ctx->pc = 0x1E6790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E678Cu;
            // 0x1e6790: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E67B0u;
            goto label_1e67b0;
        }
    }
    ctx->pc = 0x1E6794u;
    // 0x1e6794: 0xc07fd72  jal         func_1FF5C8
    ctx->pc = 0x1E6794u;
    SET_GPR_U32(ctx, 31, 0x1E679Cu);
    ctx->pc = 0x1E6798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6794u;
            // 0x1e6798: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF5C8u;
    if (runtime->hasFunction(0x1FF5C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FF5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E679Cu; }
        if (ctx->pc != 0x1E679Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF5C8_0x1ff5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E679Cu; }
        if (ctx->pc != 0x1E679Cu) { return; }
    }
    ctx->pc = 0x1E679Cu;
    // 0x1e679c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e67a0: 0x24638980  addiu       $v1, $v1, -0x7680
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936960));
    // 0x1e67a4: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1e67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x1e67a8: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x1e67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x1e67ac: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e67acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1e67b0:
    // 0x1e67b0: 0x8e230330  lw          $v1, 0x330($s1)
    ctx->pc = 0x1e67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x1e67b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e67b8: 0xc44001d0  lwc1        $f0, 0x1D0($v0)
    ctx->pc = 0x1e67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e67bc: 0xc44701cc  lwc1        $f7, 0x1CC($v0)
    ctx->pc = 0x1e67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e67c0: 0xc44101c4  lwc1        $f1, 0x1C4($v0)
    ctx->pc = 0x1e67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e67c4: 0xc44201c8  lwc1        $f2, 0x1C8($v0)
    ctx->pc = 0x1e67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e67c8: 0xc44301b4  lwc1        $f3, 0x1B4($v0)
    ctx->pc = 0x1e67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e67cc: 0xc44401b8  lwc1        $f4, 0x1B8($v0)
    ctx->pc = 0x1e67ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e67d0: 0xc44501c0  lwc1        $f5, 0x1C0($v0)
    ctx->pc = 0x1e67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e67d4: 0xc44601bc  lwc1        $f6, 0x1BC($v0)
    ctx->pc = 0x1e67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e67d8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x1e67d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x1e67dc: 0xe4670044  swc1        $f7, 0x44($v1)
    ctx->pc = 0x1e67dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1e67e0: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x1e67e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1e67e4: 0xe462004c  swc1        $f2, 0x4C($v1)
    ctx->pc = 0x1e67e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1e67e8: 0xe4630050  swc1        $f3, 0x50($v1)
    ctx->pc = 0x1e67e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1e67ec: 0xe4640054  swc1        $f4, 0x54($v1)
    ctx->pc = 0x1e67ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1e67f0: 0xe4650058  swc1        $f5, 0x58($v1)
    ctx->pc = 0x1e67f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1e67f4: 0xe466005c  swc1        $f6, 0x5C($v1)
    ctx->pc = 0x1e67f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x1e67f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E67F8u;
    {
        const bool branch_taken_0x1e67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67F8u;
            // 0x1e67fc: 0xe4670040  swc1        $f7, 0x40($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67f8) {
            ctx->pc = 0x1E6820u;
            goto label_1e6820;
        }
    }
    ctx->pc = 0x1E6800u;
label_1e6800:
    // 0x1e6800: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6800u;
    {
        const bool branch_taken_0x1e6800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6800u;
            // 0x1e6804: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6800) {
            ctx->pc = 0x1E6820u;
            goto label_1e6820;
        }
    }
    ctx->pc = 0x1E6808u;
    // 0x1e6808: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1e680c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e6810: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e6814: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E681Cu);
        ctx->pc = 0x1E6818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6814u;
            // 0x1e6818: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E681Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6968u: goto label_1e6968;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E681Cu; }
            if (ctx->pc != 0x1E681Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E681Cu;
    // 0x1e681c: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x1e681cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_1e6820:
    // 0x1e6820: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1e6824: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1e6828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e682c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1E682Cu;
    {
        const bool branch_taken_0x1e682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e682c) {
            ctx->pc = 0x1E6830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E682Cu;
            // 0x1e6830: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6868u;
            goto label_1e6868;
        }
    }
    ctx->pc = 0x1E6834u;
    // 0x1e6834: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x1e6838: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E6838u;
    {
        const bool branch_taken_0x1e6838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6838) {
            ctx->pc = 0x1E683Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6838u;
            // 0x1e683c: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E688Cu;
            goto label_1e688c;
        }
    }
    ctx->pc = 0x1E6840u;
    // 0x1e6840: 0xc079808  jal         func_1E6020
    ctx->pc = 0x1E6840u;
    SET_GPR_U32(ctx, 31, 0x1E6848u);
    ctx->pc = 0x1E6844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6840u;
            // 0x1e6844: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6020u;
    if (runtime->hasFunction(0x1E6020u)) {
        auto targetFn = runtime->lookupFunction(0x1E6020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6848u; }
        if (ctx->pc != 0x1E6848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6020_0x1e6020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6848u; }
        if (ctx->pc != 0x1E6848u) { return; }
    }
    ctx->pc = 0x1E6848u;
    // 0x1e6848: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e684c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6850: 0x24638a00  addiu       $v1, $v1, -0x7600
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937088));
    // 0x1e6854: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1e6854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1e6858: 0xc091342  jal         func_244D08
    ctx->pc = 0x1E6858u;
    SET_GPR_U32(ctx, 31, 0x1E6860u);
    ctx->pc = 0x1E685Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6858u;
            // 0x1e685c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244D08u;
    if (runtime->hasFunction(0x244D08u)) {
        auto targetFn = runtime->lookupFunction(0x244D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6860u; }
        if (ctx->pc != 0x1E6860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244d08_0x244d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6860u; }
        if (ctx->pc != 0x1E6860u) { return; }
    }
    ctx->pc = 0x1E6860u;
    // 0x1e6860: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6860u;
    {
        const bool branch_taken_0x1e6860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6860u;
            // 0x1e6864: 0xae300334  sw          $s0, 0x334($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6860) {
            ctx->pc = 0x1E6888u;
            goto label_1e6888;
        }
    }
    ctx->pc = 0x1E6868u;
label_1e6868:
    // 0x1e6868: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6868u;
    {
        const bool branch_taken_0x1e6868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6868u;
            // 0x1e686c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6868) {
            ctx->pc = 0x1E6888u;
            goto label_1e6888;
        }
    }
    ctx->pc = 0x1E6870u;
    // 0x1e6870: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e6870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e6874: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e6874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e6878: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e687c: 0x40f809  jalr        $v0
    ctx->pc = 0x1E687Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6884u);
        ctx->pc = 0x1E6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E687Cu;
            // 0x1e6880: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6884u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6968u: goto label_1e6968;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6884u; }
            if (ctx->pc != 0x1E6884u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6884u;
    // 0x1e6884: 0xae200334  sw          $zero, 0x334($s1)
    ctx->pc = 0x1e6884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
label_1e6888:
    // 0x1e6888: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e6888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1e688c:
    // 0x1e688c: 0xc620028c  lwc1        $f0, 0x28C($s1)
    ctx->pc = 0x1e688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6890: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e6890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e6894: 0x9442026c  lhu         $v0, 0x26C($v0)
    ctx->pc = 0x1e6894u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1e6898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e689c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e689cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e68a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e68a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e68a4: 0x0  nop
    ctx->pc = 0x1e68a4u;
    // NOP
    // 0x1e68a8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E68A8u;
    {
        const bool branch_taken_0x1e68a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e68a8) {
            ctx->pc = 0x1E68ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68A8u;
            // 0x1e68ac: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E68C4u;
            goto label_1e68c4;
        }
    }
    ctx->pc = 0x1E68B0u;
    // 0x1e68b0: 0xc62c0288  lwc1        $f12, 0x288($s1)
    ctx->pc = 0x1e68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e68b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68b8: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E68B8u;
    SET_GPR_U32(ctx, 31, 0x1E68C0u);
    ctx->pc = 0x1E68BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68B8u;
            // 0x1e68bc: 0xe621028c  swc1        $f1, 0x28C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C0u; }
        if (ctx->pc != 0x1E68C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C0u; }
        if (ctx->pc != 0x1E68C0u) { return; }
    }
    ctx->pc = 0x1E68C0u;
    // 0x1e68c0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1e68c4:
    // 0x1e68c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e68c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e68c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68cc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e68d0: 0xc07b20c  jal         func_1EC830
    ctx->pc = 0x1E68D0u;
    SET_GPR_U32(ctx, 31, 0x1E68D8u);
    ctx->pc = 0x1E68D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68D0u;
            // 0x1e68d4: 0x24a50272  addiu       $a1, $a1, 0x272 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 626));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC830u;
    if (runtime->hasFunction(0x1EC830u)) {
        auto targetFn = runtime->lookupFunction(0x1EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D8u; }
        if (ctx->pc != 0x1E68D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC830_0x1ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D8u; }
        if (ctx->pc != 0x1E68D8u) { return; }
    }
    ctx->pc = 0x1E68D8u;
    // 0x1e68d8: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e68dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e68e4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e68e8: 0xc07b20c  jal         func_1EC830
    ctx->pc = 0x1E68E8u;
    SET_GPR_U32(ctx, 31, 0x1E68F0u);
    ctx->pc = 0x1E68ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68E8u;
            // 0x1e68ec: 0x24a5028a  addiu       $a1, $a1, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 650));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC830u;
    if (runtime->hasFunction(0x1EC830u)) {
        auto targetFn = runtime->lookupFunction(0x1EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68F0u; }
        if (ctx->pc != 0x1E68F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC830_0x1ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68F0u; }
        if (ctx->pc != 0x1E68F0u) { return; }
    }
    ctx->pc = 0x1E68F0u;
    // 0x1e68f0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e68f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e68f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e68fc: 0x8082008c  lb          $v0, 0x8C($a0)
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1e6900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6900u;
    {
        const bool branch_taken_0x1e6900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6900u;
            // 0x1e6904: 0x8c700104  lw          $s0, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6900) {
            ctx->pc = 0x1E6928u;
            goto label_1e6928;
        }
    }
    ctx->pc = 0x1E6908u;
    // 0x1e6908: 0x2484008c  addiu       $a0, $a0, 0x8C
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x1e690c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1E690Cu;
    SET_GPR_U32(ctx, 31, 0x1E6914u);
    ctx->pc = 0x1E6910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E690Cu;
            // 0x1e6910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6914u; }
        if (ctx->pc != 0x1E6914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6914u; }
        if (ctx->pc != 0x1E6914u) { return; }
    }
    ctx->pc = 0x1E6914u;
    // 0x1e6914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6918: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1E6918u;
    SET_GPR_U32(ctx, 31, 0x1E6920u);
    ctx->pc = 0x1E691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6918u;
            // 0x1e691c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6920u; }
        if (ctx->pc != 0x1E6920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6920u; }
        if (ctx->pc != 0x1E6920u) { return; }
    }
    ctx->pc = 0x1E6920u;
    // 0x1e6920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6920u;
    {
        const bool branch_taken_0x1e6920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6920u;
            // 0x1e6924: 0xa6220350  sh          $v0, 0x350($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 848), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6920) {
            ctx->pc = 0x1E6930u;
            goto label_1e6930;
        }
    }
    ctx->pc = 0x1E6928u;
label_1e6928:
    // 0x1e6928: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e692c: 0xa6220350  sh          $v0, 0x350($s1)
    ctx->pc = 0x1e692cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 848), (uint16_t)GPR_U32(ctx, 2));
label_1e6930:
    // 0x1e6930: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e6934: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e6934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e6938: 0x808200a4  lb          $v0, 0xA4($a0)
    ctx->pc = 0x1e6938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1e693c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E693Cu;
    {
        const bool branch_taken_0x1e693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E693Cu;
            // 0x1e6940: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e693c) {
            ctx->pc = 0x1E6960u;
            goto label_1e6960;
        }
    }
    ctx->pc = 0x1E6944u;
    // 0x1e6944: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1E6944u;
    SET_GPR_U32(ctx, 31, 0x1E694Cu);
    ctx->pc = 0x1E6948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6944u;
            // 0x1e6948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E694Cu; }
        if (ctx->pc != 0x1E694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E694Cu; }
        if (ctx->pc != 0x1E694Cu) { return; }
    }
    ctx->pc = 0x1E694Cu;
    // 0x1e694c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6950: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1E6950u;
    SET_GPR_U32(ctx, 31, 0x1E6958u);
    ctx->pc = 0x1E6954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6950u;
            // 0x1e6954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6958u; }
        if (ctx->pc != 0x1E6958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6958u; }
        if (ctx->pc != 0x1E6958u) { return; }
    }
    ctx->pc = 0x1E6958u;
    // 0x1e6958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6958u;
    {
        const bool branch_taken_0x1e6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6958u;
            // 0x1e695c: 0xa6220352  sh          $v0, 0x352($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6958) {
            ctx->pc = 0x1E6968u;
            goto label_1e6968;
        }
    }
    ctx->pc = 0x1E6960u;
label_1e6960:
    // 0x1e6960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6964: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x1e6964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_1e6968:
    // 0x1e6968: 0xae200354  sw          $zero, 0x354($s1)
    ctx->pc = 0x1e6968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 0));
    // 0x1e696c: 0xae200358  sw          $zero, 0x358($s1)
    ctx->pc = 0x1e696cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 0));
    // 0x1e6970: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e697c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E697Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E697Cu;
            // 0x1e6980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6968u: goto label_1e6968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6984u;
    // 0x1e6984: 0x0  nop
    ctx->pc = 0x1e6984u;
    // NOP
}

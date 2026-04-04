#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6588
// Address: 0x1d6588 - 0x1d6ab8
void sub_001D6588_0x1d6588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6588_0x1d6588");
#endif

    ctx->pc = 0x1d6588u;

    // 0x1d6588: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d658c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6590: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d6594: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d6594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d6598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d659c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1d659cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1d65a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d65a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d65a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d65a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d65ac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d65acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d65b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d65b4: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1d65b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d65b8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1d65b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d65bc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1d65bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d65c0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1d65c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d65c4: 0x8e64cb94  lw          $a0, -0x346C($s3)
    ctx->pc = 0x1d65c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d65c8: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x1d65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1d65cc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D65CCu;
    {
        const bool branch_taken_0x1d65cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d65cc) {
            ctx->pc = 0x1D65D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65CCu;
            // 0x1d65d0: 0x8c831574  lw          $v1, 0x1574($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D65D4u;
            goto label_1d65d4;
        }
    }
    ctx->pc = 0x1D65D4u;
label_1d65d4:
    // 0x1d65d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d65d8: 0x1462012b  bne         $v1, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x1D65D8u;
    {
        const bool branch_taken_0x1d65d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D65DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65D8u;
            // 0x1d65dc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65d8) {
            ctx->pc = 0x1D6A88u;
            goto label_1d6a88;
        }
    }
    ctx->pc = 0x1D65E0u;
    // 0x1d65e0: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D65E0u;
    SET_GPR_U32(ctx, 31, 0x1D65E8u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65E8u; }
        if (ctx->pc != 0x1D65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65E8u; }
        if (ctx->pc != 0x1D65E8u) { return; }
    }
    ctx->pc = 0x1D65E8u;
    // 0x1d65e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D65E8u;
    {
        const bool branch_taken_0x1d65e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D65ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65E8u;
            // 0x1d65ec: 0x8e64cb94  lw          $a0, -0x346C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65e8) {
            ctx->pc = 0x1D661Cu;
            goto label_1d661c;
        }
    }
    ctx->pc = 0x1D65F0u;
    // 0x1d65f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d65f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D65F4u;
    {
        const bool branch_taken_0x1d65f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d65f4) {
            ctx->pc = 0x1D661Cu;
            goto label_1d661c;
        }
    }
    ctx->pc = 0x1D65FCu;
    // 0x1d65fc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6608: 0xc4d40178  lwc1        $f20, 0x178($a2)
    ctx->pc = 0x1d6608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d660c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d660cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6610: 0x0  nop
    ctx->pc = 0x1d6610u;
    // NOP
    // 0x1d6614: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6614u;
    {
        const bool branch_taken_0x1d6614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6614u;
            // 0x1d6618: 0x3c150030  lui         $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6614) {
            ctx->pc = 0x1D662Cu;
            goto label_1d662c;
        }
    }
    ctx->pc = 0x1D661Cu;
label_1d661c:
    // 0x1d661c: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1D661Cu;
    SET_GPR_U32(ctx, 31, 0x1D6624u);
    ctx->pc = 0x1D6620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D661Cu;
            // 0x1d6620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6624u; }
        if (ctx->pc != 0x1D6624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6624u; }
        if (ctx->pc != 0x1D6624u) { return; }
    }
    ctx->pc = 0x1D6624u;
    // 0x1d6624: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1D6624u;
    {
        const bool branch_taken_0x1d6624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6624u;
            // 0x1d6628: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6624) {
            ctx->pc = 0x1D6A88u;
            goto label_1d6a88;
        }
    }
    ctx->pc = 0x1D662Cu;
label_1d662c:
    // 0x1d662c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d6630: 0x26b02cc0  addiu       $s0, $s5, 0x2CC0
    ctx->pc = 0x1d6630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d6634: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x1d6634u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x1d6638: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x1d6638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x1d663c: 0x268528e0  addiu       $a1, $s4, 0x28E0
    ctx->pc = 0x1d663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10464));
    // 0x1d6640: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d6640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d6644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6648: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d664c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d6650: 0xc616005c  lwc1        $f22, 0x5C($s0)
    ctx->pc = 0x1d6650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d6654: 0x96120068  lhu         $s2, 0x68($s0)
    ctx->pc = 0x1d6654u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d6658: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d6658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d665c: 0xc4b70014  lwc1        $f23, 0x14($a1)
    ctx->pc = 0x1d665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d6660: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6668u);
        ctx->pc = 0x1D6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6660u;
            // 0x1d6664: 0xc4d5017c  lwc1        $f21, 0x17C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6668u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D65D4u: goto label_1d65d4;
            case 0x1D661Cu: goto label_1d661c;
            case 0x1D662Cu: goto label_1d662c;
            case 0x1D670Cu: goto label_1d670c;
            case 0x1D6710u: goto label_1d6710;
            case 0x1D6714u: goto label_1d6714;
            case 0x1D675Cu: goto label_1d675c;
            case 0x1D6770u: goto label_1d6770;
            case 0x1D67ACu: goto label_1d67ac;
            case 0x1D67F0u: goto label_1d67f0;
            case 0x1D67F4u: goto label_1d67f4;
            case 0x1D67FCu: goto label_1d67fc;
            case 0x1D6818u: goto label_1d6818;
            case 0x1D6824u: goto label_1d6824;
            case 0x1D6828u: goto label_1d6828;
            case 0x1D6854u: goto label_1d6854;
            case 0x1D6874u: goto label_1d6874;
            case 0x1D6890u: goto label_1d6890;
            case 0x1D68B4u: goto label_1d68b4;
            case 0x1D68D4u: goto label_1d68d4;
            case 0x1D6948u: goto label_1d6948;
            case 0x1D6988u: goto label_1d6988;
            case 0x1D69A8u: goto label_1d69a8;
            case 0x1D69BCu: goto label_1d69bc;
            case 0x1D69E4u: goto label_1d69e4;
            case 0x1D69F8u: goto label_1d69f8;
            case 0x1D6A0Cu: goto label_1d6a0c;
            case 0x1D6A88u: goto label_1d6a88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6668u; }
            if (ctx->pc != 0x1D6668u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6668u;
    // 0x1d6668: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d666c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D666Cu;
    {
        const bool branch_taken_0x1d666c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D666Cu;
            // 0x1d6670: 0x26a22cc0  addiu       $v0, $s5, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d666c) {
            ctx->pc = 0x1D6710u;
            goto label_1d6710;
        }
    }
    ctx->pc = 0x1D6674u;
    // 0x1d6674: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x1d6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6678: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d6678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d667c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1d667cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6680: 0x0  nop
    ctx->pc = 0x1d6680u;
    // NOP
    // 0x1d6684: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1D6684u;
    {
        const bool branch_taken_0x1d6684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6684u;
            // 0x1d6688: 0x268328e0  addiu       $v1, $s4, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 10464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6684) {
            ctx->pc = 0x1D6714u;
            goto label_1d6714;
        }
    }
    ctx->pc = 0x1D668Cu;
    // 0x1d668c: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1d6690: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D6690u;
    {
        const bool branch_taken_0x1d6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6690u;
            // 0x1d6694: 0x26a22cc0  addiu       $v0, $s5, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6690) {
            ctx->pc = 0x1D6714u;
            goto label_1d6714;
        }
    }
    ctx->pc = 0x1D6698u;
    // 0x1d6698: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d669c: 0x9203007e  lbu         $v1, 0x7E($s0)
    ctx->pc = 0x1d669cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1d66a0: 0x8c42cd70  lw          $v0, -0x3290($v0)
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954352)));
    // 0x1d66a4: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D66A4u;
    {
        const bool branch_taken_0x1d66a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66A4u;
            // 0x1d66a8: 0x26a22cc0  addiu       $v0, $s5, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66a4) {
            ctx->pc = 0x1D6710u;
            goto label_1d6710;
        }
    }
    ctx->pc = 0x1D66ACu;
    // 0x1d66ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d66acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d66b0: 0xc440cd74  lwc1        $f0, -0x328C($v0)
    ctx->pc = 0x1d66b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d66b4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d66b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66b8: 0x0  nop
    ctx->pc = 0x1d66b8u;
    // NOP
    // 0x1d66bc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1D66BCu;
    {
        const bool branch_taken_0x1d66bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D66C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66BCu;
            // 0x1d66c0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66bc) {
            ctx->pc = 0x1D670Cu;
            goto label_1d670c;
        }
    }
    ctx->pc = 0x1D66C4u;
    // 0x1d66c4: 0xc440cd78  lwc1        $f0, -0x3288($v0)
    ctx->pc = 0x1d66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d66c8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1d66c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66cc: 0x0  nop
    ctx->pc = 0x1d66ccu;
    // NOP
    // 0x1d66d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1D66D0u;
    {
        const bool branch_taken_0x1d66d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D66D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66D0u;
            // 0x1d66d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66d0) {
            ctx->pc = 0x1D670Cu;
            goto label_1d670c;
        }
    }
    ctx->pc = 0x1D66D8u;
    // 0x1d66d8: 0xc440cd7c  lwc1        $f0, -0x3284($v0)
    ctx->pc = 0x1d66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d66dc: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1d66dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66e0: 0x0  nop
    ctx->pc = 0x1d66e0u;
    // NOP
    // 0x1d66e4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D66E4u;
    {
        const bool branch_taken_0x1d66e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D66E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66E4u;
            // 0x1d66e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66e4) {
            ctx->pc = 0x1D670Cu;
            goto label_1d670c;
        }
    }
    ctx->pc = 0x1D66ECu;
    // 0x1d66ec: 0xc440cd80  lwc1        $f0, -0x3280($v0)
    ctx->pc = 0x1d66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d66f0: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x1d66f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66f4: 0x0  nop
    ctx->pc = 0x1d66f4u;
    // NOP
    // 0x1d66f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D66F8u;
    {
        const bool branch_taken_0x1d66f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D66FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66F8u;
            // 0x1d66fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66f8) {
            ctx->pc = 0x1D670Cu;
            goto label_1d670c;
        }
    }
    ctx->pc = 0x1D6700u;
    // 0x1d6700: 0x8c42cd84  lw          $v0, -0x327C($v0)
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954372)));
    // 0x1d6704: 0x10520015  beq         $v0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6704u;
    {
        const bool branch_taken_0x1d6704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D6708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6704u;
            // 0x1d6708: 0x8e70cb94  lw          $s0, -0x346C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6704) {
            ctx->pc = 0x1D675Cu;
            goto label_1d675c;
        }
    }
    ctx->pc = 0x1D670Cu;
label_1d670c:
    // 0x1d670c: 0x26a22cc0  addiu       $v0, $s5, 0x2CC0
    ctx->pc = 0x1d670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
label_1d6710:
    // 0x1d6710: 0x268328e0  addiu       $v1, $s4, 0x28E0
    ctx->pc = 0x1d6710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 10464));
label_1d6714:
    // 0x1d6714: 0x9046007e  lbu         $a2, 0x7E($v0)
    ctx->pc = 0x1d6714u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
    // 0x1d6718: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1d671c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1d671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6720: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1d6720u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1d6724: 0xac86cd70  sw          $a2, -0x3290($a0)
    ctx->pc = 0x1d6724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954352), GPR_U32(ctx, 6));
    // 0x1d6728: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d672c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1d672cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1d6730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6734: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d6738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d6738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d673c: 0xe475cd78  swc1        $f21, -0x3288($v1)
    ctx->pc = 0x1d673cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954360), bits); }
    // 0x1d6740: 0xe457cd80  swc1        $f23, -0x3280($v0)
    ctx->pc = 0x1d6740u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954368), bits); }
    // 0x1d6744: 0xe514cd74  swc1        $f20, -0x328C($t0)
    ctx->pc = 0x1d6744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954356), bits); }
    // 0x1d6748: 0xe4f6cd7c  swc1        $f22, -0x3284($a3)
    ctx->pc = 0x1d6748u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954364), bits); }
    // 0x1d674c: 0xacb2cd84  sw          $s2, -0x327C($a1)
    ctx->pc = 0x1d674cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954372), GPR_U32(ctx, 18));
    // 0x1d6750: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x1d6750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x1d6754: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6754u;
    {
        const bool branch_taken_0x1d6754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6754u;
            // 0x1d6758: 0xae2401c0  sw          $a0, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6754) {
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D675Cu;
label_1d675c:
    // 0x1d675c: 0x8e02157c  lw          $v0, 0x157C($s0)
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x1d6760: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6760u;
    {
        const bool branch_taken_0x1d6760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6760) {
            ctx->pc = 0x1D6764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6760u;
            // 0x1d6764: 0xc62101c4  lwc1        $f1, 0x1C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6770u;
            goto label_1d6770;
        }
    }
    ctx->pc = 0x1D6768u;
    // 0x1d6768: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6768u;
    {
        const bool branch_taken_0x1d6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6768u;
            // 0x1d676c: 0xe62201c4  swc1        $f2, 0x1C4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6768) {
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D6770u;
label_1d6770:
    // 0x1d6770: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d6770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6774: 0x0  nop
    ctx->pc = 0x1d6774u;
    // NOP
    // 0x1d6778: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D6778u;
    {
        const bool branch_taken_0x1d6778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6778u;
            // 0x1d677c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6778) {
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D6780u;
    // 0x1d6780: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1d6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d6784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d6788: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1d6788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d678c: 0x0  nop
    ctx->pc = 0x1d678cu;
    // NOP
    // 0x1d6790: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6790u;
    {
        const bool branch_taken_0x1d6790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6790u;
            // 0x1d6794: 0xe62001c4  swc1        $f0, 0x1C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6790) {
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D6798u;
    // 0x1d6798: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1d6798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1d679c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D67A0u;
    SET_GPR_U32(ctx, 31, 0x1D67A8u);
    ctx->pc = 0x1D67A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67A0u;
            // 0x1d67a4: 0xae00157c  sw          $zero, 0x157C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67A8u; }
        if (ctx->pc != 0x1D67A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67A8u; }
        if (ctx->pc != 0x1D67A8u) { return; }
    }
    ctx->pc = 0x1D67A8u;
    // 0x1d67a8: 0xae001580  sw          $zero, 0x1580($s0)
    ctx->pc = 0x1d67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5504), GPR_U32(ctx, 0));
label_1d67ac:
    // 0x1d67ac: 0x8e2201c8  lw          $v0, 0x1C8($s1)
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1d67b0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D67B0u;
    {
        const bool branch_taken_0x1d67b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67B0u;
            // 0x1d67b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b0) {
            ctx->pc = 0x1D67FCu;
            goto label_1d67fc;
        }
    }
    ctx->pc = 0x1D67B8u;
    // 0x1d67b8: 0xc077010  jal         func_1DC040
    ctx->pc = 0x1D67B8u;
    SET_GPR_U32(ctx, 31, 0x1D67C0u);
    ctx->pc = 0x1D67BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67B8u;
            // 0x1d67bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC040u;
    if (runtime->hasFunction(0x1DC040u)) {
        auto targetFn = runtime->lookupFunction(0x1DC040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67C0u; }
        if (ctx->pc != 0x1D67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc040_0x1dc060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67C0u; }
        if (ctx->pc != 0x1D67C0u) { return; }
    }
    ctx->pc = 0x1D67C0u;
    // 0x1d67c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D67C0u;
    {
        const bool branch_taken_0x1d67c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67C0u;
            // 0x1d67c4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67c0) {
            ctx->pc = 0x1D67F0u;
            goto label_1d67f0;
        }
    }
    ctx->pc = 0x1D67C8u;
    // 0x1d67c8: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1d67c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d67cc: 0x8e02157c  lw          $v0, 0x157C($s0)
    ctx->pc = 0x1d67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x1d67d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67D0u;
    {
        const bool branch_taken_0x1d67d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d67d0) {
            ctx->pc = 0x1D67D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67D0u;
            // 0x1d67d4: 0x8e2201c8  lw          $v0, 0x1C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D67F4u;
            goto label_1d67f4;
        }
    }
    ctx->pc = 0x1D67D8u;
    // 0x1d67d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e0: 0xae02157c  sw          $v0, 0x157C($s0)
    ctx->pc = 0x1d67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5500), GPR_U32(ctx, 2));
    // 0x1d67e4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d67e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D67E8u;
    {
        const bool branch_taken_0x1d67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67E8u;
            // 0x1d67ec: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67e8) {
            ctx->pc = 0x1D6818u;
            goto label_1d6818;
        }
    }
    ctx->pc = 0x1D67F0u;
label_1d67f0:
    // 0x1d67f0: 0x8e2201c8  lw          $v0, 0x1C8($s1)
    ctx->pc = 0x1d67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_1d67f4:
    // 0x1d67f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D67F4u;
    {
        const bool branch_taken_0x1d67f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67F4u;
            // 0x1d67f8: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f4) {
            ctx->pc = 0x1D6828u;
            goto label_1d6828;
        }
    }
    ctx->pc = 0x1D67FCu;
label_1d67fc:
    // 0x1d67fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6800: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d6804: 0x8e02157c  lw          $v0, 0x157C($s0)
    ctx->pc = 0x1d6804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x1d6808: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6808u;
    {
        const bool branch_taken_0x1d6808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6808u;
            // 0x1d680c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6808) {
            ctx->pc = 0x1D6824u;
            goto label_1d6824;
        }
    }
    ctx->pc = 0x1D6810u;
    // 0x1d6810: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1d6810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1d6814: 0xae00157c  sw          $zero, 0x157C($s0)
    ctx->pc = 0x1d6814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5500), GPR_U32(ctx, 0));
label_1d6818:
    // 0x1d6818: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D6818u;
    SET_GPR_U32(ctx, 31, 0x1D6820u);
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6820u; }
        if (ctx->pc != 0x1D6820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6820u; }
        if (ctx->pc != 0x1D6820u) { return; }
    }
    ctx->pc = 0x1D6820u;
    // 0x1d6820: 0xae001580  sw          $zero, 0x1580($s0)
    ctx->pc = 0x1d6820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5504), GPR_U32(ctx, 0));
label_1d6824:
    // 0x1d6824: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1d6824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
label_1d6828:
    // 0x1d6828: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x1d6828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
    // 0x1d682c: 0x8e64cb94  lw          $a0, -0x346C($s3)
    ctx->pc = 0x1d682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d6830: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6834: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d6834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d6838: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1d6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d683c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D683Cu;
    {
        const bool branch_taken_0x1d683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D683Cu;
            // 0x1d6840: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d683c) {
            ctx->pc = 0x1D6854u;
            goto label_1d6854;
        }
    }
    ctx->pc = 0x1D6844u;
    // 0x1d6844: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1d6844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1d6848: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D6848u;
    SET_GPR_U32(ctx, 31, 0x1D6850u);
    ctx->pc = 0x1D684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6848u;
            // 0x1d684c: 0xac820214  sw          $v0, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6850u; }
        if (ctx->pc != 0x1D6850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6850u; }
        if (ctx->pc != 0x1D6850u) { return; }
    }
    ctx->pc = 0x1D6850u;
    // 0x1d6850: 0x8e64cb94  lw          $a0, -0x346C($s3)
    ctx->pc = 0x1d6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
label_1d6854:
    // 0x1d6854: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6858: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d6858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d685c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1d685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d6860: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6860u;
    {
        const bool branch_taken_0x1d6860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6860u;
            // 0x1d6864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6860) {
            ctx->pc = 0x1D6874u;
            goto label_1d6874;
        }
    }
    ctx->pc = 0x1D6868u;
    // 0x1d6868: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1d6868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1d686c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D686Cu;
    SET_GPR_U32(ctx, 31, 0x1D6874u);
    ctx->pc = 0x1D6870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D686Cu;
            // 0x1d6870: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6874u; }
        if (ctx->pc != 0x1D6874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6874u; }
        if (ctx->pc != 0x1D6874u) { return; }
    }
    ctx->pc = 0x1D6874u;
label_1d6874:
    // 0x1d6874: 0x8e64cb94  lw          $a0, -0x346C($s3)
    ctx->pc = 0x1d6874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d6878: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x1d6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x1d687c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D687Cu;
    {
        const bool branch_taken_0x1d687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D687Cu;
            // 0x1d6880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d687c) {
            ctx->pc = 0x1D6890u;
            goto label_1d6890;
        }
    }
    ctx->pc = 0x1D6884u;
    // 0x1d6884: 0xac9201d0  sw          $s2, 0x1D0($a0)
    ctx->pc = 0x1d6884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 18));
    // 0x1d6888: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D6888u;
    SET_GPR_U32(ctx, 31, 0x1D6890u);
    ctx->pc = 0x1D688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6888u;
            // 0x1d688c: 0xac82021c  sw          $v0, 0x21C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6890u; }
        if (ctx->pc != 0x1D6890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6890u; }
        if (ctx->pc != 0x1D6890u) { return; }
    }
    ctx->pc = 0x1D6890u;
label_1d6890:
    // 0x1d6890: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d6894: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6898: 0x24522cc0  addiu       $s2, $v0, 0x2CC0
    ctx->pc = 0x1d6898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d689c: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x1d689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d68a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d68a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d68a4: 0x0  nop
    ctx->pc = 0x1d68a4u;
    // NOP
    // 0x1d68a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D68A8u;
    {
        const bool branch_taken_0x1d68a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D68ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68A8u;
            // 0x1d68ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68a8) {
            ctx->pc = 0x1D68B4u;
            goto label_1d68b4;
        }
    }
    ctx->pc = 0x1D68B0u;
    // 0x1d68b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d68b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d68b4:
    // 0x1d68b4: 0x8e63cb94  lw          $v1, -0x346C($s3)
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d68b8: 0x8c621580  lw          $v0, 0x1580($v1)
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5504)));
    // 0x1d68bc: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D68BCu;
    {
        const bool branch_taken_0x1d68bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D68C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68BCu;
            // 0x1d68c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68bc) {
            ctx->pc = 0x1D68D4u;
            goto label_1d68d4;
        }
    }
    ctx->pc = 0x1D68C4u;
    // 0x1d68c4: 0xac651580  sw          $a1, 0x1580($v1)
    ctx->pc = 0x1d68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5504), GPR_U32(ctx, 5));
    // 0x1d68c8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D68C8u;
    SET_GPR_U32(ctx, 31, 0x1D68D0u);
    ctx->pc = 0x1D68CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68C8u;
            // 0x1d68cc: 0xac650218  sw          $a1, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68D0u; }
        if (ctx->pc != 0x1D68D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68D0u; }
        if (ctx->pc != 0x1D68D0u) { return; }
    }
    ctx->pc = 0x1D68D0u;
    // 0x1d68d0: 0x8e63cb94  lw          $v1, -0x346C($s3)
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
label_1d68d4:
    // 0x1d68d4: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x1d68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d68d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d68d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d68dc: 0x8c62152c  lw          $v0, 0x152C($v1)
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5420)));
    // 0x1d68e0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d68e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d68e4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D68E4u;
    {
        const bool branch_taken_0x1d68e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D68E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68E4u;
            // 0x1d68e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68e4) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D68ECu;
    // 0x1d68ec: 0x8c621528  lw          $v0, 0x1528($v1)
    ctx->pc = 0x1d68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5416)));
    // 0x1d68f0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D68F0u;
    {
        const bool branch_taken_0x1d68f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68F0u;
            // 0x1d68f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68f0) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D68F8u;
    // 0x1d68f8: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1D68F8u;
    SET_GPR_U32(ctx, 31, 0x1D6900u);
    ctx->pc = 0x1D68FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68F8u;
            // 0x1d68fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6900u; }
        if (ctx->pc != 0x1D6900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6900u; }
        if (ctx->pc != 0x1D6900u) { return; }
    }
    ctx->pc = 0x1D6900u;
    // 0x1d6900: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6900u;
    {
        const bool branch_taken_0x1d6900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6900u;
            // 0x1d6904: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6900) {
            ctx->pc = 0x1D6948u;
            goto label_1d6948;
        }
    }
    ctx->pc = 0x1D6908u;
    // 0x1d6908: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d6908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d690c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d690cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6910: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d6914: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x1d6914u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d6918: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1d6918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1d691c: 0xc4410304  lwc1        $f1, 0x304($v0)
    ctx->pc = 0x1d691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6920: 0xc4400300  lwc1        $f0, 0x300($v0)
    ctx->pc = 0x1d6920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6924: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d6924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d6928: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d6928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d692c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d692cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6930: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1d6930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6934: 0x0  nop
    ctx->pc = 0x1d6934u;
    // NOP
    // 0x1d6938: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6938u;
    {
        const bool branch_taken_0x1d6938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6938u;
            // 0x1d693c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6938) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D6940u;
    // 0x1d6940: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6940u;
    {
        const bool branch_taken_0x1d6940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6940u;
            // 0x1d6944: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6940) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D6948u;
label_1d6948:
    // 0x1d6948: 0x8e62cb94  lw          $v0, -0x346C($s3)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d694c: 0x8c42157c  lw          $v0, 0x157C($v0)
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5500)));
    // 0x1d6950: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6950u;
    {
        const bool branch_taken_0x1d6950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6950u;
            // 0x1d6954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6950) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D6958u;
    // 0x1d6958: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6958u;
    {
        const bool branch_taken_0x1d6958 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6958u;
            // 0x1d695c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6958) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D6960u;
    // 0x1d6960: 0x9243007d  lbu         $v1, 0x7D($s2)
    ctx->pc = 0x1d6960u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
    // 0x1d6964: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d6964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d6968: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d6968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d696c: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1d696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1d6970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6974: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d6978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6978u;
    {
        const bool branch_taken_0x1d6978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6978u;
            // 0x1d697c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6978) {
            ctx->pc = 0x1D6988u;
            goto label_1d6988;
        }
    }
    ctx->pc = 0x1D6980u;
    // 0x1d6980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6984: 0x0  nop
    ctx->pc = 0x1d6984u;
    // NOP
label_1d6988:
    // 0x1d6988: 0x8e63cb94  lw          $v1, -0x346C($s3)
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d698c: 0x8c62159c  lw          $v0, 0x159C($v1)
    ctx->pc = 0x1d698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5532)));
    // 0x1d6990: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6990u;
    {
        const bool branch_taken_0x1d6990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d6990) {
            ctx->pc = 0x1D6994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6990u;
            // 0x1d6994: 0xac700034  sw          $s0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D69A8u;
            goto label_1d69a8;
        }
    }
    ctx->pc = 0x1D6998u;
    // 0x1d6998: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d699c: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D699Cu;
    {
        const bool branch_taken_0x1d699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D69A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D699Cu;
            // 0x1d69a0: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d699c) {
            ctx->pc = 0x1D69BCu;
            goto label_1d69bc;
        }
    }
    ctx->pc = 0x1D69A4u;
    // 0x1d69a4: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1d69a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
label_1d69a8:
    // 0x1d69a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69ac: 0xac65159c  sw          $a1, 0x159C($v1)
    ctx->pc = 0x1d69acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5532), GPR_U32(ctx, 5));
    // 0x1d69b0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D69B0u;
    SET_GPR_U32(ctx, 31, 0x1D69B8u);
    ctx->pc = 0x1D69B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69B0u;
            // 0x1d69b4: 0xac650244  sw          $a1, 0x244($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 580), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69B8u; }
        if (ctx->pc != 0x1D69B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69B8u; }
        if (ctx->pc != 0x1D69B8u) { return; }
    }
    ctx->pc = 0x1D69B8u;
    // 0x1d69b8: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
label_1d69bc:
    // 0x1d69bc: 0x26422cc0  addiu       $v0, $s2, 0x2CC0
    ctx->pc = 0x1d69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11456));
    // 0x1d69c0: 0x9050007e  lbu         $s0, 0x7E($v0)
    ctx->pc = 0x1d69c0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
    // 0x1d69c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D69C4u;
    {
        const bool branch_taken_0x1d69c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D69C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69C4u;
            // 0x1d69c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69c4) {
            ctx->pc = 0x1D69E4u;
            goto label_1d69e4;
        }
    }
    ctx->pc = 0x1D69CCu;
    // 0x1d69cc: 0xc076200  jal         func_1D8800
    ctx->pc = 0x1D69CCu;
    SET_GPR_U32(ctx, 31, 0x1D69D4u);
    ctx->pc = 0x1D69D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69CCu;
            // 0x1d69d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8800u;
    if (runtime->hasFunction(0x1D8800u)) {
        auto targetFn = runtime->lookupFunction(0x1D8800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69D4u; }
        if (ctx->pc != 0x1D69D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8800_0x1d89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69D4u; }
        if (ctx->pc != 0x1D69D4u) { return; }
    }
    ctx->pc = 0x1D69D4u;
    // 0x1d69d4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d69d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d69d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d69dc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d69e0: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1d69e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1d69e4:
    // 0x1d69e4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D69E4u;
    {
        const bool branch_taken_0x1d69e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D69E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69E4u;
            // 0x1d69e8: 0x8e63cb94  lw          $v1, -0x346C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69e4) {
            ctx->pc = 0x1D69F8u;
            goto label_1d69f8;
        }
    }
    ctx->pc = 0x1D69ECu;
    // 0x1d69ec: 0x8c621570  lw          $v0, 0x1570($v1)
    ctx->pc = 0x1d69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5488)));
    // 0x1d69f0: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D69F0u;
    {
        const bool branch_taken_0x1d69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d69f0) {
            ctx->pc = 0x1D69F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69F0u;
            // 0x1d69f4: 0x26432cc0  addiu       $v1, $s2, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11456));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6A0Cu;
            goto label_1d6a0c;
        }
    }
    ctx->pc = 0x1D69F8u;
label_1d69f8:
    // 0x1d69f8: 0xac700224  sw          $s0, 0x224($v1)
    ctx->pc = 0x1d69f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 16));
    // 0x1d69fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d69fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a00: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D6A00u;
    SET_GPR_U32(ctx, 31, 0x1D6A08u);
    ctx->pc = 0x1D6A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A00u;
            // 0x1d6a04: 0xac701570  sw          $s0, 0x1570($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5488), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A08u; }
        if (ctx->pc != 0x1D6A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A08u; }
        if (ctx->pc != 0x1D6A08u) { return; }
    }
    ctx->pc = 0x1D6A08u;
    // 0x1d6a08: 0x26432cc0  addiu       $v1, $s2, 0x2CC0
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11456));
label_1d6a0c:
    // 0x1d6a0c: 0x8e64cb94  lw          $a0, -0x346C($s3)
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953876)));
    // 0x1d6a10: 0x9062007f  lbu         $v0, 0x7F($v1)
    ctx->pc = 0x1d6a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1d6a14: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1d6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1d6a18: 0x90620080  lbu         $v0, 0x80($v1)
    ctx->pc = 0x1d6a18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1d6a1c: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1d6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1d6a20: 0x90620081  lbu         $v0, 0x81($v1)
    ctx->pc = 0x1d6a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x1d6a24: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x1d6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x1d6a28: 0x90620083  lbu         $v0, 0x83($v1)
    ctx->pc = 0x1d6a28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 131)));
    // 0x1d6a2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6a30: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1d6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1d6a34: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d6a34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d6a38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d6a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d6a3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6a40: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x1d6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x1d6a44: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d6a44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d6a48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d6a4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6a50: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x1d6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x1d6a54: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d6a54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d6a58: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d6a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d6a5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6a60: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x1d6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x1d6a64: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d6a64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d6a68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d6a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d6a6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6a70: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x1d6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x1d6a74: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d6a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d6a78: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d6a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d6a7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6a80: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1d6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x1d6a84: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d6a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d6a88:
    // 0x1d6a88: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d6a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6a8c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d6a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6a90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d6a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6a94: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d6a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6a98: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d6a98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6aa0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1d6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d6aa4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1d6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d6aa8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1d6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d6aac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1d6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d6ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AB0u;
            // 0x1d6ab4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D65D4u: goto label_1d65d4;
            case 0x1D661Cu: goto label_1d661c;
            case 0x1D662Cu: goto label_1d662c;
            case 0x1D670Cu: goto label_1d670c;
            case 0x1D6710u: goto label_1d6710;
            case 0x1D6714u: goto label_1d6714;
            case 0x1D675Cu: goto label_1d675c;
            case 0x1D6770u: goto label_1d6770;
            case 0x1D67ACu: goto label_1d67ac;
            case 0x1D67F0u: goto label_1d67f0;
            case 0x1D67F4u: goto label_1d67f4;
            case 0x1D67FCu: goto label_1d67fc;
            case 0x1D6818u: goto label_1d6818;
            case 0x1D6824u: goto label_1d6824;
            case 0x1D6828u: goto label_1d6828;
            case 0x1D6854u: goto label_1d6854;
            case 0x1D6874u: goto label_1d6874;
            case 0x1D6890u: goto label_1d6890;
            case 0x1D68B4u: goto label_1d68b4;
            case 0x1D68D4u: goto label_1d68d4;
            case 0x1D6948u: goto label_1d6948;
            case 0x1D6988u: goto label_1d6988;
            case 0x1D69A8u: goto label_1d69a8;
            case 0x1D69BCu: goto label_1d69bc;
            case 0x1D69E4u: goto label_1d69e4;
            case 0x1D69F8u: goto label_1d69f8;
            case 0x1D6A0Cu: goto label_1d6a0c;
            case 0x1D6A88u: goto label_1d6a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6AB8u;
}

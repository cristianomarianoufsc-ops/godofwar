#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7660
// Address: 0x1e7660 - 0x1e7d08
void sub_001E7660_0x1e7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7660_0x1e7660");
#endif

    ctx->pc = 0x1e7660u;

    // 0x1e7660: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
    // 0x1e7664: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1e7664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1e7668: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e7668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e766c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e766cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e7670: 0x7fb304f0  sq          $s3, 0x4F0($sp)
    ctx->pc = 0x1e7670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 19));
    // 0x1e7674: 0x7fb00520  sq          $s0, 0x520($sp)
    ctx->pc = 0x1e7674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 16));
    // 0x1e7678: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e767c: 0x7fb10510  sq          $s1, 0x510($sp)
    ctx->pc = 0x1e767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 17));
    // 0x1e7680: 0x7fb20500  sq          $s2, 0x500($sp)
    ctx->pc = 0x1e7680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 18));
    // 0x1e7684: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x1e7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
    // 0x1e7688: 0x7fb504d0  sq          $s5, 0x4D0($sp)
    ctx->pc = 0x1e7688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 21));
    // 0x1e768c: 0x7fb604c0  sq          $s6, 0x4C0($sp)
    ctx->pc = 0x1e768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 22));
    // 0x1e7690: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x1e7690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
    // 0x1e7694: 0xe7b40530  swc1        $f20, 0x530($sp)
    ctx->pc = 0x1e7694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
    // 0x1e7698: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1e769c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e769cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e76a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e76a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e76a4: 0xc6610354  lwc1        $f1, 0x354($s3)
    ctx->pc = 0x1e76a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e76a8: 0xc6600358  lwc1        $f0, 0x358($s3)
    ctx->pc = 0x1e76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e76ac: 0xae600358  sw          $zero, 0x358($s3)
    ctx->pc = 0x1e76acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 856), GPR_U32(ctx, 0));
    // 0x1e76b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e76b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e76b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e76b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e76b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e76b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e76bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1e76bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e76c0: 0x0  nop
    ctx->pc = 0x1e76c0u;
    // NOP
    // 0x1e76c4: 0x45010184  bc1t        . + 4 + (0x184 << 2)
    ctx->pc = 0x1E76C4u;
    {
        const bool branch_taken_0x1e76c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E76C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76C4u;
            // 0x1e76c8: 0xe6610354  swc1        $f1, 0x354($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76c4) {
            ctx->pc = 0x1E7CD8u;
            goto label_1e7cd8;
        }
    }
    ctx->pc = 0x1E76CCu;
    // 0x1e76cc: 0x86700352  lh          $s0, 0x352($s3)
    ctx->pc = 0x1e76ccu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 850)));
    // 0x1e76d0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e76d4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e76d8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e76dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1E76DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E76E4u);
        ctx->pc = 0x1E76E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76DCu;
            // 0x1e76e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E76E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7CD8u: goto label_1e7cd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E76E4u; }
            if (ctx->pc != 0x1E76E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E76E4u;
    // 0x1e76e4: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1e76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1e76e8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1e76e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1e76ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E76ECu;
    {
        const bool branch_taken_0x1e76ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E76F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76ECu;
            // 0x1e76f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76ec) {
            ctx->pc = 0x1E7724u;
            goto label_1e7724;
        }
    }
    ctx->pc = 0x1E76F4u;
    // 0x1e76f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e76f8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1e76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1e76fc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e76fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7700: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e7704: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1e7708: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e770c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7714: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7714u;
    {
        const bool branch_taken_0x1e7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E7718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7714u;
            // 0x1e7718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7714) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E771Cu;
    // 0x1e771c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e7720:
    // 0x1e7720: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e7720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7724:
    // 0x1e7724: 0x1280016c  beqz        $s4, . + 4 + (0x16C << 2)
    ctx->pc = 0x1E7724u;
    {
        const bool branch_taken_0x1e7724 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7724u;
            // 0x1e7728: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7724) {
            ctx->pc = 0x1E7CD8u;
            goto label_1e7cd8;
        }
    }
    ctx->pc = 0x1E772Cu;
    // 0x1e772c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7730: 0x8c550104  lw          $s5, 0x104($v0)
    ctx->pc = 0x1e7730u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e7734: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x1e7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1e7738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e773c: 0x84460008  lh          $a2, 0x8($v0)
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7740: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1e7744: 0xdec3bdf8  ld          $v1, -0x4208($s6)
    ctx->pc = 0x1e7744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1e7748: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x1e7748u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1e774c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E774Cu;
    {
        const bool branch_taken_0x1e774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e774c) {
            ctx->pc = 0x1E7750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E774Cu;
            // 0x1e7750: 0x8ea2008c  lw          $v0, 0x8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7768u;
            goto label_1e7768;
        }
    }
    ctx->pc = 0x1E7754u;
    // 0x1e7754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e7754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7758: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1E7758u;
    SET_GPR_U32(ctx, 31, 0x1E7760u);
    ctx->pc = 0x1E775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7758u;
            // 0x1e775c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7760u; }
        if (ctx->pc != 0x1E7760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7760u; }
        if (ctx->pc != 0x1E7760u) { return; }
    }
    ctx->pc = 0x1E7760u;
    // 0x1e7760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E7760u;
    {
        const bool branch_taken_0x1e7760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7760u;
            // 0x1e7764: 0x8eb20050  lw          $s2, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7760) {
            ctx->pc = 0x1E7794u;
            goto label_1e7794;
        }
    }
    ctx->pc = 0x1E7768u;
label_1e7768:
    // 0x1e7768: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1e776c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7770: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e7770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7774: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e7774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e7778: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e7778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e777c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e7780: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e7780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e7784: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e7784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7788: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e7788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e778c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7790: 0x8eb20050  lw          $s2, 0x50($s5)
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_1e7794:
    // 0x1e7794: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e7798: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e779c: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x1e779cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77a0: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x1e77a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77a4: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x1e77a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e77a8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1e77a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e77ac: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e77acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e77b0: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1e77b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e77b4: 0xda430020  lqc2        $vf3, 0x20($s2)
    ctx->pc = 0x1e77b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1e77b8: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x1e77b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1e77bc: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e77bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e77c0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e77c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77c4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1e77c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77c8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1e77c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e77cc: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1e77ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e77d0: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1e77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e77d4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1e77d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77d8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1e77d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77dc: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1e77dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e77e0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e77e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e77e4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e77e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e77e8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e77e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77ec: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1e77ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e77f0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1e77f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e77f4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1e77f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e77f8: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1e77f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e77fc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1e77fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7800: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1e7800u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7804: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1e7804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7808: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1e7808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e780c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7810: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1e7810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7814: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e7814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7818: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e7818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e781c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1e781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7820: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e7820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7824: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e7824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7828: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e782c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e782cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7830: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e7834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e7834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7838: 0x46000044  c1          0x44
    ctx->pc = 0x1e7838u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e783c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e783cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e7840: 0xc06149c  jal         func_185270
    ctx->pc = 0x1E7840u;
    SET_GPR_U32(ctx, 31, 0x1E7848u);
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7848u; }
        if (ctx->pc != 0x1E7848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7848u; }
        if (ctx->pc != 0x1E7848u) { return; }
    }
    ctx->pc = 0x1E7848u;
    // 0x1e7848: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1e7848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e784c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1e784cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e7850: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1e7850u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e7854: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1e7854u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e7858: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1e785c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1e785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1e7860: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x1e7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x1e7864: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1e7864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x1e7868: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e786c: 0x8e620320  lw          $v0, 0x320($s3)
    ctx->pc = 0x1e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x1e7870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7874: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e7878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e787c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7880: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e7880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e7884: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e7884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e7888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e788c: 0xc44c00bc  lwc1        $f12, 0xBC($v0)
    ctx->pc = 0x1e788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7890: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e7890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e7894: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1e7894u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1e7898: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1e7898u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1e789c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1e789cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e78a0: 0xc061248  jal         func_184920
    ctx->pc = 0x1E78A0u;
    SET_GPR_U32(ctx, 31, 0x1E78A8u);
    ctx->pc = 0x1E78A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78A0u;
            // 0x1e78a4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78A8u; }
        if (ctx->pc != 0x1E78A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78A8u; }
        if (ctx->pc != 0x1E78A8u) { return; }
    }
    ctx->pc = 0x1E78A8u;
    // 0x1e78a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e78ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e78acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78b0: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1e78b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1e78b4: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1e78b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1E78B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E78C0u);
        ctx->pc = 0x1E78BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78B8u;
            // 0x1e78bc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E78C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7CD8u: goto label_1e7cd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E78C0u; }
            if (ctx->pc != 0x1E78C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E78C0u;
    // 0x1e78c0: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x1e78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    // 0x1e78c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e78c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1E78C8u;
    SET_GPR_U32(ctx, 31, 0x1E78D0u);
    ctx->pc = 0x1E78CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78C8u;
            // 0x1e78cc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78D0u; }
        if (ctx->pc != 0x1E78D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78D0u; }
        if (ctx->pc != 0x1E78D0u) { return; }
    }
    ctx->pc = 0x1E78D0u;
    // 0x1e78d0: 0xdba60040  lqc2        $vf6, 0x40($sp)
    ctx->pc = 0x1e78d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e78d4: 0xdba70050  lqc2        $vf7, 0x50($sp)
    ctx->pc = 0x1e78d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e78d8: 0xdba80060  lqc2        $vf8, 0x60($sp)
    ctx->pc = 0x1e78d8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e78dc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1e78dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e78e0: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1e78e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e78e4: 0xdba30190  lqc2        $vf3, 0x190($sp)
    ctx->pc = 0x1e78e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e78e8: 0xdba501a0  lqc2        $vf5, 0x1A0($sp)
    ctx->pc = 0x1e78e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e78ec: 0xdba201b0  lqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1e78ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e78f0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1e78f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e78f4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1e78f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e78f8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1e78f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e78fc: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1e78fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7900: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e7900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7904: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1e7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7908: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e7908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e790c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1e790cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7910: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1e7910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7914: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1e7914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7918: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1e7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e791c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1e791cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7920: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1e7920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7924: 0x4be5214b  vmaddw.xyzw $vf5, $vf4, $vf5w
    ctx->pc = 0x1e7924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7928: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e7928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e792c: 0xfba501e0  sqc2        $vf5, 0x1E0($sp)
    ctx->pc = 0x1e792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e7930: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e7930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7934: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1e7934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7938: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1e7938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e793c: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x1e793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7940: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1e7940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7944: 0xdba104a0  lqc2        $vf1, 0x4A0($sp)
    ctx->pc = 0x1e7944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1e7948: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e7948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e794c: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1e794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7950: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x1e7950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7954: 0xfba50160  sqc2        $vf5, 0x160($sp)
    ctx->pc = 0x1e7954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e7958: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1e7958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e795c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e795cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7960: 0x8e620320  lw          $v0, 0x320($s3)
    ctx->pc = 0x1e7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x1e7964: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e7964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7968: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e796c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e796cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e7970: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e7970u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e7974: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e7974u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e7978: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1e7978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e797c: 0x4a0002ff  vnop
    ctx->pc = 0x1e797cu;
    // NOP operation, no action needed for VU0
    // 0x1e7980: 0x4a0002ff  vnop
    ctx->pc = 0x1e7980u;
    // NOP operation, no action needed for VU0
    // 0x1e7984: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e7984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7988: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1e7988u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e798c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1e798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1e7990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7994: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x1e7994u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7998: 0xc44c00c0  lwc1        $f12, 0xC0($v0)
    ctx->pc = 0x1e7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e799c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e79a0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e79a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e79a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e79a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e79a8: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1e79a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1e79ac: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x1e79acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e79b0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1e79b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1e79b4: 0xc079d54  jal         func_1E7550
    ctx->pc = 0x1E79B4u;
    SET_GPR_U32(ctx, 31, 0x1E79BCu);
    ctx->pc = 0x1E79B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79B4u;
            // 0x1e79b8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7550u;
    if (runtime->hasFunction(0x1E7550u)) {
        auto targetFn = runtime->lookupFunction(0x1E7550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79BCu; }
        if (ctx->pc != 0x1E79BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7550_0x1e7550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79BCu; }
        if (ctx->pc != 0x1E79BCu) { return; }
    }
    ctx->pc = 0x1E79BCu;
    // 0x1e79bc: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x1e79bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e79c0: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1e79c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e79c4: 0x4bc712fe  vopmula.xyz $ACC, $vf2, $vf7
    ctx->pc = 0x1e79c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]);
    // 0x1e79c8: 0x4bc238ae  vopmsub.xyz $vf2, $vf7, $vf2
    ctx->pc = 0x1e79c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e79cc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e79ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e79d0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e79d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e79d4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e79d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e79d8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e79d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e79dc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e79dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e79e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e79e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e79e4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e79e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e79e8: 0x4a0002ff  vnop
    ctx->pc = 0x1e79e8u;
    // NOP operation, no action needed for VU0
    // 0x1e79ec: 0x4a0002ff  vnop
    ctx->pc = 0x1e79ecu;
    // NOP operation, no action needed for VU0
    // 0x1e79f0: 0x4bc23afe  vopmula.xyz $ACC, $vf7, $vf2
    ctx->pc = 0x1e79f0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]);
    // 0x1e79f4: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1e79f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e79f8: 0x4bc7116e  vopmsub.xyz $vf5, $vf2, $vf7
    ctx->pc = 0x1e79f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e79fc: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x1e79fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e7a00: 0x4be6033c  vmove.xyzw  $vf6, $vf0
    ctx->pc = 0x1e7a00u;
    ctx->vu0_vf[6] = ctx->vu0_vf[0];
    // 0x1e7a04: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x1e7a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7a08: 0xfba50230  sqc2        $vf5, 0x230($sp)
    ctx->pc = 0x1e7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e7a0c: 0xfba70240  sqc2        $vf7, 0x240($sp)
    ctx->pc = 0x1e7a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1e7a10: 0xfba60250  sqc2        $vf6, 0x250($sp)
    ctx->pc = 0x1e7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e7a14: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1e7a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e7a18: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1e7a18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e7a1c: 0xdba40120  lqc2        $vf4, 0x120($sp)
    ctx->pc = 0x1e7a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e7a20: 0xdba80130  lqc2        $vf8, 0x130($sp)
    ctx->pc = 0x1e7a20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e7a24: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x1e7a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7a28: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x1e7a28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a2c: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1e7a2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a30: 0x4be1304b  vmaddw.xyzw $vf1, $vf6, $vf1w
    ctx->pc = 0x1e7a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7a34: 0x4be311bc  vmulax.xyzw $ACC, $vf2, $vf3x
    ctx->pc = 0x1e7a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7a38: 0xfba102a0  sqc2        $vf1, 0x2A0($sp)
    ctx->pc = 0x1e7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7a3c: 0x4be328bd  vmadday.xyzw $ACC, $vf5, $vf3y
    ctx->pc = 0x1e7a3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a40: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1e7a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a44: 0x4be330cb  vmaddw.xyzw $vf3, $vf6, $vf3w
    ctx->pc = 0x1e7a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7a48: 0x4be411bc  vmulax.xyzw $ACC, $vf2, $vf4x
    ctx->pc = 0x1e7a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7a4c: 0xfba302b0  sqc2        $vf3, 0x2B0($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7a50: 0x4be428bd  vmadday.xyzw $ACC, $vf5, $vf4y
    ctx->pc = 0x1e7a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a54: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x1e7a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a58: 0x4be4310b  vmaddw.xyzw $vf4, $vf6, $vf4w
    ctx->pc = 0x1e7a58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7a5c: 0x4be811bc  vmulax.xyzw $ACC, $vf2, $vf8x
    ctx->pc = 0x1e7a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7a60: 0xfba402c0  sqc2        $vf4, 0x2C0($sp)
    ctx->pc = 0x1e7a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7a64: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1e7a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a68: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x1e7a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7a6c: 0x4be8318b  vmaddw.xyzw $vf6, $vf6, $vf8w
    ctx->pc = 0x1e7a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7a70: 0xfba602d0  sqc2        $vf6, 0x2D0($sp)
    ctx->pc = 0x1e7a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e7a74: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x1e7a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7a78: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1e7a78u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7a7c: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x1e7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x1e7a80: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x1e7a80u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7a84: 0x48272000  qmfc2.ni    $a3, $vf4
    ctx->pc = 0x1e7a84u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7a88: 0xfba60250  sqc2        $vf6, 0x250($sp)
    ctx->pc = 0x1e7a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e7a8c: 0xfba30270  sqc2        $vf3, 0x270($sp)
    ctx->pc = 0x1e7a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7a90: 0xfba40280  sqc2        $vf4, 0x280($sp)
    ctx->pc = 0x1e7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7a94: 0xfba60290  sqc2        $vf6, 0x290($sp)
    ctx->pc = 0x1e7a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e7a98: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x1e7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7a9c: 0xfba30230  sqc2        $vf3, 0x230($sp)
    ctx->pc = 0x1e7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7aa0: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1E7AA0u;
    SET_GPR_U32(ctx, 31, 0x1E7AA8u);
    ctx->pc = 0x1E7AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AA0u;
            // 0x1e7aa4: 0xfba40240  sqc2        $vf4, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AA8u; }
        if (ctx->pc != 0x1E7AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AA8u; }
        if (ctx->pc != 0x1E7AA8u) { return; }
    }
    ctx->pc = 0x1E7AA8u;
    // 0x1e7aa8: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1e7aa8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7aac: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x1e7ab0: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x1e7ab0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7ab4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x1e7ab4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7ab8: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1E7AB8u;
    SET_GPR_U32(ctx, 31, 0x1E7AC0u);
    ctx->pc = 0x1E7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AB8u;
            // 0x1e7abc: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC0u; }
        if (ctx->pc != 0x1E7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC0u; }
        if (ctx->pc != 0x1E7AC0u) { return; }
    }
    ctx->pc = 0x1E7AC0u;
    // 0x1e7ac0: 0xc66c0354  lwc1        $f12, 0x354($s3)
    ctx->pc = 0x1e7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7ac4: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1e7ac4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1e7ac8: 0x7ba40470  lq          $a0, 0x470($sp)
    ctx->pc = 0x1e7ac8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1e7acc: 0xc061084  jal         func_184210
    ctx->pc = 0x1E7ACCu;
    SET_GPR_U32(ctx, 31, 0x1E7AD4u);
    ctx->pc = 0x1E7AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7ACCu;
            // 0x1e7ad0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AD4u; }
        if (ctx->pc != 0x1E7AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AD4u; }
        if (ctx->pc != 0x1E7AD4u) { return; }
    }
    ctx->pc = 0x1E7AD4u;
    // 0x1e7ad4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x1e7ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    // 0x1e7ad8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1e7adc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e7adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e7ae0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1e7ae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e7ae4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1e7ae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7ae8: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1e7ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e7aec: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1e7aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e7af0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e7af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e7af4: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1e7af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7af8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7afc: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1e7afcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e7b00: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1e7b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b04: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e7b04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b0c: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1e7b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b10: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e7b10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7b14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b18: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1e7b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b1c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e7b1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e7b20: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1e7b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e7b24: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e7b24u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b2c: 0x70e23389  pcpyld      $a2, $a3, $v0
    ctx->pc = 0x1e7b2cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1e7b30: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1e7b30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b34: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x1e7b34u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1e7b38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e7b38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b40: 0x7fa60320  sq          $a2, 0x320($sp)
    ctx->pc = 0x1e7b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 6));
    // 0x1e7b44: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1e7b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b48: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1e7b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b4c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e7b4cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b54: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e7b54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e7b58: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1e7b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b5c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e7b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b60: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e7b60u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b68: 0x70e22b89  pcpyld      $a1, $a3, $v0
    ctx->pc = 0x1e7b68u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1e7b6c: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1e7b6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b70: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1e7b70u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1e7b74: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1e7b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b78: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1e7b78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b80: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1e7b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b84: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e7b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b88: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e7b88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7b8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b90: 0x7fa50330  sq          $a1, 0x330($sp)
    ctx->pc = 0x1e7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 5));
    // 0x1e7b94: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1e7b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e7b98: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x1e7b98u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e7b9c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1e7b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1e7ba0: 0x48233000  qmfc2.ni    $v1, $vf6
    ctx->pc = 0x1e7ba0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e7ba4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e7ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ba8: 0x7fa602e0  sq          $a2, 0x2E0($sp)
    ctx->pc = 0x1e7ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 6));
    // 0x1e7bac: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x1e7bacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1e7bb0: 0x7fa502f0  sq          $a1, 0x2F0($sp)
    ctx->pc = 0x1e7bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 5));
    // 0x1e7bb4: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1e7bb4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1e7bb8: 0x7fa30340  sq          $v1, 0x340($sp)
    ctx->pc = 0x1e7bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 3));
    // 0x1e7bbc: 0x7fa30300  sq          $v1, 0x300($sp)
    ctx->pc = 0x1e7bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 3));
    // 0x1e7bc0: 0x72312389  pcpyld      $a0, $s1, $s1
    ctx->pc = 0x1e7bc0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x1e7bc4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1e7bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7bc8: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1e7bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e7bcc: 0x71311389  pcpyld      $v0, $t1, $s1
    ctx->pc = 0x1e7bccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 17)));
    // 0x1e7bd0: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x1e7bd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e7bd4: 0x70443cc8  ppacw       $a3, $v0, $a0
    ctx->pc = 0x1e7bd4u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1e7bd8: 0xdba20310  lqc2        $vf2, 0x310($sp)
    ctx->pc = 0x1e7bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1e7bdc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1e7bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1e7be0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1e7be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7be4: 0x4be120ea  vmul.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1e7be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e7be8: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x1e7be8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e7bec: 0x4be1292a  vmul.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x1e7becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e7bf0: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e7bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7bf4: 0x4be1316a  vmul.xyzw   $vf5, $vf6, $vf1
    ctx->pc = 0x1e7bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e7bf8: 0xfba302e0  sqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1e7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7bfc: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1e7c00: 0xfba402f0  sqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x1e7c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7c04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e7c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c08: 0xfba50300  sqc2        $vf5, 0x300($sp)
    ctx->pc = 0x1e7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e7c0c: 0xfba20390  sqc2        $vf2, 0x390($sp)
    ctx->pc = 0x1e7c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7c10: 0x7fa20310  sq          $v0, 0x310($sp)
    ctx->pc = 0x1e7c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 2));
    // 0x1e7c14: 0xfba10350  sqc2        $vf1, 0x350($sp)
    ctx->pc = 0x1e7c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7c18: 0xfba10490  sqc2        $vf1, 0x490($sp)
    ctx->pc = 0x1e7c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7c1c: 0xfba30360  sqc2        $vf3, 0x360($sp)
    ctx->pc = 0x1e7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7c20: 0xfba40370  sqc2        $vf4, 0x370($sp)
    ctx->pc = 0x1e7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7c24: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1E7C24u;
    SET_GPR_U32(ctx, 31, 0x1E7C2Cu);
    ctx->pc = 0x1E7C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C24u;
            // 0x1e7c28: 0xfba50380  sqc2        $vf5, 0x380($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C2Cu; }
        if (ctx->pc != 0x1E7C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C2Cu; }
        if (ctx->pc != 0x1E7C2Cu) { return; }
    }
    ctx->pc = 0x1E7C2Cu;
    // 0x1e7c2c: 0xdba603e0  lqc2        $vf6, 0x3E0($sp)
    ctx->pc = 0x1e7c2cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e7c30: 0xdba703f0  lqc2        $vf7, 0x3F0($sp)
    ctx->pc = 0x1e7c30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1e7c34: 0xdba80400  lqc2        $vf8, 0x400($sp)
    ctx->pc = 0x1e7c34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1e7c38: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1e7c38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1e7c3c: 0xdba302e0  lqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1e7c3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1e7c40: 0xdba102f0  lqc2        $vf1, 0x2F0($sp)
    ctx->pc = 0x1e7c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1e7c44: 0xdba20300  lqc2        $vf2, 0x300($sp)
    ctx->pc = 0x1e7c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1e7c48: 0xdba50310  lqc2        $vf5, 0x310($sp)
    ctx->pc = 0x1e7c48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1e7c4c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e7c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7c50: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e7c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c54: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1e7c54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c58: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1e7c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7c5c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1e7c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7c60: 0xfba30420  sqc2        $vf3, 0x420($sp)
    ctx->pc = 0x1e7c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7c64: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1e7c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c68: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1e7c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c6c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1e7c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7c70: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e7c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7c74: 0xfba10430  sqc2        $vf1, 0x430($sp)
    ctx->pc = 0x1e7c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7c78: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e7c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c7c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1e7c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c80: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1e7c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7c84: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1e7c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e7c88: 0xfba20440  sqc2        $vf2, 0x440($sp)
    ctx->pc = 0x1e7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7c8c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1e7c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c90: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1e7c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e7c94: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1e7c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7c98: 0xfba40450  sqc2        $vf4, 0x450($sp)
    ctx->pc = 0x1e7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7c9c: 0xfba303a0  sqc2        $vf3, 0x3A0($sp)
    ctx->pc = 0x1e7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7ca0: 0xfba103b0  sqc2        $vf1, 0x3B0($sp)
    ctx->pc = 0x1e7ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7ca4: 0xfba203c0  sqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x1e7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7ca8: 0xfba403d0  sqc2        $vf4, 0x3D0($sp)
    ctx->pc = 0x1e7ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e7cac: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1e7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e7cb0: 0xdec3bdf8  ld          $v1, -0x4208($s6)
    ctx->pc = 0x1e7cb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1e7cb4: 0x7ba203b0  lq          $v0, 0x3B0($sp)
    ctx->pc = 0x1e7cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1e7cb8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x1e7cbc: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x1e7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x1e7cc0: 0x7ba203c0  lq          $v0, 0x3C0($sp)
    ctx->pc = 0x1e7cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e7cc4: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x1e7cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x1e7cc8: 0x7ba203d0  lq          $v0, 0x3D0($sp)
    ctx->pc = 0x1e7cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e7ccc: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x1e7cccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x1e7cd0: 0xfec3bdf8  sd          $v1, -0x4208($s6)
    ctx->pc = 0x1e7cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294950392), GPR_U64(ctx, 3));
    // 0x1e7cd4: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x1e7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_1e7cd8:
    // 0x1e7cd8: 0x7bb00520  lq          $s0, 0x520($sp)
    ctx->pc = 0x1e7cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x1e7cdc: 0x7bb10510  lq          $s1, 0x510($sp)
    ctx->pc = 0x1e7cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x1e7ce0: 0x7bb20500  lq          $s2, 0x500($sp)
    ctx->pc = 0x1e7ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1e7ce4: 0x7bb304f0  lq          $s3, 0x4F0($sp)
    ctx->pc = 0x1e7ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1e7ce8: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x1e7ce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1e7cec: 0x7bb504d0  lq          $s5, 0x4D0($sp)
    ctx->pc = 0x1e7cecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1e7cf0: 0x7bb604c0  lq          $s6, 0x4C0($sp)
    ctx->pc = 0x1e7cf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1e7cf4: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x1e7cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1e7cf8: 0xc7b40530  lwc1        $f20, 0x530($sp)
    ctx->pc = 0x1e7cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CFCu;
            // 0x1e7d00: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7CD8u: goto label_1e7cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7D04u;
    // 0x1e7d04: 0x0  nop
    ctx->pc = 0x1e7d04u;
    // NOP
}

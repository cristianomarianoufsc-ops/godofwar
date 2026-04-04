#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108760
// Address: 0x108760 - 0x1089a8
void sub_00108760_0x108760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108760_0x108760");
#endif

    ctx->pc = 0x108760u;

    // 0x108760: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x108764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x108764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108768: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x108768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10876c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x108770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108774: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x108774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x108778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x108778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10877c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x108780: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x108780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x108784: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x108784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x108788: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x108788u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x10878c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10878cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108790: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x108790u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x108794: 0x32b40e00  andi        $s4, $s5, 0xE00
    ctx->pc = 0x108794u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3584);
    // 0x108798: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x108798u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x10879c: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x10879cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x1087a0: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1087a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1087a4: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x1087a4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x1087a8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1087a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1087ac: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1087acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1087b0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1087b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1087b4: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x1087b4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x1087b8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1087b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1087bc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1087bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1087c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1087c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1087c4: 0x46008d06  mov.s       $f20, $f17
    ctx->pc = 0x1087c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[17]);
    // 0x1087c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1087c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1087cc: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x1087ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
    // 0x1087d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1087d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1087d4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1087D4u;
    {
        const bool branch_taken_0x1087d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1087D4u;
            // 0x1087d8: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087d4) {
            ctx->pc = 0x1087FCu;
            goto label_1087fc;
        }
    }
    ctx->pc = 0x1087DCu;
    // 0x1087dc: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x1087dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1087e0: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x1087e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1087e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1087e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1087e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1087ec: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1087ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1087f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1087f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1087f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1087f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1087f8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1087f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1087fc:
    // 0x1087fc: 0x12130054  beq         $s0, $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x1087FCu;
    {
        const bool branch_taken_0x1087fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1087fc) {
            ctx->pc = 0x108950u;
            goto label_108950;
        }
    }
    ctx->pc = 0x108804u;
    // 0x108804: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_108808:
    // 0x108808: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x108808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x10880c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x10880Cu;
    {
        const bool branch_taken_0x10880c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10880Cu;
            // 0x108810: 0x3c02000c  lui         $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10880c) {
            ctx->pc = 0x108944u;
            goto label_108944;
        }
    }
    ctx->pc = 0x108814u;
    // 0x108814: 0x34420e10  ori         $v0, $v0, 0xE10
    ctx->pc = 0x108814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3600);
    // 0x108818: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x108818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10881c: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x10881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x108820: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x108820u;
    {
        const bool branch_taken_0x108820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108820u;
            // 0x108824: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108820) {
            ctx->pc = 0x108944u;
            goto label_108944;
        }
    }
    ctx->pc = 0x108828u;
    // 0x108828: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x108828u;
    {
        const bool branch_taken_0x108828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108828) {
            ctx->pc = 0x10882Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108828u;
            // 0x10882c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108948u;
            goto label_108948;
        }
    }
    ctx->pc = 0x108830u;
    // 0x108830: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x108834: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x108834u;
    {
        const bool branch_taken_0x108834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108834u;
            // 0x108838: 0x2c620801  sltiu       $v0, $v1, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108834) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x10883Cu;
    // 0x10883c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10883Cu;
    {
        const bool branch_taken_0x10883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10883Cu;
            // 0x108840: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10883c) {
            ctx->pc = 0x10885Cu;
            goto label_10885c;
        }
    }
    ctx->pc = 0x108844u;
    // 0x108844: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108844u;
    {
        const bool branch_taken_0x108844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108844u;
            // 0x108848: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108844) {
            ctx->pc = 0x108878u;
            goto label_108878;
        }
    }
    ctx->pc = 0x10884Cu;
    // 0x10884c: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10884Cu;
    {
        const bool branch_taken_0x10884c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10884c) {
            ctx->pc = 0x108850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10884Cu;
            // 0x108850: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1088C8u;
            goto label_1088c8;
        }
    }
    ctx->pc = 0x108854u;
    // 0x108854: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x108854u;
    {
        const bool branch_taken_0x108854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108854u;
            // 0x108858: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108854) {
            ctx->pc = 0x108948u;
            goto label_108948;
        }
    }
    ctx->pc = 0x10885Cu;
label_10885c:
    // 0x10885c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x10885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x108860: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x108860u;
    {
        const bool branch_taken_0x108860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108860u;
            // 0x108864: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108860) {
            ctx->pc = 0x108910u;
            goto label_108910;
        }
    }
    ctx->pc = 0x108868u;
    // 0x108868: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x108868u;
    {
        const bool branch_taken_0x108868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108868u;
            // 0x10886c: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108868) {
            ctx->pc = 0x108914u;
            goto label_108914;
        }
    }
    ctx->pc = 0x108870u;
    // 0x108870: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x108870u;
    {
        const bool branch_taken_0x108870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108870u;
            // 0x108874: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108870) {
            ctx->pc = 0x108948u;
            goto label_108948;
        }
    }
    ctx->pc = 0x108878u;
label_108878:
    // 0x108878: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10887c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108884: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108884u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108888: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x108888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x10888c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10888cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x108890: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x108890u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x108894: 0xc0420a4  jal         func_108290
    ctx->pc = 0x108894u;
    SET_GPR_U32(ctx, 31, 0x10889Cu);
    ctx->pc = 0x108898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108894u;
            // 0x108898: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108290u;
    if (runtime->hasFunction(0x108290u)) {
        auto targetFn = runtime->lookupFunction(0x108290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10889Cu; }
        if (ctx->pc != 0x10889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108290_0x108290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10889Cu; }
        if (ctx->pc != 0x10889Cu) { return; }
    }
    ctx->pc = 0x10889Cu;
    // 0x10889c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10889Cu;
    {
        const bool branch_taken_0x10889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10889Cu;
            // 0x1088a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10889c) {
            ctx->pc = 0x108944u;
            goto label_108944;
        }
    }
    ctx->pc = 0x1088A4u;
label_1088a4:
    // 0x1088a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1088a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1088a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1088acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1088b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1088b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1088b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1088b8: 0xc041f2e  jal         func_107CB8
    ctx->pc = 0x1088B8u;
    SET_GPR_U32(ctx, 31, 0x1088C0u);
    ctx->pc = 0x1088BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1088B8u;
            // 0x1088bc: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107CB8u;
    if (runtime->hasFunction(0x107CB8u)) {
        auto targetFn = runtime->lookupFunction(0x107CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088C0u; }
        if (ctx->pc != 0x1088C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107CB8_0x107cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088C0u; }
        if (ctx->pc != 0x1088C0u) { return; }
    }
    ctx->pc = 0x1088C0u;
    // 0x1088c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1088C0u;
    {
        const bool branch_taken_0x1088c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1088C0u;
            // 0x1088c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088c0) {
            ctx->pc = 0x108944u;
            goto label_108944;
        }
    }
    ctx->pc = 0x1088C8u;
label_1088c8:
    // 0x1088c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1088c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1088cc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1088ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1088d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1088d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1088d4: 0x0  nop
    ctx->pc = 0x1088d4u;
    // NOP
    // 0x1088d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1088D8u;
    {
        const bool branch_taken_0x1088d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1088DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1088D8u;
            // 0x1088dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088d8) {
            ctx->pc = 0x1088E8u;
            goto label_1088e8;
        }
    }
    ctx->pc = 0x1088E0u;
    // 0x1088e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1088e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088e4: 0x0  nop
    ctx->pc = 0x1088e4u;
    // NOP
label_1088e8:
    // 0x1088e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1088e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1088ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1088f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1088f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1088f8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1088f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1088fc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1088fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x108900: 0xc041f98  jal         func_107E60
    ctx->pc = 0x108900u;
    SET_GPR_U32(ctx, 31, 0x108908u);
    ctx->pc = 0x108904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108900u;
            // 0x108904: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107E60u;
    if (runtime->hasFunction(0x107E60u)) {
        auto targetFn = runtime->lookupFunction(0x107E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108908u; }
        if (ctx->pc != 0x108908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107E60_0x107e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108908u; }
        if (ctx->pc != 0x108908u) { return; }
    }
    ctx->pc = 0x108908u;
    // 0x108908: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x108908u;
    {
        const bool branch_taken_0x108908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108908u;
            // 0x10890c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108908) {
            ctx->pc = 0x108944u;
            goto label_108944;
        }
    }
    ctx->pc = 0x108910u;
label_108910:
    // 0x108910: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x108910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_108914:
    // 0x108914: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108914u;
    {
        const bool branch_taken_0x108914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108914u;
            // 0x108918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108914) {
            ctx->pc = 0x108934u;
            goto label_108934;
        }
    }
    ctx->pc = 0x10891Cu;
    // 0x10891c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108920: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x108920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x108924: 0xc042048  jal         func_108120
    ctx->pc = 0x108924u;
    SET_GPR_U32(ctx, 31, 0x10892Cu);
    ctx->pc = 0x108928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108924u;
            // 0x108928: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x108120u;
    if (runtime->hasFunction(0x108120u)) {
        auto targetFn = runtime->lookupFunction(0x108120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10892Cu; }
        if (ctx->pc != 0x10892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108120_0x108290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10892Cu; }
        if (ctx->pc != 0x10892Cu) { return; }
    }
    ctx->pc = 0x10892Cu;
    // 0x10892c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10892Cu;
    {
        const bool branch_taken_0x10892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10892Cu;
            // 0x108930: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10892c) {
            ctx->pc = 0x108948u;
            goto label_108948;
        }
    }
    ctx->pc = 0x108934u;
label_108934:
    // 0x108934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108938: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x10893c: 0xc042048  jal         func_108120
    ctx->pc = 0x10893Cu;
    SET_GPR_U32(ctx, 31, 0x108944u);
    ctx->pc = 0x108940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10893Cu;
            // 0x108940: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x108120u;
    if (runtime->hasFunction(0x108120u)) {
        auto targetFn = runtime->lookupFunction(0x108120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108944u; }
        if (ctx->pc != 0x108944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108120_0x108290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108944u; }
        if (ctx->pc != 0x108944u) { return; }
    }
    ctx->pc = 0x108944u;
label_108944:
    // 0x108944: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x108944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108948:
    // 0x108948: 0x5613ffaf  bnel        $s0, $s3, . + 4 + (-0x51 << 2)
    ctx->pc = 0x108948u;
    {
        const bool branch_taken_0x108948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x108948) {
            ctx->pc = 0x10894Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108948u;
            // 0x10894c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108808u;
            runtime->cooperativeGuestYield();
            goto label_108808;
        }
    }
    ctx->pc = 0x108950u;
label_108950:
    // 0x108950: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x108950u;
    {
        const bool branch_taken_0x108950 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x108954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108950u;
            // 0x108954: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108950) {
            ctx->pc = 0x108964u;
            goto label_108964;
        }
    }
    ctx->pc = 0x108958u;
    // 0x108958: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x108958u;
    {
        const bool branch_taken_0x108958 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x108958) {
            ctx->pc = 0x10895Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108958u;
            // 0x10895c: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108960u;
            goto label_108960;
        }
    }
    ctx->pc = 0x108960u;
label_108960:
    // 0x108960: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x108960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_108964:
    // 0x108964: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x108964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108968: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x108968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10896c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10896cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108970: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x108970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108974: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x108974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108978: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x108978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10897c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10897cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108980: 0xc7ba00b0  lwc1        $f26, 0xB0($sp)
    ctx->pc = 0x108980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x108984: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x108984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x108988: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x108988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x10898c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x10898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x108990: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x108990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x108994: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x108994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x108998: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x108998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10899c: 0x3e00008  jr          $ra
    ctx->pc = 0x10899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10899Cu;
            // 0x1089a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1087FCu: goto label_1087fc;
            case 0x108808u: goto label_108808;
            case 0x10885Cu: goto label_10885c;
            case 0x108878u: goto label_108878;
            case 0x1088A4u: goto label_1088a4;
            case 0x1088C8u: goto label_1088c8;
            case 0x1088E8u: goto label_1088e8;
            case 0x108910u: goto label_108910;
            case 0x108914u: goto label_108914;
            case 0x108934u: goto label_108934;
            case 0x108944u: goto label_108944;
            case 0x108948u: goto label_108948;
            case 0x108950u: goto label_108950;
            case 0x108960u: goto label_108960;
            case 0x108964u: goto label_108964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1089A4u;
    // 0x1089a4: 0x0  nop
    ctx->pc = 0x1089a4u;
    // NOP
}

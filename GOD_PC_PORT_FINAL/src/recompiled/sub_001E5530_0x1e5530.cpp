#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5530
// Address: 0x1e5530 - 0x1e5690
void sub_001E5530_0x1e5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5530_0x1e5530");
#endif

    ctx->pc = 0x1e5530u;

    // 0x1e5530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e5534: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1e5534u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5538: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1e5538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e553c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e5540: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e5540u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e5544: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e5544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e5548: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1e5548u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e554c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5550: 0x700484a9  por         $s0, $zero, $a0
    ctx->pc = 0x1e5550u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1e5554: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e5554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e5558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e555c: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1E555Cu;
    SET_GPR_U32(ctx, 31, 0x1E5564u);
    ctx->pc = 0x1E5560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E555Cu;
            // 0x1e5560: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5564u; }
        if (ctx->pc != 0x1E5564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5564u; }
        if (ctx->pc != 0x1E5564u) { return; }
    }
    ctx->pc = 0x1E5564u;
    // 0x1e5564: 0x44906800  mtc1        $s0, $f13
    ctx->pc = 0x1e5564u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5568: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e5568u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e556c: 0x70101789  pexew       $v0, $s0
    ctx->pc = 0x1e556cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e5570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5574: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1E5574u;
    SET_GPR_U32(ctx, 31, 0x1E557Cu);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E557Cu; }
        if (ctx->pc != 0x1E557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E557Cu; }
        if (ctx->pc != 0x1E557Cu) { return; }
    }
    ctx->pc = 0x1E557Cu;
    // 0x1e557c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e557cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e5580: 0x460ca041  sub.s       $f1, $f20, $f12
    ctx->pc = 0x1e5580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1e5584: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e5584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e5588: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e5588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e558c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e558cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5590: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5594: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5594u;
    {
        const bool branch_taken_0x1e5594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5594) {
            ctx->pc = 0x1E55B0u;
            goto label_1e55b0;
        }
    }
    ctx->pc = 0x1E559Cu;
    // 0x1e559c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e55a0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e55a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e55a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e55a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E55A8u;
    {
        const bool branch_taken_0x1e55a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55A8u;
            // 0x1e55ac: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55a8) {
            ctx->pc = 0x1E55DCu;
            goto label_1e55dc;
        }
    }
    ctx->pc = 0x1E55B0u;
label_1e55b0:
    // 0x1e55b0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1e55b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1e55b4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e55b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e55b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e55b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e55bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e55c0: 0x0  nop
    ctx->pc = 0x1e55c0u;
    // NOP
    // 0x1e55c4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E55C4u;
    {
        const bool branch_taken_0x1e55c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e55c4) {
            ctx->pc = 0x1E55C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55C4u;
            // 0x1e55c8: 0x460ca501  sub.s       $f20, $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E55E0u;
            goto label_1e55e0;
        }
    }
    ctx->pc = 0x1E55CCu;
    // 0x1e55cc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e55d0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e55d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e55d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e55d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e55d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1e55dc:
    // 0x1e55dc: 0x460ca501  sub.s       $f20, $f20, $f12
    ctx->pc = 0x1e55dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_1e55e0:
    // 0x1e55e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e55e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e55e4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e55e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e55e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e55e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e55ec: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x1e55ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1e55f0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1e55f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1e55f4: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1e55f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e55f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E55F8u;
    {
        const bool branch_taken_0x1e55f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e55f8) {
            ctx->pc = 0x1E5614u;
            goto label_1e5614;
        }
    }
    ctx->pc = 0x1E5600u;
    // 0x1e5600: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e5604: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e5604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e5608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e560c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E560Cu;
    {
        const bool branch_taken_0x1e560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E560Cu;
            // 0x1e5610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e560c) {
            ctx->pc = 0x1E563Cu;
            goto label_1e563c;
        }
    }
    ctx->pc = 0x1E5614u;
label_1e5614:
    // 0x1e5614: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1e5614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1e5618: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e5618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e561c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e561cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5620: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e5620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5624: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5624u;
    {
        const bool branch_taken_0x1e5624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5624) {
            ctx->pc = 0x1E563Cu;
            goto label_1e563c;
        }
    }
    ctx->pc = 0x1E562Cu;
    // 0x1e562c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e5630: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1e5630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1e5634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5638: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1e5638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1e563c:
    // 0x1e563c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1E563Cu;
    SET_GPR_U32(ctx, 31, 0x1E5644u);
    ctx->pc = 0x1E5640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E563Cu;
            // 0x1e5640: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5644u; }
        if (ctx->pc != 0x1E5644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5644u; }
        if (ctx->pc != 0x1E5644u) { return; }
    }
    ctx->pc = 0x1E5644u;
    // 0x1e5644: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5644u;
    {
        const bool branch_taken_0x1e5644 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5644) {
            ctx->pc = 0x1E5648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5644u;
            // 0x1e5648: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E564Cu;
            goto label_1e564c;
        }
    }
    ctx->pc = 0x1E564Cu;
label_1e564c:
    // 0x1e564c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e564cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5650: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1e5650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5654: 0x70661389  pcpyld      $v0, $v1, $a2
    ctx->pc = 0x1e5654u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1e5658: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1e5658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e565c: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x1e565cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1e5660: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e5660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5664: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1e5664u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1e5668: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e5668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e566c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5670: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x1e5670u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1e5674: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1e5674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e5678: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e5678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e567c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1e5680: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1e5684: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5684u;
            // 0x1e5688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E55B0u: goto label_1e55b0;
            case 0x1E55DCu: goto label_1e55dc;
            case 0x1E55E0u: goto label_1e55e0;
            case 0x1E5614u: goto label_1e5614;
            case 0x1E563Cu: goto label_1e563c;
            case 0x1E564Cu: goto label_1e564c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E568Cu;
    // 0x1e568c: 0x0  nop
    ctx->pc = 0x1e568cu;
    // NOP
}

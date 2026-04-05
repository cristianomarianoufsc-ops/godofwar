#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA938
// Address: 0x1da938 - 0x1da9f8
void sub_001DA938_0x1da938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA938_0x1da938");
#endif

    ctx->pc = 0x1da938u;

    // 0x1da938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da93c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1da944: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1da944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1da948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da950: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DA950u;
    SET_GPR_U32(ctx, 31, 0x1DA958u);
    ctx->pc = 0x1DA954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA950u;
            // 0x1da954: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA958u; }
        if (ctx->pc != 0x1DA958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA958u; }
        if (ctx->pc != 0x1DA958u) { return; }
    }
    ctx->pc = 0x1DA958u;
    // 0x1da958: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DA958u;
    {
        const bool branch_taken_0x1da958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da958) {
            ctx->pc = 0x1DA95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA958u;
            // 0x1da95c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9E4u;
            goto label_1da9e4;
        }
    }
    ctx->pc = 0x1DA960u;
    // 0x1da960: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1da964: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1da968: 0x24c52cc0  addiu       $a1, $a2, 0x2CC0
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 11456));
    // 0x1da96c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1da96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1da970: 0x90a2007d  lbu         $v0, 0x7D($a1)
    ctx->pc = 0x1da970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 125)));
    // 0x1da974: 0x24632940  addiu       $v1, $v1, 0x2940
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
    // 0x1da978: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1da978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1da97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da980: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1da984: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA984u;
    {
        const bool branch_taken_0x1da984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da984) {
            ctx->pc = 0x1DA988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA984u;
            // 0x1da988: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9E4u;
            goto label_1da9e4;
        }
    }
    ctx->pc = 0x1DA98Cu;
    // 0x1da98c: 0xc4a30060  lwc1        $f3, 0x60($a1)
    ctx->pc = 0x1da98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da990: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1da994: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1da994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1da998: 0x46141800  add.s       $f0, $f3, $f20
    ctx->pc = 0x1da998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x1da99c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1da99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da9a0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1da9a0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1da9a4: 0xc46102a0  lwc1        $f1, 0x2A0($v1)
    ctx->pc = 0x1da9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da9a8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1da9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da9ac: 0x0  nop
    ctx->pc = 0x1da9acu;
    // NOP
    // 0x1da9b0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA9B0u;
    {
        const bool branch_taken_0x1da9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9B0u;
            // 0x1da9b4: 0x46020329  min.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9b0) {
            ctx->pc = 0x1DA9D8u;
            goto label_1da9d8;
        }
    }
    ctx->pc = 0x1DA9B8u;
    // 0x1da9b8: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1da9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da9bc: 0x0  nop
    ctx->pc = 0x1da9bcu;
    // NOP
    // 0x1da9c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA9C0u;
    {
        const bool branch_taken_0x1da9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9C0u;
            // 0x1da9c4: 0x24c22cc0  addiu       $v0, $a2, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9c0) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9C8u;
    // 0x1da9c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da9cc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1da9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1da9d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da9d4: 0x0  nop
    ctx->pc = 0x1da9d4u;
    // NOP
label_1da9d8:
    // 0x1da9d8: 0x24c22cc0  addiu       $v0, $a2, 0x2CC0
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 11456));
label_1da9dc:
    // 0x1da9dc: 0xe44c0060  swc1        $f12, 0x60($v0)
    ctx->pc = 0x1da9dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x1da9e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1da9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da9e4:
    // 0x1da9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9e8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1da9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1da9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9ECu;
            // 0x1da9f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA9D8u: goto label_1da9d8;
            case 0x1DA9DCu: goto label_1da9dc;
            case 0x1DA9E4u: goto label_1da9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA9F4u;
    // 0x1da9f4: 0x0  nop
    ctx->pc = 0x1da9f4u;
    // NOP
}

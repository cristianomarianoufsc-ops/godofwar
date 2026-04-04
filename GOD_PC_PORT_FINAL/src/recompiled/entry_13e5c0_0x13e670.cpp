#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e5c0
// Address: 0x13e5c0 - 0x13e670
void entry_13e5c0_0x13e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e5c0_0x13e670");
#endif

    ctx->pc = 0x13e5c0u;

    // 0x13e5c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e5c4: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x13e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x13e5c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13e5cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13e5d0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13e5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13e5d4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x13e5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e5d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e5dc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x13e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e5e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e5e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e5e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13e5e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13e5ec: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x13e5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e5f0: 0x0  nop
    ctx->pc = 0x13e5f0u;
    // NOP
    // 0x13e5f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13E5F4u;
    {
        const bool branch_taken_0x13e5f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5F4u;
            // 0x13e5f8: 0xc4820008  lwc1        $f2, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5f4) {
            ctx->pc = 0x13E608u;
            goto label_13e608;
        }
    }
    ctx->pc = 0x13E5FCu;
    // 0x13e5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e604: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13e608:
    // 0x13e608: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x13e608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x13e60c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x13e610: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13e610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13e614: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13e618: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x13e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e61c: 0x45280a  movz        $a1, $v0, $a1
    ctx->pc = 0x13e61cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x13e620: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x13e620u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x13e624: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x13e624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e628: 0x0  nop
    ctx->pc = 0x13e628u;
    // NOP
    // 0x13e62c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13E62Cu;
    {
        const bool branch_taken_0x13e62c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E62Cu;
            // 0x13e630: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e62c) {
            ctx->pc = 0x13E63Cu;
            goto label_13e63c;
        }
    }
    ctx->pc = 0x13E634u;
    // 0x13e634: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x13e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e638: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x13e638u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_13e63c:
    // 0x13e63c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x13e63cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13e640: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x13e640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e644: 0x0  nop
    ctx->pc = 0x13e644u;
    // NOP
    // 0x13e648: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13E648u;
    {
        const bool branch_taken_0x13e648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E648u;
            // 0x13e64c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e648) {
            ctx->pc = 0x13E65Cu;
            goto label_13e65c;
        }
    }
    ctx->pc = 0x13E650u;
    // 0x13e650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13e65c:
    // 0x13e65c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x13e65cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x13e660: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x13e660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13e664: 0x3e00008  jr          $ra
    ctx->pc = 0x13E664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E664u;
            // 0x13e668: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E608u: goto label_13e608;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E65Cu: goto label_13e65c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E66Cu;
    // 0x13e66c: 0x0  nop
    ctx->pc = 0x13e66cu;
    // NOP
}

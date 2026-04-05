#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE608
// Address: 0x1ce608 - 0x1ce698
void sub_001CE608_0x1ce608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE608_0x1ce608");
#endif

    ctx->pc = 0x1ce608u;

    // 0x1ce608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ce60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ce610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce618: 0x92020084  lbu         $v0, 0x84($s0)
    ctx->pc = 0x1ce618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1ce61c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CE61Cu;
    {
        const bool branch_taken_0x1ce61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE61Cu;
            // 0x1ce620: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce61c) {
            ctx->pc = 0x1CE67Cu;
            goto label_1ce67c;
        }
    }
    ctx->pc = 0x1CE624u;
    // 0x1ce624: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ce624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ce628: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x1ce628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce62c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ce62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ce630: 0xc461c64c  lwc1        $f1, -0x39B4($v1)
    ctx->pc = 0x1ce630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ce638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ce63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce640: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ce640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce644: 0x0  nop
    ctx->pc = 0x1ce644u;
    // NOP
    // 0x1ce648: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1CE648u;
    {
        const bool branch_taken_0x1ce648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce648) {
            ctx->pc = 0x1CE64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE648u;
            // 0x1ce64c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE688u;
            goto label_1ce688;
        }
    }
    ctx->pc = 0x1CE650u;
    // 0x1ce650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce654: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ce658: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ce658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ce65c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ce660: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE668u);
        ctx->pc = 0x1CE664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE660u;
            // 0x1ce664: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE668u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE668u; }
            if (ctx->pc != 0x1CE668u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE668u;
    // 0x1ce668: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ce66c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1ce670: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1ce670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1ce674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE674u;
    {
        const bool branch_taken_0x1ce674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE674u;
            // 0x1ce678: 0xa2000084  sb          $zero, 0x84($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce674) {
            ctx->pc = 0x1CE684u;
            goto label_1ce684;
        }
    }
    ctx->pc = 0x1CE67Cu;
label_1ce67c:
    // 0x1ce67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce680: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x1ce680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
label_1ce684:
    // 0x1ce684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ce684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce688:
    // 0x1ce688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce68c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE68Cu;
            // 0x1ce690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE694u;
    // 0x1ce694: 0x0  nop
    ctx->pc = 0x1ce694u;
    // NOP
}

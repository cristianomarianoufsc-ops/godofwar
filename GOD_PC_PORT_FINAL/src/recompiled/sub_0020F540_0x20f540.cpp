#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F540
// Address: 0x20f540 - 0x20f648
void sub_0020F540_0x20f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F540_0x20f540");
#endif

    ctx->pc = 0x20f540u;

    // 0x20f540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20f544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20f548: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x20f548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20f54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f554: 0x86030264  lh          $v1, 0x264($s0)
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x20f558: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20f55c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20F55Cu;
    {
        const bool branch_taken_0x20f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F55Cu;
            // 0x20f560: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f55c) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F564u;
    // 0x20f564: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x20f568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f56c: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x20f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x20f570: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f574: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f578: 0x400008  jr          $v0
    ctx->pc = 0x20F578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F580u: goto label_20f580;
            case 0x20F590u: goto label_20f590;
            case 0x20F5A8u: goto label_20f5a8;
            case 0x20F5CCu: goto label_20f5cc;
            case 0x20F628u: goto label_20f628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x20f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x20f588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F588u;
    {
        const bool branch_taken_0x20f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F588u;
            // 0x20f58c: 0x34630c00  ori         $v1, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f588) {
            ctx->pc = 0x20F598u;
            goto label_20f598;
        }
    }
    ctx->pc = 0x20F590u;
label_20f590:
    // 0x20f590: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f594: 0x3c038010  lui         $v1, 0x8010
    ctx->pc = 0x20f594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32784 << 16));
label_20f598:
    // 0x20f598: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x20f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x20f59c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20f5a0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20F5A0u;
    {
        const bool branch_taken_0x20f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5A0u;
            // 0x20f5a4: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5a0) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f5ac: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x20f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x20f5b0: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x20f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x20f5b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f5b8: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x20f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x20f5bc: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x20f5bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x20f5c0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x20f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20f5c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20F5C4u;
    {
        const bool branch_taken_0x20f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5C4u;
            // 0x20f5c8: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5c4) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F5CCu;
label_20f5cc:
    // 0x20f5cc: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x20f5ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x20f5d0: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f5d4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x20f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20f5d8: 0xc040314  jal         func_100C50
    ctx->pc = 0x20F5D8u;
    SET_GPR_U32(ctx, 31, 0x20F5E0u);
    ctx->pc = 0x20F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5D8u;
            // 0x20f5dc: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F5E0u; }
        if (ctx->pc != 0x20F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F5E0u; }
        if (ctx->pc != 0x20F5E0u) { return; }
    }
    ctx->pc = 0x20F5E0u;
    // 0x20f5e0: 0xc6020274  lwc1        $f2, 0x274($s0)
    ctx->pc = 0x20f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f5e4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20f5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20f5e8: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x20f5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x20f5ec: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x20f5ecu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x20f5f0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x20f5f0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x20f5f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20f5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f5f8: 0x0  nop
    ctx->pc = 0x20f5f8u;
    // NOP
    // 0x20f5fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20F5FCu;
    {
        const bool branch_taken_0x20f5fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5FCu;
            // 0x20f600: 0xe6010278  swc1        $f1, 0x278($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5fc) {
            ctx->pc = 0x20F618u;
            goto label_20f618;
        }
    }
    ctx->pc = 0x20F604u;
    // 0x20f604: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x20f604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x20f608: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x20f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x20f60c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20F60Cu;
    {
        const bool branch_taken_0x20f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F60Cu;
            // 0x20f610: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f60c) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F614u;
    // 0x20f614: 0x0  nop
    ctx->pc = 0x20f614u;
    // NOP
label_20f618:
    // 0x20f618: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x20f618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x20f61c: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x20f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x20f620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20F620u;
    {
        const bool branch_taken_0x20f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F620u;
            // 0x20f624: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f620) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F628u;
label_20f628:
    // 0x20f628: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x20f62c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f630: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x20f630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_20f634:
    // 0x20f634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20f634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f63c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x20f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20f640: 0x3e00008  jr          $ra
    ctx->pc = 0x20F640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F640u;
            // 0x20f644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F580u: goto label_20f580;
            case 0x20F590u: goto label_20f590;
            case 0x20F598u: goto label_20f598;
            case 0x20F5A8u: goto label_20f5a8;
            case 0x20F5CCu: goto label_20f5cc;
            case 0x20F618u: goto label_20f618;
            case 0x20F628u: goto label_20f628;
            case 0x20F634u: goto label_20f634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F648u;
}

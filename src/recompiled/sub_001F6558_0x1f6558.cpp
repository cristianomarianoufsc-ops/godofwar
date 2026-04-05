#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6558
// Address: 0x1f6558 - 0x1f6850
void sub_001F6558_0x1f6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6558_0x1f6558");
#endif

    ctx->pc = 0x1f6558u;

    // 0x1f6558: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1f6558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1f655c: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x1f655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x1f6560: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x1f6560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x1f6564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6568: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x1f6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x1f656c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6570: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x1f6570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x1f6574: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1f6574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1f6578: 0x862300e8  lh          $v1, 0xE8($s1)
    ctx->pc = 0x1f6578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1f657c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6580: 0x962600e8  lhu         $a2, 0xE8($s1)
    ctx->pc = 0x1f6580u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1f6584: 0x106400ac  beq         $v1, $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1F6584u;
    {
        const bool branch_taken_0x1f6584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F6588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6584u;
            // 0x1f6588: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6584) {
            ctx->pc = 0x1F6838u;
            goto label_1f6838;
        }
    }
    ctx->pc = 0x1F658Cu;
    // 0x1f658c: 0x862200ea  lh          $v0, 0xEA($s1)
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x1f6590: 0x104400aa  beq         $v0, $a0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1F6590u;
    {
        const bool branch_taken_0x1f6590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F6594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6590u;
            // 0x1f6594: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6590) {
            ctx->pc = 0x1F683Cu;
            goto label_1f683c;
        }
    }
    ctx->pc = 0x1F6598u;
    // 0x1f6598: 0x862200dc  lh          $v0, 0xDC($s1)
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1f659c: 0x184000a7  blez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1F659Cu;
    {
        const bool branch_taken_0x1f659c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F65A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F659Cu;
            // 0x1f65a0: 0x962400dc  lhu         $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f659c) {
            ctx->pc = 0x1F683Cu;
            goto label_1f683c;
        }
    }
    ctx->pc = 0x1F65A4u;
    // 0x1f65a4: 0x8e3000cc  lw          $s0, 0xCC($s1)
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1f65a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f65ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f65b0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1f65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f65b4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f65b8: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1f65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f65bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f65bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f65c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F65C0u;
    {
        const bool branch_taken_0x1f65c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65C0u;
            // 0x1f65c4: 0x460200c2  mul.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65c0) {
            ctx->pc = 0x1F661Cu;
            goto label_1f661c;
        }
    }
    ctx->pc = 0x1F65C8u;
    // 0x1f65c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f65cc: 0x0  nop
    ctx->pc = 0x1f65ccu;
    // NOP
label_1f65d0:
    // 0x1f65d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f65d4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1f65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1f65d8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1f65d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f65dc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1f65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f65e0: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1f65e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f65e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f65e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f65e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f65e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f65ec: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f65ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f65f0: 0x0  nop
    ctx->pc = 0x1f65f0u;
    // NOP
    // 0x1f65f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F65F4u;
    {
        const bool branch_taken_0x1f65f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f65f4) {
            ctx->pc = 0x1F65F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65F4u;
            // 0x1f65f8: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6608u;
            goto label_1f6608;
        }
    }
    ctx->pc = 0x1F65FCu;
    // 0x1f65fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f65fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6600: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1f6600u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1f6604: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1f6608:
    // 0x1f6608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f660c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f6610: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f6610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6614: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F6614u;
    {
        const bool branch_taken_0x1f6614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6614u;
            // 0x1f6618: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6614) {
            ctx->pc = 0x1F65D0u;
            runtime->cooperativeGuestYield();
            goto label_1f65d0;
        }
    }
    ctx->pc = 0x1F661Cu;
label_1f661c:
    // 0x1f661c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1f661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1f6620: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1f6620u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1f6624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6628: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1f662c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6634: 0xc0459c2  jal         func_116708
    ctx->pc = 0x1F6634u;
    SET_GPR_U32(ctx, 31, 0x1F663Cu);
    ctx->pc = 0x1F6638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6634u;
            // 0x1f6638: 0x8c520104  lw          $s2, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116708u;
    if (runtime->hasFunction(0x116708u)) {
        auto targetFn = runtime->lookupFunction(0x116708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F663Cu; }
        if (ctx->pc != 0x1F663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116708_0x116708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F663Cu; }
        if (ctx->pc != 0x1F663Cu) { return; }
    }
    ctx->pc = 0x1F663Cu;
    // 0x1f663c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6640: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1F6640u;
    SET_GPR_U32(ctx, 31, 0x1F6648u);
    ctx->pc = 0x1F6644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6640u;
            // 0x1f6644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6648u; }
        if (ctx->pc != 0x1F6648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6648u; }
        if (ctx->pc != 0x1F6648u) { return; }
    }
    ctx->pc = 0x1F6648u;
    // 0x1f6648: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1f664c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f664cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6650: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F6650u;
    {
        const bool branch_taken_0x1f6650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6650u;
            // 0x1f6654: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6650) {
            ctx->pc = 0x1F66F0u;
            goto label_1f66f0;
        }
    }
    ctx->pc = 0x1F6658u;
    // 0x1f6658: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f6658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f665c: 0xda260010  lqc2        $vf6, 0x10($s1)
    ctx->pc = 0x1f665cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f6660: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1f6660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6664: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x1f6664u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6668: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1f6668u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f666c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f666cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6670: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f6670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6674: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1f6674u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6678: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1f6678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f667c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1f667cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f6680: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1f6680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f6684: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1f6684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f6688: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1f6688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f668c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1f668cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f6690: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1f6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6694: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1f6694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f6698: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1f6698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f669c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1f669cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f66a0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1f66a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f66a4: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1f66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f66a8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1f66a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f66ac: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1f66acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f66b0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1f66b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f66b4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1f66b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f66b8: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1f66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f66bc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1f66bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f66c0: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1f66c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f66c4: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1f66c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f66c8: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1f66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f66cc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1f66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f66d0: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1f66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f66d4: 0xfa220060  sqc2        $vf2, 0x60($s1)
    ctx->pc = 0x1f66d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f66d8: 0xfa230070  sqc2        $vf3, 0x70($s1)
    ctx->pc = 0x1f66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f66dc: 0xfa240080  sqc2        $vf4, 0x80($s1)
    ctx->pc = 0x1f66dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f66e0: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1f66e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f66e4: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1f66e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f66e8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1f66e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f66ec: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1f66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1f66f0:
    // 0x1f66f0: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x1f66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x1f66f4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f66f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f66f8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1f66f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f66fc: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1f66fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6700: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f6700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f6704: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1f6704u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1f6708: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f6708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f670c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1f670cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6710: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x1f6710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f6714: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x1f6714u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f6718: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x1f6718u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f671c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1f671cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1f6720: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1f6720u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1f6724: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x1f6724u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x1f6728: 0x7e250040  sq          $a1, 0x40($s1)
    ctx->pc = 0x1f6728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 5));
    // 0x1f672c: 0x862200e8  lh          $v0, 0xE8($s1)
    ctx->pc = 0x1f672cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1f6730: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1f6730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1f6734: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f6734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1f6738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f673c: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1f673cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1f6740: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x1f6740u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1f6744: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1f6744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6748: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x1f6748u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1f674c: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1f674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6750: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x1f6750u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1f6754: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1f6754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f6758: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1f6758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f675c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f675cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6760: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f6760u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6764: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1f6764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f6768: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f6768u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f676c: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1f676cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f6770: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1f6770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6774: 0x862600ea  lh          $a2, 0xEA($s1)
    ctx->pc = 0x1f6774u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x1f6778: 0x68180  sll         $s0, $a2, 6
    ctx->pc = 0x1f6778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1f677c: 0xc0459c2  jal         func_116708
    ctx->pc = 0x1F677Cu;
    SET_GPR_U32(ctx, 31, 0x1F6784u);
    ctx->pc = 0x1F6780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F677Cu;
            // 0x1f6780: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116708u;
    if (runtime->hasFunction(0x116708u)) {
        auto targetFn = runtime->lookupFunction(0x116708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6784u; }
        if (ctx->pc != 0x1F6784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116708_0x116708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6784u; }
        if (ctx->pc != 0x1F6784u) { return; }
    }
    ctx->pc = 0x1F6784u;
    // 0x1f6784: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f6784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f6788: 0xda260010  lqc2        $vf6, 0x10($s1)
    ctx->pc = 0x1f6788u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f678c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1f678cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6790: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x1f6790u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6794: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1f6794u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f6798: 0xdba30180  lqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1f6798u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f679c: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1f679cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f67a0: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1f67a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f67a4: 0xdba501b0  lqc2        $vf5, 0x1B0($sp)
    ctx->pc = 0x1f67a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f67a8: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1f67a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f67ac: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1f67acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67b0: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1f67b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67b4: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1f67b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f67b8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1f67b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f67bc: 0xfba301c0  sqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x1f67bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f67c0: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1f67c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67c4: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1f67c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67c8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1f67c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f67cc: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1f67ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f67d0: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x1f67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f67d4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1f67d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67d8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1f67d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67dc: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1f67dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f67e0: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1f67e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f67e4: 0xfba201e0  sqc2        $vf2, 0x1E0($sp)
    ctx->pc = 0x1f67e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f67e8: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1f67e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67ec: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1f67ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f67f0: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1f67f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f67f4: 0xfba401f0  sqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x1f67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f67f8: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1f67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f67fc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1f67fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1f6800: 0xdc83bdf8  ld          $v1, -0x4208($a0)
    ctx->pc = 0x1f6800u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1f6804: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1f6804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6808: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1f6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f680c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1f680cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x1f6810: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1f6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f6814: 0xfa030000  sqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1f6814u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6818: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1f6818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f681c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1f681cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1f6820: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1f6820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f6824: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1f6824u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1f6828: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x1f6828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f682c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1f682cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1f6830: 0xfc83bdf8  sd          $v1, -0x4208($a0)
    ctx->pc = 0x1f6830u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 3));
    // 0x1f6834: 0xfe400040  sd          $zero, 0x40($s2)
    ctx->pc = 0x1f6834u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 0));
label_1f6838:
    // 0x1f6838: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x1f6838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1f683c:
    // 0x1f683c: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x1f683cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f6840: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x1f6840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f6844: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x1f6844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f6848: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6848u;
            // 0x1f684c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F65D0u: goto label_1f65d0;
            case 0x1F6608u: goto label_1f6608;
            case 0x1F661Cu: goto label_1f661c;
            case 0x1F66F0u: goto label_1f66f0;
            case 0x1F6838u: goto label_1f6838;
            case 0x1F683Cu: goto label_1f683c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6850u;
}

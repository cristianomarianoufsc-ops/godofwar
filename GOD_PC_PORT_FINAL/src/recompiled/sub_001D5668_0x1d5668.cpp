#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5668
// Address: 0x1d5668 - 0x1d56f0
void sub_001D5668_0x1d5668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5668_0x1d5668");
#endif

    ctx->pc = 0x1d5668u;

    // 0x1d5668: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d5668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d566c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5670: 0x244328e0  addiu       $v1, $v0, 0x28E0
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d5674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5678: 0x8c6203d0  lw          $v0, 0x3D0($v1)
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x1d567c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d567cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5680: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5684: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5684u;
    {
        const bool branch_taken_0x1d5684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5684u;
            // 0x1d5688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5684) {
            ctx->pc = 0x1D56DCu;
            goto label_1d56dc;
        }
    }
    ctx->pc = 0x1D568Cu;
    // 0x1d568c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5690: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d5694: 0x8c44e208  lw          $a0, -0x1DF8($v0)
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959624)));
    // 0x1d5698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d569c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d56a0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1D56A0u;
    SET_GPR_U32(ctx, 31, 0x1D56A8u);
    ctx->pc = 0x1D56A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56A0u;
            // 0x1d56a4: 0xac6003d0  sw          $zero, 0x3D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56A8u; }
        if (ctx->pc != 0x1D56A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56A8u; }
        if (ctx->pc != 0x1D56A8u) { return; }
    }
    ctx->pc = 0x1D56A8u;
    // 0x1d56a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d56a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56ac: 0xc07b390  jal         func_1ECE40
    ctx->pc = 0x1D56ACu;
    SET_GPR_U32(ctx, 31, 0x1D56B4u);
    ctx->pc = 0x1D56B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56ACu;
            // 0x1d56b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE40u;
    if (runtime->hasFunction(0x1ECE40u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56B4u; }
        if (ctx->pc != 0x1D56B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE40_0x1ece40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56B4u; }
        if (ctx->pc != 0x1D56B4u) { return; }
    }
    ctx->pc = 0x1D56B4u;
    // 0x1d56b4: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1D56B4u;
    SET_GPR_U32(ctx, 31, 0x1D56BCu);
    ctx->pc = 0x1D56B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56B4u;
            // 0x1d56b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56BCu; }
        if (ctx->pc != 0x1D56BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56BCu; }
        if (ctx->pc != 0x1D56BCu) { return; }
    }
    ctx->pc = 0x1D56BCu;
    // 0x1d56bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d56bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1d56c0: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x1d56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d56c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d56c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d56c8: 0x0  nop
    ctx->pc = 0x1d56c8u;
    // NOP
    // 0x1d56cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D56CCu;
    {
        const bool branch_taken_0x1d56cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D56D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56CCu;
            // 0x1d56d0: 0xe60c017c  swc1        $f12, 0x17C($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56cc) {
            ctx->pc = 0x1D56DCu;
            goto label_1d56dc;
        }
    }
    ctx->pc = 0x1D56D4u;
    // 0x1d56d4: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D56D4u;
    SET_GPR_U32(ctx, 31, 0x1D56DCu);
    ctx->pc = 0x1D56D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56D4u;
            // 0x1d56d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56DCu; }
        if (ctx->pc != 0x1D56DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56DCu; }
        if (ctx->pc != 0x1D56DCu) { return; }
    }
    ctx->pc = 0x1D56DCu;
label_1d56dc:
    // 0x1d56dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d56dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d56e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d56e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d56e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d56e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d56e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56E8u;
            // 0x1d56ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D56DCu: goto label_1d56dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D56F0u;
}

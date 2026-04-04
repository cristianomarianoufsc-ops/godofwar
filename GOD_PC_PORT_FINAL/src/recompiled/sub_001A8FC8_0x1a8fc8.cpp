#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8FC8
// Address: 0x1a8fc8 - 0x1a9058
void sub_001A8FC8_0x1a8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8FC8_0x1a8fc8");
#endif

    ctx->pc = 0x1a8fc8u;

    // 0x1a8fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fd8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a8fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a8fdc: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a8fe0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a8fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a8fe4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a8fe8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A8FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8FF0u);
        ctx->pc = 0x1A8FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FE8u;
            // 0x1a8fec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8FF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A902Cu: goto label_1a902c;
            case 0x1A9040u: goto label_1a9040;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF0u; }
            if (ctx->pc != 0x1A8FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8FF0u;
    // 0x1a8ff0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A8FF0u;
    {
        const bool branch_taken_0x1a8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FF0u;
            // 0x1a8ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff0) {
            ctx->pc = 0x1A9040u;
            goto label_1a9040;
        }
    }
    ctx->pc = 0x1A8FF8u;
    // 0x1a8ff8: 0xc6140068  lwc1        $f20, 0x68($s0)
    ctx->pc = 0x1a8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8ffc: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1A8FFCu;
    SET_GPR_U32(ctx, 31, 0x1A9004u);
    ctx->pc = 0x1A9000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FFCu;
            // 0x1a9000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9004u; }
        if (ctx->pc != 0x1A9004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9004u; }
        if (ctx->pc != 0x1A9004u) { return; }
    }
    ctx->pc = 0x1A9004u;
    // 0x1a9004: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a9004u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a9008: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a900c: 0xc440cac0  lwc1        $f0, -0x3540($v0)
    ctx->pc = 0x1a900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9010: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a9010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9014: 0x0  nop
    ctx->pc = 0x1a9014u;
    // NOP
    // 0x1a9018: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9018u;
    {
        const bool branch_taken_0x1a9018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9018u;
            // 0x1a901c: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9018) {
            ctx->pc = 0x1A902Cu;
            goto label_1a902c;
        }
    }
    ctx->pc = 0x1A9020u;
    // 0x1a9020: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x1a9024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9024u;
    {
        const bool branch_taken_0x1a9024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9024u;
            // 0x1a9028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9024) {
            ctx->pc = 0x1A9040u;
            goto label_1a9040;
        }
    }
    ctx->pc = 0x1A902Cu;
label_1a902c:
    // 0x1a902c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9030: 0x24c64238  addiu       $a2, $a2, 0x4238
    ctx->pc = 0x1a9030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16952));
    // 0x1a9034: 0xc091258  jal         func_244960
    ctx->pc = 0x1A9034u;
    SET_GPR_U32(ctx, 31, 0x1A903Cu);
    ctx->pc = 0x1A9038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9034u;
            // 0x1a9038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A903Cu; }
        if (ctx->pc != 0x1A903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A903Cu; }
        if (ctx->pc != 0x1A903Cu) { return; }
    }
    ctx->pc = 0x1A903Cu;
    // 0x1a903c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9040:
    // 0x1a9040: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9048: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a904c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A904Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A904Cu;
            // 0x1a9050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A902Cu: goto label_1a902c;
            case 0x1A9040u: goto label_1a9040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9054u;
    // 0x1a9054: 0x0  nop
    ctx->pc = 0x1a9054u;
    // NOP
}

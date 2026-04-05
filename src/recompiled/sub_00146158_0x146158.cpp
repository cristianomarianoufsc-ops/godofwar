#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146158
// Address: 0x146158 - 0x1461d8
void sub_00146158_0x146158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146158_0x146158");
#endif

    ctx->pc = 0x146158u;

    // 0x146158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14615c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x146160: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x146160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x146164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x146164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x146168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14616c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146170: 0x8e420cfc  lw          $v0, 0xCFC($s2)
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3324)));
    // 0x146174: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x146174u;
    {
        const bool branch_taken_0x146174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146174) {
            ctx->pc = 0x146178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146174u;
            // 0x146178: 0xae400cdc  sw          $zero, 0xCDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1461BCu;
            goto label_1461bc;
        }
    }
    ctx->pc = 0x14617Cu;
    // 0x14617c: 0x264200c8  addiu       $v0, $s2, 0xC8
    ctx->pc = 0x14617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x146180: 0x8e510cd8  lw          $s1, 0xCD8($s2)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3288)));
    // 0x146184: 0xac400c04  sw          $zero, 0xC04($v0)
    ctx->pc = 0x146184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3076), GPR_U32(ctx, 0));
    // 0x146188: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x146188u;
    {
        const bool branch_taken_0x146188 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146188u;
            // 0x14618c: 0xac400c00  sw          $zero, 0xC00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146188) {
            ctx->pc = 0x1461B8u;
            goto label_1461b8;
        }
    }
    ctx->pc = 0x146190u;
    // 0x146190: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146194: 0x0  nop
    ctx->pc = 0x146194u;
    // NOP
label_146198:
    // 0x146198: 0xc0514be  jal         func_1452F8
    ctx->pc = 0x146198u;
    SET_GPR_U32(ctx, 31, 0x1461A0u);
    ctx->pc = 0x14619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146198u;
            // 0x14619c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1452F8u;
    if (runtime->hasFunction(0x1452F8u)) {
        auto targetFn = runtime->lookupFunction(0x1452F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461A0u; }
        if (ctx->pc != 0x1461A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001452F8_0x1452f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461A0u; }
        if (ctx->pc != 0x1461A0u) { return; }
    }
    ctx->pc = 0x1461A0u;
    // 0x1461a0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1461a4: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x1461A4u;
    SET_GPR_U32(ctx, 31, 0x1461ACu);
    ctx->pc = 0x1461A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1461A4u;
            // 0x1461a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461ACu; }
        if (ctx->pc != 0x1461ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461ACu; }
        if (ctx->pc != 0x1461ACu) { return; }
    }
    ctx->pc = 0x1461ACu;
    // 0x1461ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1461acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461b0: 0x5620fff9  bnel        $s1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1461B0u;
    {
        const bool branch_taken_0x1461b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1461b0) {
            ctx->pc = 0x1461B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1461B0u;
            // 0x1461b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146198u;
            runtime->cooperativeGuestYield();
            goto label_146198;
        }
    }
    ctx->pc = 0x1461B8u;
label_1461b8:
    // 0x1461b8: 0xae400cdc  sw          $zero, 0xCDC($s2)
    ctx->pc = 0x1461b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3292), GPR_U32(ctx, 0));
label_1461bc:
    // 0x1461bc: 0xae400cd8  sw          $zero, 0xCD8($s2)
    ctx->pc = 0x1461bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3288), GPR_U32(ctx, 0));
    // 0x1461c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1461c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1461c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1461c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1461c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1461c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1461cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1461ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1461d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1461D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1461D0u;
            // 0x1461d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146198u: goto label_146198;
            case 0x1461B8u: goto label_1461b8;
            case 0x1461BCu: goto label_1461bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1461D8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002270A8
// Address: 0x2270a8 - 0x227160
void sub_002270A8_0x2270a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002270A8_0x2270a8");
#endif

    ctx->pc = 0x2270a8u;

    // 0x2270a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2270a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2270ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2270acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2270b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2270b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2270b4: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x2270b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2270b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2270bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2270bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2270c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2270c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2270c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2270c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2270c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2270cc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2270CCu;
    {
        const bool branch_taken_0x2270cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2270CCu;
            // 0x2270d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270cc) {
            ctx->pc = 0x227128u;
            goto label_227128;
        }
    }
    ctx->pc = 0x2270D4u;
    // 0x2270d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2270d8: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2270dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2270dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2270e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2270e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2270e4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2270e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2270e8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2270E8u;
    {
        const bool branch_taken_0x2270e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2270E8u;
            // 0x2270ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270e8) {
            ctx->pc = 0x22712Cu;
            goto label_22712c;
        }
    }
    ctx->pc = 0x2270F0u;
    // 0x2270f0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x2270f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x2270f4: 0x0  nop
    ctx->pc = 0x2270f4u;
    // NOP
label_2270f8:
    // 0x2270f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2270f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270fc: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2270fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x227100: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x227100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x227104: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x227108: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x227108u;
    {
        const bool branch_taken_0x227108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227108) {
            ctx->pc = 0x22710Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227108u;
            // 0x22710c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227120u;
            goto label_227120;
        }
    }
    ctx->pc = 0x227110u;
    // 0x227110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227118: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x227118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x22711c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227120:
    // 0x227120: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x227120u;
    {
        const bool branch_taken_0x227120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227120u;
            // 0x227124: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227120) {
            ctx->pc = 0x2270F8u;
            runtime->cooperativeGuestYield();
            goto label_2270f8;
        }
    }
    ctx->pc = 0x227128u;
label_227128:
    // 0x227128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22712c:
    // 0x22712c: 0xc089a60  jal         func_226980
    ctx->pc = 0x22712Cu;
    SET_GPR_U32(ctx, 31, 0x227134u);
    ctx->pc = 0x227130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22712Cu;
            // 0x227130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226980u;
    if (runtime->hasFunction(0x226980u)) {
        auto targetFn = runtime->lookupFunction(0x226980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227134u; }
        if (ctx->pc != 0x227134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226980_0x226980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227134u; }
        if (ctx->pc != 0x227134u) { return; }
    }
    ctx->pc = 0x227134u;
    // 0x227134: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x227134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x227138: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227138u;
    {
        const bool branch_taken_0x227138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227138) {
            ctx->pc = 0x22713Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227138u;
            // 0x22713c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22714Cu;
            goto label_22714c;
        }
    }
    ctx->pc = 0x227140u;
    // 0x227140: 0xc089970  jal         func_2265C0
    ctx->pc = 0x227140u;
    SET_GPR_U32(ctx, 31, 0x227148u);
    ctx->pc = 0x227144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227140u;
            // 0x227144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2265C0u;
    if (runtime->hasFunction(0x2265C0u)) {
        auto targetFn = runtime->lookupFunction(0x2265C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227148u; }
        if (ctx->pc != 0x227148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2265c0_0x2265e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227148u; }
        if (ctx->pc != 0x227148u) { return; }
    }
    ctx->pc = 0x227148u;
    // 0x227148: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22714c:
    // 0x22714c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22714cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227154: 0x3e00008  jr          $ra
    ctx->pc = 0x227154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227154u;
            // 0x227158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2270F8u: goto label_2270f8;
            case 0x227120u: goto label_227120;
            case 0x227128u: goto label_227128;
            case 0x22712Cu: goto label_22712c;
            case 0x22714Cu: goto label_22714c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22715Cu;
    // 0x22715c: 0x0  nop
    ctx->pc = 0x22715cu;
    // NOP
}

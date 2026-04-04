#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c2130
// Address: 0x1c2130 - 0x1c21d0
void entry_1c2130_0x1c21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c2130_0x1c21d0");
#endif

    ctx->pc = 0x1c2130u;

    // 0x1c2130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c213c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2140: 0xc079c9a  jal         func_1E7268
    ctx->pc = 0x1C2140u;
    SET_GPR_U32(ctx, 31, 0x1C2148u);
    ctx->pc = 0x1C2144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2140u;
            // 0x1c2144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7268u;
    if (runtime->hasFunction(0x1E7268u)) {
        auto targetFn = runtime->lookupFunction(0x1E7268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2148u; }
        if (ctx->pc != 0x1C2148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7268_0x1e7268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2148u; }
        if (ctx->pc != 0x1C2148u) { return; }
    }
    ctx->pc = 0x1C2148u;
    // 0x1c2148: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1c214c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2150: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x1c2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1c2154: 0xae030360  sw          $v1, 0x360($s0)
    ctx->pc = 0x1c2154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 3));
    // 0x1c2158: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c2158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1c215c: 0xc07d37a  jal         func_1F4DE8
    ctx->pc = 0x1C215Cu;
    SET_GPR_U32(ctx, 31, 0x1C2164u);
    ctx->pc = 0x1C2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C215Cu;
            // 0x1c2160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DE8u;
    if (runtime->hasFunction(0x1F4DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F4DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2164u; }
        if (ctx->pc != 0x1C2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4DE8_0x1f4de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2164u; }
        if (ctx->pc != 0x1C2164u) { return; }
    }
    ctx->pc = 0x1C2164u;
    // 0x1c2164: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c216c: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1c2170: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c2174: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1c2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1c2178: 0xc0708ba  jal         func_1C22E8
    ctx->pc = 0x1C2178u;
    SET_GPR_U32(ctx, 31, 0x1C2180u);
    ctx->pc = 0x1C217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2178u;
            // 0x1c217c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22E8u;
    if (runtime->hasFunction(0x1C22E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2180u; }
        if (ctx->pc != 0x1C2180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22E8_0x1c22e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2180u; }
        if (ctx->pc != 0x1C2180u) { return; }
    }
    ctx->pc = 0x1C2180u;
    // 0x1c2180: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2184: 0x8c42c4dc  lw          $v0, -0x3B24($v0)
    ctx->pc = 0x1c2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952156)));
    // 0x1c2188: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2188u;
    {
        const bool branch_taken_0x1c2188 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2188u;
            // 0x1c218c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2188) {
            ctx->pc = 0x1C21A0u;
            goto label_1c21a0;
        }
    }
    ctx->pc = 0x1C2190u;
    // 0x1c2190: 0x8c42c4e0  lw          $v0, -0x3B20($v0)
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952160)));
    // 0x1c2194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2194u;
    {
        const bool branch_taken_0x1c2194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2194u;
            // 0x1c2198: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2194) {
            ctx->pc = 0x1C21BCu;
            goto label_1c21bc;
        }
    }
    ctx->pc = 0x1C219Cu;
    // 0x1c219c: 0x0  nop
    ctx->pc = 0x1c219cu;
    // NOP
label_1c21a0:
    // 0x1c21a0: 0x0  nop
    ctx->pc = 0x1c21a0u;
    // NOP
    // 0x1c21a4: 0x0  nop
    ctx->pc = 0x1c21a4u;
    // NOP
    // 0x1c21a8: 0x0  nop
    ctx->pc = 0x1c21a8u;
    // NOP
    // 0x1c21ac: 0x0  nop
    ctx->pc = 0x1c21acu;
    // NOP
    // 0x1c21b0: 0x0  nop
    ctx->pc = 0x1c21b0u;
    // NOP
    // 0x1c21b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C21B4u;
    {
        const bool branch_taken_0x1c21b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21b4) {
            ctx->pc = 0x1C21A0u;
            runtime->cooperativeGuestYield();
            goto label_1c21a0;
        }
    }
    ctx->pc = 0x1C21BCu;
label_1c21bc:
    // 0x1c21bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c21c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21C4u;
            // 0x1c21c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C21A0u: goto label_1c21a0;
            case 0x1C21BCu: goto label_1c21bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C21CCu;
    // 0x1c21cc: 0x0  nop
    ctx->pc = 0x1c21ccu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294140
// Address: 0x294140 - 0x2941e8
void sub_00294140_0x294140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294140_0x294140");
#endif

    ctx->pc = 0x294140u;

    // 0x294140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29414c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x294150: 0xc0a4fe4  jal         func_293F90
    ctx->pc = 0x294150u;
    SET_GPR_U32(ctx, 31, 0x294158u);
    ctx->pc = 0x294154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294150u;
            // 0x294154: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F90u;
    if (runtime->hasFunction(0x293F90u)) {
        auto targetFn = runtime->lookupFunction(0x293F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294158u; }
        if (ctx->pc != 0x294158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f90_0x293fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294158u; }
        if (ctx->pc != 0x294158u) { return; }
    }
    ctx->pc = 0x294158u;
    // 0x294158: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294158u;
    SET_GPR_U32(ctx, 31, 0x294160u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294160u; }
        if (ctx->pc != 0x294160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294160u; }
        if (ctx->pc != 0x294160u) { return; }
    }
    ctx->pc = 0x294160u;
    // 0x294160: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x294160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x294164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x294164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294168: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x294168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x29416c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29416cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x294170: 0xf  sync
    ctx->pc = 0x294170u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294174u;
    {
        const bool branch_taken_0x294174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294174u;
            // 0x294178: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294174) {
            ctx->pc = 0x294188u;
            goto label_294188;
        }
    }
    ctx->pc = 0x29417Cu;
    // 0x29417c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29417Cu;
    SET_GPR_U32(ctx, 31, 0x294184u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294184u; }
        if (ctx->pc != 0x294184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294184u; }
        if (ctx->pc != 0x294184u) { return; }
    }
    ctx->pc = 0x294184u;
    // 0x294184: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x294184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_294188:
    // 0x294188: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x294188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x29418c: 0x0  nop
    ctx->pc = 0x29418cu;
    // NOP
label_294190:
    // 0x294190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x294190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294194: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x294194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x294198: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294198u;
    {
        const bool branch_taken_0x294198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294198) {
            ctx->pc = 0x2941ACu;
            goto label_2941ac;
        }
    }
    ctx->pc = 0x2941A0u;
    // 0x2941a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2941a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2941a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2941A4u;
    {
        const bool branch_taken_0x2941a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2941a4) {
            ctx->pc = 0x294190u;
            runtime->cooperativeGuestYield();
            goto label_294190;
        }
    }
    ctx->pc = 0x2941ACu;
label_2941ac:
    // 0x2941ac: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2941ACu;
    SET_GPR_U32(ctx, 31, 0x2941B4u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941B4u; }
        if (ctx->pc != 0x2941B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941B4u; }
        if (ctx->pc != 0x2941B4u) { return; }
    }
    ctx->pc = 0x2941B4u;
    // 0x2941b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2941b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2941b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2941b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2941bc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x2941bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3));
    // 0x2941c0: 0xf  sync
    ctx->pc = 0x2941c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2941c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2941C4u;
    {
        const bool branch_taken_0x2941c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2941c4) {
            ctx->pc = 0x2941D4u;
            goto label_2941d4;
        }
    }
    ctx->pc = 0x2941CCu;
    // 0x2941cc: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2941CCu;
    SET_GPR_U32(ctx, 31, 0x2941D4u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941D4u; }
        if (ctx->pc != 0x2941D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941D4u; }
        if (ctx->pc != 0x2941D4u) { return; }
    }
    ctx->pc = 0x2941D4u;
label_2941d4:
    // 0x2941d4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2941d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2941d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2941d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2941dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2941DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2941E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941DCu;
            // 0x2941e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294188u: goto label_294188;
            case 0x294190u: goto label_294190;
            case 0x2941ACu: goto label_2941ac;
            case 0x2941D4u: goto label_2941d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2941E4u;
    // 0x2941e4: 0x0  nop
    ctx->pc = 0x2941e4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4908
// Address: 0x1b4908 - 0x1b4a38
void sub_001B4908_0x1b4908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4908_0x1b4908");
#endif

    ctx->pc = 0x1b4908u;

    // 0x1b4908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b490c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4910: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b491c: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x1b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1b4920: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1b4924: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b4928: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4928u;
    {
        const bool branch_taken_0x1b4928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4928u;
            // 0x1b492c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4928) {
            ctx->pc = 0x1B4974u;
            goto label_1b4974;
        }
    }
    ctx->pc = 0x1B4930u;
label_1b4930:
    // 0x1b4930: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b4930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4934: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4938: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4938u;
    {
        const bool branch_taken_0x1b4938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4938u;
            // 0x1b493c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4938) {
            ctx->pc = 0x1B4964u;
            goto label_1b4964;
        }
    }
    ctx->pc = 0x1B4940u;
    // 0x1b4940: 0xc083d92  jal         func_20F648
    ctx->pc = 0x1B4940u;
    SET_GPR_U32(ctx, 31, 0x1B4948u);
    ctx->pc = 0x20F648u;
    if (runtime->hasFunction(0x20F648u)) {
        auto targetFn = runtime->lookupFunction(0x20F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4948u; }
        if (ctx->pc != 0x1B4948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F648_0x20f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4948u; }
        if (ctx->pc != 0x1B4948u) { return; }
    }
    ctx->pc = 0x1B4948u;
    // 0x1b4948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b494c: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1b4950: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B4950u;
    SET_GPR_U32(ctx, 31, 0x1B4958u);
    ctx->pc = 0x1B4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4950u;
            // 0x1b4954: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4958u; }
        if (ctx->pc != 0x1B4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4958u; }
        if (ctx->pc != 0x1B4958u) { return; }
    }
    ctx->pc = 0x1B4958u;
    // 0x1b4958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b495c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b4960: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b4964:
    // 0x1b4964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b4964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b496c: 0x1443fff0  bne         $v0, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B496Cu;
    {
        const bool branch_taken_0x1b496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B496Cu;
            // 0x1b4970: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b496c) {
            ctx->pc = 0x1B4930u;
            runtime->cooperativeGuestYield();
            goto label_1b4930;
        }
    }
    ctx->pc = 0x1B4974u;
label_1b4974:
    // 0x1b4974: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1b4974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1b4978: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1b497c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b4980: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4980u;
    {
        const bool branch_taken_0x1b4980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4980u;
            // 0x1b4984: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4980) {
            ctx->pc = 0x1B49CCu;
            goto label_1b49cc;
        }
    }
    ctx->pc = 0x1B4988u;
label_1b4988:
    // 0x1b4988: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b4988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b498c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4990: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4990u;
    {
        const bool branch_taken_0x1b4990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4990u;
            // 0x1b4994: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4990) {
            ctx->pc = 0x1B49BCu;
            goto label_1b49bc;
        }
    }
    ctx->pc = 0x1B4998u;
    // 0x1b4998: 0xc085314  jal         func_214C50
    ctx->pc = 0x1B4998u;
    SET_GPR_U32(ctx, 31, 0x1B49A0u);
    ctx->pc = 0x214C50u;
    if (runtime->hasFunction(0x214C50u)) {
        auto targetFn = runtime->lookupFunction(0x214C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49A0u; }
        if (ctx->pc != 0x1B49A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_214c50_0x214c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49A0u; }
        if (ctx->pc != 0x1B49A0u) { return; }
    }
    ctx->pc = 0x1B49A0u;
    // 0x1b49a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b49a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49a4: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1b49a8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B49A8u;
    SET_GPR_U32(ctx, 31, 0x1B49B0u);
    ctx->pc = 0x1B49ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49A8u;
            // 0x1b49ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49B0u; }
        if (ctx->pc != 0x1B49B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49B0u; }
        if (ctx->pc != 0x1B49B0u) { return; }
    }
    ctx->pc = 0x1B49B0u;
    // 0x1b49b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b49b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b49b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b49bc:
    // 0x1b49bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b49c4: 0x1443fff0  bne         $v0, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B49C4u;
    {
        const bool branch_taken_0x1b49c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49C4u;
            // 0x1b49c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49c4) {
            ctx->pc = 0x1B4988u;
            runtime->cooperativeGuestYield();
            goto label_1b4988;
        }
    }
    ctx->pc = 0x1B49CCu;
label_1b49cc:
    // 0x1b49cc: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1b49d0: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1b49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1b49d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b49d8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B49D8u;
    {
        const bool branch_taken_0x1b49d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B49DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49D8u;
            // 0x1b49dc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49d8) {
            ctx->pc = 0x1B4A24u;
            goto label_1b4a24;
        }
    }
    ctx->pc = 0x1B49E0u;
label_1b49e0:
    // 0x1b49e0: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b49e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b49e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b49e8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B49E8u;
    {
        const bool branch_taken_0x1b49e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49E8u;
            // 0x1b49ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49e8) {
            ctx->pc = 0x1B4A14u;
            goto label_1b4a14;
        }
    }
    ctx->pc = 0x1B49F0u;
    // 0x1b49f0: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x1B49F0u;
    SET_GPR_U32(ctx, 31, 0x1B49F8u);
    ctx->pc = 0x2132C0u;
    if (runtime->hasFunction(0x2132C0u)) {
        auto targetFn = runtime->lookupFunction(0x2132C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49F8u; }
        if (ctx->pc != 0x1B49F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2132c0_0x2132f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49F8u; }
        if (ctx->pc != 0x1B49F8u) { return; }
    }
    ctx->pc = 0x1B49F8u;
    // 0x1b49f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b49f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49fc: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x1b49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1b4a00: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B4A00u;
    SET_GPR_U32(ctx, 31, 0x1B4A08u);
    ctx->pc = 0x1B4A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A00u;
            // 0x1b4a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A08u; }
        if (ctx->pc != 0x1B4A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A08u; }
        if (ctx->pc != 0x1B4A08u) { return; }
    }
    ctx->pc = 0x1B4A08u;
    // 0x1b4a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4a0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b4a10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b4a14:
    // 0x1b4a14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4a1c: 0x1443fff0  bne         $v0, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B4A1Cu;
    {
        const bool branch_taken_0x1b4a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A1Cu;
            // 0x1b4a20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a1c) {
            ctx->pc = 0x1B49E0u;
            runtime->cooperativeGuestYield();
            goto label_1b49e0;
        }
    }
    ctx->pc = 0x1B4A24u;
label_1b4a24:
    // 0x1b4a24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4a28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A30u;
            // 0x1b4a34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4930u: goto label_1b4930;
            case 0x1B4964u: goto label_1b4964;
            case 0x1B4974u: goto label_1b4974;
            case 0x1B4988u: goto label_1b4988;
            case 0x1B49BCu: goto label_1b49bc;
            case 0x1B49CCu: goto label_1b49cc;
            case 0x1B49E0u: goto label_1b49e0;
            case 0x1B4A14u: goto label_1b4a14;
            case 0x1B4A24u: goto label_1b4a24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4A38u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDFF8
// Address: 0x1bdff8 - 0x1be1d8
void sub_001BDFF8_0x1bdff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDFF8_0x1bdff8");
#endif

    ctx->pc = 0x1bdff8u;

    // 0x1bdff8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bdffc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be000: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1be000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1be004: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be008: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1be008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1be00c: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1be010: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1be010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1be014: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1be018: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1be018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1be01c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1be01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1be020: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1be020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1be024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1be024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1be028: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1be028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1be02c: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be030: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1be030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be034: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1be034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1be038:
    // 0x1be038: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x1be038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be03c: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1be040: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1be044: 0x2a39021  addu        $s2, $s5, $v1
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1be048: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x1be048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1be04c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1be050: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1BE050u;
    {
        const bool branch_taken_0x1be050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be050) {
            ctx->pc = 0x1BE054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE050u;
            // 0x1be054: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE1A4u;
            goto label_1be1a4;
        }
    }
    ctx->pc = 0x1BE058u;
    // 0x1be058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be05c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1be060:
    // 0x1be060: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1be060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1be064: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1be068: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1be06c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be074: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1be074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be078: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1be078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1be07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be080: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1BE080u;
    {
        const bool branch_taken_0x1be080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE080u;
            // 0x1be084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be080) {
            ctx->pc = 0x1BE194u;
            goto label_1be194;
        }
    }
    ctx->pc = 0x1BE088u;
    // 0x1be088: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BE088u;
    SET_GPR_U32(ctx, 31, 0x1BE090u);
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE090u; }
        if (ctx->pc != 0x1BE090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE090u; }
        if (ctx->pc != 0x1BE090u) { return; }
    }
    ctx->pc = 0x1BE090u;
    // 0x1be090: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1BE090u;
    {
        const bool branch_taken_0x1be090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE090u;
            // 0x1be094: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be090) {
            ctx->pc = 0x1BE198u;
            goto label_1be198;
        }
    }
    ctx->pc = 0x1BE098u;
    // 0x1be098: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0a0: 0x24a55ac0  addiu       $a1, $a1, 0x5AC0
    ctx->pc = 0x1be0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23232));
    // 0x1be0a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1be0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0a8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BE0A8u;
    SET_GPR_U32(ctx, 31, 0x1BE0B0u);
    ctx->pc = 0x1BE0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0A8u;
            // 0x1be0ac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0B0u; }
        if (ctx->pc != 0x1BE0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0B0u; }
        if (ctx->pc != 0x1BE0B0u) { return; }
    }
    ctx->pc = 0x1BE0B0u;
    // 0x1be0b0: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x1be0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x1be0b4: 0xc061a06  jal         func_186818
    ctx->pc = 0x1BE0B4u;
    SET_GPR_U32(ctx, 31, 0x1BE0BCu);
    ctx->pc = 0x1BE0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0B4u;
            // 0x1be0b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0BCu; }
        if (ctx->pc != 0x1BE0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0BCu; }
        if (ctx->pc != 0x1BE0BCu) { return; }
    }
    ctx->pc = 0x1BE0BCu;
    // 0x1be0bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0c0: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BE0C0u;
    {
        const bool branch_taken_0x1be0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0C0u;
            // 0x1be0c4: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0c0) {
            ctx->pc = 0x1BE1A0u;
            goto label_1be1a0;
        }
    }
    ctx->pc = 0x1BE0C8u;
    // 0x1be0c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1be0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0d0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BE0D0u;
    SET_GPR_U32(ctx, 31, 0x1BE0D8u);
    ctx->pc = 0x1BE0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0D0u;
            // 0x1be0d4: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0D8u; }
        if (ctx->pc != 0x1BE0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0D8u; }
        if (ctx->pc != 0x1BE0D8u) { return; }
    }
    ctx->pc = 0x1BE0D8u;
    // 0x1be0d8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1be0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1be0dc: 0xc061a06  jal         func_186818
    ctx->pc = 0x1BE0DCu;
    SET_GPR_U32(ctx, 31, 0x1BE0E4u);
    ctx->pc = 0x1BE0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0DCu;
            // 0x1be0e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0E4u; }
        if (ctx->pc != 0x1BE0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0E4u; }
        if (ctx->pc != 0x1BE0E4u) { return; }
    }
    ctx->pc = 0x1BE0E4u;
    // 0x1be0e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be0e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0e8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BE0E8u;
    {
        const bool branch_taken_0x1be0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0E8u;
            // 0x1be0ec: 0x26130008  addiu       $s3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0e8) {
            ctx->pc = 0x1BE1A0u;
            goto label_1be1a0;
        }
    }
    ctx->pc = 0x1BE0F0u;
    // 0x1be0f0: 0x2632023  subu        $a0, $s3, $v1
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1be0f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be0f8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1be0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1be0fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be100: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be108: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BE108u;
    {
        const bool branch_taken_0x1be108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE108u;
            // 0x1be10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be108) {
            ctx->pc = 0x1BE1A0u;
            goto label_1be1a0;
        }
    }
    ctx->pc = 0x1BE110u;
    // 0x1be110: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1be110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x1be114: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1be114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1be118: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1be11c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1be120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1be120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be124: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1be128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1be12c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1BE12Cu;
    SET_GPR_U32(ctx, 31, 0x1BE134u);
    ctx->pc = 0x1BE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE12Cu;
            // 0x1be130: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE134u; }
        if (ctx->pc != 0x1BE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE134u; }
        if (ctx->pc != 0x1BE134u) { return; }
    }
    ctx->pc = 0x1BE134u;
    // 0x1be134: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BE134u;
    {
        const bool branch_taken_0x1be134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE134u;
            // 0x1be138: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be134) {
            ctx->pc = 0x1BE174u;
            goto label_1be174;
        }
    }
    ctx->pc = 0x1BE13Cu;
    // 0x1be13c: 0x0  nop
    ctx->pc = 0x1be13cu;
    // NOP
label_1be140:
    // 0x1be140: 0xc08e47a  jal         func_2391E8
    ctx->pc = 0x1BE140u;
    SET_GPR_U32(ctx, 31, 0x1BE148u);
    ctx->pc = 0x1BE144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE140u;
            // 0x1be144: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2391E8u;
    if (runtime->hasFunction(0x2391E8u)) {
        auto targetFn = runtime->lookupFunction(0x2391E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2391e8_0x239200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    }
    ctx->pc = 0x1BE148u;
    // 0x1be148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be150: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1be154: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x1BE154u;
    SET_GPR_U32(ctx, 31, 0x1BE15Cu);
    ctx->pc = 0x1BE158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE154u;
            // 0x1be158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE15Cu; }
        if (ctx->pc != 0x1BE15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE15Cu; }
        if (ctx->pc != 0x1BE15Cu) { return; }
    }
    ctx->pc = 0x1BE15Cu;
    // 0x1be15c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be164: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1BE164u;
    SET_GPR_U32(ctx, 31, 0x1BE16Cu);
    ctx->pc = 0x1BE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE164u;
            // 0x1be168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE16Cu; }
        if (ctx->pc != 0x1BE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE16Cu; }
        if (ctx->pc != 0x1BE16Cu) { return; }
    }
    ctx->pc = 0x1BE16Cu;
    // 0x1be16c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1be16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1be170: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1be170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_1be174:
    // 0x1be174: 0xc08e480  jal         func_239200
    ctx->pc = 0x1BE174u;
    SET_GPR_U32(ctx, 31, 0x1BE17Cu);
    ctx->pc = 0x1BE178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE174u;
            // 0x1be178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239200u;
    if (runtime->hasFunction(0x239200u)) {
        auto targetFn = runtime->lookupFunction(0x239200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE17Cu; }
        if (ctx->pc != 0x1BE17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239200_0x239208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE17Cu; }
        if (ctx->pc != 0x1BE17Cu) { return; }
    }
    ctx->pc = 0x1BE17Cu;
    // 0x1be17c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1be17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be180: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1be180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1be184: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BE184u;
    {
        const bool branch_taken_0x1be184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE184u;
            // 0x1be188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be184) {
            ctx->pc = 0x1BE140u;
            runtime->cooperativeGuestYield();
            goto label_1be140;
        }
    }
    ctx->pc = 0x1BE18Cu;
    // 0x1be18c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE18Cu;
    {
        const bool branch_taken_0x1be18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE18Cu;
            // 0x1be190: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be18c) {
            ctx->pc = 0x1BE1A4u;
            goto label_1be1a4;
        }
    }
    ctx->pc = 0x1BE194u;
label_1be194:
    // 0x1be194: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1be194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1be198:
    // 0x1be198: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1BE198u;
    {
        const bool branch_taken_0x1be198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE198u;
            // 0x1be19c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be198) {
            ctx->pc = 0x1BE060u;
            runtime->cooperativeGuestYield();
            goto label_1be060;
        }
    }
    ctx->pc = 0x1BE1A0u;
label_1be1a0:
    // 0x1be1a0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1be1a4:
    // 0x1be1a4: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1be1a8: 0x5440ffa3  bnel        $v0, $zero, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1BE1A8u;
    {
        const bool branch_taken_0x1be1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be1a8) {
            ctx->pc = 0x1BE1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1A8u;
            // 0x1be1ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE038u;
            runtime->cooperativeGuestYield();
            goto label_1be038;
        }
    }
    ctx->pc = 0x1BE1B0u;
    // 0x1be1b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1be1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1be1b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1be1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be1b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1be1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be1bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1be1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be1c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1be1c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be1c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1be1c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be1c8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1be1c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be1cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1be1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1D0u;
            // 0x1be1d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE038u: goto label_1be038;
            case 0x1BE060u: goto label_1be060;
            case 0x1BE140u: goto label_1be140;
            case 0x1BE174u: goto label_1be174;
            case 0x1BE194u: goto label_1be194;
            case 0x1BE198u: goto label_1be198;
            case 0x1BE1A0u: goto label_1be1a0;
            case 0x1BE1A4u: goto label_1be1a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE1D8u;
}

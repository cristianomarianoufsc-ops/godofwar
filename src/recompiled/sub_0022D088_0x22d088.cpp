#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D088
// Address: 0x22d088 - 0x22d1b8
void sub_0022D088_0x22d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D088_0x22d088");
#endif

    ctx->pc = 0x22d088u;

    // 0x22d088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d08c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d090: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22d094: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22d098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22d09c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22d09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a0: 0x8c501270  lw          $s0, 0x1270($v0)
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
    // 0x22d0a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22d0ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22d0b0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22D0B0u;
    {
        const bool branch_taken_0x22d0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0B0u;
            // 0x22d0b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0b0) {
            ctx->pc = 0x22D110u;
            goto label_22d110;
        }
    }
    ctx->pc = 0x22D0B8u;
    // 0x22d0b8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d0bc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d0c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d0c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0c8: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x22d0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x22d0cc: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x22d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x22d0d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22d0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22d0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22d0d8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D0D8u;
    SET_GPR_U32(ctx, 31, 0x22D0E0u);
    ctx->pc = 0x22D0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0D8u;
            // 0x22d0dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0E0u; }
        if (ctx->pc != 0x22D0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0E0u; }
        if (ctx->pc != 0x22D0E0u) { return; }
    }
    ctx->pc = 0x22D0E0u;
    // 0x22d0e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d0e4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22d0e8: 0x8ca4126c  lw          $a0, 0x126C($a1)
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4716)));
    // 0x22d0ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22d0f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22d0f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22d0f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x22d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x22d0fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d100: 0xaca4126c  sw          $a0, 0x126C($a1)
    ctx->pc = 0x22d100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4716), GPR_U32(ctx, 4));
    // 0x22d104: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22D104u;
    {
        const bool branch_taken_0x22d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D104u;
            // 0x22d108: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d104) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D10Cu;
    // 0x22d10c: 0x0  nop
    ctx->pc = 0x22d10cu;
    // NOP
label_22d110:
    // 0x22d110: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d114: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d118: 0x8c441220  lw          $a0, 0x1220($v0)
    ctx->pc = 0x22d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
    // 0x22d11c: 0x2463b6c0  addiu       $v1, $v1, -0x4940
    ctx->pc = 0x22d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948544));
    // 0x22d120: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x22d124: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22d128: 0xae831210  sw          $v1, 0x1210($s4)
    ctx->pc = 0x22d128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4624), GPR_U32(ctx, 3));
    // 0x22d12c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22D12Cu;
    {
        const bool branch_taken_0x22d12c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D12Cu;
            // 0x22d130: 0xac441220  sw          $a0, 0x1220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d12c) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D134u;
    // 0x22d134: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x22d134u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
label_22d138:
    // 0x22d138: 0x8e821210  lw          $v0, 0x1210($s4)
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4624)));
    // 0x22d13c: 0x8e64120c  lw          $a0, 0x120C($s3)
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4620)));
    // 0x22d140: 0x448023  subu        $s0, $v0, $a0
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22d144: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22d148: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D148u;
    {
        const bool branch_taken_0x22d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D148u;
            // 0x22d14c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d148) {
            ctx->pc = 0x22D170u;
            goto label_22d170;
        }
    }
    ctx->pc = 0x22D150u;
    // 0x22d150: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22d150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d154: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D154u;
    SET_GPR_U32(ctx, 31, 0x22D15Cu);
    ctx->pc = 0x22D158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D154u;
            // 0x22d158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D15Cu; }
        if (ctx->pc != 0x22D15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D15Cu; }
        if (ctx->pc != 0x22D15Cu) { return; }
    }
    ctx->pc = 0x22D15Cu;
    // 0x22d15c: 0x8e62120c  lw          $v0, 0x120C($s3)
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4620)));
    // 0x22d160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d164: 0xae62120c  sw          $v0, 0x120C($s3)
    ctx->pc = 0x22d164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4620), GPR_U32(ctx, 2));
    // 0x22d168: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22D168u;
    {
        const bool branch_taken_0x22d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D168u;
            // 0x22d16c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d168) {
            ctx->pc = 0x22D190u;
            goto label_22d190;
        }
    }
    ctx->pc = 0x22D170u;
label_22d170:
    // 0x22d170: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D170u;
    SET_GPR_U32(ctx, 31, 0x22D178u);
    ctx->pc = 0x22D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D170u;
            // 0x22d174: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D178u; }
        if (ctx->pc != 0x22D178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D178u; }
        if (ctx->pc != 0x22D178u) { return; }
    }
    ctx->pc = 0x22D178u;
    // 0x22d178: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x22d178u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22d17c: 0x8e62120c  lw          $v0, 0x120C($s3)
    ctx->pc = 0x22d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4620)));
    // 0x22d180: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x22d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22d184: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22d188: 0xc08b4e2  jal         func_22D388
    ctx->pc = 0x22D188u;
    SET_GPR_U32(ctx, 31, 0x22D190u);
    ctx->pc = 0x22D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D188u;
            // 0x22d18c: 0xae62120c  sw          $v0, 0x120C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D388u;
    if (runtime->hasFunction(0x22D388u)) {
        auto targetFn = runtime->lookupFunction(0x22D388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D190u; }
        if (ctx->pc != 0x22D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D388_0x22d388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D190u; }
        if (ctx->pc != 0x22D190u) { return; }
    }
    ctx->pc = 0x22D190u;
label_22d190:
    // 0x22d190: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x22D190u;
    {
        const bool branch_taken_0x22d190 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D190u;
            // 0x22d194: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d190) {
            ctx->pc = 0x22D138u;
            runtime->cooperativeGuestYield();
            goto label_22d138;
        }
    }
    ctx->pc = 0x22D198u;
label_22d198:
    // 0x22d198: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22d198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d19c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22d19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d1a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22d1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d1a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22d1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d1a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22d1a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1B0u;
            // 0x22d1b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D110u: goto label_22d110;
            case 0x22D138u: goto label_22d138;
            case 0x22D170u: goto label_22d170;
            case 0x22D190u: goto label_22d190;
            case 0x22D198u: goto label_22d198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D1B8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EFE8
// Address: 0x14efe8 - 0x14f490
void sub_0014EFE8_0x14efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EFE8_0x14efe8");
#endif

    ctx->pc = 0x14efe8u;

    // 0x14efe8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14efec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14eff0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x14eff4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14eff8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14eff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14effc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14f000: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14f004: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x14f008: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x14f00c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x14f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x14f010: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x14f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x14f014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f018: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x14f018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x14f01c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x14f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x14f020: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14f024: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14f024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f028: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14f02c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f038: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14f03c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f040: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x14f040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x14f044: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F044u;
    {
        const bool branch_taken_0x14f044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F044u;
            // 0x14f048: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f044) {
            ctx->pc = 0x14F06Cu;
            goto label_14f06c;
        }
    }
    ctx->pc = 0x14F04Cu;
    // 0x14f04c: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x14f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_14f050:
    // 0x14f050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f054: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x14f054u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x14f058: 0xc053d7c  jal         func_14F5F0
    ctx->pc = 0x14F058u;
    SET_GPR_U32(ctx, 31, 0x14F060u);
    ctx->pc = 0x14F05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F058u;
            // 0x14f05c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F060u; }
        if (ctx->pc != 0x14F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F5F0_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F060u; }
        if (ctx->pc != 0x14F060u) { return; }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f064: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F064u;
    {
        const bool branch_taken_0x14f064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F064u;
            // 0x14f068: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f064) {
            ctx->pc = 0x14F050u;
            runtime->cooperativeGuestYield();
            goto label_14f050;
        }
    }
    ctx->pc = 0x14F06Cu;
label_14f06c:
    // 0x14f06c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f070: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f074: 0x8c441900  lw          $a0, 0x1900($v0)
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6400)));
    // 0x14f078: 0xc04f856  jal         func_13E158
    ctx->pc = 0x14F078u;
    SET_GPR_U32(ctx, 31, 0x14F080u);
    ctx->pc = 0x14F07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F078u;
            // 0x14f07c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F080u; }
        if (ctx->pc != 0x14F080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F080u; }
        if (ctx->pc != 0x14F080u) { return; }
    }
    ctx->pc = 0x14F080u;
    // 0x14f080: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14f080u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14f084: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f088: 0x8d223828  lw          $v0, 0x3828($t1)
    ctx->pc = 0x14f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14376)));
    // 0x14f08c: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14F08Cu;
    {
        const bool branch_taken_0x14f08c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F08Cu;
            // 0x14f090: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f08c) {
            ctx->pc = 0x14F11Cu;
            goto label_14f11c;
        }
    }
    ctx->pc = 0x14F094u;
    // 0x14f094: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_14f098:
    // 0x14f098: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f09c: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x14f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
    // 0x14f0a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f0a4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f0a8: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F0A8u;
    {
        const bool branch_taken_0x14f0a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x14F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0A8u;
            // 0x14f0ac: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0a8) {
            ctx->pc = 0x14F108u;
            goto label_14f108;
        }
    }
    ctx->pc = 0x14F0B0u;
    // 0x14f0b0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14f0b4: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x14f0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f0b8: 0x24c23128  addiu       $v0, $a2, 0x3128
    ctx->pc = 0x14f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12584));
    // 0x14f0bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x14f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x14f0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f0c4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14f0c8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x14f0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f0cc: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x14f0ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f0d0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F0D0u;
    {
        const bool branch_taken_0x14f0d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0D0u;
            // 0x14f0d4: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0d0) {
            ctx->pc = 0x14F0ECu;
            goto label_14f0ec;
        }
    }
    ctx->pc = 0x14F0D8u;
    // 0x14f0d8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x14f0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f0dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F0DCu;
    {
        const bool branch_taken_0x14f0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0DCu;
            // 0x14f0e0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0dc) {
            ctx->pc = 0x14F0F0u;
            goto label_14f0f0;
        }
    }
    ctx->pc = 0x14F0E4u;
    // 0x14f0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14F0E4u;
    {
        const bool branch_taken_0x14f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E4u;
            // 0x14f0e8: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0e4) {
            ctx->pc = 0x14F108u;
            goto label_14f108;
        }
    }
    ctx->pc = 0x14F0ECu;
label_14f0ec:
    // 0x14f0ec: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_14f0f0:
    // 0x14f0f0: 0x24c33128  addiu       $v1, $a2, 0x3128
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12584));
    // 0x14f0f4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x14f0f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14f0f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f0fc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14f100: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x14f100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14f104: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x14f104u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_14f108:
    // 0x14f108: 0x8d223828  lw          $v0, 0x3828($t1)
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14376)));
    // 0x14f10c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14f10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14f110: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14f110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f114: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14F114u;
    {
        const bool branch_taken_0x14f114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F114u;
            // 0x14f118: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f114) {
            ctx->pc = 0x14F098u;
            runtime->cooperativeGuestYield();
            goto label_14f098;
        }
    }
    ctx->pc = 0x14F11Cu;
label_14f11c:
    // 0x14f11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f120: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14f120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f124: 0x0  nop
    ctx->pc = 0x14f124u;
    // NOP
label_14f128:
    // 0x14f128: 0x101143  sra         $v0, $s0, 5
    ctx->pc = 0x14f128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
    // 0x14f12c: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x14f130: 0x27c31910  addiu       $v1, $fp, 0x1910
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6416));
    // 0x14f134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f13c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x14f13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x14f140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14f144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14f148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f14c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x14f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x14f150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f154: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x14f154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14f158: 0x2a024000  slti        $v0, $s0, 0x4000
    ctx->pc = 0x14f158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14f15c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14F15Cu;
    {
        const bool branch_taken_0x14f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F15Cu;
            // 0x14f160: 0x83300b  movn        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f15c) {
            ctx->pc = 0x14F128u;
            runtime->cooperativeGuestYield();
            goto label_14f128;
        }
    }
    ctx->pc = 0x14F164u;
    // 0x14f164: 0x1142023  subu        $a0, $t0, $s4
    ctx->pc = 0x14f164u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x14f168: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x14f168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f16c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x14f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14f170: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x14f170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f174: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x14f174u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14f178: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x14f178u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x14f17c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x14f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x14f180: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14f180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14f184: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x14f184u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x14f188: 0x82302b  sltu        $a2, $a0, $v0
    ctx->pc = 0x14f188u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f18c: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x14f18cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x14f190: 0x62202b  sltu        $a0, $v1, $v0
    ctx->pc = 0x14f190u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f194: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x14f194u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x14f198: 0xa3a823  subu        $s5, $a1, $v1
    ctx->pc = 0x14f198u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14f19c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x14f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14f1a0: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x14f1a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f1a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f1a8: 0x8c423828  lw          $v0, 0x3828($v0)
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14376)));
    // 0x14f1ac: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x14f1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f1b0: 0x6000094  bltz        $s0, . + 4 + (0x94 << 2)
    ctx->pc = 0x14F1B0u;
    {
        const bool branch_taken_0x14f1b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x14F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1B0u;
            // 0x14f1b4: 0x285a80a  movz        $s5, $s4, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1b0) {
            ctx->pc = 0x14F404u;
            goto label_14f404;
        }
    }
    ctx->pc = 0x14F1B8u;
    // 0x14f1b8: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x14f1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f1bc: 0x0  nop
    ctx->pc = 0x14f1bcu;
    // NOP
label_14f1c0:
    // 0x14f1c0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x14f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14f1c4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x14f1c8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x14f1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14f1cc: 0x26e23128  addiu       $v0, $s7, 0x3128
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 12584));
    // 0x14f1d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14f1d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f1d8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x14f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14f1dc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x14f1dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14f1e0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F1E0u;
    {
        const bool branch_taken_0x14f1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1E0u;
            // 0x14f1e4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1e0) {
            ctx->pc = 0x14F204u;
            goto label_14f204;
        }
    }
    ctx->pc = 0x14F1E8u;
    // 0x14f1e8: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x14f1e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x14f1ec: 0x26c21700  addiu       $v0, $s6, 0x1700
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 5888));
    // 0x14f1f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f1f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f1f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F1FCu;
    {
        const bool branch_taken_0x14f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1FCu;
            // 0x14f200: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1fc) {
            ctx->pc = 0x14F214u;
            goto label_14f214;
        }
    }
    ctx->pc = 0x14F204u;
label_14f204:
    // 0x14f204: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x14f208: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f20c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x14F20Cu;
    {
        const bool branch_taken_0x14f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F20Cu;
            // 0x14f210: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f20c) {
            ctx->pc = 0x14F3F8u;
            goto label_14f3f8;
        }
    }
    ctx->pc = 0x14F214u;
label_14f214:
    // 0x14f214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f218: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F218u;
    {
        const bool branch_taken_0x14f218 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F218u;
            // 0x14f21c: 0x641018  mult        $v0, $v1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f218) {
            ctx->pc = 0x14F27Cu;
            goto label_14f27c;
        }
    }
    ctx->pc = 0x14F220u;
    // 0x14f220: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F220u;
    {
        const bool branch_taken_0x14f220 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F220u;
            // 0x14f224: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f220) {
            ctx->pc = 0x14F238u;
            goto label_14f238;
        }
    }
    ctx->pc = 0x14F228u;
    // 0x14f228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f22c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14f22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14f230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F24Cu;
            goto label_14f24c;
        }
    }
    ctx->pc = 0x14F238u;
label_14f238:
    // 0x14f238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f23c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14f244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14f248: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14f248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14f24c:
    // 0x14f24c: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F24Cu;
    {
        const bool branch_taken_0x14f24c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x14F250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F24Cu;
            // 0x14f250: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f24c) {
            ctx->pc = 0x14F264u;
            goto label_14f264;
        }
    }
    ctx->pc = 0x14F254u;
    // 0x14f254: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14f254u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f258: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f25c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F278u;
            goto label_14f278;
        }
    }
    ctx->pc = 0x14F264u;
label_14f264:
    // 0x14f264: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x14f264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x14f268: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f274: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14f274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14f278:
    // 0x14f278: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14f278u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_14f27c:
    // 0x14f27c: 0x26a2003f  addiu       $v0, $s5, 0x3F
    ctx->pc = 0x14f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 63));
    // 0x14f280: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F280u;
    {
        const bool branch_taken_0x14f280 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14f280) {
            ctx->pc = 0x14F284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F280u;
            // 0x14f284: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F298u;
            goto label_14f298;
        }
    }
    ctx->pc = 0x14F288u;
    // 0x14f288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f28c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x14f28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14F290u;
    {
        const bool branch_taken_0x14f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F290u;
            // 0x14f294: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f290) {
            ctx->pc = 0x14F2B0u;
            goto label_14f2b0;
        }
    }
    ctx->pc = 0x14F298u;
label_14f298:
    // 0x14f298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f2a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f2a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x14f2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f2a8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x14f2a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x14f2ac: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x14f2acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_14f2b0:
    // 0x14f2b0: 0xc0a14de  jal         func_285378
    ctx->pc = 0x14F2B0u;
    SET_GPR_U32(ctx, 31, 0x14F2B8u);
    ctx->pc = 0x14F2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2B0u;
            // 0x14f2b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F2B8u; }
        if (ctx->pc != 0x14F2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F2B8u; }
        if (ctx->pc != 0x14F2B8u) { return; }
    }
    ctx->pc = 0x14F2B8u;
    // 0x14f2b8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x14f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14f2bc: 0x26e43128  addiu       $a0, $s7, 0x3128
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12584));
    // 0x14f2c0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x14f2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f2c4: 0x26c51700  addiu       $a1, $s6, 0x1700
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5888));
    // 0x14f2c8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x14f2cc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x14f2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14f2d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14f2d4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14f2d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14f2d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14f2dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F2DCu;
    {
        const bool branch_taken_0x14f2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2dc) {
            ctx->pc = 0x14F2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2DCu;
            // 0x14f2e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F2E4u;
            goto label_14f2e4;
        }
    }
    ctx->pc = 0x14F2E4u;
label_14f2e4:
    // 0x14f2e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f2e8: 0x8cc416fc  lw          $a0, 0x16FC($a2)
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5884)));
    // 0x14f2ec: 0x1012  mflo        $v0
    ctx->pc = 0x14f2ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14f2f0: 0x42980b  movn        $s3, $v0, $v0
    ctx->pc = 0x14f2f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x14f2f4: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x14f2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14f2f8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x14F2F8u;
    SET_GPR_U32(ctx, 31, 0x14F300u);
    ctx->pc = 0x14F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2F8u;
            // 0x14f2fc: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F300u; }
        if (ctx->pc != 0x14F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F300u; }
        if (ctx->pc != 0x14F300u) { return; }
    }
    ctx->pc = 0x14F300u;
    // 0x14f300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14f300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f308: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14f308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f30c: 0x0  nop
    ctx->pc = 0x14f30cu;
    // NOP
label_14f310:
    // 0x14f310: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14f310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14f314: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f318: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14f318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f31c: 0x0  nop
    ctx->pc = 0x14f31cu;
    // NOP
    // 0x14f320: 0x0  nop
    ctx->pc = 0x14f320u;
    // NOP
    // 0x14f324: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F324u;
    {
        const bool branch_taken_0x14f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F324u;
            // 0x14f328: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f324) {
            ctx->pc = 0x14F310u;
            runtime->cooperativeGuestYield();
            goto label_14f310;
        }
    }
    ctx->pc = 0x14F32Cu;
    // 0x14f32c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f330: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14f334: 0x0  nop
    ctx->pc = 0x14f334u;
    // NOP
label_14f338:
    // 0x14f338: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14f338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14f33c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f340: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14f340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f344: 0x0  nop
    ctx->pc = 0x14f344u;
    // NOP
    // 0x14f348: 0x0  nop
    ctx->pc = 0x14f348u;
    // NOP
    // 0x14f34c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F34Cu;
            // 0x14f350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F338u;
            runtime->cooperativeGuestYield();
            goto label_14f338;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f358: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14f35c: 0x0  nop
    ctx->pc = 0x14f35cu;
    // NOP
label_14f360:
    // 0x14f360: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14f360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14f364: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f368: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14f368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f36c: 0x0  nop
    ctx->pc = 0x14f36cu;
    // NOP
    // 0x14f370: 0x0  nop
    ctx->pc = 0x14f370u;
    // NOP
    // 0x14f374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F374u;
    {
        const bool branch_taken_0x14f374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F374u;
            // 0x14f378: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f374) {
            ctx->pc = 0x14F360u;
            runtime->cooperativeGuestYield();
            goto label_14f360;
        }
    }
    ctx->pc = 0x14F37Cu;
    // 0x14f37c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f380: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14f384: 0x0  nop
    ctx->pc = 0x14f384u;
    // NOP
label_14f388:
    // 0x14f388: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14f388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14f38c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f390: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14f390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f394: 0x0  nop
    ctx->pc = 0x14f394u;
    // NOP
    // 0x14f398: 0x0  nop
    ctx->pc = 0x14f398u;
    // NOP
    // 0x14f39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F39Cu;
    {
        const bool branch_taken_0x14f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F39Cu;
            // 0x14f3a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f39c) {
            ctx->pc = 0x14F388u;
            runtime->cooperativeGuestYield();
            goto label_14f388;
        }
    }
    ctx->pc = 0x14F3A4u;
    // 0x14f3a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x14f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14f3a8: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x14f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x14f3ac: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x14f3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f3b0: 0x26c21700  addiu       $v0, $s6, 0x1700
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 5888));
    // 0x14f3b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f3b8: 0x26e73128  addiu       $a3, $s7, 0x3128
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12584));
    // 0x14f3bc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f3c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14f3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3c4: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x14f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x14f3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3cc: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x14f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14f3d0: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x14f3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14f3d4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14f3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f3dc: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14f3e0: 0xc053f36  jal         func_14FCD8
    ctx->pc = 0x14F3E0u;
    SET_GPR_U32(ctx, 31, 0x14F3E8u);
    ctx->pc = 0x14F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3E0u;
            // 0x14f3e4: 0x8d08000c  lw          $t0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FCD8u;
    if (runtime->hasFunction(0x14FCD8u)) {
        auto targetFn = runtime->lookupFunction(0x14FCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3E8u; }
        if (ctx->pc != 0x14F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014FCD8_0x14fcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3E8u; }
        if (ctx->pc != 0x14F3E8u) { return; }
    }
    ctx->pc = 0x14F3E8u;
    // 0x14f3e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f3ec: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x14f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x14f3f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f3f4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x14f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_14f3f8:
    // 0x14f3f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x14f3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14f3fc: 0x601ff70  bgez        $s0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x14F3FCu;
    {
        const bool branch_taken_0x14f3fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3FCu;
            // 0x14f400: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3fc) {
            ctx->pc = 0x14F1C0u;
            runtime->cooperativeGuestYield();
            goto label_14f1c0;
        }
    }
    ctx->pc = 0x14F404u;
label_14f404:
    // 0x14f404: 0xc04f860  jal         func_13E180
    ctx->pc = 0x14F404u;
    SET_GPR_U32(ctx, 31, 0x14F40Cu);
    ctx->pc = 0x14F408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F404u;
            // 0x14f408: 0x241001ff  addiu       $s0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F40Cu; }
        if (ctx->pc != 0x14F40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F40Cu; }
        if (ctx->pc != 0x14F40Cu) { return; }
    }
    ctx->pc = 0x14F40Cu;
    // 0x14f40c: 0x27c21910  addiu       $v0, $fp, 0x1910
    ctx->pc = 0x14f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6416));
    // 0x14f410: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14f414: 0x8c4207fc  lw          $v0, 0x7FC($v0)
    ctx->pc = 0x14f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2044)));
    // 0x14f418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F418u;
    {
        const bool branch_taken_0x14f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F418u;
            // 0x14f41c: 0xac80190c  sw          $zero, 0x190C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f418) {
            ctx->pc = 0x14F428u;
            goto label_14f428;
        }
    }
    ctx->pc = 0x14F420u;
    // 0x14f420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14F420u;
    {
        const bool branch_taken_0x14f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F420u;
            // 0x14f424: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f420) {
            ctx->pc = 0x14F44Cu;
            goto label_14f44c;
        }
    }
    ctx->pc = 0x14F428u;
label_14f428:
    // 0x14f428: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x14f428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_14f42c:
    // 0x14f42c: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F42Cu;
    {
        const bool branch_taken_0x14f42c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x14F430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F42Cu;
            // 0x14f430: 0x27c21910  addiu       $v0, $fp, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f42c) {
            ctx->pc = 0x14F450u;
            goto label_14f450;
        }
    }
    ctx->pc = 0x14F434u;
    // 0x14f434: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14f434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f43c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f440: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F440u;
            // 0x14f444: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F42Cu;
            runtime->cooperativeGuestYield();
            goto label_14f42c;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14f44c:
    // 0x14f44c: 0xac82190c  sw          $v0, 0x190C($a0)
    ctx->pc = 0x14f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6412), GPR_U32(ctx, 2));
label_14f450:
    // 0x14f450: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f454: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14f458: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14f458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f45c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14f45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f460: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14f460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f464: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14f464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f468: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14f468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f46c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x14f46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f470: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14f470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f474: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x14f474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f478: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x14f478u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f480: 0xac401904  sw          $zero, 0x1904($v0)
    ctx->pc = 0x14f480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6404), GPR_U32(ctx, 0));
    // 0x14f484: 0xac601908  sw          $zero, 0x1908($v1)
    ctx->pc = 0x14f484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 0));
    // 0x14f488: 0x3e00008  jr          $ra
    ctx->pc = 0x14F488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F488u;
            // 0x14f48c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F050u: goto label_14f050;
            case 0x14F06Cu: goto label_14f06c;
            case 0x14F098u: goto label_14f098;
            case 0x14F0ECu: goto label_14f0ec;
            case 0x14F0F0u: goto label_14f0f0;
            case 0x14F108u: goto label_14f108;
            case 0x14F11Cu: goto label_14f11c;
            case 0x14F128u: goto label_14f128;
            case 0x14F1C0u: goto label_14f1c0;
            case 0x14F204u: goto label_14f204;
            case 0x14F214u: goto label_14f214;
            case 0x14F238u: goto label_14f238;
            case 0x14F24Cu: goto label_14f24c;
            case 0x14F264u: goto label_14f264;
            case 0x14F278u: goto label_14f278;
            case 0x14F27Cu: goto label_14f27c;
            case 0x14F298u: goto label_14f298;
            case 0x14F2B0u: goto label_14f2b0;
            case 0x14F2E4u: goto label_14f2e4;
            case 0x14F310u: goto label_14f310;
            case 0x14F338u: goto label_14f338;
            case 0x14F360u: goto label_14f360;
            case 0x14F388u: goto label_14f388;
            case 0x14F3F8u: goto label_14f3f8;
            case 0x14F404u: goto label_14f404;
            case 0x14F428u: goto label_14f428;
            case 0x14F42Cu: goto label_14f42c;
            case 0x14F44Cu: goto label_14f44c;
            case 0x14F450u: goto label_14f450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F490u;
}

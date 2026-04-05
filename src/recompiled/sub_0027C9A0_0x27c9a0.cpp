#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C9A0
// Address: 0x27c9a0 - 0x27cad0
void sub_0027C9A0_0x27c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C9A0_0x27c9a0");
#endif

    ctx->pc = 0x27c9a0u;

    // 0x27c9a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27c9a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c9a8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27c9ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27c9b0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27c9b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9b4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27c9b8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27c9b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27c9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27c9c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27c9c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c9c8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c9d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27c9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d4: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c9d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27c9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9dc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27c9e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c9e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C9E4u;
    {
        const bool branch_taken_0x27c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9E4u;
            // 0x27c9e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9e4) {
            ctx->pc = 0x27C9F8u;
            goto label_27c9f8;
        }
    }
    ctx->pc = 0x27C9ECu;
    // 0x27c9ec: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c9f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27C9F0u;
    {
        const bool branch_taken_0x27c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9F0u;
            // 0x27c9f4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9f0) {
            ctx->pc = 0x27CAA4u;
            goto label_27caa4;
        }
    }
    ctx->pc = 0x27C9F8u;
label_27c9f8:
    // 0x27c9f8: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C9F8u;
    SET_GPR_U32(ctx, 31, 0x27CA00u);
    ctx->pc = 0x27C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9F8u;
            // 0x27c9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA00u; }
        if (ctx->pc != 0x27CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA00u; }
        if (ctx->pc != 0x27CA00u) { return; }
    }
    ctx->pc = 0x27CA00u;
    // 0x27ca00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ca00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca04: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CA04u;
    {
        const bool branch_taken_0x27ca04 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27ca04) {
            ctx->pc = 0x27CA18u;
            goto label_27ca18;
        }
    }
    ctx->pc = 0x27CA0Cu;
    // 0x27ca0c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ca10: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27CA10u;
    {
        const bool branch_taken_0x27ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA10u;
            // 0x27ca14: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca10) {
            ctx->pc = 0x27CAA4u;
            goto label_27caa4;
        }
    }
    ctx->pc = 0x27CA18u;
label_27ca18:
    // 0x27ca18: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27CA18u;
    SET_GPR_U32(ctx, 31, 0x27CA20u);
    ctx->pc = 0x27CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA18u;
            // 0x27ca1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA20u; }
        if (ctx->pc != 0x27CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA20u; }
        if (ctx->pc != 0x27CA20u) { return; }
    }
    ctx->pc = 0x27CA20u;
    // 0x27ca20: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27ca20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27ca24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CA24u;
    {
        const bool branch_taken_0x27ca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA24u;
            // 0x27ca28: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca24) {
            ctx->pc = 0x27CA38u;
            goto label_27ca38;
        }
    }
    ctx->pc = 0x27CA2Cu;
    // 0x27ca2c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ca30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27CA30u;
    {
        const bool branch_taken_0x27ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA30u;
            // 0x27ca34: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca30) {
            ctx->pc = 0x27CAA4u;
            goto label_27caa4;
        }
    }
    ctx->pc = 0x27CA38u;
label_27ca38:
    // 0x27ca38: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27CA38u;
    SET_GPR_U32(ctx, 31, 0x27CA40u);
    ctx->pc = 0x27CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA38u;
            // 0x27ca3c: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA40u; }
        if (ctx->pc != 0x27CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA40u; }
        if (ctx->pc != 0x27CA40u) { return; }
    }
    ctx->pc = 0x27CA40u;
    // 0x27ca40: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27ca44: 0x24700380  addiu       $s0, $v1, 0x380
    ctx->pc = 0x27ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x27ca48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27ca4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CA4Cu;
    {
        const bool branch_taken_0x27ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca4c) {
            ctx->pc = 0x27CA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA4Cu;
            // 0x27ca50: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27CA68u;
            goto label_27ca68;
        }
    }
    ctx->pc = 0x27CA54u;
    // 0x27ca54: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27CA54u;
    SET_GPR_U32(ctx, 31, 0x27CA5Cu);
    ctx->pc = 0x27CA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA54u;
            // 0x27ca58: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA5Cu; }
        if (ctx->pc != 0x27CA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA5Cu; }
        if (ctx->pc != 0x27CA5Cu) { return; }
    }
    ctx->pc = 0x27CA5Cu;
    // 0x27ca5c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ca60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27CA60u;
    {
        const bool branch_taken_0x27ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA60u;
            // 0x27ca64: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca60) {
            ctx->pc = 0x27CAA4u;
            goto label_27caa4;
        }
    }
    ctx->pc = 0x27CA68u;
label_27ca68:
    // 0x27ca68: 0xac710380  sw          $s1, 0x380($v1)
    ctx->pc = 0x27ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 17));
    // 0x27ca6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x27ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x27ca70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27ca70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca74: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27CA74u;
    SET_GPR_U32(ctx, 31, 0x27CA7Cu);
    ctx->pc = 0x27CA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA74u;
            // 0x27ca78: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA7Cu; }
        if (ctx->pc != 0x27CA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA7Cu; }
        if (ctx->pc != 0x27CA7Cu) { return; }
    }
    ctx->pc = 0x27CA7Cu;
    // 0x27ca7c: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x27ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x27ca80: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27ca84: 0x8c6408a4  lw          $a0, 0x8A4($v1)
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
    // 0x27ca88: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x27ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x27ca8c: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x27ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x27ca90: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27CA90u;
    SET_GPR_U32(ctx, 31, 0x27CA98u);
    ctx->pc = 0x27CA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA90u;
            // 0x27ca94: 0xae170014  sw          $s7, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA98u; }
        if (ctx->pc != 0x27CA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA98u; }
        if (ctx->pc != 0x27CA98u) { return; }
    }
    ctx->pc = 0x27CA98u;
    // 0x27ca98: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27CA98u;
    SET_GPR_U32(ctx, 31, 0x27CAA0u);
    ctx->pc = 0x27CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA98u;
            // 0x27ca9c: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAA0u; }
        if (ctx->pc != 0x27CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAA0u; }
        if (ctx->pc != 0x27CAA0u) { return; }
    }
    ctx->pc = 0x27CAA0u;
    // 0x27caa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27caa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27caa4:
    // 0x27caa4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27caa8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x27caa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27caac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27caacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27cab0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27cab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27cab4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27cab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cab8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27cab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cabc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27cabcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cac0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27cac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27cac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cac8: 0x3e00008  jr          $ra
    ctx->pc = 0x27CAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAC8u;
            // 0x27cacc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C9F8u: goto label_27c9f8;
            case 0x27CA18u: goto label_27ca18;
            case 0x27CA38u: goto label_27ca38;
            case 0x27CA68u: goto label_27ca68;
            case 0x27CAA4u: goto label_27caa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27CAD0u;
}

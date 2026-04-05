#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A560
// Address: 0x14a560 - 0x14a8a0
void sub_0014A560_0x14a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A560_0x14a560");
#endif

    ctx->pc = 0x14a560u;

    // 0x14a560: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a564: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x14a568: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14a56c: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x14a570: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14a574: 0x26c2c030  addiu       $v0, $s6, -0x3FD0
    ctx->pc = 0x14a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950960));
    // 0x14a578: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14a57c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14a580: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a584: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14a588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a58c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a590: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14A590u;
    {
        const bool branch_taken_0x14a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A590u;
            // 0x14a594: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a590) {
            ctx->pc = 0x14A620u;
            goto label_14a620;
        }
    }
    ctx->pc = 0x14A598u;
    // 0x14a598: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14a59c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14a59cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5a0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x14A5A0u;
    SET_GPR_U32(ctx, 31, 0x14A5A8u);
    ctx->pc = 0x14A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5A0u;
            // 0x14a5a4: 0x8c44f198  lw          $a0, -0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5A8u; }
        if (ctx->pc != 0x14A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5A8u; }
        if (ctx->pc != 0x14A5A8u) { return; }
    }
    ctx->pc = 0x14A5A8u;
label_14a5a8:
    // 0x14a5a8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x14a5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14a5ac: 0x26d1c030  addiu       $s1, $s6, -0x3FD0
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950960));
    // 0x14a5b0: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x14a5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14a5b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14a5b8: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14a5bc: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14a5c0: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a5c4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14A5C4u;
    SET_GPR_U32(ctx, 31, 0x14A5CCu);
    ctx->pc = 0x14A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5C4u;
            // 0x14a5c8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5CCu; }
        if (ctx->pc != 0x14A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5CCu; }
        if (ctx->pc != 0x14A5CCu) { return; }
    }
    ctx->pc = 0x14A5CCu;
    // 0x14a5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14a5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14a5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5dc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x14A5DCu;
    SET_GPR_U32(ctx, 31, 0x14A5E4u);
    ctx->pc = 0x14A5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5DCu;
            // 0x14a5e0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E4u; }
        if (ctx->pc != 0x14A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E4u; }
        if (ctx->pc != 0x14A5E4u) { return; }
    }
    ctx->pc = 0x14A5E4u;
    // 0x14a5e4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14a5e8: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x14a5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14a5ec: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14A5ECu;
    {
        const bool branch_taken_0x14a5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5ECu;
            // 0x14a5f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5ec) {
            ctx->pc = 0x14A5A8u;
            runtime->cooperativeGuestYield();
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A5F4u;
    // 0x14a5f4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14A5F4u;
    SET_GPR_U32(ctx, 31, 0x14A5FCu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5FCu; }
        if (ctx->pc != 0x14A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5FCu; }
        if (ctx->pc != 0x14A5FCu) { return; }
    }
    ctx->pc = 0x14A5FCu;
    // 0x14a5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a600: 0x24050594  addiu       $a1, $zero, 0x594
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    // 0x14a604: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a608: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14a608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a60c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x14A60Cu;
    SET_GPR_U32(ctx, 31, 0x14A614u);
    ctx->pc = 0x14A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A60Cu;
            // 0x14a610: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A614u; }
        if (ctx->pc != 0x14A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A614u; }
        if (ctx->pc != 0x14A614u) { return; }
    }
    ctx->pc = 0x14A614u;
    // 0x14a614: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14a618: 0xc04f860  jal         func_13E180
    ctx->pc = 0x14A618u;
    SET_GPR_U32(ctx, 31, 0x14A620u);
    ctx->pc = 0x14A61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A618u;
            // 0x14a61c: 0xac62c06c  sw          $v0, -0x3F94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A620u; }
        if (ctx->pc != 0x14A620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A620u; }
        if (ctx->pc != 0x14A620u) { return; }
    }
    ctx->pc = 0x14A620u;
label_14a620:
    // 0x14a620: 0x8eb300e0  lw          $s3, 0xE0($s5)
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a624: 0x8e620cd4  lw          $v0, 0xCD4($s3)
    ctx->pc = 0x14a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3284)));
    // 0x14a628: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x14A628u;
    {
        const bool branch_taken_0x14a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a628) {
            ctx->pc = 0x14A62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A628u;
            // 0x14a62c: 0x8ea300e0  lw          $v1, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A630u;
    // 0x14a630: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14A630u;
    SET_GPR_U32(ctx, 31, 0x14A638u);
    ctx->pc = 0x14A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A630u;
            // 0x14a634: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A638u; }
        if (ctx->pc != 0x14A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A638u; }
        if (ctx->pc != 0x14A638u) { return; }
    }
    ctx->pc = 0x14A638u;
    // 0x14a638: 0x8eb000e0  lw          $s0, 0xE0($s5)
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a63c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a640: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14a644: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x14a644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x14a648: 0x8e030cd0  lw          $v1, 0xCD0($s0)
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3280)));
    // 0x14a64c: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x14a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x14a650: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x14a654: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x14a654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x14a658: 0xc050fda  jal         func_143F68
    ctx->pc = 0x14A658u;
    SET_GPR_U32(ctx, 31, 0x14A660u);
    ctx->pc = 0x14A65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A658u;
            // 0x14a65c: 0x8c710044  lw          $s1, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (runtime->hasFunction(0x143F68u)) {
        auto targetFn = runtime->lookupFunction(0x143F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A660u; }
        if (ctx->pc != 0x14A660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143f68_0x143f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A660u; }
        if (ctx->pc != 0x14A660u) { return; }
    }
    ctx->pc = 0x14A660u;
    // 0x14a660: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x14a660u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14a664: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14a664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14a668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a670: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x14a670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x14a674: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14a678: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x14a678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x14a67c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x14a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x14a680: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x14a680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x14a684: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x14a684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x14a688: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x14a688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x14a68c: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14A68Cu;
    SET_GPR_U32(ctx, 31, 0x14A694u);
    ctx->pc = 0x14A690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A68Cu;
            // 0x14a690: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A694u; }
        if (ctx->pc != 0x14A694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A694u; }
        if (ctx->pc != 0x14A694u) { return; }
    }
    ctx->pc = 0x14A694u;
    // 0x14a694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14a694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a698: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14a69c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x14a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x14a6a0: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x14a6a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14a6a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A6A4u;
    {
        const bool branch_taken_0x14a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6A4u;
            // 0x14a6a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6a4) {
            ctx->pc = 0x14A6D4u;
            goto label_14a6d4;
        }
    }
    ctx->pc = 0x14A6ACu;
    // 0x14a6ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14a6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14a6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b4: 0x0  nop
    ctx->pc = 0x14a6b4u;
    // NOP
label_14a6b8:
    // 0x14a6b8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x14a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14a6bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14a6c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a6c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14a6c8: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x14a6c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14a6cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14A6CCu;
    {
        const bool branch_taken_0x14a6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6CCu;
            // 0x14a6d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6cc) {
            ctx->pc = 0x14A6B8u;
            runtime->cooperativeGuestYield();
            goto label_14a6b8;
        }
    }
    ctx->pc = 0x14A6D4u;
label_14a6d4:
    // 0x14a6d4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x14a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x14a6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a6dc: 0x3c02ff0f  lui         $v0, 0xFF0F
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65295 << 16));
    // 0x14a6e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14a6e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14a6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14a6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a6ec: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x14a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x14a6f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a6f4: 0xae720cd4  sw          $s2, 0xCD4($s3)
    ctx->pc = 0x14a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3284), GPR_U32(ctx, 18));
    // 0x14a6f8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x14a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x14a6fc: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x14a6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x14a700: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x14a700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x14a704: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x14a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x14a708: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x14a708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x14a70c: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x14a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x14a710: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x14a710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x14a714: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x14a714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x14a718: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x14a718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x14a71c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x14a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x14a720: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x14a720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x14a724: 0x8ea300e0  lw          $v1, 0xE0($s5)
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_14a728:
    // 0x14a728: 0x8c640d0c  lw          $a0, 0xD0C($v1)
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3340)));
    // 0x14a72c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A72Cu;
    {
        const bool branch_taken_0x14a72c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A72Cu;
            // 0x14a730: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a72c) {
            ctx->pc = 0x14A744u;
            goto label_14a744;
        }
    }
    ctx->pc = 0x14A734u;
    // 0x14a734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a738: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x14a73c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14A73Cu;
    {
        const bool branch_taken_0x14a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A73Cu;
            // 0x14a740: 0xac620d0c  sw          $v0, 0xD0C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a73c) {
            ctx->pc = 0x14A758u;
            goto label_14a758;
        }
    }
    ctx->pc = 0x14A744u;
label_14a744:
    // 0x14a744: 0x8c630d08  lw          $v1, 0xD08($v1)
    ctx->pc = 0x14a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3336)));
    // 0x14a748: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x14a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x14a74c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x14a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14a750: 0x10640042  beq         $v1, $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x14A750u;
    {
        const bool branch_taken_0x14a750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A750u;
            // 0x14a754: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a750) {
            ctx->pc = 0x14A85Cu;
            goto label_14a85c;
        }
    }
    ctx->pc = 0x14A758u;
label_14a758:
    // 0x14a758: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14a75c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14a75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14a760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a764: 0xc441c650  lwc1        $f1, -0x39B0($v0)
    ctx->pc = 0x14a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a768: 0x8eb100e0  lw          $s1, 0xE0($s5)
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a76c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14a76cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x14a770: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14a774: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a778: 0x8e220cd0  lw          $v0, 0xCD0($s1)
    ctx->pc = 0x14a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
    // 0x14a77c: 0xae240d08  sw          $a0, 0xD08($s1)
    ctx->pc = 0x14a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 4));
    // 0x14a780: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x14a780u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x14a784: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14a784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14a788: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a78c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x14a78cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x14a790: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x14A790u;
    SET_GPR_U32(ctx, 31, 0x14A798u);
    ctx->pc = 0x14A794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A790u;
            // 0x14a794: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A798u; }
        if (ctx->pc != 0x14A798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A798u; }
        if (ctx->pc != 0x14A798u) { return; }
    }
    ctx->pc = 0x14A798u;
    // 0x14a798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a79c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x14a79cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14a7a0: 0xc0a0de4  jal         func_283790
    ctx->pc = 0x14A7A0u;
    SET_GPR_U32(ctx, 31, 0x14A7A8u);
    ctx->pc = 0x14A7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7A0u;
            // 0x14a7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283790u;
    if (runtime->hasFunction(0x283790u)) {
        auto targetFn = runtime->lookupFunction(0x283790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7A8u; }
        if (ctx->pc != 0x14A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283790_0x283e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7A8u; }
        if (ctx->pc != 0x14A7A8u) { return; }
    }
    ctx->pc = 0x14A7A8u;
    // 0x14a7a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14a7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14a7ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14a7acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14a7b0: 0x8e220d04  lw          $v0, 0xD04($s1)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3332)));
    // 0x14a7b4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A7B4u;
    {
        const bool branch_taken_0x14a7b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7B4u;
            // 0x14a7b8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7b4) {
            ctx->pc = 0x14A7C4u;
            goto label_14a7c4;
        }
    }
    ctx->pc = 0x14A7BCu;
    // 0x14a7bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7BCu;
    {
        const bool branch_taken_0x14a7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7BCu;
            // 0x14a7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7bc) {
            ctx->pc = 0x14A7D0u;
            goto label_14a7d0;
        }
    }
    ctx->pc = 0x14A7C4u;
label_14a7c4:
    // 0x14a7c4: 0xae230d04  sw          $v1, 0xD04($s1)
    ctx->pc = 0x14a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3332), GPR_U32(ctx, 3));
    // 0x14a7c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A7C8u;
    {
        const bool branch_taken_0x14a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7C8u;
            // 0x14a7cc: 0xae200cfc  sw          $zero, 0xCFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7c8) {
            ctx->pc = 0x14A7D4u;
            goto label_14a7d4;
        }
    }
    ctx->pc = 0x14A7D0u;
label_14a7d0:
    // 0x14a7d0: 0xae220cfc  sw          $v0, 0xCFC($s1)
    ctx->pc = 0x14a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3324), GPR_U32(ctx, 2));
label_14a7d4:
    // 0x14a7d4: 0x8ea400e0  lw          $a0, 0xE0($s5)
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a7d8: 0xc0511e4  jal         func_144790
    ctx->pc = 0x14A7D8u;
    SET_GPR_U32(ctx, 31, 0x14A7E0u);
    ctx->pc = 0x14A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7D8u;
            // 0x14a7dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144790u;
    if (runtime->hasFunction(0x144790u)) {
        auto targetFn = runtime->lookupFunction(0x144790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E0u; }
        if (ctx->pc != 0x14A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144790_0x144790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E0u; }
        if (ctx->pc != 0x14A7E0u) { return; }
    }
    ctx->pc = 0x14A7E0u;
    // 0x14a7e0: 0xc05270e  jal         func_149C38
    ctx->pc = 0x14A7E0u;
    SET_GPR_U32(ctx, 31, 0x14A7E8u);
    ctx->pc = 0x14A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7E0u;
            // 0x14a7e4: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149C38u;
    if (runtime->hasFunction(0x149C38u)) {
        auto targetFn = runtime->lookupFunction(0x149C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149C38_0x149c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    }
    ctx->pc = 0x14A7E8u;
    // 0x14a7e8: 0x8ea700e0  lw          $a3, 0xE0($s5)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7f0: 0x8ce20cd0  lw          $v0, 0xCD0($a3)
    ctx->pc = 0x14a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3280)));
    // 0x14a7f4: 0x24e800c0  addiu       $t0, $a3, 0xC0
    ctx->pc = 0x14a7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x14a7f8: 0x8ce50cd4  lw          $a1, 0xCD4($a3)
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3284)));
    // 0x14a7fc: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x14a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x14a800: 0xc051bee  jal         func_146FB8
    ctx->pc = 0x14A800u;
    SET_GPR_U32(ctx, 31, 0x14A808u);
    ctx->pc = 0x14A804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A800u;
            // 0x14a804: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146FB8u;
    if (runtime->hasFunction(0x146FB8u)) {
        auto targetFn = runtime->lookupFunction(0x146FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A808u; }
        if (ctx->pc != 0x14A808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146FB8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A808u; }
        if (ctx->pc != 0x14A808u) { return; }
    }
    ctx->pc = 0x14A808u;
    // 0x14a808: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a80c: 0x0  nop
    ctx->pc = 0x14a80cu;
    // NOP
label_14a810:
    // 0x14a810: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x14a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14a814: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x14a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x14a818: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A818u;
    {
        const bool branch_taken_0x14a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A818u;
            // 0x14a81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a818) {
            ctx->pc = 0x14A838u;
            goto label_14a838;
        }
    }
    ctx->pc = 0x14A820u;
    // 0x14a820: 0x8ea700e0  lw          $a3, 0xE0($s5)
    ctx->pc = 0x14a820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x14a824: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x14a824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x14a828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a82c: 0x24e800c0  addiu       $t0, $a3, 0xC0
    ctx->pc = 0x14a82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x14a830: 0xc051bee  jal         func_146FB8
    ctx->pc = 0x14A830u;
    SET_GPR_U32(ctx, 31, 0x14A838u);
    ctx->pc = 0x14A834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A830u;
            // 0x14a834: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146FB8u;
    if (runtime->hasFunction(0x146FB8u)) {
        auto targetFn = runtime->lookupFunction(0x146FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A838u; }
        if (ctx->pc != 0x14A838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146FB8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A838u; }
        if (ctx->pc != 0x14A838u) { return; }
    }
    ctx->pc = 0x14A838u;
label_14a838:
    // 0x14a838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14a838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a83c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x14a83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14a840: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14A840u;
    {
        const bool branch_taken_0x14a840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A840u;
            // 0x14a844: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a840) {
            ctx->pc = 0x14A810u;
            runtime->cooperativeGuestYield();
            goto label_14a810;
        }
    }
    ctx->pc = 0x14A848u;
    // 0x14a848: 0xc0527de  jal         func_149F78
    ctx->pc = 0x14A848u;
    SET_GPR_U32(ctx, 31, 0x14A850u);
    ctx->pc = 0x14A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A848u;
            // 0x14a84c: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F78u;
    if (runtime->hasFunction(0x149F78u)) {
        auto targetFn = runtime->lookupFunction(0x149F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A850u; }
        if (ctx->pc != 0x14A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_149f78_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A850u; }
        if (ctx->pc != 0x14A850u) { return; }
    }
    ctx->pc = 0x14A850u;
    // 0x14a850: 0xc051856  jal         func_146158
    ctx->pc = 0x14A850u;
    SET_GPR_U32(ctx, 31, 0x14A858u);
    ctx->pc = 0x14A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A850u;
            // 0x14a854: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146158u;
    if (runtime->hasFunction(0x146158u)) {
        auto targetFn = runtime->lookupFunction(0x146158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A858u; }
        if (ctx->pc != 0x14A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146158_0x146158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A858u; }
        if (ctx->pc != 0x14A858u) { return; }
    }
    ctx->pc = 0x14A858u;
    // 0x14a858: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14a858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14a85c:
    // 0x14a85c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14a85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a860: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14a860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a864: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14a864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a868: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14a868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a86c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14a86cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a870: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14a870u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a878: 0x3e00008  jr          $ra
    ctx->pc = 0x14A878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A878u;
            // 0x14a87c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A5A8u: goto label_14a5a8;
            case 0x14A620u: goto label_14a620;
            case 0x14A6B8u: goto label_14a6b8;
            case 0x14A6D4u: goto label_14a6d4;
            case 0x14A728u: goto label_14a728;
            case 0x14A744u: goto label_14a744;
            case 0x14A758u: goto label_14a758;
            case 0x14A7C4u: goto label_14a7c4;
            case 0x14A7D0u: goto label_14a7d0;
            case 0x14A7D4u: goto label_14a7d4;
            case 0x14A810u: goto label_14a810;
            case 0x14A838u: goto label_14a838;
            case 0x14A85Cu: goto label_14a85c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14A880u;
    // 0x14a880: 0xac450cf4  sw          $a1, 0xCF4($v0)
    ctx->pc = 0x14a880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 5));
    // 0x14a884: 0x0  nop
    ctx->pc = 0x14a884u;
    // NOP
    // 0x14a888: 0xac450cf8  sw          $a1, 0xCF8($v0)
    ctx->pc = 0x14a888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3320), GPR_U32(ctx, 5));
    // 0x14a88c: 0x0  nop
    ctx->pc = 0x14a88cu;
    // NOP
    // 0x14a890: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14a890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a894: 0x0  nop
    ctx->pc = 0x14a894u;
    // NOP
    // 0x14a898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a89c: 0x0  nop
    ctx->pc = 0x14a89cu;
    // NOP
}

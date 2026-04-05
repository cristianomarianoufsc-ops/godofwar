#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A160
// Address: 0x15a160 - 0x15a278
void sub_0015A160_0x15a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A160_0x15a160");
#endif

    ctx->pc = 0x15a160u;

    // 0x15a160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15a164: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x15a168: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15a16c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15a16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a170: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x15a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15a174: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15a174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a178: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x15a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x15a17c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15a17cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a180: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x15a184: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15a184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a188: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x15a18c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15a18cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a190: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x15a194: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x15a194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x15a198: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15A198u;
    {
        const bool branch_taken_0x15a198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A198u;
            // 0x15a19c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a198) {
            ctx->pc = 0x15A24Cu;
            goto label_15a24c;
        }
    }
    ctx->pc = 0x15A1A0u;
label_15a1a0:
    // 0x15a1a0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x15A1A0u;
    SET_GPR_U32(ctx, 31, 0x15A1A8u);
    ctx->pc = 0x15A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1A0u;
            // 0x15a1a4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1A8u; }
        if (ctx->pc != 0x15A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1A8u; }
        if (ctx->pc != 0x15A1A8u) { return; }
    }
    ctx->pc = 0x15A1A8u;
    // 0x15a1a8: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x15a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x15a1ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1b0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x15a1b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15a1b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15A1B4u;
    {
        const bool branch_taken_0x15a1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1b4) {
            ctx->pc = 0x15A1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1B4u;
            // 0x15a1b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A1BCu;
            goto label_15a1bc;
        }
    }
    ctx->pc = 0x15A1BCu;
label_15a1bc:
    // 0x15a1bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1c0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x15a1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1c4: 0x3010  mfhi        $a2
    ctx->pc = 0x15a1c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x15a1c8: 0xc056804  jal         func_15A010
    ctx->pc = 0x15A1C8u;
    SET_GPR_U32(ctx, 31, 0x15A1D0u);
    ctx->pc = 0x15A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1C8u;
            // 0x15a1cc: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A010u;
    if (runtime->hasFunction(0x15A010u)) {
        auto targetFn = runtime->lookupFunction(0x15A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1D0u; }
        if (ctx->pc != 0x15A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0015a010_0x15a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1D0u; }
        if (ctx->pc != 0x15A1D0u) { return; }
    }
    ctx->pc = 0x15A1D0u;
    // 0x15a1d0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x15a1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x15a1d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15A1D4u;
    {
        const bool branch_taken_0x15a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1D4u;
            // 0x15a1d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1d4) {
            ctx->pc = 0x15A21Cu;
            goto label_15a21c;
        }
    }
    ctx->pc = 0x15A1DCu;
    // 0x15a1dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15a1e0:
    // 0x15a1e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15a1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15a1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1e8: 0xc05682c  jal         func_15A0B0
    ctx->pc = 0x15A1E8u;
    SET_GPR_U32(ctx, 31, 0x15A1F0u);
    ctx->pc = 0x15A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1E8u;
            // 0x15a1ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A0B0u;
    if (runtime->hasFunction(0x15A0B0u)) {
        auto targetFn = runtime->lookupFunction(0x15A0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1F0u; }
        if (ctx->pc != 0x15A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15a0b0_0x15a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1F0u; }
        if (ctx->pc != 0x15A1F0u) { return; }
    }
    ctx->pc = 0x15A1F0u;
    // 0x15a1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A1F0u;
    {
        const bool branch_taken_0x15a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1F0u;
            // 0x15a1f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1f0) {
            ctx->pc = 0x15A208u;
            goto label_15a208;
        }
    }
    ctx->pc = 0x15A1F8u;
    // 0x15a1f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15a1fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a200: 0xc056804  jal         func_15A010
    ctx->pc = 0x15A200u;
    SET_GPR_U32(ctx, 31, 0x15A208u);
    ctx->pc = 0x15A204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A200u;
            // 0x15a204: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A010u;
    if (runtime->hasFunction(0x15A010u)) {
        auto targetFn = runtime->lookupFunction(0x15A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A208u; }
        if (ctx->pc != 0x15A208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0015a010_0x15a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A208u; }
        if (ctx->pc != 0x15A208u) { return; }
    }
    ctx->pc = 0x15A208u;
label_15a208:
    // 0x15a208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15a208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15a20c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x15a20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x15a210: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15A210u;
    {
        const bool branch_taken_0x15a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A210u;
            // 0x15a214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a210) {
            ctx->pc = 0x15A1E0u;
            runtime->cooperativeGuestYield();
            goto label_15a1e0;
        }
    }
    ctx->pc = 0x15A218u;
    // 0x15a218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a21c:
    // 0x15a21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a220: 0xc056804  jal         func_15A010
    ctx->pc = 0x15A220u;
    SET_GPR_U32(ctx, 31, 0x15A228u);
    ctx->pc = 0x15A224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A220u;
            // 0x15a224: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A010u;
    if (runtime->hasFunction(0x15A010u)) {
        auto targetFn = runtime->lookupFunction(0x15A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A228u; }
        if (ctx->pc != 0x15A228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0015a010_0x15a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A228u; }
        if (ctx->pc != 0x15A228u) { return; }
    }
    ctx->pc = 0x15A228u;
    // 0x15a228: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15a22c: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x15a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15a230: 0x2b0202a  slt         $a0, $s5, $s0
    ctx->pc = 0x15a230u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15a234: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x15a234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x15a238: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x15a238u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x15a23c: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x15a23cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x15a240: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x15a240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x15a244: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15A244u;
    {
        const bool branch_taken_0x15a244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a244) {
            ctx->pc = 0x15A1A0u;
            runtime->cooperativeGuestYield();
            goto label_15a1a0;
        }
    }
    ctx->pc = 0x15A24Cu;
label_15a24c:
    // 0x15a24c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15a24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a250: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15a250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a254: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15a254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a258: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15a258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a25c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15a25cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a260: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x15a260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a264: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x15a264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A26Cu;
            // 0x15a270: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A1A0u: goto label_15a1a0;
            case 0x15A1BCu: goto label_15a1bc;
            case 0x15A1E0u: goto label_15a1e0;
            case 0x15A208u: goto label_15a208;
            case 0x15A21Cu: goto label_15a21c;
            case 0x15A24Cu: goto label_15a24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A274u;
    // 0x15a274: 0x0  nop
    ctx->pc = 0x15a274u;
    // NOP
}

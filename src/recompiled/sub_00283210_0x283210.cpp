#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283210
// Address: 0x283210 - 0x283440
void sub_00283210_0x283210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283210_0x283210");
#endif

    ctx->pc = 0x283210u;

    // 0x283210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28321c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28321cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283220: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x283220u;
    SET_GPR_U32(ctx, 31, 0x283228u);
    ctx->pc = 0x283224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283220u;
            // 0x283224: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283228u; }
        if (ctx->pc != 0x283228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283228u; }
        if (ctx->pc != 0x283228u) { return; }
    }
    ctx->pc = 0x283228u;
    // 0x283228: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x283228u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x28322c: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x28322Cu;
    SET_GPR_U32(ctx, 31, 0x283234u);
    ctx->pc = 0x283230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28322Cu;
            // 0x283230: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283234u; }
        if (ctx->pc != 0x283234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283234u; }
        if (ctx->pc != 0x283234u) { return; }
    }
    ctx->pc = 0x283234u;
    // 0x283234: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x283234u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x283238: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x283238u;
    SET_GPR_U32(ctx, 31, 0x283240u);
    ctx->pc = 0x28323Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283238u;
            // 0x28323c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283240u; }
        if (ctx->pc != 0x283240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283240u; }
        if (ctx->pc != 0x283240u) { return; }
    }
    ctx->pc = 0x283240u;
    // 0x283240: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x283240u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x283244: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x283244u;
    SET_GPR_U32(ctx, 31, 0x28324Cu);
    ctx->pc = 0x283248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283244u;
            // 0x283248: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28324Cu; }
        if (ctx->pc != 0x28324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28324Cu; }
        if (ctx->pc != 0x28324Cu) { return; }
    }
    ctx->pc = 0x28324Cu;
    // 0x28324c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x28324cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x283250: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x283250u;
    SET_GPR_U32(ctx, 31, 0x283258u);
    ctx->pc = 0x283254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283250u;
            // 0x283254: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283258u; }
        if (ctx->pc != 0x283258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283258u; }
        if (ctx->pc != 0x283258u) { return; }
    }
    ctx->pc = 0x283258u;
    // 0x283258: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x283258u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x28325c: 0xc0a0c7c  jal         func_2831F0
    ctx->pc = 0x28325Cu;
    SET_GPR_U32(ctx, 31, 0x283264u);
    ctx->pc = 0x283260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28325Cu;
            // 0x283260: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831F0u;
    if (runtime->hasFunction(0x2831F0u)) {
        auto targetFn = runtime->lookupFunction(0x2831F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283264u; }
        if (ctx->pc != 0x283264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831f0_0x283210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283264u; }
        if (ctx->pc != 0x283264u) { return; }
    }
    ctx->pc = 0x283264u;
    // 0x283264: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x283264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x283268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28326c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28326cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283270: 0x3e00008  jr          $ra
    ctx->pc = 0x283270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283270u;
            // 0x283274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283330u: goto label_283330;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x28338Cu: goto label_28338c;
            case 0x2833E8u: goto label_2833e8;
            case 0x283418u: goto label_283418;
            case 0x283424u: goto label_283424;
            case 0x283434u: goto label_283434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283278u;
    // 0x283278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28327c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283288: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x283288u;
    SET_GPR_U32(ctx, 31, 0x283290u);
    ctx->pc = 0x28328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283288u;
            // 0x28328c: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283290u; }
        if (ctx->pc != 0x283290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283290u; }
        if (ctx->pc != 0x283290u) { return; }
    }
    ctx->pc = 0x283290u;
    // 0x283290: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x283290u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x283294: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x283294u;
    SET_GPR_U32(ctx, 31, 0x28329Cu);
    ctx->pc = 0x283298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283294u;
            // 0x283298: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28329Cu; }
        if (ctx->pc != 0x28329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28329Cu; }
        if (ctx->pc != 0x28329Cu) { return; }
    }
    ctx->pc = 0x28329Cu;
    // 0x28329c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x28329cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2832a0: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x2832A0u;
    SET_GPR_U32(ctx, 31, 0x2832A8u);
    ctx->pc = 0x2832A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832A0u;
            // 0x2832a4: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832A8u; }
        if (ctx->pc != 0x2832A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832A8u; }
        if (ctx->pc != 0x2832A8u) { return; }
    }
    ctx->pc = 0x2832A8u;
    // 0x2832a8: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2832a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2832ac: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x2832ACu;
    SET_GPR_U32(ctx, 31, 0x2832B4u);
    ctx->pc = 0x2832B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832ACu;
            // 0x2832b0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832B4u; }
        if (ctx->pc != 0x2832B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832B4u; }
        if (ctx->pc != 0x2832B4u) { return; }
    }
    ctx->pc = 0x2832B4u;
    // 0x2832b4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2832b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2832b8: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x2832B8u;
    SET_GPR_U32(ctx, 31, 0x2832C0u);
    ctx->pc = 0x2832BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832B8u;
            // 0x2832bc: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832C0u; }
        if (ctx->pc != 0x2832C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832C0u; }
        if (ctx->pc != 0x2832C0u) { return; }
    }
    ctx->pc = 0x2832C0u;
    // 0x2832c0: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2832c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2832c4: 0xc0a0c70  jal         func_2831C0
    ctx->pc = 0x2832C4u;
    SET_GPR_U32(ctx, 31, 0x2832CCu);
    ctx->pc = 0x2832C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832C4u;
            // 0x2832c8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831C0u;
    if (runtime->hasFunction(0x2831C0u)) {
        auto targetFn = runtime->lookupFunction(0x2831C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832CCu; }
        if (ctx->pc != 0x2832CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2831c0_0x2831f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832CCu; }
        if (ctx->pc != 0x2832CCu) { return; }
    }
    ctx->pc = 0x2832CCu;
    // 0x2832cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2832ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2832d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2832d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2832d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2832d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2832d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2832D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832D8u;
            // 0x2832dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283330u: goto label_283330;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x28338Cu: goto label_28338c;
            case 0x2833E8u: goto label_2833e8;
            case 0x283418u: goto label_283418;
            case 0x283424u: goto label_283424;
            case 0x283434u: goto label_283434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2832E0u;
    // 0x2832e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2832e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2832e8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2832e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2832ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2832ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2832f0: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x2832f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2832f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2832f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2832f8: 0x24495310  addiu       $t1, $v0, 0x5310
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
    // 0x2832fc: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x2832fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x283300: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x283300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x283304: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x283304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x283308: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x283308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x28330c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x28330cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283310: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x283310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283314: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x283314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x283318: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x283318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28331c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x28331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x283320: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x283324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283320u;
            // 0x283324: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283320) {
            ctx->pc = 0x283330u;
            goto label_283330;
        }
    }
    ctx->pc = 0x283328u;
    // 0x283328: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x283328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28332c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x28332cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_283330:
    // 0x283330: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x283330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x283334: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x283334u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x283338: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x283338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28333c: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x28333cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x283340: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x283340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283344: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x283344u;
    {
        const bool branch_taken_0x283344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283344u;
            // 0x283348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283344) {
            ctx->pc = 0x28338Cu;
            goto label_28338c;
        }
    }
    ctx->pc = 0x28334Cu;
    // 0x28334c: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x28334cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x283350: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x283350u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x283354: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x283354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x283358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x283358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28335c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x283360: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x283360u;
    {
        const bool branch_taken_0x283360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x283364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283360u;
            // 0x283364: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283360) {
            ctx->pc = 0x28338Cu;
            goto label_28338c;
        }
    }
    ctx->pc = 0x283368u;
    // 0x283368: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x283368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x28336c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x28336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x283370: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283370u;
    {
        const bool branch_taken_0x283370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283370u;
            // 0x283374: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283370) {
            ctx->pc = 0x283380u;
            goto label_283380;
        }
    }
    ctx->pc = 0x283378u;
    // 0x283378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283378u;
    {
        const bool branch_taken_0x283378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283378u;
            // 0x28337c: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283378) {
            ctx->pc = 0x283384u;
            goto label_283384;
        }
    }
    ctx->pc = 0x283380u;
label_283380:
    // 0x283380: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x283380u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_283384:
    // 0x283384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283388: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x283388u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_28338c:
    // 0x28338c: 0x3e00008  jr          $ra
    ctx->pc = 0x28338Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28338Cu;
            // 0x283390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283330u: goto label_283330;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x28338Cu: goto label_28338c;
            case 0x2833E8u: goto label_2833e8;
            case 0x283418u: goto label_283418;
            case 0x283424u: goto label_283424;
            case 0x283434u: goto label_283434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283394u;
    // 0x283394: 0x0  nop
    ctx->pc = 0x283394u;
    // NOP
    // 0x283398: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x283398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28339c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28339cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2833a0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2833a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2833a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2833a8: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x2833a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2833ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2833b0: 0x24495310  addiu       $t1, $v0, 0x5310
    ctx->pc = 0x2833b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
    // 0x2833b4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x2833b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2833b8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x2833b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2833bc: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x2833bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2833c0: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x2833c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2833c4: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2833c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2833c8: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2833c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2833cc: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x2833ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2833d0: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x2833d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2833d4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2833d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2833d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2833D8u;
    {
        const bool branch_taken_0x2833d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2833D8u;
            // 0x2833dc: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833d8) {
            ctx->pc = 0x2833E8u;
            goto label_2833e8;
        }
    }
    ctx->pc = 0x2833E0u;
    // 0x2833e0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2833e4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2833e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2833e8:
    // 0x2833e8: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x2833e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2833ec: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x2833F4u;
    // 0x2833f4: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2833f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2833f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2833f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2833fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2833fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283400: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x283400u;
    {
        const bool branch_taken_0x283400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283400u;
            // 0x283404: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283400) {
            ctx->pc = 0x283424u;
            goto label_283424;
        }
    }
    ctx->pc = 0x283408u;
    // 0x283408: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x283408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x28340c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28340Cu;
    {
        const bool branch_taken_0x28340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28340Cu;
            // 0x283410: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28340c) {
            ctx->pc = 0x283418u;
            goto label_283418;
        }
    }
    ctx->pc = 0x283414u;
    // 0x283414: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x283414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_283418:
    // 0x283418: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x283418u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x28341c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x283420: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x283420u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_283424:
    // 0x283424: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x283424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x283428: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28342c: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x28342cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x283430: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x283430u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_283434:
    // 0x283434: 0x3e00008  jr          $ra
    ctx->pc = 0x283434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283434u;
            // 0x283438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283330u: goto label_283330;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x28338Cu: goto label_28338c;
            case 0x2833E8u: goto label_2833e8;
            case 0x283418u: goto label_283418;
            case 0x283424u: goto label_283424;
            case 0x283434u: goto label_283434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28343Cu;
    // 0x28343c: 0x0  nop
    ctx->pc = 0x28343cu;
    // NOP
}

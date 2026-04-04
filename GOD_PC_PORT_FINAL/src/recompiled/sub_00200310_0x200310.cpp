#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200310
// Address: 0x200310 - 0x200408
void sub_00200310_0x200310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200310_0x200310");
#endif

    ctx->pc = 0x200310u;

    // 0x200310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200314: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x200318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20031c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200320: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x200320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x200324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200328: 0x26101300  addiu       $s0, $s0, 0x1300
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
    // 0x20032c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200330: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x200330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x200334: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200334u;
    SET_GPR_U32(ctx, 31, 0x20033Cu);
    ctx->pc = 0x200338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200334u;
            // 0x200338: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20033Cu; }
        if (ctx->pc != 0x20033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20033Cu; }
        if (ctx->pc != 0x20033Cu) { return; }
    }
    ctx->pc = 0x20033Cu;
    // 0x20033c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x200340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200344: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200344u;
    SET_GPR_U32(ctx, 31, 0x20034Cu);
    ctx->pc = 0x200348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200344u;
            // 0x200348: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20034Cu; }
        if (ctx->pc != 0x20034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20034Cu; }
        if (ctx->pc != 0x20034Cu) { return; }
    }
    ctx->pc = 0x20034Cu;
    // 0x20034c: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x200350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200354: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200354u;
    SET_GPR_U32(ctx, 31, 0x20035Cu);
    ctx->pc = 0x200358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200354u;
            // 0x200358: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20035Cu; }
        if (ctx->pc != 0x20035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20035Cu; }
        if (ctx->pc != 0x20035Cu) { return; }
    }
    ctx->pc = 0x20035Cu;
    // 0x20035c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x200360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200364: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200364u;
    SET_GPR_U32(ctx, 31, 0x20036Cu);
    ctx->pc = 0x200368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200364u;
            // 0x200368: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20036Cu; }
        if (ctx->pc != 0x20036Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20036Cu; }
        if (ctx->pc != 0x20036Cu) { return; }
    }
    ctx->pc = 0x20036Cu;
    // 0x20036c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x20036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x200370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200374: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200374u;
    SET_GPR_U32(ctx, 31, 0x20037Cu);
    ctx->pc = 0x200378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200374u;
            // 0x200378: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20037Cu; }
        if (ctx->pc != 0x20037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20037Cu; }
        if (ctx->pc != 0x20037Cu) { return; }
    }
    ctx->pc = 0x20037Cu;
    // 0x20037c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x20037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x200380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200384: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200384u;
    SET_GPR_U32(ctx, 31, 0x20038Cu);
    ctx->pc = 0x200388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200384u;
            // 0x200388: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20038Cu; }
        if (ctx->pc != 0x20038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20038Cu; }
        if (ctx->pc != 0x20038Cu) { return; }
    }
    ctx->pc = 0x20038Cu;
    // 0x20038c: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x200390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200394: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 31, 0x20039Cu);
    ctx->pc = 0x200398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200394u;
            // 0x200398: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20039Cu; }
        if (ctx->pc != 0x20039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20039Cu; }
        if (ctx->pc != 0x20039Cu) { return; }
    }
    ctx->pc = 0x20039Cu;
    // 0x20039c: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2003a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003a4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2003A4u;
    SET_GPR_U32(ctx, 31, 0x2003ACu);
    ctx->pc = 0x2003A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003A4u;
            // 0x2003a8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ACu; }
        if (ctx->pc != 0x2003ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ACu; }
        if (ctx->pc != 0x2003ACu) { return; }
    }
    ctx->pc = 0x2003ACu;
    // 0x2003ac: 0x262400d8  addiu       $a0, $s1, 0xD8
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x2003b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003b4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2003B4u;
    SET_GPR_U32(ctx, 31, 0x2003BCu);
    ctx->pc = 0x2003B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003B4u;
            // 0x2003b8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003BCu; }
        if (ctx->pc != 0x2003BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003BCu; }
        if (ctx->pc != 0x2003BCu) { return; }
    }
    ctx->pc = 0x2003BCu;
    // 0x2003bc: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2003bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2003c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003c4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2003C4u;
    SET_GPR_U32(ctx, 31, 0x2003CCu);
    ctx->pc = 0x2003C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003C4u;
            // 0x2003c8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003CCu; }
        if (ctx->pc != 0x2003CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003CCu; }
        if (ctx->pc != 0x2003CCu) { return; }
    }
    ctx->pc = 0x2003CCu;
    // 0x2003cc: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x2003d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003d4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2003D4u;
    SET_GPR_U32(ctx, 31, 0x2003DCu);
    ctx->pc = 0x2003D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003D4u;
            // 0x2003d8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003DCu; }
        if (ctx->pc != 0x2003DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003DCu; }
        if (ctx->pc != 0x2003DCu) { return; }
    }
    ctx->pc = 0x2003DCu;
    // 0x2003dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003e0: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2003e4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2003E4u;
    SET_GPR_U32(ctx, 31, 0x2003ECu);
    ctx->pc = 0x2003E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003E4u;
            // 0x2003e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ECu; }
        if (ctx->pc != 0x2003ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ECu; }
        if (ctx->pc != 0x2003ECu) { return; }
    }
    ctx->pc = 0x2003ECu;
    // 0x2003ec: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x2003ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
    // 0x2003f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2003f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2003f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2003f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2003f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2003f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2003fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2003FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2003FCu;
            // 0x200400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200404u;
    // 0x200404: 0x0  nop
    ctx->pc = 0x200404u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8198
// Address: 0x1b8198 - 0x1b8300
void sub_001B8198_0x1b8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8198_0x1b8198");
#endif

    ctx->pc = 0x1b8198u;

    // 0x1b8198: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b8198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b819c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b81a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b81a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1b81a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b81a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b81ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b81acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1b81b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b81bc: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B81BCu;
    {
        const bool branch_taken_0x1b81bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B81C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81BCu;
            // 0x1b81c0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81bc) {
            ctx->pc = 0x1B82BCu;
            goto label_1b82bc;
        }
    }
    ctx->pc = 0x1B81C4u;
    // 0x1b81c4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b81c8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B81C8u;
    {
        const bool branch_taken_0x1b81c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B81CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81C8u;
            // 0x1b81cc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81c8) {
            ctx->pc = 0x1B82BCu;
            goto label_1b82bc;
        }
    }
    ctx->pc = 0x1B81D0u;
    // 0x1b81d0: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x1b81d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x1b81d4: 0x90425650  lbu         $v0, 0x5650($v0)
    ctx->pc = 0x1b81d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22096)));
    // 0x1b81d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b81d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81dc: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1b81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b81e0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1B81E0u;
    SET_GPR_U32(ctx, 31, 0x1B81E8u);
    ctx->pc = 0x1B81E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81E0u;
            // 0x1b81e4: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E8u; }
        if (ctx->pc != 0x1B81E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E8u; }
        if (ctx->pc != 0x1B81E8u) { return; }
    }
    ctx->pc = 0x1B81E8u;
    // 0x1b81e8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b81ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b81ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81f0: 0x24515658  addiu       $s1, $v0, 0x5658
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22104));
    // 0x1b81f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b81f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b81f8: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1B81F8u;
    SET_GPR_U32(ctx, 31, 0x1B8200u);
    ctx->pc = 0x1B81FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81F8u;
            // 0x1b81fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8200u; }
        if (ctx->pc != 0x1B8200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8200u; }
        if (ctx->pc != 0x1B8200u) { return; }
    }
    ctx->pc = 0x1B8200u;
    // 0x1b8200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8200u;
    {
        const bool branch_taken_0x1b8200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8200u;
            // 0x1b8204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8200) {
            ctx->pc = 0x1B8210u;
            goto label_1b8210;
        }
    }
    ctx->pc = 0x1B8208u;
    // 0x1b8208: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x1B8208u;
    SET_GPR_U32(ctx, 31, 0x1B8210u);
    ctx->pc = 0x1B820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8208u;
            // 0x1b820c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8210u; }
        if (ctx->pc != 0x1B8210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8210u; }
        if (ctx->pc != 0x1B8210u) { return; }
    }
    ctx->pc = 0x1B8210u;
label_1b8210:
    // 0x1b8210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8214: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x1B8214u;
    SET_GPR_U32(ctx, 31, 0x1B821Cu);
    ctx->pc = 0x1B8218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8214u;
            // 0x1b8218: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B821Cu; }
        if (ctx->pc != 0x1B821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B821Cu; }
        if (ctx->pc != 0x1B821Cu) { return; }
    }
    ctx->pc = 0x1B821Cu;
    // 0x1b821c: 0x3c14002c  lui         $s4, 0x2C
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)44 << 16));
    // 0x1b8220: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1b8220u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b8224: 0x268273e8  addiu       $v0, $s4, 0x73E8
    ctx->pc = 0x1b8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29672));
    // 0x1b8228: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1b8228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b822c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B822Cu;
    {
        const bool branch_taken_0x1b822c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B822Cu;
            // 0x1b8230: 0x268473e8  addiu       $a0, $s4, 0x73E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b822c) {
            ctx->pc = 0x1B827Cu;
            goto label_1b827c;
        }
    }
    ctx->pc = 0x1B8234u;
    // 0x1b8234: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B8234u;
    SET_GPR_U32(ctx, 31, 0x1B823Cu);
    ctx->pc = 0x1B8238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8234u;
            // 0x1b8238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B823Cu; }
        if (ctx->pc != 0x1B823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B823Cu; }
        if (ctx->pc != 0x1B823Cu) { return; }
    }
    ctx->pc = 0x1B823Cu;
    // 0x1b823c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b823cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8240: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8240u;
    {
        const bool branch_taken_0x1b8240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8240) {
            ctx->pc = 0x1B825Cu;
            goto label_1b825c;
        }
    }
    ctx->pc = 0x1B8248u;
    // 0x1b8248: 0xc05d4ba  jal         func_1752E8
    ctx->pc = 0x1B8248u;
    SET_GPR_U32(ctx, 31, 0x1B8250u);
    ctx->pc = 0x1B824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8248u;
            // 0x1b824c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752E8u;
    if (runtime->hasFunction(0x1752E8u)) {
        auto targetFn = runtime->lookupFunction(0x1752E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8250u; }
        if (ctx->pc != 0x1B8250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E8_0x1752e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8250u; }
        if (ctx->pc != 0x1B8250u) { return; }
    }
    ctx->pc = 0x1B8250u;
    // 0x1b8250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8254: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8254u;
    {
        const bool branch_taken_0x1b8254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8254u;
            // 0x1b8258: 0x268473e8  addiu       $a0, $s4, 0x73E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8254) {
            ctx->pc = 0x1B827Cu;
            goto label_1b827c;
        }
    }
    ctx->pc = 0x1B825Cu;
label_1b825c:
    // 0x1b825c: 0xc05cd4a  jal         func_173528
    ctx->pc = 0x1B825Cu;
    SET_GPR_U32(ctx, 31, 0x1B8264u);
    ctx->pc = 0x1B8260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B825Cu;
            // 0x1b8260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173528u;
    if (runtime->hasFunction(0x173528u)) {
        auto targetFn = runtime->lookupFunction(0x173528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8264u; }
        if (ctx->pc != 0x1B8264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173528_0x173528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8264u; }
        if (ctx->pc != 0x1B8264u) { return; }
    }
    ctx->pc = 0x1B8264u;
    // 0x1b8264: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8264u;
    {
        const bool branch_taken_0x1b8264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8264) {
            ctx->pc = 0x1B8268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8264u;
            // 0x1b8268: 0x268473e8  addiu       $a0, $s4, 0x73E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29672));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B827Cu;
            goto label_1b827c;
        }
    }
    ctx->pc = 0x1B826Cu;
    // 0x1b826c: 0x8e641564  lw          $a0, 0x1564($s3)
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5476)));
    // 0x1b8270: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1B8270u;
    SET_GPR_U32(ctx, 31, 0x1B8278u);
    ctx->pc = 0x1B8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8270u;
            // 0x1b8274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8278u; }
        if (ctx->pc != 0x1B8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8278u; }
        if (ctx->pc != 0x1B8278u) { return; }
    }
    ctx->pc = 0x1B8278u;
    // 0x1b8278: 0x268473e8  addiu       $a0, $s4, 0x73E8
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29672));
label_1b827c:
    // 0x1b827c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8280: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1B8280u;
    SET_GPR_U32(ctx, 31, 0x1B8288u);
    ctx->pc = 0x1B8284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8280u;
            // 0x1b8284: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8288u; }
        if (ctx->pc != 0x1B8288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8288u; }
        if (ctx->pc != 0x1B8288u) { return; }
    }
    ctx->pc = 0x1B8288u;
    // 0x1b8288: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B8288u;
    SET_GPR_U32(ctx, 31, 0x1B8290u);
    ctx->pc = 0x1B828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8288u;
            // 0x1b828c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8290u; }
        if (ctx->pc != 0x1B8290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8290u; }
        if (ctx->pc != 0x1B8290u) { return; }
    }
    ctx->pc = 0x1B8290u;
    // 0x1b8290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8294: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8294u;
    {
        const bool branch_taken_0x1b8294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8294) {
            ctx->pc = 0x1B8298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8294u;
            // 0x1b8298: 0x8e641564  lw          $a0, 0x1564($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B82ACu;
            goto label_1b82ac;
        }
    }
    ctx->pc = 0x1B829Cu;
    // 0x1b829c: 0xc05d4ba  jal         func_1752E8
    ctx->pc = 0x1B829Cu;
    SET_GPR_U32(ctx, 31, 0x1B82A4u);
    ctx->pc = 0x1B82A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B829Cu;
            // 0x1b82a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752E8u;
    if (runtime->hasFunction(0x1752E8u)) {
        auto targetFn = runtime->lookupFunction(0x1752E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A4u; }
        if (ctx->pc != 0x1B82A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E8_0x1752e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A4u; }
        if (ctx->pc != 0x1B82A4u) { return; }
    }
    ctx->pc = 0x1B82A4u;
    // 0x1b82a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b82a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82a8: 0x8e641564  lw          $a0, 0x1564($s3)
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5476)));
label_1b82ac:
    // 0x1b82ac: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1B82ACu;
    SET_GPR_U32(ctx, 31, 0x1B82B4u);
    ctx->pc = 0x1B82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82ACu;
            // 0x1b82b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82B4u; }
        if (ctx->pc != 0x1B82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82B4u; }
        if (ctx->pc != 0x1B82B4u) { return; }
    }
    ctx->pc = 0x1B82B4u;
    // 0x1b82b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B82B4u;
    {
        const bool branch_taken_0x1b82b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82B4u;
            // 0x1b82b8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82b4) {
            ctx->pc = 0x1B82E0u;
            goto label_1b82e0;
        }
    }
    ctx->pc = 0x1B82BCu;
label_1b82bc:
    // 0x1b82bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b82c0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b82c4: 0x244273e8  addiu       $v0, $v0, 0x73E8
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29672));
    // 0x1b82c8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b82cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B82CCu;
    {
        const bool branch_taken_0x1b82cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82CCu;
            // 0x1b82d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82cc) {
            ctx->pc = 0x1B82E0u;
            goto label_1b82e0;
        }
    }
    ctx->pc = 0x1B82D4u;
    // 0x1b82d4: 0xc05c324  jal         func_170C90
    ctx->pc = 0x1B82D4u;
    SET_GPR_U32(ctx, 31, 0x1B82DCu);
    ctx->pc = 0x1B82D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82D4u;
            // 0x1b82d8: 0x8e641564  lw          $a0, 0x1564($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5476)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C90u;
    if (runtime->hasFunction(0x170C90u)) {
        auto targetFn = runtime->lookupFunction(0x170C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82DCu; }
        if (ctx->pc != 0x1B82DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C90_0x170c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82DCu; }
        if (ctx->pc != 0x1B82DCu) { return; }
    }
    ctx->pc = 0x1B82DCu;
    // 0x1b82dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b82dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b82e0:
    // 0x1b82e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b82e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b82e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b82e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b82e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b82e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b82ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b82ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b82f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b82f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b82f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82F4u;
            // 0x1b82f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8210u: goto label_1b8210;
            case 0x1B825Cu: goto label_1b825c;
            case 0x1B827Cu: goto label_1b827c;
            case 0x1B82ACu: goto label_1b82ac;
            case 0x1B82BCu: goto label_1b82bc;
            case 0x1B82E0u: goto label_1b82e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B82FCu;
    // 0x1b82fc: 0x0  nop
    ctx->pc = 0x1b82fcu;
    // NOP
}

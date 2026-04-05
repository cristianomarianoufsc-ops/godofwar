#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_296c48
// Address: 0x296c48 - 0x296de8
void entry_296c48_0x296de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_296c48_0x296de8");
#endif

    ctx->pc = 0x296c48u;

    // 0x296c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296c4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296c50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296c54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296c58: 0xc0a648c  jal         func_299230
    ctx->pc = 0x296C58u;
    SET_GPR_U32(ctx, 31, 0x296C60u);
    ctx->pc = 0x296C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296C58u;
            // 0x296c5c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C60u; }
        if (ctx->pc != 0x296C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C60u; }
        if (ctx->pc != 0x296C60u) { return; }
    }
    ctx->pc = 0x296C60u;
    // 0x296c60: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x296c64: 0x8c624abc  lw          $v0, 0x4ABC($v1)
    ctx->pc = 0x296c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19132)));
    // 0x296c68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296C68u;
    {
        const bool branch_taken_0x296c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C68u;
            // 0x296c6c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c68) {
            ctx->pc = 0x296C88u;
            goto label_296c88;
        }
    }
    ctx->pc = 0x296C70u;
    // 0x296c70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296c74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296c78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296c80: 0x80a64a0  j           func_299280
    ctx->pc = 0x296C80u;
    ctx->pc = 0x296C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296C80u;
            // 0x296c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x296C88u;
label_296c88:
    // 0x296c88: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296C88u;
    SET_GPR_U32(ctx, 31, 0x296C90u);
    ctx->pc = 0x296C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296C88u;
            // 0x296c8c: 0xac714abc  sw          $s1, 0x4ABC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C90u; }
        if (ctx->pc != 0x296C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C90u; }
        if (ctx->pc != 0x296C90u) { return; }
    }
    ctx->pc = 0x296C90u;
    // 0x296c90: 0xc0a5946  jal         func_296518
    ctx->pc = 0x296C90u;
    SET_GPR_U32(ctx, 31, 0x296C98u);
    ctx->pc = 0x296518u;
    if (runtime->hasFunction(0x296518u)) {
        auto targetFn = runtime->lookupFunction(0x296518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C98u; }
        if (ctx->pc != 0x296C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296518_0x296798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C98u; }
        if (ctx->pc != 0x296C98u) { return; }
    }
    ctx->pc = 0x296C98u;
    // 0x296c98: 0xc0a648c  jal         func_299230
    ctx->pc = 0x296C98u;
    SET_GPR_U32(ctx, 31, 0x296CA0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296CA0u; }
        if (ctx->pc != 0x296CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296CA0u; }
        if (ctx->pc != 0x296CA0u) { return; }
    }
    ctx->pc = 0x296CA0u;
    // 0x296ca0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x296ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x296ca4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x296ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x296ca8: 0x24727ac0  addiu       $s2, $v1, 0x7AC0
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
    // 0x296cac: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x296cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x296cb0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x296cb4: 0x251092c0  addiu       $s0, $t0, -0x6D40
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939328));
    // 0x296cb8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x296cbc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x296cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x296cc0: 0x24c682c0  addiu       $a2, $a2, -0x7D40
    ctx->pc = 0x296cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935232));
    // 0x296cc4: 0x24e78ac0  addiu       $a3, $a3, -0x7540
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937280));
    // 0x296cc8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x296cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x296ccc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x296cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x296cd0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x296cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x296cd4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x296cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x296cd8: 0xad1192c0  sw          $s1, -0x6D40($t0)
    ctx->pc = 0x296cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939328), GPR_U32(ctx, 17));
    // 0x296cdc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x296ce0: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x296ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x296ce4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296ce8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x296ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x296cec: 0x24a56f48  addiu       $a1, $a1, 0x6F48
    ctx->pc = 0x296cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28488));
    // 0x296cf0: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x296cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x296cf4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x296cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x296cf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x296cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cfc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x296cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x296d00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x296d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x296d04: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x296d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x296d08: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x296d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x296d0c: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x296D0Cu;
    SET_GPR_U32(ctx, 31, 0x296D14u);
    ctx->pc = 0x296D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D0Cu;
            // 0x296d10: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D14u; }
        if (ctx->pc != 0x296D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D14u; }
        if (ctx->pc != 0x296D14u) { return; }
    }
    ctx->pc = 0x296D14u;
    // 0x296d14: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x296d18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296d1c: 0x24a571c0  addiu       $a1, $a1, 0x71C0
    ctx->pc = 0x296d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29120));
    // 0x296d20: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x296d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x296d24: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x296D24u;
    SET_GPR_U32(ctx, 31, 0x296D2Cu);
    ctx->pc = 0x296D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D24u;
            // 0x296d28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D2Cu; }
        if (ctx->pc != 0x296D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D2Cu; }
        if (ctx->pc != 0x296D2Cu) { return; }
    }
    ctx->pc = 0x296D2Cu;
    // 0x296d2c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x296d30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296d34: 0x24a573e0  addiu       $a1, $a1, 0x73E0
    ctx->pc = 0x296d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29664));
    // 0x296d38: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x296d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x296d3c: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x296D3Cu;
    SET_GPR_U32(ctx, 31, 0x296D44u);
    ctx->pc = 0x296D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D3Cu;
            // 0x296d40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D44u; }
        if (ctx->pc != 0x296D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D44u; }
        if (ctx->pc != 0x296D44u) { return; }
    }
    ctx->pc = 0x296D44u;
    // 0x296d44: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x296d48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296d4c: 0x24a57058  addiu       $a1, $a1, 0x7058
    ctx->pc = 0x296d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28760));
    // 0x296d50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x296d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d54: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x296D54u;
    SET_GPR_U32(ctx, 31, 0x296D5Cu);
    ctx->pc = 0x296D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D54u;
            // 0x296d58: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D5Cu; }
        if (ctx->pc != 0x296D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D5Cu; }
        if (ctx->pc != 0x296D5Cu) { return; }
    }
    ctx->pc = 0x296D5Cu;
    // 0x296d5c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296D5Cu;
    SET_GPR_U32(ctx, 31, 0x296D64u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D64u; }
        if (ctx->pc != 0x296D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D64u; }
        if (ctx->pc != 0x296D64u) { return; }
    }
    ctx->pc = 0x296D64u;
    // 0x296d64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296d68: 0xc0a500c  jal         func_294030
    ctx->pc = 0x296D68u;
    SET_GPR_U32(ctx, 31, 0x296D70u);
    ctx->pc = 0x296D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D68u;
            // 0x296d6c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D70u; }
        if (ctx->pc != 0x296D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D70u; }
        if (ctx->pc != 0x296D70u) { return; }
    }
    ctx->pc = 0x296D70u;
    // 0x296d70: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x296D70u;
    {
        const bool branch_taken_0x296d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D70u;
            // 0x296d74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d70) {
            ctx->pc = 0x296DD0u;
            goto label_296dd0;
        }
    }
    ctx->pc = 0x296D78u;
    // 0x296d78: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x296d7c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296d80: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x296d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x296d84: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x296d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x296d88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x296d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d94: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x296D94u;
    SET_GPR_U32(ctx, 31, 0x296D9Cu);
    ctx->pc = 0x296D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D94u;
            // 0x296d98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D9Cu; }
        if (ctx->pc != 0x296D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2969d0_0x296a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D9Cu; }
        if (ctx->pc != 0x296D9Cu) { return; }
    }
    ctx->pc = 0x296D9Cu;
    // 0x296d9c: 0x0  nop
    ctx->pc = 0x296d9cu;
    // NOP
label_296da0:
    // 0x296da0: 0xc0a593c  jal         func_2964F0
    ctx->pc = 0x296DA0u;
    SET_GPR_U32(ctx, 31, 0x296DA8u);
    ctx->pc = 0x296DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DA0u;
            // 0x296da4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2964F0u;
    if (runtime->hasFunction(0x2964F0u)) {
        auto targetFn = runtime->lookupFunction(0x2964F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DA8u; }
        if (ctx->pc != 0x296DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2964f0_0x296518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DA8u; }
        if (ctx->pc != 0x296DA8u) { return; }
    }
    ctx->pc = 0x296DA8u;
    // 0x296da8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x296DA8u;
    {
        const bool branch_taken_0x296da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DA8u;
            // 0x296dac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296da8) {
            ctx->pc = 0x296DA0u;
            runtime->cooperativeGuestYield();
            goto label_296da0;
        }
    }
    ctx->pc = 0x296DB0u;
    // 0x296db0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296db4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296db8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296dbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296dc0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x296dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x296dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296dc8: 0x80a5008  j           func_294020
    ctx->pc = 0x296DC8u;
    ctx->pc = 0x296DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DC8u;
            // 0x296dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_294020_0x294030(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x296DD0u;
label_296dd0:
    // 0x296dd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x296DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DDCu;
            // 0x296de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296C88u: goto label_296c88;
            case 0x296DA0u: goto label_296da0;
            case 0x296DD0u: goto label_296dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296DE4u;
    // 0x296de4: 0x0  nop
    ctx->pc = 0x296de4u;
    // NOP
}

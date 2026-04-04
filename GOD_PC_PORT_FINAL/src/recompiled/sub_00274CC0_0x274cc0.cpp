#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274CC0
// Address: 0x274cc0 - 0x274f10
void sub_00274CC0_0x274cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274CC0_0x274cc0");
#endif

    ctx->pc = 0x274cc0u;

    // 0x274cc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274cc4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x274cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x274cc8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x274cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x274ccc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x274cccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cd0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x274cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x274cd4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x274cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x274cd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x274cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x274cdc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x274cdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ce0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x274ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x274ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ce8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x274ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x274cec: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x274cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x274cf0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x274cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x274cf4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x274cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x274cf8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x274cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x274cfc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x274cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x274d00: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274d04: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x274d04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x274d08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274D08u;
    {
        const bool branch_taken_0x274d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d08) {
            ctx->pc = 0x274D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274D08u;
            // 0x274d0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x274D10u;
            goto label_274d10;
        }
    }
    ctx->pc = 0x274D10u;
label_274d10:
    // 0x274d10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274d14: 0x1810  mfhi        $v1
    ctx->pc = 0x274d14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x274d18: 0xb812  mflo        $s7
    ctx->pc = 0x274d18u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x274d1c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x274d1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d20: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x274d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x274d24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x274D24u;
    {
        const bool branch_taken_0x274d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D24u;
            // 0x274d28: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d24) {
            ctx->pc = 0x274D70u;
            goto label_274d70;
        }
    }
    ctx->pc = 0x274D2Cu;
    // 0x274d2c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274d30: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x274d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x274d34: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x274d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x274d38: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x274d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x274d3c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x274d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_274d40:
    // 0x274d40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x274d44: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x274d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x274d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274d4c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x274d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274d50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x274d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x274d54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x274D54u;
    {
        const bool branch_taken_0x274d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274d54) {
            ctx->pc = 0x274D40u;
            runtime->cooperativeGuestYield();
            goto label_274d40;
        }
    }
    ctx->pc = 0x274D5Cu;
    // 0x274d5c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x274d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274d60: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x274d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274d64: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x274d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x274d68: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x274D68u;
    {
        const bool branch_taken_0x274d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D68u;
            // 0x274d6c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d68) {
            ctx->pc = 0x274E04u;
            goto label_274e04;
        }
    }
    ctx->pc = 0x274D70u;
label_274d70:
    // 0x274d70: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x274d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x274d74: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x274d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x274d78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274D78u;
    {
        const bool branch_taken_0x274d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D78u;
            // 0x274d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d78) {
            ctx->pc = 0x274DA4u;
            goto label_274da4;
        }
    }
    ctx->pc = 0x274D80u;
    // 0x274d80: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x274d84: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x274d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d88: 0x24a54590  addiu       $a1, $a1, 0x4590
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
    // 0x274d8c: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x274D8Cu;
    SET_GPR_U32(ctx, 31, 0x274D94u);
    ctx->pc = 0x274D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274D8Cu;
            // 0x274d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D94u; }
        if (ctx->pc != 0x274D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D94u; }
        if (ctx->pc != 0x274D94u) { return; }
    }
    ctx->pc = 0x274D94u;
    // 0x274d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x274D9Cu;
    {
        const bool branch_taken_0x274d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D9Cu;
            // 0x274da0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d9c) {
            ctx->pc = 0x274EE0u;
            goto label_274ee0;
        }
    }
    ctx->pc = 0x274DA4u;
label_274da4:
    // 0x274da4: 0xc09d16e  jal         func_2745B8
    ctx->pc = 0x274DA4u;
    SET_GPR_U32(ctx, 31, 0x274DACu);
    ctx->pc = 0x274DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274DA4u;
            // 0x274da8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2745B8u;
    if (runtime->hasFunction(0x2745B8u)) {
        auto targetFn = runtime->lookupFunction(0x2745B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DACu; }
        if (ctx->pc != 0x274DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002745B8_0x2745b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DACu; }
        if (ctx->pc != 0x274DACu) { return; }
    }
    ctx->pc = 0x274DACu;
    // 0x274dac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x274db0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x274db4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x274db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x274db8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x274db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x274dbc: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x274dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x274dc0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x274dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x274dc4: 0x0  nop
    ctx->pc = 0x274dc4u;
    // NOP
label_274dc8:
    // 0x274dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274dcc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x274dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x274dd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274dd4: 0x0  nop
    ctx->pc = 0x274dd4u;
    // NOP
    // 0x274dd8: 0x0  nop
    ctx->pc = 0x274dd8u;
    // NOP
    // 0x274ddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x274DDCu;
    {
        const bool branch_taken_0x274ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ddc) {
            ctx->pc = 0x274DC8u;
            runtime->cooperativeGuestYield();
            goto label_274dc8;
        }
    }
    ctx->pc = 0x274DE4u;
    // 0x274de4: 0xc09dbda  jal         func_276F68
    ctx->pc = 0x274DE4u;
    SET_GPR_U32(ctx, 31, 0x274DECu);
    ctx->pc = 0x274DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274DE4u;
            // 0x274de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276F68u;
    if (runtime->hasFunction(0x276F68u)) {
        auto targetFn = runtime->lookupFunction(0x276F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DECu; }
        if (ctx->pc != 0x274DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276F68_0x276f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DECu; }
        if (ctx->pc != 0x274DECu) { return; }
    }
    ctx->pc = 0x274DECu;
    // 0x274dec: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x274decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274df0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274df4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274df8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x274df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x274dfc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x274e00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x274e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_274e04:
    // 0x274e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274e08: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274E08u;
    {
        const bool branch_taken_0x274e08 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x274e08) {
            ctx->pc = 0x274E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274E08u;
            // 0x274e0c: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274E34u;
            goto label_274e34;
        }
    }
    ctx->pc = 0x274E10u;
    // 0x274e10: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x274e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x274e14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E14u;
    {
        const bool branch_taken_0x274e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E14u;
            // 0x274e18: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e14) {
            ctx->pc = 0x274E30u;
            goto label_274e30;
        }
    }
    ctx->pc = 0x274E1Cu;
    // 0x274e1c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x274e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274e20: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x274e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274e24: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x274e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x274e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274E28u;
    {
        const bool branch_taken_0x274e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E28u;
            // 0x274e2c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e28) {
            ctx->pc = 0x274E44u;
            goto label_274e44;
        }
    }
    ctx->pc = 0x274E30u;
label_274e30:
    // 0x274e30: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x274e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_274e34:
    // 0x274e34: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274e38: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x274e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274e3c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x274e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x274e40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x274e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_274e44:
    // 0x274e44: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274e48: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x274e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274e4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x274e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274e50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274e54: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x274e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274e58: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x274e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x274e5c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x274e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x274e60: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x274e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x274e64: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x274E64u;
    {
        const bool branch_taken_0x274e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x274E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E64u;
            // 0x274e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e64) {
            ctx->pc = 0x274EA0u;
            goto label_274ea0;
        }
    }
    ctx->pc = 0x274E6Cu;
    // 0x274e6c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x274e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274e70: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x274e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x274e74: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x274e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x274e78: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x274e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274e7c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x274e80: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x274e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x274e84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x274e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x274e88: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x274e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x274e8c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x274e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x274e90: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x274e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274e94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274e98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E98u;
            // 0x274e9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274EDCu;
            goto label_274edc;
        }
    }
    ctx->pc = 0x274EA0u;
label_274ea0:
    // 0x274ea0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x274EA0u;
    {
        const bool branch_taken_0x274ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x274ea0) {
            ctx->pc = 0x274EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274EA0u;
            // 0x274ea4: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274EACu;
            goto label_274eac;
        }
    }
    ctx->pc = 0x274EA8u;
    // 0x274ea8: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x274ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_274eac:
    // 0x274eac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x274eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x274eb0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x274eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x274eb4: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x274eb8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x274eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274ebc: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x274ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x274ec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x274ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274ec4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x274ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x274ec8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x274ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x274ecc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x274eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274ed0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x274ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x274ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274ed8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x274ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_274edc:
    // 0x274edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274ee0:
    // 0x274ee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x274ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274ee4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x274ee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274ee8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x274ee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274eec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x274eecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274ef0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x274ef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274ef4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x274ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274ef8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x274ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274efc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x274efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274f00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x274f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x274f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274f08: 0x3e00008  jr          $ra
    ctx->pc = 0x274F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F08u;
            // 0x274f0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274D10u: goto label_274d10;
            case 0x274D40u: goto label_274d40;
            case 0x274D70u: goto label_274d70;
            case 0x274DA4u: goto label_274da4;
            case 0x274DC8u: goto label_274dc8;
            case 0x274E04u: goto label_274e04;
            case 0x274E30u: goto label_274e30;
            case 0x274E34u: goto label_274e34;
            case 0x274E44u: goto label_274e44;
            case 0x274EA0u: goto label_274ea0;
            case 0x274EACu: goto label_274eac;
            case 0x274EDCu: goto label_274edc;
            case 0x274EE0u: goto label_274ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274F10u;
}

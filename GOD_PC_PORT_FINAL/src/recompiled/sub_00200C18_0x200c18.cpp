#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200C18
// Address: 0x200c18 - 0x200d60
void sub_00200C18_0x200c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C18_0x200c18");
#endif

    ctx->pc = 0x200c18u;

    // 0x200c18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x200c1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x200c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x200c20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x200c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x200c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x200c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x200c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x200c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x200c34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x200c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c38: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200c3c: 0x0  nop
    ctx->pc = 0x200c3cu;
    // NOP
label_200c40:
    // 0x200c40: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x200c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200c44: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x200c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x200c48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200c4c: 0x5602003b  bnel        $s0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x200C4Cu;
    {
        const bool branch_taken_0x200c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x200c4c) {
            ctx->pc = 0x200C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200C4Cu;
            // 0x200c50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200D3Cu;
            goto label_200d3c;
        }
    }
    ctx->pc = 0x200C54u;
    // 0x200c54: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x200c58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200c5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200C5Cu;
    {
        const bool branch_taken_0x200c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C5Cu;
            // 0x200c60: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c5c) {
            ctx->pc = 0x200C6Cu;
            goto label_200c6c;
        }
    }
    ctx->pc = 0x200C64u;
    // 0x200c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200C64u;
    {
        const bool branch_taken_0x200c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C64u;
            // 0x200c68: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c64) {
            ctx->pc = 0x200C88u;
            goto label_200c88;
        }
    }
    ctx->pc = 0x200C6Cu;
label_200c6c:
    // 0x200c6c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x200c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x200c70: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x200c70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x200c74: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x200C74u;
    {
        const bool branch_taken_0x200c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x200c74) {
            ctx->pc = 0x200C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200C74u;
            // 0x200c78: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200C88u;
            goto label_200c88;
        }
    }
    ctx->pc = 0x200C7Cu;
    // 0x200c7c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x200C7Cu;
    SET_GPR_U32(ctx, 31, 0x200C84u);
    ctx->pc = 0x200C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200C7Cu;
            // 0x200c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C84u; }
        if (ctx->pc != 0x200C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C84u; }
        if (ctx->pc != 0x200C84u) { return; }
    }
    ctx->pc = 0x200C84u;
    // 0x200c84: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x200c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_200c88:
    // 0x200c88: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x200c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c90: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x200c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x200c94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x200c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x200c98: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x200c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x200c9c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x200c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x200ca0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x200ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x200ca4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x200ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x200ca8: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x200ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x200cac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x200cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x200cb0: 0xc04c55c  jal         func_131570
    ctx->pc = 0x200CB0u;
    SET_GPR_U32(ctx, 31, 0x200CB8u);
    ctx->pc = 0x200CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200CB0u;
            // 0x200cb4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CB8u; }
        if (ctx->pc != 0x200CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CB8u; }
        if (ctx->pc != 0x200CB8u) { return; }
    }
    ctx->pc = 0x200CB8u;
    // 0x200cb8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x200cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200cbc: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x200cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x200cc0: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x200cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x200cc4: 0xdd43bdf8  ld          $v1, -0x4208($t2)
    ctx->pc = 0x200cc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 4294950392)));
    // 0x200cc8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x200cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x200ccc: 0x26290008  addiu       $t1, $s1, 0x8
    ctx->pc = 0x200cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x200cd0: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x200cd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200cd4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x200cd4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x200cd8: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x200cd8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200cdc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x200cdcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x200ce0: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x200ce4: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x200ce4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200ce8: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x200ce8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200cec: 0x1248821  addu        $s1, $t1, $a0
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x200cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cf4: 0x7e050020  sq          $a1, 0x20($s0)
    ctx->pc = 0x200cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 5));
    // 0x200cf8: 0x7e060030  sq          $a2, 0x30($s0)
    ctx->pc = 0x200cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 6));
    // 0x200cfc: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x200cfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x200d00: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x200d00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x200d04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x200d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d08: 0x7e080050  sq          $t0, 0x50($s0)
    ctx->pc = 0x200d08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 8));
    // 0x200d0c: 0xfd43bdf8  sd          $v1, -0x4208($t2)
    ctx->pc = 0x200d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294950392), GPR_U64(ctx, 3));
    // 0x200d10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x200d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200d14: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x200d14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x200d18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200D18u;
    {
        const bool branch_taken_0x200d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D18u;
            // 0x200d1c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d18) {
            ctx->pc = 0x200D2Cu;
            goto label_200d2c;
        }
    }
    ctx->pc = 0x200D20u;
    // 0x200d20: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x200D20u;
    SET_GPR_U32(ctx, 31, 0x200D28u);
    ctx->pc = 0x200D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D20u;
            // 0x200d24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B08u;
    if (runtime->hasFunction(0x1F9B08u)) {
        auto targetFn = runtime->lookupFunction(0x1F9B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D28u; }
        if (ctx->pc != 0x200D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9B08_0x1f9b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D28u; }
        if (ctx->pc != 0x200D28u) { return; }
    }
    ctx->pc = 0x200D28u;
    // 0x200d28: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_200d2c:
    // 0x200d2c: 0xc080406  jal         func_201018
    ctx->pc = 0x200D2Cu;
    SET_GPR_U32(ctx, 31, 0x200D34u);
    ctx->pc = 0x200D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D2Cu;
            // 0x200d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (runtime->hasFunction(0x201018u)) {
        auto targetFn = runtime->lookupFunction(0x201018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D34u; }
        if (ctx->pc != 0x200D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201018_0x201018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D34u; }
        if (ctx->pc != 0x200D34u) { return; }
    }
    ctx->pc = 0x200D34u;
    // 0x200d34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x200D34u;
    {
        const bool branch_taken_0x200d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D34u;
            // 0x200d38: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d34) {
            ctx->pc = 0x200D4Cu;
            goto label_200d4c;
        }
    }
    ctx->pc = 0x200D3Cu;
label_200d3c:
    // 0x200d3c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x200d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x200d40: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x200D40u;
    {
        const bool branch_taken_0x200d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D40u;
            // 0x200d44: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d40) {
            ctx->pc = 0x200C40u;
            runtime->cooperativeGuestYield();
            goto label_200c40;
        }
    }
    ctx->pc = 0x200D48u;
    // 0x200d48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x200d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_200d4c:
    // 0x200d4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x200d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200d50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x200d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200d54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x200d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200d58: 0x3e00008  jr          $ra
    ctx->pc = 0x200D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D58u;
            // 0x200d5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200C40u: goto label_200c40;
            case 0x200C6Cu: goto label_200c6c;
            case 0x200C88u: goto label_200c88;
            case 0x200D2Cu: goto label_200d2c;
            case 0x200D3Cu: goto label_200d3c;
            case 0x200D4Cu: goto label_200d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200D60u;
}

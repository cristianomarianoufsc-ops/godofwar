#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292950
// Address: 0x292950 - 0x292a88
void sub_00292950_0x292950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292950_0x292950");
#endif

    ctx->pc = 0x292950u;

    // 0x292950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292954: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292958: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x292958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x29295c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29295cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292960: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x292960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x292964: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x292968: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x292968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x29296c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29296cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x292970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292974: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x292974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x292978: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29297c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x29297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x292980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292988: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x292988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29298c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29298Cu;
    {
        const bool branch_taken_0x29298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29298c) {
            ctx->pc = 0x292990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29298Cu;
            // 0x292990: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x292994u;
            goto label_292994;
        }
    }
    ctx->pc = 0x292994u;
label_292994:
    // 0x292994: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x292994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292998: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x292998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29299c: 0x1812  mflo        $v1
    ctx->pc = 0x29299cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2929a0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2929a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2929a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2929A4u;
    {
        const bool branch_taken_0x2929a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929A4u;
            // 0x2929a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929a4) {
            ctx->pc = 0x2929C8u;
            goto label_2929c8;
        }
    }
    ctx->pc = 0x2929ACu;
    // 0x2929ac: 0x0  nop
    ctx->pc = 0x2929acu;
    // NOP
label_2929b0:
    // 0x2929b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2929b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2929b4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2929b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2929b8: 0x0  nop
    ctx->pc = 0x2929b8u;
    // NOP
    // 0x2929bc: 0x0  nop
    ctx->pc = 0x2929bcu;
    // NOP
    // 0x2929c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2929C0u;
    {
        const bool branch_taken_0x2929c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2929C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929C0u;
            // 0x2929c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929c0) {
            ctx->pc = 0x2929B0u;
            runtime->cooperativeGuestYield();
            goto label_2929b0;
        }
    }
    ctx->pc = 0x2929C8u;
label_2929c8:
    // 0x2929c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2929c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929cc: 0xc0a49da  jal         func_292768
    ctx->pc = 0x2929CCu;
    SET_GPR_U32(ctx, 31, 0x2929D4u);
    ctx->pc = 0x2929D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2929CCu;
            // 0x2929d0: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2929D4u; }
        if (ctx->pc != 0x2929D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2929D4u; }
        if (ctx->pc != 0x2929D4u) { return; }
    }
    ctx->pc = 0x2929D4u;
    // 0x2929d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2929d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2929d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2929dc: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x2929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x2929e0: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x2929e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2929e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2929E4u;
    {
        const bool branch_taken_0x2929e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2929E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929E4u;
            // 0x2929e8: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929e4) {
            ctx->pc = 0x292A28u;
            goto label_292a28;
        }
    }
    ctx->pc = 0x2929ECu;
    // 0x2929ec: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x2929ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2929f0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2929f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2929f4: 0x0  nop
    ctx->pc = 0x2929f4u;
    // NOP
label_2929f8:
    // 0x2929f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2929f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929fc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2929fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x292a00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292a04: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x292a08: 0xc0a4a12  jal         func_292848
    ctx->pc = 0x292A08u;
    SET_GPR_U32(ctx, 31, 0x292A10u);
    ctx->pc = 0x292A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292A08u;
            // 0x292a0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292848u;
    if (runtime->hasFunction(0x292848u)) {
        auto targetFn = runtime->lookupFunction(0x292848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A10u; }
        if (ctx->pc != 0x292A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292848_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A10u; }
        if (ctx->pc != 0x292A10u) { return; }
    }
    ctx->pc = 0x292A10u;
    // 0x292a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a14: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x292a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x292a18: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x292A18u;
    {
        const bool branch_taken_0x292a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292a18) {
            ctx->pc = 0x292A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292A18u;
            // 0x292a1c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2929F8u;
            runtime->cooperativeGuestYield();
            goto label_2929f8;
        }
    }
    ctx->pc = 0x292A20u;
    // 0x292a20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292A20u;
    {
        const bool branch_taken_0x292a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A20u;
            // 0x292a24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a20) {
            ctx->pc = 0x292A2Cu;
            goto label_292a2c;
        }
    }
    ctx->pc = 0x292A28u;
label_292a28:
    // 0x292a28: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x292a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_292a2c:
    // 0x292a2c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x292a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x292a30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x292A30u;
    {
        const bool branch_taken_0x292a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A30u;
            // 0x292a34: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a30) {
            ctx->pc = 0x292A5Cu;
            goto label_292a5c;
        }
    }
    ctx->pc = 0x292A38u;
label_292a38:
    // 0x292a38: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x292a38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a40: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x292a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x292a44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x292a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292a48: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x292a4c: 0xc0a4a12  jal         func_292848
    ctx->pc = 0x292A4Cu;
    SET_GPR_U32(ctx, 31, 0x292A54u);
    ctx->pc = 0x292A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292A4Cu;
            // 0x292a50: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292848u;
    if (runtime->hasFunction(0x292848u)) {
        auto targetFn = runtime->lookupFunction(0x292848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A54u; }
        if (ctx->pc != 0x292A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292848_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A54u; }
        if (ctx->pc != 0x292A54u) { return; }
    }
    ctx->pc = 0x292A54u;
    // 0x292a54: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x292A54u;
    {
        const bool branch_taken_0x292a54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x292A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A54u;
            // 0x292a58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a54) {
            ctx->pc = 0x292A38u;
            runtime->cooperativeGuestYield();
            goto label_292a38;
        }
    }
    ctx->pc = 0x292A5Cu;
label_292a5c:
    // 0x292a5c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x292a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292a60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x292a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x292a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292a68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x292a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292a70: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x292a70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292a74: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x292a74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x292A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A7Cu;
            // 0x292a80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292994u: goto label_292994;
            case 0x2929B0u: goto label_2929b0;
            case 0x2929C8u: goto label_2929c8;
            case 0x2929F8u: goto label_2929f8;
            case 0x292A28u: goto label_292a28;
            case 0x292A2Cu: goto label_292a2c;
            case 0x292A38u: goto label_292a38;
            case 0x292A5Cu: goto label_292a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292A84u;
    // 0x292a84: 0x0  nop
    ctx->pc = 0x292a84u;
    // NOP
}

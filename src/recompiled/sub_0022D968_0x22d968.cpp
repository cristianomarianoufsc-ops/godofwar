#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D968
// Address: 0x22d968 - 0x22dc18
void sub_0022D968_0x22d968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D968_0x22d968");
#endif

    ctx->pc = 0x22d968u;

    // 0x22d968: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22d96c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22d96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d970: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22d974: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d978: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x22d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x22d97c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x22d97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d980: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x22d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x22d984: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x22d984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d988: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x22d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x22d98c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x22d98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d990: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22d994: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d998: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x22d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x22d99c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x22d99cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d9a4: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x22d9a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9a8: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x22d9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d9ac: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x22d9acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9b0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22D9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9B0u;
            // 0x22d9b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D9B8u;
            goto label_22d9b8;
        }
    }
    ctx->pc = 0x22D9B8u;
label_22d9b8:
    // 0x22d9b8: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x22d9b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9bc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x22d9bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x22d9c0: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x22d9c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22d9c4: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x22d9c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9c8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x22d9c8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22d9cc: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9d0: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x22d9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22d9d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22d9d8: 0x2810  mfhi        $a1
    ctx->pc = 0x22d9d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22d9dc: 0x1012  mflo        $v0
    ctx->pc = 0x22d9dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22d9e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22d9e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22d9e8: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x22d9e8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x22d9ec: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x22d9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d9f0: 0x1812  mflo        $v1
    ctx->pc = 0x22d9f0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22d9f4: 0x3010  mfhi        $a2
    ctx->pc = 0x22d9f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x22d9f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22d9fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22da00: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x22da00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x22da04: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x22da04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x22da08: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x22da08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22da0c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x22da0cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22da10: 0xa3a00014  sb          $zero, 0x14($sp)
    ctx->pc = 0x22da10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x22da14: 0x2810  mfhi        $a1
    ctx->pc = 0x22da14u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22da18: 0x1012  mflo        $v0
    ctx->pc = 0x22da18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22da1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22da20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22da24: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x22da24u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x22da28: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x22da28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x22da2c: 0x1812  mflo        $v1
    ctx->pc = 0x22da2cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22da30: 0x3010  mfhi        $a2
    ctx->pc = 0x22da30u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x22da34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22da34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22da38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22da3c: 0xa3a30015  sb          $v1, 0x15($sp)
    ctx->pc = 0x22da3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x22da40: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x22da40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x22da44: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x22da44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x22da48: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x22da48u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22da4c: 0x2463f830  addiu       $v1, $v1, -0x7D0
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965296));
    // 0x22da50: 0x2810  mfhi        $a1
    ctx->pc = 0x22da50u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22da54: 0x1012  mflo        $v0
    ctx->pc = 0x22da54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22da58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22da58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22da5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22da60: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x22da60u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22da64: 0xa3a20016  sb          $v0, 0x16($sp)
    ctx->pc = 0x22da64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x22da68: 0x1812  mflo        $v1
    ctx->pc = 0x22da68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22da6c: 0x3010  mfhi        $a2
    ctx->pc = 0x22da6cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x22da70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22da70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22da74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22da74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22da78: 0xc0a0d4a  jal         func_283528
    ctx->pc = 0x22DA78u;
    SET_GPR_U32(ctx, 31, 0x22DA80u);
    ctx->pc = 0x22DA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA78u;
            // 0x22da7c: 0xa3a30017  sb          $v1, 0x17($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283528u;
    if (runtime->hasFunction(0x283528u)) {
        auto targetFn = runtime->lookupFunction(0x283528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA80u; }
        if (ctx->pc != 0x22DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283528_0x283570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA80u; }
        if (ctx->pc != 0x22DA80u) { return; }
    }
    ctx->pc = 0x22DA80u;
    // 0x22da80: 0x93a30017  lbu         $v1, 0x17($sp)
    ctx->pc = 0x22da80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x22da84: 0x93a60016  lbu         $a2, 0x16($sp)
    ctx->pc = 0x22da84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x22da88: 0x93aa0015  lbu         $t2, 0x15($sp)
    ctx->pc = 0x22da88u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x22da8c: 0x33902  srl         $a3, $v1, 4
    ctx->pc = 0x22da8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x22da90: 0x93ad0013  lbu         $t5, 0x13($sp)
    ctx->pc = 0x22da90u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x22da94: 0xf03818  mult        $a3, $a3, $s0
    ctx->pc = 0x22da94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x22da98: 0x93ab0012  lbu         $t3, 0x12($sp)
    ctx->pc = 0x22da98u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x22da9c: 0x61102  srl         $v0, $a2, 4
    ctx->pc = 0x22da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x22daa0: 0x93a80011  lbu         $t0, 0x11($sp)
    ctx->pc = 0x22daa0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x22daa4: 0xa2102  srl         $a0, $t2, 4
    ctx->pc = 0x22daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x22daa8: 0xd6102  srl         $t4, $t5, 4
    ctx->pc = 0x22daa8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x22daac: 0xb4902  srl         $t1, $t3, 4
    ctx->pc = 0x22daacu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x22dab0: 0x82902  srl         $a1, $t0, 4
    ctx->pc = 0x22dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x22dab4: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x22dab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22dab8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x22dab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22dabc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22dabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22dac0: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x22dac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22dac4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22dac8: 0x1304818  mult        $t1, $t1, $s0
    ctx->pc = 0x22dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x22dacc: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x22daccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x22dad0: 0x1906018  mult        $t4, $t4, $s0
    ctx->pc = 0x22dad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x22dad4: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x22dad4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x22dad8: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x22dad8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x22dadc: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x22dadcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x22dae0: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x22dae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x22dae4: 0x468821  addu        $s1, $v0, $a2
    ctx->pc = 0x22dae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22dae8: 0x8a9821  addu        $s3, $a0, $t2
    ctx->pc = 0x22dae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x22daec: 0x24f207d0  addiu       $s2, $a3, 0x7D0
    ctx->pc = 0x22daecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 2000));
    // 0x22daf0: 0x12ba021  addu        $s4, $t1, $t3
    ctx->pc = 0x22daf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x22daf4: 0xa8a821  addu        $s5, $a1, $t0
    ctx->pc = 0x22daf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22daf8: 0xc0a0c56  jal         func_283158
    ctx->pc = 0x22DAF8u;
    SET_GPR_U32(ctx, 31, 0x22DB00u);
    ctx->pc = 0x22DAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAF8u;
            // 0x22dafc: 0x18d8021  addu        $s0, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283158u;
    if (runtime->hasFunction(0x283158u)) {
        auto targetFn = runtime->lookupFunction(0x283158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB00u; }
        if (ctx->pc != 0x22DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283158_0x283158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB00u; }
        if (ctx->pc != 0x22DB00u) { return; }
    }
    ctx->pc = 0x22DB00u;
    // 0x22db00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22db04: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22DB04u;
    {
        const bool branch_taken_0x22db04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB04u;
            // 0x22db08: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db04) {
            ctx->pc = 0x22DB9Cu;
            goto label_22db9c;
        }
    }
    ctx->pc = 0x22DB0Cu;
    // 0x22db0c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x22db0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x22db10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DB10u;
    {
        const bool branch_taken_0x22db10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB10u;
            // 0x22db14: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db10) {
            ctx->pc = 0x22DB28u;
            goto label_22db28;
        }
    }
    ctx->pc = 0x22DB18u;
    // 0x22db18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22db1c: 0x24478320  addiu       $a3, $v0, -0x7CE0
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935328));
    // 0x22db20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22DB20u;
    {
        const bool branch_taken_0x22db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB20u;
            // 0x22db24: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db20) {
            ctx->pc = 0x22DB3Cu;
            goto label_22db3c;
        }
    }
    ctx->pc = 0x22DB28u;
label_22db28:
    // 0x22db28: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22db2c: 0x2a04000d  slti        $a0, $s0, 0xD
    ctx->pc = 0x22db2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x22db30: 0x2603fff4  addiu       $v1, $s0, -0xC
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x22db34: 0x24478328  addiu       $a3, $v0, -0x7CD8
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935336));
    // 0x22db38: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x22db38u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_22db3c:
    // 0x22db3c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22db40: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x22db40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x22db44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DB44u;
    {
        const bool branch_taken_0x22db44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB44u;
            // 0x22db48: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db44) {
            ctx->pc = 0x22DB60u;
            goto label_22db60;
        }
    }
    ctx->pc = 0x22DB4Cu;
    // 0x22db4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22db50: 0x24421238  addiu       $v0, $v0, 0x1238
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4664));
    // 0x22db54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22db54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22db58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DB58u;
    {
        const bool branch_taken_0x22db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB58u;
            // 0x22db5c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db58) {
            ctx->pc = 0x22DB68u;
            goto label_22db68;
        }
    }
    ctx->pc = 0x22DB60u;
label_22db60:
    // 0x22db60: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22db64: 0x24462fc8  addiu       $a2, $v0, 0x2FC8
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12232));
label_22db68:
    // 0x22db68: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22db68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22db6c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22db70: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x22db70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x22db74: 0x248475e8  addiu       $a0, $a0, 0x75E8
    ctx->pc = 0x22db74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30184));
    // 0x22db78: 0x24a58330  addiu       $a1, $a1, -0x7CD0
    ctx->pc = 0x22db78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935344));
    // 0x22db7c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22db7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db80: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22db80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22db84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db88: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x22db88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db8c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22DB8Cu;
    SET_GPR_U32(ctx, 31, 0x22DB94u);
    ctx->pc = 0x22DB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB8Cu;
            // 0x22db90: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB94u; }
        if (ctx->pc != 0x22DB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB94u; }
        if (ctx->pc != 0x22DB94u) { return; }
    }
    ctx->pc = 0x22DB94u;
    // 0x22db94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22DB94u;
    {
        const bool branch_taken_0x22db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB94u;
            // 0x22db98: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db94) {
            ctx->pc = 0x22DBF0u;
            goto label_22dbf0;
        }
    }
    ctx->pc = 0x22DB9Cu;
label_22db9c:
    // 0x22db9c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x22db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22dba0: 0x244475e8  addiu       $a0, $v0, 0x75E8
    ctx->pc = 0x22dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
    // 0x22dba4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22dba8: 0x24458350  addiu       $a1, $v0, -0x7CB0
    ctx->pc = 0x22dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935376));
    // 0x22dbac: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x22dbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x22dbb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DBB0u;
    {
        const bool branch_taken_0x22dbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBB0u;
            // 0x22dbb4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbb0) {
            ctx->pc = 0x22DBCCu;
            goto label_22dbcc;
        }
    }
    ctx->pc = 0x22DBB8u;
    // 0x22dbb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22dbbc: 0x24421238  addiu       $v0, $v0, 0x1238
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4664));
    // 0x22dbc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22dbc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DBC4u;
    {
        const bool branch_taken_0x22dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBC4u;
            // 0x22dbc8: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbc4) {
            ctx->pc = 0x22DBD4u;
            goto label_22dbd4;
        }
    }
    ctx->pc = 0x22DBCCu;
label_22dbcc:
    // 0x22dbcc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22dbd0: 0x24462fc8  addiu       $a2, $v0, 0x2FC8
    ctx->pc = 0x22dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12232));
label_22dbd4:
    // 0x22dbd4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22dbd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22dbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22dbdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbe0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x22dbe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbe4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22DBE4u;
    SET_GPR_U32(ctx, 31, 0x22DBECu);
    ctx->pc = 0x22DBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBE4u;
            // 0x22dbe8: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBECu; }
        if (ctx->pc != 0x22DBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBECu; }
        if (ctx->pc != 0x22DBECu) { return; }
    }
    ctx->pc = 0x22DBECu;
    // 0x22dbec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_22dbf0:
    // 0x22dbf0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22dbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22dbf4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x22dbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22dbf8: 0x244275e8  addiu       $v0, $v0, 0x75E8
    ctx->pc = 0x22dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
    // 0x22dbfc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x22dbfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22dc00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x22dc00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22dc04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22dc04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22dc08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x22dc08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dc0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22dc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dc10: 0x3e00008  jr          $ra
    ctx->pc = 0x22DC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC10u;
            // 0x22dc14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D9B8u: goto label_22d9b8;
            case 0x22DB28u: goto label_22db28;
            case 0x22DB3Cu: goto label_22db3c;
            case 0x22DB60u: goto label_22db60;
            case 0x22DB68u: goto label_22db68;
            case 0x22DB9Cu: goto label_22db9c;
            case 0x22DBCCu: goto label_22dbcc;
            case 0x22DBD4u: goto label_22dbd4;
            case 0x22DBF0u: goto label_22dbf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22DC18u;
}

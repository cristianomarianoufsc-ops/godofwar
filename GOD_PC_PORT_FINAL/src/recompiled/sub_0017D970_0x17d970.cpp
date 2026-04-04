#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D970
// Address: 0x17d970 - 0x17da78
void sub_0017D970_0x17d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D970_0x17d970");
#endif

    ctx->pc = 0x17d970u;

    // 0x17d970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17d974: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17d978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d97c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17d97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d980: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17d984: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17d984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d988: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17d98c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17d98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d990: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17d994: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17d994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d99c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x17d99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9a4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17D9A4u;
    SET_GPR_U32(ctx, 31, 0x17D9ACu);
    ctx->pc = 0x17D9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9A4u;
            // 0x17d9a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9ACu; }
        if (ctx->pc != 0x17D9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9ACu; }
        if (ctx->pc != 0x17D9ACu) { return; }
    }
    ctx->pc = 0x17D9ACu;
    // 0x17d9ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17d9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D9B0u;
    {
        const bool branch_taken_0x17d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9B0u;
            // 0x17d9b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9b0) {
            ctx->pc = 0x17D9C0u;
            goto label_17d9c0;
        }
    }
    ctx->pc = 0x17D9B8u;
label_17d9b8:
    // 0x17d9b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17d9bc: 0x34720001  ori         $s2, $v1, 0x1
    ctx->pc = 0x17d9bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_17d9c0:
    // 0x17d9c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17d9c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17d9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17d9c8: 0x0  nop
    ctx->pc = 0x17d9c8u;
    // NOP
    // 0x17d9cc: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17D9CCu;
    {
        const bool branch_taken_0x17d9cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9CCu;
            // 0x17d9d0: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9cc) {
            ctx->pc = 0x17D9B8u;
            runtime->cooperativeGuestYield();
            goto label_17d9b8;
        }
    }
    ctx->pc = 0x17D9D4u;
    // 0x17d9d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17d9d8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x17d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x17d9dc: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x17d9dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17d9e0: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x17d9e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d9e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x17d9ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x17d9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x17d9f0: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x17d9f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17d9f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17d9f8: 0x92280001  lbu         $t0, 0x1($s1)
    ctx->pc = 0x17d9f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x17d9fc: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x17d9fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17da00: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x17da04: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x17da04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x17da08: 0x2729004  sllv        $s2, $s2, $s3
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
    // 0x17da0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17da10: 0x123827  nor         $a3, $zero, $s2
    ctx->pc = 0x17da10u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x17da14: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x17da14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x17da18: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x17da18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x17da1c: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x17da1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x17da20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17da20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17da24: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17da28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17da2c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x17da2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x17da30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17da30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17da34: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x17da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x17da38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17da38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17da3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17da40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17da40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17da44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17da44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17da48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17da48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17da4c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x17da4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17da50: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x17da50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17da54: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x17da54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17da58: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x17da58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17da5c: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x17da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17da60: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x17da60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17da64: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x17da64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x17da68: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x17da68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17da6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17da6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17da70: 0x3e00008  jr          $ra
    ctx->pc = 0x17DA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA70u;
            // 0x17da74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D9B8u: goto label_17d9b8;
            case 0x17D9C0u: goto label_17d9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DA78u;
}

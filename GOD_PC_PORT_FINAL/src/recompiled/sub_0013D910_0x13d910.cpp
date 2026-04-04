#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D910
// Address: 0x13d910 - 0x13da10
void sub_0013D910_0x13d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D910_0x13d910");
#endif

    ctx->pc = 0x13d910u;

    // 0x13d910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13d914: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13d918: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13d91c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x13d91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d920: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13d924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d928: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13d92c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13d92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d930: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13d934: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13d934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d93c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13d93cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d940: 0x2741018  mult        $v0, $s3, $s4
    ctx->pc = 0x13d940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13d944: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13d944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13d948: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x13d948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13d94c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13D94Cu;
    SET_GPR_U32(ctx, 31, 0x13D954u);
    ctx->pc = 0x13D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D94Cu;
            // 0x13d950: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D954u; }
        if (ctx->pc != 0x13D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D954u; }
        if (ctx->pc != 0x13D954u) { return; }
    }
    ctx->pc = 0x13D954u;
    // 0x13d954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d958: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x13d95c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13d95cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13d960: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13D960u;
    {
        const bool branch_taken_0x13d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d960) {
            ctx->pc = 0x13D964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D960u;
            // 0x13d964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D968u;
            goto label_13d968;
        }
    }
    ctx->pc = 0x13D968u;
label_13d968:
    // 0x13d968: 0x3c023141  lui         $v0, 0x3141
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12609 << 16));
    // 0x13d96c: 0x34425927  ori         $v0, $v0, 0x5927
    ctx->pc = 0x13d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22823);
    // 0x13d970: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x13d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x13d974: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13d974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13d978: 0xa490000c  sh          $s0, 0xC($a0)
    ctx->pc = 0x13d978u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x13d97c: 0xa492000e  sh          $s2, 0xE($a0)
    ctx->pc = 0x13d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x13d980: 0xac940008  sw          $s4, 0x8($a0)
    ctx->pc = 0x13d980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 20));
    // 0x13d984: 0x1810  mfhi        $v1
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13d988: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x13d988u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13d98c: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x13d98cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x13d990: 0x1010  mfhi        $v0
    ctx->pc = 0x13d990u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13d994: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D994u;
    {
        const bool branch_taken_0x13d994 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D994u;
            // 0x13d998: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d994) {
            ctx->pc = 0x13D9A8u;
            goto label_13d9a8;
        }
    }
    ctx->pc = 0x13D99Cu;
    // 0x13d99c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13D99Cu;
    {
        const bool branch_taken_0x13d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D99Cu;
            // 0x13d9a0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d99c) {
            ctx->pc = 0x13D9E8u;
            goto label_13d9e8;
        }
    }
    ctx->pc = 0x13D9A4u;
    // 0x13d9a4: 0x0  nop
    ctx->pc = 0x13d9a4u;
    // NOP
label_13d9a8:
    // 0x13d9a8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x13d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x13d9ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d9b0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x13d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x13d9b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13d9b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9b8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x13d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13d9bc: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13D9BCu;
    {
        const bool branch_taken_0x13d9bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13d9bc) {
            ctx->pc = 0x13D9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D9BCu;
            // 0x13d9c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D9E8u;
            goto label_13d9e8;
        }
    }
    ctx->pc = 0x13D9C4u;
    // 0x13d9c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13d9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d9c8:
    // 0x13d9c8: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x13d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x13d9cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13d9d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d9d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d9d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13d9dc: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D9DCu;
    {
        const bool branch_taken_0x13d9dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D9DCu;
            // 0x13d9e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9dc) {
            ctx->pc = 0x13D9C8u;
            runtime->cooperativeGuestYield();
            goto label_13d9c8;
        }
    }
    ctx->pc = 0x13D9E4u;
    // 0x13d9e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x13d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_13d9e8:
    // 0x13d9e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13d9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d9ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13d9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13d9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d9f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13d9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13d9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d9fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13d9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13da04: 0x3e00008  jr          $ra
    ctx->pc = 0x13DA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA04u;
            // 0x13da08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D968u: goto label_13d968;
            case 0x13D9A8u: goto label_13d9a8;
            case 0x13D9C8u: goto label_13d9c8;
            case 0x13D9E8u: goto label_13d9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DA0Cu;
    // 0x13da0c: 0x0  nop
    ctx->pc = 0x13da0cu;
    // NOP
}

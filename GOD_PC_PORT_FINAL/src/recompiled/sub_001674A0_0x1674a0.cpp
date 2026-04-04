#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001674A0
// Address: 0x1674a0 - 0x167568
void sub_001674A0_0x1674a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001674A0_0x1674a0");
#endif

    ctx->pc = 0x1674a0u;

    // 0x1674a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1674a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1674a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1674a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1674a8: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x1674a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
    // 0x1674ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1674acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1674b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1674b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1674b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1674b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1674b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1674bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1674bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1674c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1674c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1674c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1674c8: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1674cc: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x1674ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1674d0: 0xde280028  ld          $t0, 0x28($s1)
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1674d4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x1674d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1674d8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1674d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1674dc: 0x1032824  and         $a1, $t0, $v1
    ctx->pc = 0x1674dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1674e0: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x1674e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x1674e4: 0x829025  or          $s2, $a0, $v0
    ctx->pc = 0x1674e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1674e8: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x1674e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x1674ec: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1674ECu;
    {
        const bool branch_taken_0x1674ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1674F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674ECu;
            // 0x1674f0: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674ec) {
            ctx->pc = 0x167514u;
            goto label_167514;
        }
    }
    ctx->pc = 0x1674F4u;
    // 0x1674f4: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1674f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1674f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1674f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674fc: 0x26107310  addiu       $s0, $s0, 0x7310
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29456));
    // 0x167500: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167504: 0xc059c06  jal         func_167018
    ctx->pc = 0x167504u;
    SET_GPR_U32(ctx, 31, 0x16750Cu);
    ctx->pc = 0x167508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167504u;
            // 0x167508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167018u;
    if (runtime->hasFunction(0x167018u)) {
        auto targetFn = runtime->lookupFunction(0x167018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16750Cu; }
        if (ctx->pc != 0x16750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_167018_0x167318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16750Cu; }
        if (ctx->pc != 0x16750Cu) { return; }
    }
    ctx->pc = 0x16750Cu;
    // 0x16750c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16750Cu;
    {
        const bool branch_taken_0x16750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16750Cu;
            // 0x167510: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16750c) {
            ctx->pc = 0x167544u;
            goto label_167544;
        }
    }
    ctx->pc = 0x167514u;
label_167514:
    // 0x167514: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x167518: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x16751c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16751Cu;
    {
        const bool branch_taken_0x16751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16751Cu;
            // 0x167520: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16751c) {
            ctx->pc = 0x16753Cu;
            goto label_16753c;
        }
    }
    ctx->pc = 0x167524u;
    // 0x167524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167528: 0xc059c06  jal         func_167018
    ctx->pc = 0x167528u;
    SET_GPR_U32(ctx, 31, 0x167530u);
    ctx->pc = 0x16752Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167528u;
            // 0x16752c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167018u;
    if (runtime->hasFunction(0x167018u)) {
        auto targetFn = runtime->lookupFunction(0x167018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167530u; }
        if (ctx->pc != 0x167530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_167018_0x167318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167530u; }
        if (ctx->pc != 0x167530u) { return; }
    }
    ctx->pc = 0x167530u;
    // 0x167530: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x167534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167538: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x167538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_16753c:
    // 0x16753c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x167540: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x167540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_167544:
    // 0x167544: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x167544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167548: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x167548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16754c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16754cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167550: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x167550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167554: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x167554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16755c: 0x3e00008  jr          $ra
    ctx->pc = 0x16755Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16755Cu;
            // 0x167560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167514u: goto label_167514;
            case 0x16753Cu: goto label_16753c;
            case 0x167544u: goto label_167544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167564u;
    // 0x167564: 0x0  nop
    ctx->pc = 0x167564u;
    // NOP
}

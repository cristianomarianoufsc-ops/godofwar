#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB260
// Address: 0x1bb260 - 0x1bb360
void sub_001BB260_0x1bb260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB260_0x1bb260");
#endif

    ctx->pc = 0x1bb260u;

    // 0x1bb260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bb264: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bb264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bb268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb26c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb270: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1bb270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1bb274: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb278: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1bb278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1bb27c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bb27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb280: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bb280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1bb284: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bb284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb288: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bb288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1bb28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bb290:
    // 0x1bb290: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bb290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb298: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x1bb298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bb29c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb2a0: 0x758021  addu        $s0, $v1, $s5
    ctx->pc = 0x1bb2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1bb2a4: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1BB2A4u;
    SET_GPR_U32(ctx, 31, 0x1BB2ACu);
    ctx->pc = 0x1BB2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2A4u;
            // 0x1bb2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2ACu; }
        if (ctx->pc != 0x1BB2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2ACu; }
        if (ctx->pc != 0x1BB2ACu) { return; }
    }
    ctx->pc = 0x1BB2ACu;
    // 0x1bb2ac: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1bb2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb2b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bb2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2b8: 0xc06ecd8  jal         func_1BB360
    ctx->pc = 0x1BB2B8u;
    SET_GPR_U32(ctx, 31, 0x1BB2C0u);
    ctx->pc = 0x1BB2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2B8u;
            // 0x1bb2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB360u;
    if (runtime->hasFunction(0x1BB360u)) {
        auto targetFn = runtime->lookupFunction(0x1BB360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C0u; }
        if (ctx->pc != 0x1BB2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB360_0x1bb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C0u; }
        if (ctx->pc != 0x1BB2C0u) { return; }
    }
    ctx->pc = 0x1BB2C0u;
    // 0x1bb2c0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BB2C0u;
    {
        const bool branch_taken_0x1bb2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2c0) {
            ctx->pc = 0x1BB2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2C0u;
            // 0x1bb2c4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB32Cu;
            goto label_1bb32c;
        }
    }
    ctx->pc = 0x1BB2C8u;
    // 0x1bb2c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bb2cc: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bb2d0: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bb2d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bb2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb2d8: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bb2dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb2e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB2E0u;
    {
        const bool branch_taken_0x1bb2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2e0) {
            ctx->pc = 0x1BB2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2E0u;
            // 0x1bb2e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB32Cu;
            goto label_1bb32c;
        }
    }
    ctx->pc = 0x1BB2E8u;
    // 0x1bb2e8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1BB2E8u;
    SET_GPR_U32(ctx, 31, 0x1BB2F0u);
    ctx->pc = 0x1BB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2E8u;
            // 0x1bb2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F0u; }
        if (ctx->pc != 0x1BB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F0u; }
        if (ctx->pc != 0x1BB2F0u) { return; }
    }
    ctx->pc = 0x1BB2F0u;
    // 0x1bb2f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb2f4: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bb2f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bb2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bb2fc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB2FCu;
    {
        const bool branch_taken_0x1bb2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2fc) {
            ctx->pc = 0x1BB300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2FCu;
            // 0x1bb300: 0x8c620064  lw          $v0, 0x64($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB31Cu;
            goto label_1bb31c;
        }
    }
    ctx->pc = 0x1BB304u;
    // 0x1bb304: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bb304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1bb308: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB308u;
    {
        const bool branch_taken_0x1bb308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb308) {
            ctx->pc = 0x1BB30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB308u;
            // 0x1bb30c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB32Cu;
            goto label_1bb32c;
        }
    }
    ctx->pc = 0x1BB310u;
    // 0x1bb310: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1bb310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB314u;
    {
        const bool branch_taken_0x1bb314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB314u;
            // 0x1bb318: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb314) {
            ctx->pc = 0x1BB320u;
            goto label_1bb320;
        }
    }
    ctx->pc = 0x1BB31Cu;
label_1bb31c:
    // 0x1bb31c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bb31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1bb320:
    // 0x1bb320: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bb320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb324: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1bb324u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bb32c:
    // 0x1bb32c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1bb32cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1bb330: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1bb330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb334: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BB334u;
    {
        const bool branch_taken_0x1bb334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB334u;
            // 0x1bb338: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb334) {
            ctx->pc = 0x1BB290u;
            runtime->cooperativeGuestYield();
            goto label_1bb290;
        }
    }
    ctx->pc = 0x1BB33Cu;
    // 0x1bb33c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bb33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb340: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bb340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb344: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bb344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb34c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1bb34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb350: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1bb350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb358: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB358u;
            // 0x1bb35c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB290u: goto label_1bb290;
            case 0x1BB31Cu: goto label_1bb31c;
            case 0x1BB320u: goto label_1bb320;
            case 0x1BB32Cu: goto label_1bb32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB360u;
}

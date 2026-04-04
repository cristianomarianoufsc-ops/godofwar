#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D2F0
// Address: 0x28d2f0 - 0x28d3b8
void sub_0028D2F0_0x28d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D2F0_0x28d2f0");
#endif

    ctx->pc = 0x28d2f0u;

    // 0x28d2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d2f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28d2f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28d2fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28d2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d300: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x28d304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d308: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28d30c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d310: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28d314: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D314u;
    {
        const bool branch_taken_0x28d314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D314u;
            // 0x28d318: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d314) {
            ctx->pc = 0x28D324u;
            goto label_28d324;
        }
    }
    ctx->pc = 0x28D31Cu;
    // 0x28d31c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28D31Cu;
    {
        const bool branch_taken_0x28d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D31Cu;
            // 0x28d320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d31c) {
            ctx->pc = 0x28D394u;
            goto label_28d394;
        }
    }
    ctx->pc = 0x28D324u;
label_28d324:
    // 0x28d324: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x28d324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x28d328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D328u;
    {
        const bool branch_taken_0x28d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D328u;
            // 0x28d32c: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d328) {
            ctx->pc = 0x28D334u;
            goto label_28d334;
        }
    }
    ctx->pc = 0x28D330u;
label_28d330:
    // 0x28d330: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28d330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28d334:
    // 0x28d334: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28d338: 0x12340010  beq         $s1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D338u;
    {
        const bool branch_taken_0x28d338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x28d338) {
            ctx->pc = 0x28D37Cu;
            goto label_28d37c;
        }
    }
    ctx->pc = 0x28D340u;
    // 0x28d340: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D340u;
    SET_GPR_U32(ctx, 31, 0x28D348u);
    ctx->pc = 0x28D344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D340u;
            // 0x28d344: 0x82440000  lb          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D348u; }
        if (ctx->pc != 0x28D348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D348u; }
        if (ctx->pc != 0x28D348u) { return; }
    }
    ctx->pc = 0x28D348u;
    // 0x28d348: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d34c: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D34Cu;
    SET_GPR_U32(ctx, 31, 0x28D354u);
    ctx->pc = 0x28D350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D34Cu;
            // 0x28d350: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D354u; }
        if (ctx->pc != 0x28D354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D354u; }
        if (ctx->pc != 0x28D354u) { return; }
    }
    ctx->pc = 0x28D354u;
    // 0x28d354: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D354u;
    {
        const bool branch_taken_0x28d354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d354) {
            ctx->pc = 0x28D37Cu;
            goto label_28d37c;
        }
    }
    ctx->pc = 0x28D35Cu;
    // 0x28d35c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D35Cu;
    {
        const bool branch_taken_0x28d35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d35c) {
            ctx->pc = 0x28D37Cu;
            goto label_28d37c;
        }
    }
    ctx->pc = 0x28D364u;
    // 0x28d364: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x28d364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d368: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D368u;
    {
        const bool branch_taken_0x28d368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d368) {
            ctx->pc = 0x28D37Cu;
            goto label_28d37c;
        }
    }
    ctx->pc = 0x28D370u;
    // 0x28d370: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x28d370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d374: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28D374u;
    {
        const bool branch_taken_0x28d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d374) {
            ctx->pc = 0x28D378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D374u;
            // 0x28d378: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D330u;
            runtime->cooperativeGuestYield();
            goto label_28d330;
        }
    }
    ctx->pc = 0x28D37Cu;
label_28d37c:
    // 0x28d37c: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D37Cu;
    SET_GPR_U32(ctx, 31, 0x28D384u);
    ctx->pc = 0x28D380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D37Cu;
            // 0x28d380: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D384u; }
        if (ctx->pc != 0x28D384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D384u; }
        if (ctx->pc != 0x28D384u) { return; }
    }
    ctx->pc = 0x28D384u;
    // 0x28d384: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x28d384u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d388: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D388u;
    SET_GPR_U32(ctx, 31, 0x28D390u);
    ctx->pc = 0x28D38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D388u;
            // 0x28d38c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D390u; }
        if (ctx->pc != 0x28D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D390u; }
        if (ctx->pc != 0x28D390u) { return; }
    }
    ctx->pc = 0x28D390u;
    // 0x28d390: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x28d390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28d394:
    // 0x28d394: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d398: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d39c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d3a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28d3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d3a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28d3a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x28D3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3ACu;
            // 0x28d3b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D324u: goto label_28d324;
            case 0x28D330u: goto label_28d330;
            case 0x28D334u: goto label_28d334;
            case 0x28D37Cu: goto label_28d37c;
            case 0x28D394u: goto label_28d394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D3B4u;
    // 0x28d3b4: 0x0  nop
    ctx->pc = 0x28d3b4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224308
// Address: 0x224308 - 0x2243e0
void sub_00224308_0x224308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224308_0x224308");
#endif

    ctx->pc = 0x224308u;

    // 0x224308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22430c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x224310: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x224310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x224314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x224314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224318: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22431c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x22431cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224320: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x224320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x224324: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x224324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224328: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x224328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22432c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22432cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224334: 0x0  nop
    ctx->pc = 0x224334u;
    // NOP
label_224338:
    // 0x224338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22433c: 0xc0890f8  jal         func_2243E0
    ctx->pc = 0x22433Cu;
    SET_GPR_U32(ctx, 31, 0x224344u);
    ctx->pc = 0x224340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22433Cu;
            // 0x224340: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2243E0u;
    if (runtime->hasFunction(0x2243E0u)) {
        auto targetFn = runtime->lookupFunction(0x2243E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224344u; }
        if (ctx->pc != 0x224344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002243E0_0x2243e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224344u; }
        if (ctx->pc != 0x224344u) { return; }
    }
    ctx->pc = 0x224344u;
    // 0x224344: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x224348: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x224348u;
    {
        const bool branch_taken_0x224348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224348) {
            ctx->pc = 0x22434Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224348u;
            // 0x22434c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2243A0u;
            goto label_2243a0;
        }
    }
    ctx->pc = 0x224350u;
    // 0x224350: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x224350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x224354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224358: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x224358u;
    {
        const bool branch_taken_0x224358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x22435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224358u;
            // 0x22435c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224358) {
            ctx->pc = 0x22438Cu;
            goto label_22438c;
        }
    }
    ctx->pc = 0x224360u;
    // 0x224360: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x224360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x224364: 0x0  nop
    ctx->pc = 0x224364u;
    // NOP
label_224368:
    // 0x224368: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22436c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x22436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x224370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x224374: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x224374u;
    SET_GPR_U32(ctx, 31, 0x22437Cu);
    ctx->pc = 0x224378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224374u;
            // 0x224378: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22437Cu; }
        if (ctx->pc != 0x22437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22437Cu; }
        if (ctx->pc != 0x22437Cu) { return; }
    }
    ctx->pc = 0x22437Cu;
    // 0x22437c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x224380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x224380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224384: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x224384u;
    {
        const bool branch_taken_0x224384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224384u;
            // 0x224388: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224384) {
            ctx->pc = 0x224368u;
            runtime->cooperativeGuestYield();
            goto label_224368;
        }
    }
    ctx->pc = 0x22438Cu;
label_22438c:
    // 0x22438c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x22438cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x224390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224394: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x224394u;
    SET_GPR_U32(ctx, 31, 0x22439Cu);
    ctx->pc = 0x224398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224394u;
            // 0x224398: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22439Cu; }
        if (ctx->pc != 0x22439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22439Cu; }
        if (ctx->pc != 0x22439Cu) { return; }
    }
    ctx->pc = 0x22439Cu;
    // 0x22439c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2243a0:
    // 0x2243a0: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2243a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2243a4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2243A4u;
    {
        const bool branch_taken_0x2243a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243A4u;
            // 0x2243a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243a4) {
            ctx->pc = 0x224338u;
            runtime->cooperativeGuestYield();
            goto label_224338;
        }
    }
    ctx->pc = 0x2243ACu;
    // 0x2243ac: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2243acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2243b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2243B0u;
    {
        const bool branch_taken_0x2243b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243B0u;
            // 0x2243b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b0) {
            ctx->pc = 0x2243C4u;
            goto label_2243c4;
        }
    }
    ctx->pc = 0x2243B8u;
    // 0x2243b8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2243B8u;
    SET_GPR_U32(ctx, 31, 0x2243C0u);
    ctx->pc = 0x2243BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2243B8u;
            // 0x2243bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243C0u; }
        if (ctx->pc != 0x2243C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243C0u; }
        if (ctx->pc != 0x2243C0u) { return; }
    }
    ctx->pc = 0x2243C0u;
    // 0x2243c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2243c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2243c4:
    // 0x2243c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2243c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2243c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2243c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2243cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2243ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2243d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2243d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2243d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2243d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2243d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2243D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2243DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243D8u;
            // 0x2243dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224338u: goto label_224338;
            case 0x224368u: goto label_224368;
            case 0x22438Cu: goto label_22438c;
            case 0x2243A0u: goto label_2243a0;
            case 0x2243C4u: goto label_2243c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2243E0u;
}

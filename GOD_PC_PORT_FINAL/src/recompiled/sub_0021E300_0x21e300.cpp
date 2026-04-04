#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E300
// Address: 0x21e300 - 0x21e410
void sub_0021E300_0x21e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E300_0x21e300");
#endif

    ctx->pc = 0x21e300u;

    // 0x21e300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e304: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e308: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21e30c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21e310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21e314: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21e314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21e318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e320: 0xac60e580  sw          $zero, -0x1A80($v1)
    ctx->pc = 0x21e320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960512), GPR_U32(ctx, 0));
    // 0x21e324: 0x8c4401c4  lw          $a0, 0x1C4($v0)
    ctx->pc = 0x21e324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x21e328: 0xc06f77a  jal         func_1BDDE8
    ctx->pc = 0x21E328u;
    SET_GPR_U32(ctx, 31, 0x21E330u);
    ctx->pc = 0x21E32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E328u;
            // 0x21e32c: 0xaca0e584  sw          $zero, -0x1A7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDE8u;
    if (runtime->hasFunction(0x1BDDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E330u; }
        if (ctx->pc != 0x21E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDDE8_0x1bdde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E330u; }
        if (ctx->pc != 0x21E330u) { return; }
    }
    ctx->pc = 0x21E330u;
    // 0x21e330: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e334: 0x8c44e5d0  lw          $a0, -0x1A30($v0)
    ctx->pc = 0x21e334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960592)));
    // 0x21e338: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E338u;
    {
        const bool branch_taken_0x21e338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E338u;
            // 0x21e33c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e338) {
            ctx->pc = 0x21E354u;
            goto label_21e354;
        }
    }
    ctx->pc = 0x21E340u;
    // 0x21e340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e348: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e34c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x21E34Cu;
    SET_GPR_U32(ctx, 31, 0x21E354u);
    ctx->pc = 0x21E350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E34Cu;
            // 0x21e350: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E354u; }
        if (ctx->pc != 0x21E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E354u; }
        if (ctx->pc != 0x21E354u) { return; }
    }
    ctx->pc = 0x21E354u;
label_21e354:
    // 0x21e354: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e358: 0x8c45e5c4  lw          $a1, -0x1A3C($v0)
    ctx->pc = 0x21e358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960580)));
    // 0x21e35c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x21E35Cu;
    {
        const bool branch_taken_0x21e35c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E35Cu;
            // 0x21e360: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e35c) {
            ctx->pc = 0x21E390u;
            goto label_21e390;
        }
    }
    ctx->pc = 0x21E364u;
    // 0x21e364: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21e364u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e368: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21e36c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e374: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e378: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21e37c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21e380: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21e384: 0x40f809  jalr        $v0
    ctx->pc = 0x21E384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E38Cu);
        ctx->pc = 0x21E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E384u;
            // 0x21e388: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E38Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E354u: goto label_21e354;
            case 0x21E390u: goto label_21e390;
            case 0x21E3A8u: goto label_21e3a8;
            case 0x21E3F8u: goto label_21e3f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E38Cu; }
            if (ctx->pc != 0x21E38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21E38Cu;
    // 0x21e38c: 0x0  nop
    ctx->pc = 0x21e38cu;
    // NOP
label_21e390:
    // 0x21e390: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21e390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x21e394: 0x8e22e5d4  lw          $v0, -0x1A2C($s1)
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960596)));
    // 0x21e398: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21E398u;
    {
        const bool branch_taken_0x21e398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E398u;
            // 0x21e39c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e398) {
            ctx->pc = 0x21E3F8u;
            goto label_21e3f8;
        }
    }
    ctx->pc = 0x21E3A0u;
    // 0x21e3a0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21e3a4: 0x0  nop
    ctx->pc = 0x21e3a4u;
    // NOP
label_21e3a8:
    // 0x21e3a8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21e3ac: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x21e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x21e3b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e3b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x21e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e3b8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21e3b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e3bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21e3c0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21e3c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e3c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e3cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e3d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e3d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21e3d8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21e3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21e3dc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21e3e0: 0x40f809  jalr        $v0
    ctx->pc = 0x21E3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E3E8u);
        ctx->pc = 0x21E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3E0u;
            // 0x21e3e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E3E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E354u: goto label_21e354;
            case 0x21E390u: goto label_21e390;
            case 0x21E3A8u: goto label_21e3a8;
            case 0x21E3F8u: goto label_21e3f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E3E8u; }
            if (ctx->pc != 0x21E3E8u) { return; }
        }
        }
    }
    ctx->pc = 0x21E3E8u;
    // 0x21e3e8: 0x8e22e5d4  lw          $v0, -0x1A2C($s1)
    ctx->pc = 0x21e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960596)));
    // 0x21e3ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21e3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e3f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21E3F0u;
    {
        const bool branch_taken_0x21e3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3F0u;
            // 0x21e3f4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3f0) {
            ctx->pc = 0x21E3A8u;
            runtime->cooperativeGuestYield();
            goto label_21e3a8;
        }
    }
    ctx->pc = 0x21E3F8u;
label_21e3f8:
    // 0x21e3f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e404: 0x3e00008  jr          $ra
    ctx->pc = 0x21E404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E404u;
            // 0x21e408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E354u: goto label_21e354;
            case 0x21E390u: goto label_21e390;
            case 0x21E3A8u: goto label_21e3a8;
            case 0x21E3F8u: goto label_21e3f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E40Cu;
    // 0x21e40c: 0x0  nop
    ctx->pc = 0x21e40cu;
    // NOP
}

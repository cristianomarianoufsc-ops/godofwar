#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101888
// Address: 0x101888 - 0x101978
void sub_00101888_0x101888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101888_0x101888");
#endif

    ctx->pc = 0x101888u;

    // 0x101888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10188c: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x10188cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x101890: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101894: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x101894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101898: 0x8d22c300  lw          $v0, -0x3D00($t1)
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294951680)));
    // 0x10189c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018a0: 0x10480017  beq         $v0, $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1018A0u;
    {
        const bool branch_taken_0x1018a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1018A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018A0u;
            // 0x1018a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018a0) {
            ctx->pc = 0x101900u;
            goto label_101900;
        }
    }
    ctx->pc = 0x1018A8u;
    // 0x1018a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1018a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1018ac: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1018acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1018b0: 0x8c454638  lw          $a1, 0x4638($v0)
    ctx->pc = 0x1018b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x1018b4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x1018b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1018b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1018b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1018bc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1018bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1018c0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1018c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1018c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1018c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1018c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1018c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1018cc: 0x3463d410  ori         $v1, $v1, 0xD410
    ctx->pc = 0x1018ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54288);
    // 0x1018d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1018d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1018d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1018d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1018d8: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1018d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x1018dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1018dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1018e0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1018e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1018e4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1018e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1018e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1018e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1018ec: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1018ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1018f0: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x1018f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x1018f4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1018f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1018f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1018fc: 0xad28c300  sw          $t0, -0x3D00($t1)
    ctx->pc = 0x1018fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294951680), GPR_U32(ctx, 8));
label_101900:
    // 0x101900: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x101900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101904: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x101904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101908: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x101908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10190c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10190Cu;
    {
        const bool branch_taken_0x10190c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10190Cu;
            // 0x101910: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10190c) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x101914u;
    // 0x101914: 0x0  nop
    ctx->pc = 0x101914u;
    // NOP
label_101918:
    // 0x101918: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x101918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10191c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x10191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x101920: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x101920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x101924: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x101924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x101928: 0x40f809  jalr        $v0
    ctx->pc = 0x101928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101930u);
        ctx->pc = 0x10192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101928u;
            // 0x10192c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101930u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101900u: goto label_101900;
            case 0x101918u: goto label_101918;
            case 0x101944u: goto label_101944;
            case 0x101968u: goto label_101968;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101930u; }
            if (ctx->pc != 0x101930u) { return; }
        }
        }
    }
    ctx->pc = 0x101930u;
    // 0x101930: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x101934: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x101938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10193c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10193Cu;
    {
        const bool branch_taken_0x10193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10193Cu;
            // 0x101940: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10193c) {
            ctx->pc = 0x101918u;
            runtime->cooperativeGuestYield();
            goto label_101918;
        }
    }
    ctx->pc = 0x101944u;
label_101944:
    // 0x101944: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x101944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x101948: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x101948u;
    {
        const bool branch_taken_0x101948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101948u;
            // 0x10194c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101948) {
            ctx->pc = 0x101968u;
            goto label_101968;
        }
    }
    ctx->pc = 0x101950u;
    // 0x101950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101958: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x101958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10195c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x101960: 0x40f809  jalr        $v0
    ctx->pc = 0x101960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101968u);
        ctx->pc = 0x101964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101960u;
            // 0x101964: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101968u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101900u: goto label_101900;
            case 0x101918u: goto label_101918;
            case 0x101944u: goto label_101944;
            case 0x101968u: goto label_101968;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101968u; }
            if (ctx->pc != 0x101968u) { return; }
        }
        }
    }
    ctx->pc = 0x101968u;
label_101968:
    // 0x101968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10196c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101970: 0x3e00008  jr          $ra
    ctx->pc = 0x101970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101970u;
            // 0x101974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101900u: goto label_101900;
            case 0x101918u: goto label_101918;
            case 0x101944u: goto label_101944;
            case 0x101968u: goto label_101968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101978u;
}

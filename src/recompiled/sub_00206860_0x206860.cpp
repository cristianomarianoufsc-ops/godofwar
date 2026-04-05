#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206860
// Address: 0x206860 - 0x206910
void sub_00206860_0x206860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206860_0x206860");
#endif

    ctx->pc = 0x206860u;

    // 0x206860: 0x8ca90064  lw          $t1, 0x64($a1)
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x206864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206868: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x20686c: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x20686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x206870: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x206870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x206874: 0x10440022  beq         $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x206874u;
    {
        const bool branch_taken_0x206874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x206878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206874u;
            // 0x206878: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206874) {
            ctx->pc = 0x206900u;
            goto label_206900;
        }
    }
    ctx->pc = 0x20687Cu;
    // 0x20687c: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x20687cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_206880:
    // 0x206880: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x206880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x206884: 0x11050018  beq         $t0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x206884u;
    {
        const bool branch_taken_0x206884 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x206888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206884u;
            // 0x206888: 0x8d070064  lw          $a3, 0x64($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206884) {
            ctx->pc = 0x2068E8u;
            goto label_2068e8;
        }
    }
    ctx->pc = 0x20688Cu;
    // 0x20688c: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x20688Cu;
    {
        const bool branch_taken_0x20688c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x206890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20688Cu;
            // 0x206890: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20688c) {
            ctx->pc = 0x2068F0u;
            goto label_2068f0;
        }
    }
    ctx->pc = 0x206894u;
    // 0x206894: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x206898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206898u;
    {
        const bool branch_taken_0x206898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206898u;
            // 0x20689c: 0xe91026  xor         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206898) {
            ctx->pc = 0x2068A8u;
            goto label_2068a8;
        }
    }
    ctx->pc = 0x2068A0u;
    // 0x2068a0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2068a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2068a4: 0x0  nop
    ctx->pc = 0x2068a4u;
    // NOP
label_2068a8:
    // 0x2068a8: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2068a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2068ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2068ACu;
    {
        const bool branch_taken_0x2068ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068ACu;
            // 0x2068b0: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068ac) {
            ctx->pc = 0x2068C8u;
            goto label_2068c8;
        }
    }
    ctx->pc = 0x2068B4u;
    // 0x2068b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2068b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2068b8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2068bc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2068bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2068c0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2068c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2068c4: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2068c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2068c8:
    // 0x2068c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2068C8u;
    {
        const bool branch_taken_0x2068c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068c8) {
            ctx->pc = 0x2068E0u;
            goto label_2068e0;
        }
    }
    ctx->pc = 0x2068D0u;
    // 0x2068d0: 0x84e2000c  lh          $v0, 0xC($a3)
    ctx->pc = 0x2068d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2068d4: 0x8523000c  lh          $v1, 0xC($t1)
    ctx->pc = 0x2068d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2068d8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2068d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2068dc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2068dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2068e0:
    // 0x2068e0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2068E0u;
    {
        const bool branch_taken_0x2068e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2068E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068E0u;
            // 0x2068e4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e0) {
            ctx->pc = 0x206904u;
            goto label_206904;
        }
    }
    ctx->pc = 0x2068E8u;
label_2068e8:
    // 0x2068e8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2068e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2068ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2068ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2068f0:
    // 0x2068f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2068f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2068f8: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2068F8u;
    {
        const bool branch_taken_0x2068f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2068FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068F8u;
            // 0x2068fc: 0x8faa0004  lw          $t2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068f8) {
            ctx->pc = 0x206880u;
            runtime->cooperativeGuestYield();
            goto label_206880;
        }
    }
    ctx->pc = 0x206900u;
label_206900:
    // 0x206900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206904:
    // 0x206904: 0x3e00008  jr          $ra
    ctx->pc = 0x206904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206904u;
            // 0x206908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206880u: goto label_206880;
            case 0x2068A8u: goto label_2068a8;
            case 0x2068C8u: goto label_2068c8;
            case 0x2068E0u: goto label_2068e0;
            case 0x2068E8u: goto label_2068e8;
            case 0x2068F0u: goto label_2068f0;
            case 0x206900u: goto label_206900;
            case 0x206904u: goto label_206904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20690Cu;
    // 0x20690c: 0x0  nop
    ctx->pc = 0x20690cu;
    // NOP
}

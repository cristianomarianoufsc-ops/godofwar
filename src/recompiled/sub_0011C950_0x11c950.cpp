#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C950
// Address: 0x11c950 - 0x11ca70
void sub_0011C950_0x11c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C950_0x11c950");
#endif

    ctx->pc = 0x11c950u;

    // 0x11c950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c958: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x11c958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x11c95c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x11c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x11c960: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c964: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x11c964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11c968: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11c96c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x11c970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c978: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11c97c: 0xc04729c  jal         func_11CA70
    ctx->pc = 0x11C97Cu;
    SET_GPR_U32(ctx, 31, 0x11C984u);
    ctx->pc = 0x11C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C97Cu;
            // 0x11c980: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CA70u;
    if (runtime->hasFunction(0x11CA70u)) {
        auto targetFn = runtime->lookupFunction(0x11CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C984u; }
        if (ctx->pc != 0x11C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CA70_0x11ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C984u; }
        if (ctx->pc != 0x11C984u) { return; }
    }
    ctx->pc = 0x11C984u;
    // 0x11c984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c988: 0x3e00008  jr          $ra
    ctx->pc = 0x11C988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C988u;
            // 0x11c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C9E0u: goto label_11c9e0;
            case 0x11CA28u: goto label_11ca28;
            case 0x11CA38u: goto label_11ca38;
            case 0x11CA40u: goto label_11ca40;
            case 0x11CA60u: goto label_11ca60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C990u;
    // 0x11c990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11c998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c99c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11c9a4: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x11c9a8: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x11c9ac: 0x40f809  jalr        $v0
    ctx->pc = 0x11C9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C9B4u);
        ctx->pc = 0x11C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9ACu;
            // 0x11c9b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C9B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C9E0u: goto label_11c9e0;
            case 0x11CA28u: goto label_11ca28;
            case 0x11CA38u: goto label_11ca38;
            case 0x11CA40u: goto label_11ca40;
            case 0x11CA60u: goto label_11ca60;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C9B4u; }
            if (ctx->pc != 0x11C9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x11C9B4u;
    // 0x11c9b4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x11c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c9b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c9bc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C9BCu;
    {
        const bool branch_taken_0x11c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9BCu;
            // 0x11c9c0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9bc) {
            ctx->pc = 0x11CA40u;
            goto label_11ca40;
        }
    }
    ctx->pc = 0x11C9C4u;
    // 0x11c9c4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x11c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11c9c8: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x11c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x11c9cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11c9d0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C9D0u;
    {
        const bool branch_taken_0x11c9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9D0u;
            // 0x11c9d4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9d0) {
            ctx->pc = 0x11CA38u;
            goto label_11ca38;
        }
    }
    ctx->pc = 0x11C9D8u;
    // 0x11c9d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11c9dc: 0x0  nop
    ctx->pc = 0x11c9dcu;
    // NOP
label_11c9e0:
    // 0x11c9e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c9e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c9e8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x11c9e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11c9ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x11c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x11c9f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C9F0u;
    {
        const bool branch_taken_0x11c9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9F0u;
            // 0x11c9f4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9f0) {
            ctx->pc = 0x11CA28u;
            goto label_11ca28;
        }
    }
    ctx->pc = 0x11C9F8u;
    // 0x11c9f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11c9f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c9fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11ca00: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11ca04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ca08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ca0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ca10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11ca14: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11ca18: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11ca1c: 0x40f809  jalr        $v0
    ctx->pc = 0x11CA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CA24u);
        ctx->pc = 0x11CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA1Cu;
            // 0x11ca20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CA24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C9E0u: goto label_11c9e0;
            case 0x11CA28u: goto label_11ca28;
            case 0x11CA38u: goto label_11ca38;
            case 0x11CA40u: goto label_11ca40;
            case 0x11CA60u: goto label_11ca60;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CA24u; }
            if (ctx->pc != 0x11CA24u) { return; }
        }
        }
    }
    ctx->pc = 0x11CA24u;
    // 0x11ca24: 0x0  nop
    ctx->pc = 0x11ca24u;
    // NOP
label_11ca28:
    // 0x11ca28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ca2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca30: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11CA30u;
    {
        const bool branch_taken_0x11ca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA30u;
            // 0x11ca34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca30) {
            ctx->pc = 0x11C9E0u;
            runtime->cooperativeGuestYield();
            goto label_11c9e0;
        }
    }
    ctx->pc = 0x11CA38u;
label_11ca38:
    // 0x11ca38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11CA38u;
    {
        const bool branch_taken_0x11ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA38u;
            // 0x11ca3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca38) {
            ctx->pc = 0x11CA60u;
            goto label_11ca60;
        }
    }
    ctx->pc = 0x11CA40u;
label_11ca40:
    // 0x11ca40: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x11ca40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11ca44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11ca48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CA48u;
    {
        const bool branch_taken_0x11ca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA48u;
            // 0x11ca4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca48) {
            ctx->pc = 0x11CA60u;
            goto label_11ca60;
        }
    }
    ctx->pc = 0x11CA50u;
    // 0x11ca50: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11ca54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ca58: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x11ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x11ca5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ca60:
    // 0x11ca60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ca64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ca64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca68: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA68u;
            // 0x11ca6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C9E0u: goto label_11c9e0;
            case 0x11CA28u: goto label_11ca28;
            case 0x11CA38u: goto label_11ca38;
            case 0x11CA40u: goto label_11ca40;
            case 0x11CA60u: goto label_11ca60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CA70u;
}

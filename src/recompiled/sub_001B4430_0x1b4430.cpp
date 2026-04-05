#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4430
// Address: 0x1b4430 - 0x1b4500
void sub_001B4430_0x1b4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4430_0x1b4430");
#endif

    ctx->pc = 0x1b4430u;

    // 0x1b4430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b443c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b443cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4440: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b4444: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b4448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b444c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b4450: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b4454: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b4458: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4460u);
        ctx->pc = 0x1B445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4458u;
            // 0x1b445c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4460u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4490u: goto label_1b4490;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4460u; }
            if (ctx->pc != 0x1B4460u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4460u;
    // 0x1b4460: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B4460u;
    SET_GPR_U32(ctx, 31, 0x1B4468u);
    ctx->pc = 0x1B4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4460u;
            // 0x1b4464: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4468u; }
        if (ctx->pc != 0x1B4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4468u; }
        if (ctx->pc != 0x1B4468u) { return; }
    }
    ctx->pc = 0x1B4468u;
    // 0x1b4468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b446c: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B446Cu;
    {
        const bool branch_taken_0x1b446c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B446Cu;
            // 0x1b4470: 0x24c30040  addiu       $v1, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b446c) {
            ctx->pc = 0x1B44ECu;
            goto label_1b44ec;
        }
    }
    ctx->pc = 0x1B4474u;
    // 0x1b4474: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4478: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b4478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b447c: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1b447cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b4480: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1b4484: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B4484u;
    {
        const bool branch_taken_0x1b4484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B4488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4484u;
            // 0x1b4488: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4484) {
            ctx->pc = 0x1B44ECu;
            goto label_1b44ec;
        }
    }
    ctx->pc = 0x1B448Cu;
    // 0x1b448c: 0x0  nop
    ctx->pc = 0x1b448cu;
    // NOP
label_1b4490:
    // 0x1b4490: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b4490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4494: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x1b4494u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b4498: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4498u;
    {
        const bool branch_taken_0x1b4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4498u;
            // 0x1b449c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4498) {
            ctx->pc = 0x1B44E0u;
            goto label_1b44e0;
        }
    }
    ctx->pc = 0x1B44A0u;
    // 0x1b44a0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b44a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b44a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b44ac: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b44b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b44b4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1b44b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B44B8u;
    {
        const bool branch_taken_0x1b44b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44B8u;
            // 0x1b44bc: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44b8) {
            ctx->pc = 0x1B44D8u;
            goto label_1b44d8;
        }
    }
    ctx->pc = 0x1B44C0u;
    // 0x1b44c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b44c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b44c8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b44c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b44cc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b44d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B44D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B44D8u);
        ctx->pc = 0x1B44D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44D0u;
            // 0x1b44d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B44D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4490u: goto label_1b4490;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D8u; }
            if (ctx->pc != 0x1B44D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B44D8u;
    {
        const bool branch_taken_0x1b44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44D8u;
            // 0x1b44dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44d8) {
            ctx->pc = 0x1B44F0u;
            goto label_1b44f0;
        }
    }
    ctx->pc = 0x1B44E0u;
label_1b44e0:
    // 0x1b44e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b44e4: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B44E4u;
    {
        const bool branch_taken_0x1b44e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B44E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44E4u;
            // 0x1b44e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44e4) {
            ctx->pc = 0x1B4490u;
            runtime->cooperativeGuestYield();
            goto label_1b4490;
        }
    }
    ctx->pc = 0x1B44ECu;
label_1b44ec:
    // 0x1b44ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b44ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b44f0:
    // 0x1b44f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b44f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b44f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b44f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b44f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B44F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B44FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44F8u;
            // 0x1b44fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4490u: goto label_1b4490;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4500u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5FC0
// Address: 0x1a5fc0 - 0x1a60a8
void sub_001A5FC0_0x1a5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5FC0_0x1a5fc0");
#endif

    ctx->pc = 0x1a5fc0u;

    // 0x1a5fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5fc4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a5fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a5fc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a5fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5fd4: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A5FD4u;
    {
        const bool branch_taken_0x1a5fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FD4u;
            // 0x1a5fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd4) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A5FDCu;
    // 0x1a5fdc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a5fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5fe4: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a5fe8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a5fec: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a5fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a5ff0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a5ff4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5FFCu);
        ctx->pc = 0x1A5FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FF4u;
            // 0x1a5ff8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5FFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6020u: goto label_1a6020;
            case 0x1A6030u: goto label_1a6030;
            case 0x1A6058u: goto label_1a6058;
            case 0x1A6080u: goto label_1a6080;
            case 0x1A608Cu: goto label_1a608c;
            case 0x1A6090u: goto label_1a6090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FFCu; }
            if (ctx->pc != 0x1A5FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5FFCu;
    // 0x1a5ffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6000: 0xc06cd42  jal         func_1B3508
    ctx->pc = 0x1A6000u;
    SET_GPR_U32(ctx, 31, 0x1A6008u);
    ctx->pc = 0x1A6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6000u;
            // 0x1a6004: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3508u;
    if (runtime->hasFunction(0x1B3508u)) {
        auto targetFn = runtime->lookupFunction(0x1B3508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3508_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    }
    ctx->pc = 0x1A6008u;
    // 0x1a6008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a600c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A600Cu;
    {
        const bool branch_taken_0x1a600c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a600c) {
            ctx->pc = 0x1A6010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A600Cu;
            // 0x1a6010: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6020u;
            goto label_1a6020;
        }
    }
    ctx->pc = 0x1A6014u;
    // 0x1a6014: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A6014u;
    {
        const bool branch_taken_0x1a6014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6014u;
            // 0x1a6018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6014) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A601Cu;
    // 0x1a601c: 0x0  nop
    ctx->pc = 0x1a601cu;
    // NOP
label_1a6020:
    // 0x1a6020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a6020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6024: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6024u;
    {
        const bool branch_taken_0x1a6024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6024u;
            // 0x1a6028: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6024) {
            ctx->pc = 0x1A608Cu;
            goto label_1a608c;
        }
    }
    ctx->pc = 0x1A602Cu;
    // 0x1a602c: 0x0  nop
    ctx->pc = 0x1a602cu;
    // NOP
label_1a6030:
    // 0x1a6030: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a6030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a6034: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a6038: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6038u;
    {
        const bool branch_taken_0x1a6038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6038) {
            ctx->pc = 0x1A603Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6038u;
            // 0x1a603c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6080u;
            goto label_1a6080;
        }
    }
    ctx->pc = 0x1A6040u;
    // 0x1a6040: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1a6040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1a6044: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a6044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a6048: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a604c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A604Cu;
    {
        const bool branch_taken_0x1a604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A604Cu;
            // 0x1a6050: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a604c) {
            ctx->pc = 0x1A608Cu;
            goto label_1a608c;
        }
    }
    ctx->pc = 0x1A6054u;
    // 0x1a6054: 0x0  nop
    ctx->pc = 0x1a6054u;
    // NOP
label_1a6058:
    // 0x1a6058: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a605c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a6060: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6060u;
    {
        const bool branch_taken_0x1a6060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6060u;
            // 0x1a6064: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6060) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6068u;
    // 0x1a6068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a606c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6070: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6070u;
            // 0x1a6074: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6058u;
            runtime->cooperativeGuestYield();
            goto label_1a6058;
        }
    }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6078u;
    {
        const bool branch_taken_0x1a6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6078u;
            // 0x1a607c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6078) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6080u;
label_1a6080:
    // 0x1a6080: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6084: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A6084u;
    {
        const bool branch_taken_0x1a6084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6084u;
            // 0x1a6088: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6084) {
            ctx->pc = 0x1A6030u;
            runtime->cooperativeGuestYield();
            goto label_1a6030;
        }
    }
    ctx->pc = 0x1A608Cu;
label_1a608c:
    // 0x1a608c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a608cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6090:
    // 0x1a6090: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a6090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6094: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a6094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a609c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A609Cu;
            // 0x1a60a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6020u: goto label_1a6020;
            case 0x1A6030u: goto label_1a6030;
            case 0x1A6058u: goto label_1a6058;
            case 0x1A6080u: goto label_1a6080;
            case 0x1A608Cu: goto label_1a608c;
            case 0x1A6090u: goto label_1a6090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A60A4u;
    // 0x1a60a4: 0x0  nop
    ctx->pc = 0x1a60a4u;
    // NOP
}

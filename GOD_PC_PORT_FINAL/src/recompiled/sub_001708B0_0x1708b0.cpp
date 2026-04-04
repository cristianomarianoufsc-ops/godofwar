#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001708B0
// Address: 0x1708b0 - 0x170938
void sub_001708B0_0x1708b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001708B0_0x1708b0");
#endif

    ctx->pc = 0x1708b0u;

    // 0x1708b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1708b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1708b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1708b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1708b8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1708bc: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x1708bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x1708c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1708c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1708c4: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1708C4u;
    {
        const bool branch_taken_0x1708c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1708C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708C4u;
            // 0x1708c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708c4) {
            ctx->pc = 0x17092Cu;
            goto label_17092c;
        }
    }
    ctx->pc = 0x1708CCu;
    // 0x1708cc: 0x0  nop
    ctx->pc = 0x1708ccu;
    // NOP
label_1708d0:
    // 0x1708d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1708d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1708d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1708d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708d8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1708dc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1708dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1708e0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1708e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1708e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1708e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1708e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1708E8u;
    {
        const bool branch_taken_0x1708e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708E8u;
            // 0x1708ec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708e8) {
            ctx->pc = 0x170918u;
            goto label_170918;
        }
    }
    ctx->pc = 0x1708F0u;
    // 0x1708f0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1708f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1708f4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1708f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1708f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1708fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1708fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170900: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170904: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x170904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x170908: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x170908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17090c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x17090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x170910: 0x40f809  jalr        $v0
    ctx->pc = 0x170910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170918u);
        ctx->pc = 0x170914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170910u;
            // 0x170914: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x170918u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1708D0u: goto label_1708d0;
            case 0x170918u: goto label_170918;
            case 0x17092Cu: goto label_17092c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170918u; }
            if (ctx->pc != 0x170918u) { return; }
        }
        }
    }
    ctx->pc = 0x170918u;
label_170918:
    // 0x170918: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17091c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170924: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x170924u;
    {
        const bool branch_taken_0x170924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170924u;
            // 0x170928: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170924) {
            ctx->pc = 0x1708D0u;
            runtime->cooperativeGuestYield();
            goto label_1708d0;
        }
    }
    ctx->pc = 0x17092Cu;
label_17092c:
    // 0x17092c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170930: 0x3e00008  jr          $ra
    ctx->pc = 0x170930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170930u;
            // 0x170934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1708D0u: goto label_1708d0;
            case 0x170918u: goto label_170918;
            case 0x17092Cu: goto label_17092c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170938u;
}

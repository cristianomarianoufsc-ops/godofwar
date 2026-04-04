#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A60A8
// Address: 0x1a60a8 - 0x1a6180
void sub_001A60A8_0x1a60a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A60A8_0x1a60a8");
#endif

    ctx->pc = 0x1a60a8u;

    // 0x1a60a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a60a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a60ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a60b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a60b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a60b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a60bc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1a60bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a60c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a60c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a60c4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A60C4u;
    {
        const bool branch_taken_0x1a60c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60C4u;
            // 0x1a60c8: 0x3092ffff  andi        $s2, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c4) {
            ctx->pc = 0x1A614Cu;
            goto label_1a614c;
        }
    }
    ctx->pc = 0x1A60CCu;
    // 0x1a60cc: 0x0  nop
    ctx->pc = 0x1a60ccu;
    // NOP
label_1a60d0:
    // 0x1a60d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a60d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a60d8: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A60D8u;
    {
        const bool branch_taken_0x1a60d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A60DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60D8u;
            // 0x1a60dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60d8) {
            ctx->pc = 0x1A614Cu;
            goto label_1a614c;
        }
    }
    ctx->pc = 0x1A60E0u;
label_1a60e0:
    // 0x1a60e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a60e4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a60e8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a60ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a60f0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A60F0u;
    {
        const bool branch_taken_0x1a60f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A60F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60F0u;
            // 0x1a60f4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60f0) {
            ctx->pc = 0x1A6138u;
            goto label_1a6138;
        }
    }
    ctx->pc = 0x1A60F8u;
label_1a60f8:
    // 0x1a60f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a60fc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1a60fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1a6100: 0x5452000a  bnel        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6100u;
    {
        const bool branch_taken_0x1a6100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a6100) {
            ctx->pc = 0x1A6104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6100u;
            // 0x1a6104: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A612Cu;
            goto label_1a612c;
        }
    }
    ctx->pc = 0x1A6108u;
    // 0x1a6108: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a610c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A610Cu;
    {
        const bool branch_taken_0x1a610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a610c) {
            ctx->pc = 0x1A6110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A610Cu;
            // 0x1a6110: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A612Cu;
            goto label_1a612c;
        }
    }
    ctx->pc = 0x1A6114u;
    // 0x1a6114: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a6118: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1a6118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a611c: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A611Cu;
    {
        const bool branch_taken_0x1a611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a611c) {
            ctx->pc = 0x1A6120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A611Cu;
            // 0x1a6120: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A612Cu;
            goto label_1a612c;
        }
    }
    ctx->pc = 0x1A6124u;
    // 0x1a6124: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6124u;
    {
        const bool branch_taken_0x1a6124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6124u;
            // 0x1a6128: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6124) {
            ctx->pc = 0x1A6164u;
            goto label_1a6164;
        }
    }
    ctx->pc = 0x1A612Cu;
label_1a612c:
    // 0x1a612c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6130: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A6130u;
    {
        const bool branch_taken_0x1a6130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6130u;
            // 0x1a6134: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6130) {
            ctx->pc = 0x1A60F8u;
            runtime->cooperativeGuestYield();
            goto label_1a60f8;
        }
    }
    ctx->pc = 0x1A6138u;
label_1a6138:
    // 0x1a6138: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a613c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6140: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6144: 0x1443ffe6  bne         $v0, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A6144u;
    {
        const bool branch_taken_0x1a6144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6144u;
            // 0x1a6148: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6144) {
            ctx->pc = 0x1A60E0u;
            runtime->cooperativeGuestYield();
            goto label_1a60e0;
        }
    }
    ctx->pc = 0x1A614Cu;
label_1a614c:
    // 0x1a614c: 0xc06cd28  jal         func_1B34A0
    ctx->pc = 0x1A614Cu;
    SET_GPR_U32(ctx, 31, 0x1A6154u);
    ctx->pc = 0x1A6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A614Cu;
            // 0x1a6150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34A0u;
    if (runtime->hasFunction(0x1B34A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6154u; }
        if (ctx->pc != 0x1A6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b34a0_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6154u; }
        if (ctx->pc != 0x1A6154u) { return; }
    }
    ctx->pc = 0x1A6154u;
    // 0x1a6154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6158: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A6158u;
    {
        const bool branch_taken_0x1a6158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6158u;
            // 0x1a615c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6158) {
            ctx->pc = 0x1A60D0u;
            runtime->cooperativeGuestYield();
            goto label_1a60d0;
        }
    }
    ctx->pc = 0x1A6160u;
    // 0x1a6160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6164:
    // 0x1a6164: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a6164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6168: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a616c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a616cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6174: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6174u;
            // 0x1a6178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A60D0u: goto label_1a60d0;
            case 0x1A60E0u: goto label_1a60e0;
            case 0x1A60F8u: goto label_1a60f8;
            case 0x1A612Cu: goto label_1a612c;
            case 0x1A6138u: goto label_1a6138;
            case 0x1A614Cu: goto label_1a614c;
            case 0x1A6164u: goto label_1a6164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A617Cu;
    // 0x1a617c: 0x0  nop
    ctx->pc = 0x1a617cu;
    // NOP
}

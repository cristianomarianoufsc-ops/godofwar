#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285080
// Address: 0x285080 - 0x285120
void sub_00285080_0x285080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285080_0x285080");
#endif

    ctx->pc = 0x285080u;

    // 0x285080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285084: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x285084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x285088: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x285088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28508c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x285090: 0xc0a1186  jal         func_284618
    ctx->pc = 0x285090u;
    SET_GPR_U32(ctx, 31, 0x285098u);
    ctx->pc = 0x285094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285090u;
            // 0x285094: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285098u; }
        if (ctx->pc != 0x285098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285098u; }
        if (ctx->pc != 0x285098u) { return; }
    }
    ctx->pc = 0x285098u;
    // 0x285098: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28509c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x28509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2850a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2850A0u;
    {
        const bool branch_taken_0x2850a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850A0u;
            // 0x2850a4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a0) {
            ctx->pc = 0x2850B0u;
            goto label_2850b0;
        }
    }
    ctx->pc = 0x2850A8u;
    // 0x2850a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2850A8u;
    {
        const bool branch_taken_0x2850a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850A8u;
            // 0x2850ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a8) {
            ctx->pc = 0x2850B8u;
            goto label_2850b8;
        }
    }
    ctx->pc = 0x2850B0u;
label_2850b0:
    // 0x2850b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2850B0u;
    {
        const bool branch_taken_0x2850b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850B0u;
            // 0x2850b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850b0) {
            ctx->pc = 0x285114u;
            goto label_285114;
        }
    }
    ctx->pc = 0x2850B8u;
label_2850b8:
    // 0x2850b8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2850B8u;
    {
        const bool branch_taken_0x2850b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850B8u;
            // 0x2850bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850b8) {
            ctx->pc = 0x285114u;
            goto label_285114;
        }
    }
    ctx->pc = 0x2850C0u;
    // 0x2850c0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2850c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2850c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2850C4u;
    {
        const bool branch_taken_0x2850c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850C4u;
            // 0x2850c8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850c4) {
            ctx->pc = 0x2850DCu;
            goto label_2850dc;
        }
    }
    ctx->pc = 0x2850CCu;
    // 0x2850cc: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2850CCu;
    {
        const bool branch_taken_0x2850cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2850D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850CCu;
            // 0x2850d0: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850cc) {
            ctx->pc = 0x2850B0u;
            runtime->cooperativeGuestYield();
            goto label_2850b0;
        }
    }
    ctx->pc = 0x2850D4u;
    // 0x2850d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2850D4u;
    {
        const bool branch_taken_0x2850d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2850d4) {
            ctx->pc = 0x2850D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2850D4u;
            // 0x2850d8: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2850E8u;
            goto label_2850e8;
        }
    }
    ctx->pc = 0x2850DCu;
label_2850dc:
    // 0x2850dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2850e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2850E0u;
    {
        const bool branch_taken_0x2850e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850E0u;
            // 0x2850e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850e0) {
            ctx->pc = 0x285114u;
            goto label_285114;
        }
    }
    ctx->pc = 0x2850E8u;
label_2850e8:
    // 0x2850e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2850E8u;
    {
        const bool branch_taken_0x2850e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850E8u;
            // 0x2850ec: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850e8) {
            ctx->pc = 0x285100u;
            goto label_285100;
        }
    }
    ctx->pc = 0x2850F0u;
    // 0x2850f0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2850f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850f4: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x2850f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2850f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2850F8u;
    {
        const bool branch_taken_0x2850f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850F8u;
            // 0x2850fc: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850f8) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x285100u;
label_285100:
    // 0x285100: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x285100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285104: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x285104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285108: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x285108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_28510c:
    // 0x28510c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x285110: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x285110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_285114:
    // 0x285114: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285118: 0x3e00008  jr          $ra
    ctx->pc = 0x285118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285118u;
            // 0x28511c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2850B0u: goto label_2850b0;
            case 0x2850B8u: goto label_2850b8;
            case 0x2850DCu: goto label_2850dc;
            case 0x2850E8u: goto label_2850e8;
            case 0x285100u: goto label_285100;
            case 0x28510Cu: goto label_28510c;
            case 0x285114u: goto label_285114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285120u;
}

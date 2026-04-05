#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232060
// Address: 0x232060 - 0x232170
void sub_00232060_0x232060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232060_0x232060");
#endif

    ctx->pc = 0x232060u;

    // 0x232060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x232064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x232068: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x232068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23206c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232070: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x232070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x232074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23207c: 0xc08c7c4  jal         func_231F10
    ctx->pc = 0x23207Cu;
    SET_GPR_U32(ctx, 31, 0x232084u);
    ctx->pc = 0x232080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23207Cu;
            // 0x232080: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    if (runtime->hasFunction(0x231F10u)) {
        auto targetFn = runtime->lookupFunction(0x231F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232084u; }
        if (ctx->pc != 0x232084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_231f10_0x232060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232084u; }
        if (ctx->pc != 0x232084u) { return; }
    }
    ctx->pc = 0x232084u;
    // 0x232084: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x232084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232088: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x232088u;
    {
        const bool branch_taken_0x232088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232088u;
            // 0x23208c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232088) {
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x232090u;
    // 0x232090: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x232090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x232094: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x232094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232098: 0x5443002f  bnel        $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x232098u;
    {
        const bool branch_taken_0x232098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232098) {
            ctx->pc = 0x23209Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232098u;
            // 0x23209c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x2320A0u;
    // 0x2320a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2320a4: 0x1246000a  beq         $s2, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2320A4u;
    {
        const bool branch_taken_0x2320a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x2320A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320A4u;
            // 0x2320a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320a4) {
            ctx->pc = 0x2320D0u;
            goto label_2320d0;
        }
    }
    ctx->pc = 0x2320ACu;
    // 0x2320ac: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2320b0:
    // 0x2320b0: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2320B0u;
    {
        const bool branch_taken_0x2320b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320B0u;
            // 0x2320b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320b0) {
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x2320B8u;
    // 0x2320b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2320bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2320BCu;
    {
        const bool branch_taken_0x2320bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2320bc) {
            ctx->pc = 0x2320D0u;
            goto label_2320d0;
        }
    }
    ctx->pc = 0x2320C4u;
    // 0x2320c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2320c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2320c8: 0x5642fff9  bnel        $s2, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2320C8u;
    {
        const bool branch_taken_0x2320c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2320c8) {
            ctx->pc = 0x2320CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2320C8u;
            // 0x2320cc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2320B0u;
            runtime->cooperativeGuestYield();
            goto label_2320b0;
        }
    }
    ctx->pc = 0x2320D0u;
label_2320d0:
    // 0x2320d0: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2320D0u;
    {
        const bool branch_taken_0x2320d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320D0u;
            // 0x2320d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d0) {
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x2320D8u;
    // 0x2320d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2320d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2320dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2320dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2320e0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2320E0u;
    {
        const bool branch_taken_0x2320e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2320E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320E0u;
            // 0x2320e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320e0) {
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x2320E8u;
    // 0x2320e8: 0x54850001  bnel        $a0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2320E8u;
    {
        const bool branch_taken_0x2320e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2320e8) {
            ctx->pc = 0x2320ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2320E8u;
            // 0x2320ec: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2320F0u;
            goto label_2320f0;
        }
    }
    ctx->pc = 0x2320F0u;
label_2320f0:
    // 0x2320f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2320f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2320f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320f8:
    // 0x2320f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2320f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2320fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232100: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x232100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232104: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x232104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x232108: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x232108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23210c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232110: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x232110u;
    {
        const bool branch_taken_0x232110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x232114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232110u;
            // 0x232114: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232110) {
            ctx->pc = 0x232138u;
            goto label_232138;
        }
    }
    ctx->pc = 0x232118u;
    // 0x232118: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x232118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23211c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232120: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x232120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x232124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x232128: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x232128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23212c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23212Cu;
    {
        const bool branch_taken_0x23212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23212Cu;
            // 0x232130: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23212c) {
            ctx->pc = 0x2320F8u;
            runtime->cooperativeGuestYield();
            goto label_2320f8;
        }
    }
    ctx->pc = 0x232134u;
    // 0x232134: 0x0  nop
    ctx->pc = 0x232134u;
    // NOP
label_232138:
    // 0x232138: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x232138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23213c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x232140: 0x8c427928  lw          $v0, 0x7928($v0)
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31016)));
    // 0x232144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23214c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23214Cu;
    SET_GPR_U32(ctx, 31, 0x232154u);
    ctx->pc = 0x232150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23214Cu;
            // 0x232150: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232154u; }
        if (ctx->pc != 0x232154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232154u; }
        if (ctx->pc != 0x232154u) { return; }
    }
    ctx->pc = 0x232154u;
    // 0x232154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232158:
    // 0x232158: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x232158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23215c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23215cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232160: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x232160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232168: 0x3e00008  jr          $ra
    ctx->pc = 0x232168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232168u;
            // 0x23216c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2320B0u: goto label_2320b0;
            case 0x2320D0u: goto label_2320d0;
            case 0x2320F0u: goto label_2320f0;
            case 0x2320F8u: goto label_2320f8;
            case 0x232138u: goto label_232138;
            case 0x232158u: goto label_232158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232170u;
}

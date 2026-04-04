#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001310D0
// Address: 0x1310d0 - 0x131168
void sub_001310D0_0x1310d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001310D0_0x1310d0");
#endif

    ctx->pc = 0x1310d0u;

    // 0x1310d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1310d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1310d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1310d8: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x1310d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x1310dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1310dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1310e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1310e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1310e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1310e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1310e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1310e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1310ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1310ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1310f0: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1310f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1310f4: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1310F4u;
    {
        const bool branch_taken_0x1310f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310f4) {
            ctx->pc = 0x1310F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1310F4u;
            // 0x1310f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131154u;
            goto label_131154;
        }
    }
    ctx->pc = 0x1310FCu;
    // 0x1310fc: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1310fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_131100:
    // 0x131100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131104: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x131104u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x131108: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x131108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13110c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x13110cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131110: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x131110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x131114: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x131114u;
    {
        const bool branch_taken_0x131114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131114u;
            // 0x131118: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131114) {
            ctx->pc = 0x131148u;
            goto label_131148;
        }
    }
    ctx->pc = 0x13111Cu;
    // 0x13111c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x13111cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131120: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131124: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x131124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13112c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131130: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131134: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131138: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x131138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x13113c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x131140: 0x40f809  jalr        $v0
    ctx->pc = 0x131140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131148u);
        ctx->pc = 0x131144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131140u;
            // 0x131144: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131148u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131100u: goto label_131100;
            case 0x131148u: goto label_131148;
            case 0x131154u: goto label_131154;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131148u; }
            if (ctx->pc != 0x131148u) { return; }
        }
        }
    }
    ctx->pc = 0x131148u;
label_131148:
    // 0x131148: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x131148u;
    {
        const bool branch_taken_0x131148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131148u;
            // 0x13114c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131148) {
            ctx->pc = 0x131100u;
            runtime->cooperativeGuestYield();
            goto label_131100;
        }
    }
    ctx->pc = 0x131150u;
    // 0x131150: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x131150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_131154:
    // 0x131154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13115c: 0x3e00008  jr          $ra
    ctx->pc = 0x13115Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13115Cu;
            // 0x131160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131100u: goto label_131100;
            case 0x131148u: goto label_131148;
            case 0x131154u: goto label_131154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131164u;
    // 0x131164: 0x0  nop
    ctx->pc = 0x131164u;
    // NOP
}

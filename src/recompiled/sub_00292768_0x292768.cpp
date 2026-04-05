#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292768
// Address: 0x292768 - 0x292810
void sub_00292768_0x292768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292768_0x292768");
#endif

    ctx->pc = 0x292768u;

    // 0x292768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29276c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29277c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x292780: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292780u;
    {
        const bool branch_taken_0x292780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292780u;
            // 0x292784: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292780) {
            ctx->pc = 0x29279Cu;
            goto label_29279c;
        }
    }
    ctx->pc = 0x292788u;
    // 0x292788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29278c: 0xc0a4dc2  jal         func_293708
    ctx->pc = 0x29278Cu;
    SET_GPR_U32(ctx, 31, 0x292794u);
    ctx->pc = 0x292790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29278Cu;
            // 0x292790: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293708u;
    if (runtime->hasFunction(0x293708u)) {
        auto targetFn = runtime->lookupFunction(0x293708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292794u; }
        if (ctx->pc != 0x292794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293708_0x293820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292794u; }
        if (ctx->pc != 0x292794u) { return; }
    }
    ctx->pc = 0x292794u;
    // 0x292794: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292794u;
    {
        const bool branch_taken_0x292794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292794u;
            // 0x292798: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292794) {
            ctx->pc = 0x2927E4u;
            goto label_2927e4;
        }
    }
    ctx->pc = 0x29279Cu;
label_29279c:
    // 0x29279c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x29279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2927a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2927a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2927a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2927a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2927ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2927ACu;
    {
        const bool branch_taken_0x2927ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927ACu;
            // 0x2927b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927ac) {
            ctx->pc = 0x2927C0u;
            goto label_2927c0;
        }
    }
    ctx->pc = 0x2927B4u;
    // 0x2927b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2927b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2927b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2927B8u;
    {
        const bool branch_taken_0x2927b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927B8u;
            // 0x2927bc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927b8) {
            ctx->pc = 0x2927F0u;
            goto label_2927f0;
        }
    }
    ctx->pc = 0x2927C0u;
label_2927c0:
    // 0x2927c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2927c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927c4: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2927c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2927c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2927cc: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2927ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2927d0: 0xc0a4dc2  jal         func_293708
    ctx->pc = 0x2927D0u;
    SET_GPR_U32(ctx, 31, 0x2927D8u);
    ctx->pc = 0x2927D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2927D0u;
            // 0x2927d4: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293708u;
    if (runtime->hasFunction(0x293708u)) {
        auto targetFn = runtime->lookupFunction(0x293708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2927D8u; }
        if (ctx->pc != 0x2927D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293708_0x293820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2927D8u; }
        if (ctx->pc != 0x2927D8u) { return; }
    }
    ctx->pc = 0x2927D8u;
    // 0x2927d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2927d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927dc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2927DCu;
    {
        const bool branch_taken_0x2927dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927dc) {
            ctx->pc = 0x2927E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2927DCu;
            // 0x2927e0: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2927ECu;
            goto label_2927ec;
        }
    }
    ctx->pc = 0x2927E4u;
label_2927e4:
    // 0x2927e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2927E4u;
    {
        const bool branch_taken_0x2927e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927E4u;
            // 0x2927e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927e4) {
            ctx->pc = 0x2927FCu;
            goto label_2927fc;
        }
    }
    ctx->pc = 0x2927ECu;
label_2927ec:
    // 0x2927ec: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x2927ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_2927f0:
    // 0x2927f0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2927f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2927f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2927f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927f8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2927f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2927fc:
    // 0x2927fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2927fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292808: 0x3e00008  jr          $ra
    ctx->pc = 0x292808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292808u;
            // 0x29280c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29279Cu: goto label_29279c;
            case 0x2927C0u: goto label_2927c0;
            case 0x2927E4u: goto label_2927e4;
            case 0x2927ECu: goto label_2927ec;
            case 0x2927F0u: goto label_2927f0;
            case 0x2927FCu: goto label_2927fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292810u;
}

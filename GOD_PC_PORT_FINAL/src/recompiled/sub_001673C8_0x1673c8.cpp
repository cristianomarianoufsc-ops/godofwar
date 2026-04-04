#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001673C8
// Address: 0x1673c8 - 0x167478
void sub_001673C8_0x1673c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001673C8_0x1673c8");
#endif

    ctx->pc = 0x1673c8u;

    // 0x1673c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1673c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1673cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1673ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1673d0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1673d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1673d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1673d8: 0x8e82c7dc  lw          $v0, -0x3824($s4)
    ctx->pc = 0x1673d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952924)));
    // 0x1673dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1673dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1673e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1673e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1673e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1673e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1673ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1673ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1673f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1673f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1673f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1673f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1673f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1673fc: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1673fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x167400: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x167400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x167404: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x167404u;
    {
        const bool branch_taken_0x167404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167404u;
            // 0x167408: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167404) {
            ctx->pc = 0x167458u;
            goto label_167458;
        }
    }
    ctx->pc = 0x16740Cu;
    // 0x16740c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x167410: 0x26120098  addiu       $s2, $s0, 0x98
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x167414: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167414u;
    {
        const bool branch_taken_0x167414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167414u;
            // 0x167418: 0xde330028  ld          $s3, 0x28($s1) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167414) {
            ctx->pc = 0x167428u;
            goto label_167428;
        }
    }
    ctx->pc = 0x16741Cu;
    // 0x16741c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167420: 0xc0551d0  jal         func_154740
    ctx->pc = 0x167420u;
    SET_GPR_U32(ctx, 31, 0x167428u);
    ctx->pc = 0x167424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167420u;
            // 0x167424: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154740u;
    if (runtime->hasFunction(0x154740u)) {
        auto targetFn = runtime->lookupFunction(0x154740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167428u; }
        if (ctx->pc != 0x167428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154740_0x154740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167428u; }
        if (ctx->pc != 0x167428u) { return; }
    }
    ctx->pc = 0x167428u;
label_167428:
    // 0x167428: 0x8e82c7dc  lw          $v0, -0x3824($s4)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952924)));
    // 0x16742c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x167430: 0x8c63ed58  lw          $v1, -0x12A8($v1)
    ctx->pc = 0x167430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x167434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16743c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167440: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x167444: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x167444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x167448: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16744c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16744cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167450: 0xc059b32  jal         func_166CC8
    ctx->pc = 0x167450u;
    SET_GPR_U32(ctx, 31, 0x167458u);
    ctx->pc = 0x167454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167450u;
            // 0x167454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166CC8u;
    if (runtime->hasFunction(0x166CC8u)) {
        auto targetFn = runtime->lookupFunction(0x166CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167458u; }
        if (ctx->pc != 0x167458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_166cc8_0x167018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167458u; }
        if (ctx->pc != 0x167458u) { return; }
    }
    ctx->pc = 0x167458u;
label_167458:
    // 0x167458: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x167458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16745c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16745cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167460: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x167460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167464: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x167464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167468: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x167468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16746c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167470: 0x3e00008  jr          $ra
    ctx->pc = 0x167470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167470u;
            // 0x167474: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167428u: goto label_167428;
            case 0x167458u: goto label_167458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167478u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C2F0
// Address: 0x14c2f0 - 0x14c388
void sub_0014C2F0_0x14c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C2F0_0x14c2f0");
#endif

    ctx->pc = 0x14c2f0u;

    // 0x14c2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c2f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14c2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c2fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c300: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14c300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14c304: 0x0  nop
    ctx->pc = 0x14c304u;
    // NOP
label_14c308:
    // 0x14c308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14c308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14c30c: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x14c30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14c310: 0x2442c030  addiu       $v0, $v0, -0x3FD0
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950960));
    // 0x14c314: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x14c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14c318: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14c31c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14c320: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x14c320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c324: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c328: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14c32c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x14c32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c330: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x14c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x14c334: 0xc2202b  sltu        $a0, $a2, $v0
    ctx->pc = 0x14c334u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14c338: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C338u;
    {
        const bool branch_taken_0x14c338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C338u;
            // 0x14c33c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c338) {
            ctx->pc = 0x14C360u;
            goto label_14c360;
        }
    }
    ctx->pc = 0x14C340u;
    // 0x14c340: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x14c340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14c344: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C344u;
    {
        const bool branch_taken_0x14c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C344u;
            // 0x14c348: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c344) {
            ctx->pc = 0x14C364u;
            goto label_14c364;
        }
    }
    ctx->pc = 0x14C34Cu;
    // 0x14c34c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c350: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x14C350u;
    SET_GPR_U32(ctx, 31, 0x14C358u);
    ctx->pc = 0x14C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C350u;
            // 0x14c354: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C358u; }
        if (ctx->pc != 0x14C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C358u; }
        if (ctx->pc != 0x14C358u) { return; }
    }
    ctx->pc = 0x14C358u;
    // 0x14c358: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14C358u;
    {
        const bool branch_taken_0x14c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C358u;
            // 0x14c35c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c358) {
            ctx->pc = 0x14C378u;
            goto label_14c378;
        }
    }
    ctx->pc = 0x14C360u;
label_14c360:
    // 0x14c360: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14c360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14c364:
    // 0x14c364: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x14c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14c368: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14C368u;
    {
        const bool branch_taken_0x14c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C368u;
            // 0x14c36c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c368) {
            ctx->pc = 0x14C308u;
            runtime->cooperativeGuestYield();
            goto label_14c308;
        }
    }
    ctx->pc = 0x14C370u;
    // 0x14c370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c374: 0x0  nop
    ctx->pc = 0x14c374u;
    // NOP
label_14c378:
    // 0x14c378: 0x3e00008  jr          $ra
    ctx->pc = 0x14C378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C378u;
            // 0x14c37c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C308u: goto label_14c308;
            case 0x14C360u: goto label_14c360;
            case 0x14C364u: goto label_14c364;
            case 0x14C378u: goto label_14c378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C380u;
    // 0x14c380: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x14c380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x14c384: 0x0  nop
    ctx->pc = 0x14c384u;
    // NOP
}

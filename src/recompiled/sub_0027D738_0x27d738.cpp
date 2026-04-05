#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D738
// Address: 0x27d738 - 0x27d7c8
void sub_0027D738_0x27d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D738_0x27d738");
#endif

    ctx->pc = 0x27d738u;

    // 0x27d738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d73c: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27d740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d748: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d74c: 0x2023818  mult        $a3, $s0, $v0
    ctx->pc = 0x27d74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27d750: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x27d750u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x27d754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d758: 0x2625c9c8  addiu       $a1, $s1, -0x3638
    ctx->pc = 0x27d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953416));
    // 0x27d75c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x27d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x27d760: 0x8c460800  lw          $a2, 0x800($v0)
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x27d764: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x27D764u;
    {
        const bool branch_taken_0x27d764 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x27D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D764u;
            // 0x27d768: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d764) {
            ctx->pc = 0x27D79Cu;
            goto label_27d79c;
        }
    }
    ctx->pc = 0x27D76Cu;
    // 0x27d76c: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x27d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x27d770: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x27D770u;
    {
        const bool branch_taken_0x27d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27D774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D770u;
            // 0x27d774: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d770) {
            ctx->pc = 0x27D7A0u;
            goto label_27d7a0;
        }
    }
    ctx->pc = 0x27D778u;
    // 0x27d778: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x27d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x27d77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d780: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x27d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x27d784: 0xc0a0608  jal         func_281820
    ctx->pc = 0x27D784u;
    SET_GPR_U32(ctx, 31, 0x27D78Cu);
    ctx->pc = 0x27D788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D784u;
            // 0x27d788: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (runtime->hasFunction(0x281820u)) {
        auto targetFn = runtime->lookupFunction(0x281820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D78Cu; }
        if (ctx->pc != 0x27D78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281820_0x281860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D78Cu; }
        if (ctx->pc != 0x27D78Cu) { return; }
    }
    ctx->pc = 0x27D78Cu;
    // 0x27d78c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D78Cu;
    {
        const bool branch_taken_0x27d78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D78Cu;
            // 0x27d790: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d78c) {
            ctx->pc = 0x27D7A0u;
            goto label_27d7a0;
        }
    }
    ctx->pc = 0x27D794u;
    // 0x27d794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D794u;
    {
        const bool branch_taken_0x27d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D794u;
            // 0x27d798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d794) {
            ctx->pc = 0x27D7B4u;
            goto label_27d7b4;
        }
    }
    ctx->pc = 0x27D79Cu;
label_27d79c:
    // 0x27d79c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_27d7a0:
    // 0x27d7a0: 0x2624c9c8  addiu       $a0, $s1, -0x3638
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953416));
    // 0x27d7a4: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x27d7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27d7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d7ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27d7b0: 0xac800894  sw          $zero, 0x894($a0)
    ctx->pc = 0x27d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 0));
label_27d7b4:
    // 0x27d7b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d7b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7C0u;
            // 0x27d7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D79Cu: goto label_27d79c;
            case 0x27D7A0u: goto label_27d7a0;
            case 0x27D7B4u: goto label_27d7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D7C8u;
}

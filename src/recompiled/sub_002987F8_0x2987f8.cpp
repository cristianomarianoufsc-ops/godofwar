#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002987F8
// Address: 0x2987f8 - 0x298868
void sub_002987F8_0x2987f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002987F8_0x2987f8");
#endif

    ctx->pc = 0x2987f8u;

    // 0x2987f8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2987f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2987fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2987fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298800: 0x8c624b5c  lw          $v0, 0x4B5C($v1)
    ctx->pc = 0x298800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19292)));
    // 0x298804: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29880c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29880Cu;
    {
        const bool branch_taken_0x29880c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29880Cu;
            // 0x298810: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29880c) {
            ctx->pc = 0x298854u;
            goto label_298854;
        }
    }
    ctx->pc = 0x298814u;
    // 0x298814: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x298818: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x298818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x29881c: 0xace5abc0  sw          $a1, -0x5440($a3)
    ctx->pc = 0x29881cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945728), GPR_U32(ctx, 5));
    // 0x298820: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x298824: 0x2484ab40  addiu       $a0, $a0, -0x54C0
    ctx->pc = 0x298824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945600));
    // 0x298828: 0x24e7abc0  addiu       $a3, $a3, -0x5440
    ctx->pc = 0x298828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945728));
    // 0x29882c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29882cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x298830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298838: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x298838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29883c: 0x2609ab80  addiu       $t1, $s0, -0x5480
    ctx->pc = 0x29883cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945664));
    // 0x298840: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x298840u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298844: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x298844u;
    SET_GPR_U32(ctx, 31, 0x29884Cu);
    ctx->pc = 0x298848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298844u;
            // 0x298848: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29884Cu; }
        if (ctx->pc != 0x29884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29884Cu; }
        if (ctx->pc != 0x29884Cu) { return; }
    }
    ctx->pc = 0x29884Cu;
    // 0x29884c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29884Cu;
    {
        const bool branch_taken_0x29884c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29884Cu;
            // 0x298850: 0x8e02ab80  lw          $v0, -0x5480($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29884c) {
            ctx->pc = 0x298858u;
            goto label_298858;
        }
    }
    ctx->pc = 0x298854u;
label_298854:
    // 0x298854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298858:
    // 0x298858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29885c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29885cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298860: 0x3e00008  jr          $ra
    ctx->pc = 0x298860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298860u;
            // 0x298864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298854u: goto label_298854;
            case 0x298858u: goto label_298858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298868u;
}

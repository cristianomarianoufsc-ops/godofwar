#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23db88
// Address: 0x23db88 - 0x23dc10
void entry_23db88_0x23dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23db88_0x23dc10");
#endif

    ctx->pc = 0x23db88u;

    // 0x23db88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23db8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23db90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23db94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23db94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db98: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23db9c: 0xc08e218  jal         func_238860
    ctx->pc = 0x23DB9Cu;
    SET_GPR_U32(ctx, 31, 0x23DBA4u);
    ctx->pc = 0x23DBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB9Cu;
            // 0x23dba0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBA4u; }
        if (ctx->pc != 0x23DBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBA4u; }
        if (ctx->pc != 0x23DBA4u) { return; }
    }
    ctx->pc = 0x23DBA4u;
    // 0x23dba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBA8u;
            // 0x23dbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBB0u;
    // 0x23dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBB8u;
    // 0x23dbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBC0u;
    // 0x23dbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBC0u;
            // 0x23dbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBC8u;
    // 0x23dbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBC8u;
            // 0x23dbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBD0u;
    // 0x23dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBD0u;
            // 0x23dbd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBD8u;
    // 0x23dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBE0u;
    // 0x23dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBE0u;
            // 0x23dbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBE8u;
    // 0x23dbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBE8u;
            // 0x23dbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBF0u;
    // 0x23dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DBF8u;
    // 0x23dbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DC00u;
    // 0x23dc00: 0x3e00008  jr          $ra
    ctx->pc = 0x23DC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DC08u;
    // 0x23dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x23DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DC10u;
}

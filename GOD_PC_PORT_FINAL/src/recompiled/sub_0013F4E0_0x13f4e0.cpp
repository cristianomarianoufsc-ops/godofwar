#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F4E0
// Address: 0x13f4e0 - 0x13f540
void sub_0013F4E0_0x13f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F4E0_0x13f4e0");
#endif

    ctx->pc = 0x13f4e0u;

    // 0x13f4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f4e4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x13f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x13f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f4ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13f4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4f0: 0x2463bb98  addiu       $v1, $v1, -0x4468
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
    // 0x13f4f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13f4f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f4fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f504: 0xdc820630  ld          $v0, 0x630($a0)
    ctx->pc = 0x13f504u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1584)));
    // 0x13f508: 0xdc830638  ld          $v1, 0x638($a0)
    ctx->pc = 0x13f508u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 1592)));
    // 0x13f50c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x13f50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x13f510: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13f510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13f514: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13f518: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13f518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13f51c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F51Cu;
    {
        const bool branch_taken_0x13f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F51Cu;
            // 0x13f520: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f51c) {
            ctx->pc = 0x13F530u;
            goto label_13f530;
        }
    }
    ctx->pc = 0x13F524u;
    // 0x13f524: 0xc04fbfc  jal         func_13EFF0
    ctx->pc = 0x13F524u;
    SET_GPR_U32(ctx, 31, 0x13F52Cu);
    ctx->pc = 0x13EFF0u;
    if (runtime->hasFunction(0x13EFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13EFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F52Cu; }
        if (ctx->pc != 0x13F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EFF0_0x13eff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F52Cu; }
        if (ctx->pc != 0x13F52Cu) { return; }
    }
    ctx->pc = 0x13F52Cu;
    // 0x13f52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f530:
    // 0x13f530: 0x3e00008  jr          $ra
    ctx->pc = 0x13F530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F530u;
            // 0x13f534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F530u: goto label_13f530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F538u;
    // 0x13f538: 0x0  nop
    ctx->pc = 0x13f538u;
    // NOP
    // 0x13f53c: 0x0  nop
    ctx->pc = 0x13f53cu;
    // NOP
}

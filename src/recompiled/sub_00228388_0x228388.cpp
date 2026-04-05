#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228388
// Address: 0x228388 - 0x2283c0
void sub_00228388_0x228388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228388_0x228388");
#endif

    ctx->pc = 0x228388u;

    // 0x228388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22838c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228394: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228394u;
    {
        const bool branch_taken_0x228394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228394u;
            // 0x228398: 0xac4411c0  sw          $a0, 0x11C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4544), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228394) {
            ctx->pc = 0x2283B0u;
            goto label_2283b0;
        }
    }
    ctx->pc = 0x22839Cu;
    // 0x22839c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2283a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2283a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2283a4: 0x8c4411b8  lw          $a0, 0x11B8($v0)
    ctx->pc = 0x2283a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x2283a8: 0xc05eca0  jal         func_17B280
    ctx->pc = 0x2283A8u;
    SET_GPR_U32(ctx, 31, 0x2283B0u);
    ctx->pc = 0x2283ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2283A8u;
            // 0x2283ac: 0xac6011bc  sw          $zero, 0x11BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B280u;
    if (runtime->hasFunction(0x17B280u)) {
        auto targetFn = runtime->lookupFunction(0x17B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283B0u; }
        if (ctx->pc != 0x2283B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b280_0x17b288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283B0u; }
        if (ctx->pc != 0x2283B0u) { return; }
    }
    ctx->pc = 0x2283B0u;
label_2283b0:
    // 0x2283b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2283B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2283B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2283B4u;
            // 0x2283b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2283B0u: goto label_2283b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2283BCu;
    // 0x2283bc: 0x0  nop
    ctx->pc = 0x2283bcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21e900
// Address: 0x21e900 - 0x21e958
void entry_21e900_0x21e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21e900_0x21e958");
#endif

    ctx->pc = 0x21e900u;

    // 0x21e900: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21e904: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21e908: 0x8c46ed58  lw          $a2, -0x12A8($v0)
    ctx->pc = 0x21e908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x21e90c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e910: 0x8ce2e604  lw          $v0, -0x19FC($a3)
    ctx->pc = 0x21e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960644)));
    // 0x21e914: 0x24c3fffc  addiu       $v1, $a2, -0x4
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x21e918: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21e918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21e91c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E91Cu;
    {
        const bool branch_taken_0x21e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E91Cu;
            // 0x21e920: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e91c) {
            ctx->pc = 0x21E948u;
            goto label_21e948;
        }
    }
    ctx->pc = 0x21E924u;
    // 0x21e924: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21e924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21e928: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21e928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21e92c: 0x8c82e5e0  lw          $v0, -0x1A20($a0)
    ctx->pc = 0x21e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960608)));
    // 0x21e930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e934: 0xace6e604  sw          $a2, -0x19FC($a3)
    ctx->pc = 0x21e934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960644), GPR_U32(ctx, 6));
    // 0x21e938: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21e938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21e93c: 0xaca3e5e4  sw          $v1, -0x1A1C($a1)
    ctx->pc = 0x21e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960612), GPR_U32(ctx, 3));
    // 0x21e940: 0xc0879d4  jal         func_21E750
    ctx->pc = 0x21E940u;
    SET_GPR_U32(ctx, 31, 0x21E948u);
    ctx->pc = 0x21E944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E940u;
            // 0x21e944: 0xac82e5e0  sw          $v0, -0x1A20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294960608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E750u;
    if (runtime->hasFunction(0x21E750u)) {
        auto targetFn = runtime->lookupFunction(0x21E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E948u; }
        if (ctx->pc != 0x21E948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21e750_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E948u; }
        if (ctx->pc != 0x21E948u) { return; }
    }
    ctx->pc = 0x21E948u;
label_21e948:
    // 0x21e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E94Cu;
            // 0x21e950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E948u: goto label_21e948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E954u;
    // 0x21e954: 0x0  nop
    ctx->pc = 0x21e954u;
    // NOP
}

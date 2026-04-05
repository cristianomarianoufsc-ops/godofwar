#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEBA8
// Address: 0x1aeba8 - 0x1aec18
void sub_001AEBA8_0x1aeba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEBA8_0x1aeba8");
#endif

    ctx->pc = 0x1aeba8u;

    // 0x1aeba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aebac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aebb0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1aebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1aebb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEBB4u;
    {
        const bool branch_taken_0x1aebb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBB4u;
            // 0x1aebb8: 0xa63821  addu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebb4) {
            ctx->pc = 0x1AEBCCu;
            goto label_1aebcc;
        }
    }
    ctx->pc = 0x1AEBBCu;
    // 0x1aebbc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aebc0: 0x8c4225cc  lw          $v0, 0x25CC($v0)
    ctx->pc = 0x1aebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9676)));
    // 0x1aebc4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1aebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1aebc8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1aebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1aebcc:
    // 0x1aebcc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1aebccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1aebd0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AEBD0u;
    {
        const bool branch_taken_0x1aebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBD0u;
            // 0x1aebd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebd0) {
            ctx->pc = 0x1AEC0Cu;
            goto label_1aec0c;
        }
    }
    ctx->pc = 0x1AEBD8u;
    // 0x1aebd8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1aebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1aebdc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1aebe0: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1aebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x1aebe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1aebe8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1aebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1aebec: 0xac6225cc  sw          $v0, 0x25CC($v1)
    ctx->pc = 0x1aebecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9676), GPR_U32(ctx, 2));
    // 0x1aebf0: 0x28420500  slti        $v0, $v0, 0x500
    ctx->pc = 0x1aebf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x1aebf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEBF4u;
    {
        const bool branch_taken_0x1aebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aebf4) {
            ctx->pc = 0x1AEC08u;
            goto label_1aec08;
        }
    }
    ctx->pc = 0x1AEBFCu;
    // 0x1aebfc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1aec00: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x1AEC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC00u;
            // 0x1aec04: 0x24844430  addiu       $a0, $a0, 0x4430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC08u; }
        if (ctx->pc != 0x1AEC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC08u; }
        if (ctx->pc != 0x1AEC08u) { return; }
    }
    ctx->pc = 0x1AEC08u;
label_1aec08:
    // 0x1aec08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aec0c:
    // 0x1aec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC0Cu;
            // 0x1aec10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEBCCu: goto label_1aebcc;
            case 0x1AEC08u: goto label_1aec08;
            case 0x1AEC0Cu: goto label_1aec0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEC14u;
    // 0x1aec14: 0x0  nop
    ctx->pc = 0x1aec14u;
    // NOP
}

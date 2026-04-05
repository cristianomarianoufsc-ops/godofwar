#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dc008
// Address: 0x1dc008 - 0x1dc040
void entry_1dc008_0x1dc040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dc008_0x1dc040");
#endif

    ctx->pc = 0x1dc008u;

    // 0x1dc008: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dc00c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dc00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dc010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC010u;
    {
        const bool branch_taken_0x1dc010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC010u;
            // 0x1dc014: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc010) {
            ctx->pc = 0x1DC024u;
            goto label_1dc024;
        }
    }
    ctx->pc = 0x1DC018u;
    // 0x1dc018: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC01Cu;
            // 0x1dc020: 0xc440017c  lwc1        $f0, 0x17C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC024u: goto label_1dc024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC024u;
label_1dc024:
    // 0x1dc024: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1dc024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1dc028: 0x90422d36  lbu         $v0, 0x2D36($v0)
    ctx->pc = 0x1dc028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11574)));
    // 0x1dc02c: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1dc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1dc030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc038: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC038u;
            // 0x1dc03c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC024u: goto label_1dc024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC040u;
}

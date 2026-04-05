#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CE90
// Address: 0x14ce90 - 0x14cee8
void sub_0014CE90_0x14ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CE90_0x14ce90");
#endif

    ctx->pc = 0x14ce90u;

    // 0x14ce90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ce94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14ce94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ce9c: 0x94820040  lhu         $v0, 0x40($a0)
    ctx->pc = 0x14ce9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14cea0: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x14cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x14cea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cea8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CEA8u;
    {
        const bool branch_taken_0x14cea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEA8u;
            // 0x14ceac: 0xa4820040  sh          $v0, 0x40($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cea8) {
            ctx->pc = 0x14CEBCu;
            goto label_14cebc;
        }
    }
    ctx->pc = 0x14CEB0u;
    // 0x14ceb0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14ceb4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x14ceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x14ceb8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x14ceb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14cebc:
    // 0x14cebc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CEBCu;
    {
        const bool branch_taken_0x14cebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEBCu;
            // 0x14cec0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cebc) {
            ctx->pc = 0x14CEDCu;
            goto label_14cedc;
        }
    }
    ctx->pc = 0x14CEC4u;
    // 0x14cec4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x14cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14cec8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CEC8u;
    {
        const bool branch_taken_0x14cec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cec8) {
            ctx->pc = 0x14CEDCu;
            goto label_14cedc;
        }
    }
    ctx->pc = 0x14CED0u;
    // 0x14ced0: 0xc054094  jal         func_150250
    ctx->pc = 0x14CED0u;
    SET_GPR_U32(ctx, 31, 0x14CED8u);
    ctx->pc = 0x150250u;
    if (runtime->hasFunction(0x150250u)) {
        auto targetFn = runtime->lookupFunction(0x150250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED8u; }
        if (ctx->pc != 0x14CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150250_0x1502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED8u; }
        if (ctx->pc != 0x14CED8u) { return; }
    }
    ctx->pc = 0x14CED8u;
    // 0x14ced8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ced8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cedc:
    // 0x14cedc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEDCu;
            // 0x14cee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CEBCu: goto label_14cebc;
            case 0x14CEDCu: goto label_14cedc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CEE4u;
    // 0x14cee4: 0x0  nop
    ctx->pc = 0x14cee4u;
    // NOP
}

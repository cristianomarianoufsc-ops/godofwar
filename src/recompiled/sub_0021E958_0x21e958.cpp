#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E958
// Address: 0x21e958 - 0x21e988
void sub_0021E958_0x21e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E958_0x21e958");
#endif

    ctx->pc = 0x21e958u;

    // 0x21e958: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e95c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e960: 0x8c42e5e4  lw          $v0, -0x1A1C($v0)
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960612)));
    // 0x21e964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E964u;
    {
        const bool branch_taken_0x21e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E964u;
            // 0x21e968: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e964) {
            ctx->pc = 0x21E978u;
            goto label_21e978;
        }
    }
    ctx->pc = 0x21E96Cu;
    // 0x21e96c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e970: 0xc0879d8  jal         func_21E760
    ctx->pc = 0x21E970u;
    SET_GPR_U32(ctx, 31, 0x21E978u);
    ctx->pc = 0x21E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E970u;
            // 0x21e974: 0x8c44e5e0  lw          $a0, -0x1A20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E760u;
    if (runtime->hasFunction(0x21E760u)) {
        auto targetFn = runtime->lookupFunction(0x21E760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E978u; }
        if (ctx->pc != 0x21E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021e760_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E978u; }
        if (ctx->pc != 0x21E978u) { return; }
    }
    ctx->pc = 0x21E978u;
label_21e978:
    // 0x21e978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e97c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E97Cu;
            // 0x21e980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E978u: goto label_21e978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E984u;
    // 0x21e984: 0x0  nop
    ctx->pc = 0x21e984u;
    // NOP
}

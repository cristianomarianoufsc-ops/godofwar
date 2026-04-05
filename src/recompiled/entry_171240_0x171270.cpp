#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_171240
// Address: 0x171240 - 0x171270
void entry_171240_0x171270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_171240_0x171270");
#endif

    ctx->pc = 0x171240u;

    // 0x171240: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x171240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x171244: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x171244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x171248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17124c: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x17124cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x171250: 0xc21006  srlv        $v0, $v0, $a2
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x171254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x171258: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x171258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17125c: 0x3e00008  jr          $ra
    ctx->pc = 0x17125Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17125Cu;
            // 0x171260: 0xac8300a0  sw          $v1, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171264u;
    // 0x171264: 0x0  nop
    ctx->pc = 0x171264u;
    // NOP
    // 0x171268: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x171268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x17126c: 0x0  nop
    ctx->pc = 0x17126cu;
    // NOP
}

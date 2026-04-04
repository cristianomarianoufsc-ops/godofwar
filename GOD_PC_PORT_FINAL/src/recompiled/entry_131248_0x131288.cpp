#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_131248
// Address: 0x131248 - 0x131288
void entry_131248_0x131288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_131248_0x131288");
#endif

    ctx->pc = 0x131248u;

    // 0x131248: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x131248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x13124c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x13124cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131250: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131254: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x131254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x131258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13125c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131260: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x131260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x131264: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131268: 0x5300a  movz        $a2, $zero, $a1
    ctx->pc = 0x131268u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x13126c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13126cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131270: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x131270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x131274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x131274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13127c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x13127cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x131280: 0x3e00008  jr          $ra
    ctx->pc = 0x131280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131280u;
            // 0x131284: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131288u;
}

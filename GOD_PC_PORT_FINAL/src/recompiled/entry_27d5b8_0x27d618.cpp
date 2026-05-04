#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d5b8
// Address: 0x27d5b8 - 0x27d618
void entry_27d5b8_0x27d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d5b8_0x27d618");
#endif

    ctx->pc = 0x27d5b8u;
    std::cerr << "[entry_27d5b8] START\n";

    // 0x27d5b8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27d5bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d5c0: 0x2442c9c8  addiu       $v0, $v0, -0x3638
    ctx->pc = 0x27d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    // 0x27d5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d5c8: 0x24420808  addiu       $v0, $v0, 0x808
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x27d5cc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x27d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x27d5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d5d4: 0x0  nop
    ctx->pc = 0x27d5d4u;
    // NOP
label_27d5d8:
    // 0x27d5d8: 0xac44fff8  sw          $a0, -0x8($v0)
    ctx->pc = 0x27d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 4));
    // 0x27d5dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27d5e0: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x27d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
    // 0x27d5e4: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x27d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x27d5e8: 0xac460080  sw          $a2, 0x80($v0)
    ctx->pc = 0x27d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
    // 0x27d5ec: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x27d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x27d5f0: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x27d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x27d5f4: 0x24aa5238  addiu       $t2, $a1, 0x5238
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 21048));
    // 0x27d5f8: 0x81470000  lb          $a3, 0x0($t2)
    ctx->pc = 0x27d5f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x27d5fc: 0x81480001  lb          $t0, 0x1($t2)
    ctx->pc = 0x27d5fcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x27d600: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x27d600u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x27d604: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x27d604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x27d608: 0x461fff3  bgez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x27D608u;
    {
        const bool branch_taken_0x27d608 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D608u;
            // 0x27d60c: 0x24420898  addiu       $v0, $v0, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d608) {
            ctx->pc = 0x27D5D8u;
            runtime->cooperativeGuestYield();
            goto label_27d5d8;
        }
    }
    ctx->pc = 0x27D610u;
    // 0x27d610: 0x3e00008  jr          $ra
    ctx->pc = 0x27D610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D610u;
            // 0x27d614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D5D8u: goto label_27d5d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D618u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d3e8
// Address: 0x27d3e8 - 0x27d430
void entry_27d3e8_0x27d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d3e8_0x27d430");
#endif

    ctx->pc = 0x27d3e8u;

    // 0x27d3e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3f0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x27d3f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27d3f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27D3F4u;
    {
        const bool branch_taken_0x27d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3F4u;
            // 0x27d3f8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3f4) {
            ctx->pc = 0x27D424u;
            goto label_27d424;
        }
    }
    ctx->pc = 0x27D3FCu;
    // 0x27d3fc: 0x0  nop
    ctx->pc = 0x27d3fcu;
    // NOP
label_27d400:
    // 0x27d400: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x27d400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x27d404: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27d404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27d408: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27d408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x27d40c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x27d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27d410: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x27d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x27d414: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x27d414u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27d418: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x27d418u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x27d41c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27D41Cu;
    {
        const bool branch_taken_0x27d41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D41Cu;
            // 0x27d420: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d41c) {
            ctx->pc = 0x27D400u;
            runtime->cooperativeGuestYield();
            goto label_27d400;
        }
    }
    ctx->pc = 0x27D424u;
label_27d424:
    // 0x27d424: 0x3e00008  jr          $ra
    ctx->pc = 0x27D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D424u;
            // 0x27d428: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D400u: goto label_27d400;
            case 0x27D424u: goto label_27d424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D42Cu;
    // 0x27d42c: 0x0  nop
    ctx->pc = 0x27d42cu;
    // NOP
}

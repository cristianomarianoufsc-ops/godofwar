#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28d3b8
// Address: 0x28d3b8 - 0x28d408
void entry_28d3b8_0x28d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28d3b8_0x28d408");
#endif

    ctx->pc = 0x28d3b8u;

    // 0x28d3b8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x28d3bc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28d3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d3c0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x28d3c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x28d3c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D3C8u;
    {
        const bool branch_taken_0x28d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3C8u;
            // 0x28d3cc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3c8) {
            ctx->pc = 0x28D3F0u;
            goto label_28d3f0;
        }
    }
    ctx->pc = 0x28D3D0u;
label_28d3d0:
    // 0x28d3d0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28d3d4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x28d3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28d3d8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x28d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x28d3dc: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x28d3dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x28d3e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28d3e4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d3e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28D3E8u;
    {
        const bool branch_taken_0x28d3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3E8u;
            // 0x28d3ec: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3e8) {
            ctx->pc = 0x28D3D0u;
            runtime->cooperativeGuestYield();
            goto label_28d3d0;
        }
    }
    ctx->pc = 0x28D3F0u;
label_28d3f0:
    // 0x28d3f0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x28d3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d3f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28d3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3f8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x28d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x28d3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3FCu;
            // 0x28d400: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D3D0u: goto label_28d3d0;
            case 0x28D3F0u: goto label_28d3f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D404u;
    // 0x28d404: 0x0  nop
    ctx->pc = 0x28d404u;
    // NOP
}

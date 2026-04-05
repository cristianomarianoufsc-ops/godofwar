#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_161d70
// Address: 0x161d70 - 0x161df0
void entry_161d70_0x161df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_161d70_0x161df0");
#endif

    ctx->pc = 0x161d70u;

    // 0x161d70: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161d78: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x161d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x161d7c: 0xac49c298  sw          $t1, -0x3D68($v0)
    ctx->pc = 0x161d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951576), GPR_U32(ctx, 9));
    // 0x161d80: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x161d84: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x161d88: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x161d8c: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x161d90: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x161d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x161d94: 0x8d48f168  lw          $t0, -0xE98($t2)
    ctx->pc = 0x161d94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294963560)));
    // 0x161d98: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x161d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x161d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161D9Cu;
    {
        const bool branch_taken_0x161d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D9Cu;
            // 0x161da0: 0x3c020300  lui         $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d9c) {
            ctx->pc = 0x161DC8u;
            goto label_161dc8;
        }
    }
    ctx->pc = 0x161DA4u;
    // 0x161da4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x161da4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_161da8:
    // 0x161da8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x161da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x161dac: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x161dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x161db0: 0x0  nop
    ctx->pc = 0x161db0u;
    // NOP
    // 0x161db4: 0x0  nop
    ctx->pc = 0x161db4u;
    // NOP
    // 0x161db8: 0x0  nop
    ctx->pc = 0x161db8u;
    // NOP
    // 0x161dbc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161DBCu;
            // 0x161dc0: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161DA8u;
            runtime->cooperativeGuestYield();
            goto label_161da8;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
label_161dc8:
    // 0x161dc8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x161dcc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x161dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x161dd0: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x161dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x161dd4: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x161dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x161dd8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x161dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x161ddc: 0xad44f168  sw          $a0, -0xE98($t2)
    ctx->pc = 0x161ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294963560), GPR_U32(ctx, 4));
    // 0x161de0: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x161de0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x161de4: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x161de4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x161de8: 0x3e00008  jr          $ra
    ctx->pc = 0x161DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161DE8u;
            // 0x161dec: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161DA8u: goto label_161da8;
            case 0x161DC8u: goto label_161dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161DF0u;
}

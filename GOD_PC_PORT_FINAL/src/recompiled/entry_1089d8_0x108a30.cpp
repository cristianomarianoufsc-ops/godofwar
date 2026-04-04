#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1089d8
// Address: 0x1089d8 - 0x108a30
void entry_1089d8_0x108a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1089d8_0x108a30");
#endif

    ctx->pc = 0x1089d8u;

    // 0x1089d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1089d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1089dc: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x1089dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1089e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1089e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1089e4: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1089E4u;
    {
        const bool branch_taken_0x1089e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1089e4) {
            ctx->pc = 0x108A28u;
            goto label_108a28;
        }
    }
    ctx->pc = 0x1089ECu;
    // 0x1089ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1089f0:
    // 0x1089f0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1089f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1089f4: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1089F4u;
    {
        const bool branch_taken_0x1089f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1089f4) {
            ctx->pc = 0x1089F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1089F4u;
            // 0x1089f8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108A20u;
            goto label_108a20;
        }
    }
    ctx->pc = 0x1089FCu;
    // 0x1089fc: 0x0  nop
    ctx->pc = 0x1089fcu;
    // NOP
label_108a00:
    // 0x108a00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x108a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108a04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108a08: 0x0  nop
    ctx->pc = 0x108a08u;
    // NOP
    // 0x108a0c: 0x0  nop
    ctx->pc = 0x108a0cu;
    // NOP
    // 0x108a10: 0x0  nop
    ctx->pc = 0x108a10u;
    // NOP
    // 0x108a14: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108A14u;
    {
        const bool branch_taken_0x108a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x108A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A14u;
            // 0x108a18: 0x46010068  max.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a14) {
            ctx->pc = 0x108A00u;
            runtime->cooperativeGuestYield();
            goto label_108a00;
        }
    }
    ctx->pc = 0x108A1Cu;
    // 0x108a1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108a20:
    // 0x108a20: 0x5465fff3  bnel        $v1, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x108A20u;
    {
        const bool branch_taken_0x108a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x108a20) {
            ctx->pc = 0x108A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108A20u;
            // 0x108a24: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1089F0u;
            runtime->cooperativeGuestYield();
            goto label_1089f0;
        }
    }
    ctx->pc = 0x108A28u;
label_108a28:
    // 0x108a28: 0x3e00008  jr          $ra
    ctx->pc = 0x108A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A28u;
            // 0x108a2c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1089F0u: goto label_1089f0;
            case 0x108A00u: goto label_108a00;
            case 0x108A20u: goto label_108a20;
            case 0x108A28u: goto label_108a28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108A30u;
}

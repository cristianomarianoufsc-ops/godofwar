#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_100db8
// Address: 0x100db8 - 0x100e28
void entry_100db8_0x100e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_100db8_0x100e28");
#endif

    ctx->pc = 0x100db8u;

    // 0x100db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100dc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100dc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100dcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x100dd0: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x100dd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x100dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100ddc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x100de0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x100de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x100de4: 0x40f809  jalr        $v0
    ctx->pc = 0x100DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100DECu);
        ctx->pc = 0x100DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100DE4u;
            // 0x100de8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100DECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E08u: goto label_100e08;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100DECu; }
            if (ctx->pc != 0x100DECu) { return; }
        }
        }
    }
    ctx->pc = 0x100DECu;
    // 0x100dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100df0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x100df4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100DF4u;
    {
        const bool branch_taken_0x100df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100DF4u;
            // 0x100df8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100df4) {
            ctx->pc = 0x100E08u;
            goto label_100e08;
        }
    }
    ctx->pc = 0x100DFCu;
    // 0x100dfc: 0xc046044  jal         func_118110
    ctx->pc = 0x100DFCu;
    SET_GPR_U32(ctx, 31, 0x100E04u);
    ctx->pc = 0x100E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100DFCu;
            // 0x100e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E04u; }
        if (ctx->pc != 0x100E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E04u; }
        if (ctx->pc != 0x100E04u) { return; }
    }
    ctx->pc = 0x100E04u;
    // 0x100e04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_100e08:
    // 0x100e08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x100e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x100e0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x100E0Cu;
    SET_GPR_U32(ctx, 31, 0x100E14u);
    ctx->pc = 0x100E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E0Cu;
            // 0x100e10: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E14u; }
        if (ctx->pc != 0x100E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E14u; }
        if (ctx->pc != 0x100E14u) { return; }
    }
    ctx->pc = 0x100E14u;
    // 0x100e14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e20: 0x3e00008  jr          $ra
    ctx->pc = 0x100E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E20u;
            // 0x100e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E08u: goto label_100e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100E28u;
}

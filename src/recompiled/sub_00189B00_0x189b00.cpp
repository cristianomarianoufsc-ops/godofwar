#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189B00
// Address: 0x189b00 - 0x189b78
void sub_00189B00_0x189b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189B00_0x189b00");
#endif

    ctx->pc = 0x189b00u;

    // 0x189b00: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189b04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189b0c: 0x8c444f20  lw          $a0, 0x4F20($v0)
    ctx->pc = 0x189b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x189b10: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x189b14: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189B14u;
    {
        const bool branch_taken_0x189b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B14u;
            // 0x189b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b14) {
            ctx->pc = 0x189B68u;
            goto label_189b68;
        }
    }
    ctx->pc = 0x189B1Cu;
    // 0x189b1c: 0x8c830140  lw          $v1, 0x140($a0)
    ctx->pc = 0x189b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x189b20: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x189B20u;
    {
        const bool branch_taken_0x189b20 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x189B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B20u;
            // 0x189b24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b20) {
            ctx->pc = 0x189B64u;
            goto label_189b64;
        }
    }
    ctx->pc = 0x189B28u;
    // 0x189b28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x189B28u;
    {
        const bool branch_taken_0x189b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189b28) {
            ctx->pc = 0x189B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189B28u;
            // 0x189b2c: 0x8c830050  lw          $v1, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189B44u;
            goto label_189b44;
        }
    }
    ctx->pc = 0x189B30u;
    // 0x189b30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189b34: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x189B34u;
    {
        const bool branch_taken_0x189b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B34u;
            // 0x189b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b34) {
            ctx->pc = 0x189B54u;
            goto label_189b54;
        }
    }
    ctx->pc = 0x189B3Cu;
    // 0x189b3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B3Cu;
            // 0x189b40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189B6Cu;
            goto label_189b6c;
        }
    }
    ctx->pc = 0x189B44u;
label_189b44:
    // 0x189b44: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x189b48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x189b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189b4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189B4Cu;
    {
        const bool branch_taken_0x189b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B4Cu;
            // 0x189b50: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b4c) {
            ctx->pc = 0x189B68u;
            goto label_189b68;
        }
    }
    ctx->pc = 0x189B54u;
label_189b54:
    // 0x189b54: 0xc09bfdc  jal         func_26FF70
    ctx->pc = 0x189B54u;
    SET_GPR_U32(ctx, 31, 0x189B5Cu);
    ctx->pc = 0x26FF70u;
    if (runtime->hasFunction(0x26FF70u)) {
        auto targetFn = runtime->lookupFunction(0x26FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B5Cu; }
        if (ctx->pc != 0x189B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ff70_0x26ff88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B5Cu; }
        if (ctx->pc != 0x189B5Cu) { return; }
    }
    ctx->pc = 0x189B5Cu;
    // 0x189b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189B5Cu;
    {
        const bool branch_taken_0x189b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B5Cu;
            // 0x189b60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b5c) {
            ctx->pc = 0x189B6Cu;
            goto label_189b6c;
        }
    }
    ctx->pc = 0x189B64u;
label_189b64:
    // 0x189b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189b68:
    // 0x189b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189b6c:
    // 0x189b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x189B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B6Cu;
            // 0x189b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B44u: goto label_189b44;
            case 0x189B54u: goto label_189b54;
            case 0x189B64u: goto label_189b64;
            case 0x189B68u: goto label_189b68;
            case 0x189B6Cu: goto label_189b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B74u;
    // 0x189b74: 0x0  nop
    ctx->pc = 0x189b74u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244ae0
// Address: 0x244ae0 - 0x244b60
void entry_244ae0_0x244b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244ae0_0x244b60");
#endif

    ctx->pc = 0x244ae0u;

    // 0x244ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244ae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x244ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244aec: 0xc09695a  jal         func_25A568
    ctx->pc = 0x244AECu;
    SET_GPR_U32(ctx, 31, 0x244AF4u);
    ctx->pc = 0x244AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244AECu;
            // 0x244af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A568u;
    if (runtime->hasFunction(0x25A568u)) {
        auto targetFn = runtime->lookupFunction(0x25A568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AF4u; }
        if (ctx->pc != 0x244AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_25a568_0x25a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AF4u; }
        if (ctx->pc != 0x244AF4u) { return; }
    }
    ctx->pc = 0x244AF4u;
    // 0x244af4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244afc: 0x24631ee0  addiu       $v1, $v1, 0x1EE0
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7904));
    // 0x244b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244b04: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x244b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x244b08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x244B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B0Cu;
            // 0x244b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244B44u: goto label_244b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244B14u;
    // 0x244b14: 0x0  nop
    ctx->pc = 0x244b14u;
    // NOP
    // 0x244b18: 0x8c42c420  lw          $v0, -0x3BE0($v0)
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951968)));
    // 0x244b1c: 0x0  nop
    ctx->pc = 0x244b1cu;
    // NOP
    // 0x244b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244b24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244b2c: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x244b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x244b30: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x244b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x244b34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244B34u;
    {
        const bool branch_taken_0x244b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B34u;
            // 0x244b38: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b34) {
            ctx->pc = 0x244B44u;
            goto label_244b44;
        }
    }
    ctx->pc = 0x244B3Cu;
    // 0x244b3c: 0xc08ad14  jal         func_22B450
    ctx->pc = 0x244B3Cu;
    SET_GPR_U32(ctx, 31, 0x244B44u);
    ctx->pc = 0x22B450u;
    if (runtime->hasFunction(0x22B450u)) {
        auto targetFn = runtime->lookupFunction(0x22B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B44u; }
        if (ctx->pc != 0x244B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b450_0x22b478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B44u; }
        if (ctx->pc != 0x244B44u) { return; }
    }
    ctx->pc = 0x244B44u;
label_244b44:
    // 0x244b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244b48: 0x3e00008  jr          $ra
    ctx->pc = 0x244B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B48u;
            // 0x244b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244B44u: goto label_244b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244B50u;
    // 0x244b50: 0x8c42c41c  lw          $v0, -0x3BE4($v0)
    ctx->pc = 0x244b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951964)));
    // 0x244b54: 0x0  nop
    ctx->pc = 0x244b54u;
    // NOP
    // 0x244b58: 0x8c425600  lw          $v0, 0x5600($v0)
    ctx->pc = 0x244b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22016)));
    // 0x244b5c: 0x0  nop
    ctx->pc = 0x244b5cu;
    // NOP
}

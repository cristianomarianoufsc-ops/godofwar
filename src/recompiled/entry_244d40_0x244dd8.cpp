#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244d40
// Address: 0x244d40 - 0x244dd8
void entry_244d40_0x244dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244d40_0x244dd8");
#endif

    ctx->pc = 0x244d40u;

    // 0x244d40: 0x3e00008  jr          $ra
    ctx->pc = 0x244D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244D40u;
            // 0x244d44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244DCCu: goto label_244dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244D48u;
    // 0x244d48: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x244d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
    // 0x244d4c: 0x0  nop
    ctx->pc = 0x244d4cu;
    // NOP
    // 0x244d50: 0x3e00008  jr          $ra
    ctx->pc = 0x244D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244DCCu: goto label_244dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244D58u;
    // 0x244d58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244d5c: 0x0  nop
    ctx->pc = 0x244d5cu;
    // NOP
    // 0x244d60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x244d64: 0x0  nop
    ctx->pc = 0x244d64u;
    // NOP
    // 0x244d68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x244d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x244d6c: 0x0  nop
    ctx->pc = 0x244d6cu;
    // NOP
    // 0x244d70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x244d74: 0x0  nop
    ctx->pc = 0x244d74u;
    // NOP
    // 0x244d78: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x244d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x244d7c: 0x0  nop
    ctx->pc = 0x244d7cu;
    // NOP
    // 0x244d80: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x244d84: 0x0  nop
    ctx->pc = 0x244d84u;
    // NOP
    // 0x244d88: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x244d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x244d8c: 0x0  nop
    ctx->pc = 0x244d8cu;
    // NOP
    // 0x244d90: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x244d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x244d94: 0x0  nop
    ctx->pc = 0x244d94u;
    // NOP
    // 0x244d98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x244d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x244d9c: 0x0  nop
    ctx->pc = 0x244d9cu;
    // NOP
    // 0x244da0: 0x844200b8  lh          $v0, 0xB8($v0)
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x244da4: 0x0  nop
    ctx->pc = 0x244da4u;
    // NOP
    // 0x244da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244dac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244db4: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x244db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x244db8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x244db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x244dbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244DBCu;
    {
        const bool branch_taken_0x244dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244DBCu;
            // 0x244dc0: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dbc) {
            ctx->pc = 0x244DCCu;
            goto label_244dcc;
        }
    }
    ctx->pc = 0x244DC4u;
    // 0x244dc4: 0xc07fd82  jal         func_1FF608
    ctx->pc = 0x244DC4u;
    SET_GPR_U32(ctx, 31, 0x244DCCu);
    ctx->pc = 0x1FF608u;
    if (runtime->hasFunction(0x1FF608u)) {
        auto targetFn = runtime->lookupFunction(0x1FF608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244DCCu; }
        if (ctx->pc != 0x244DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ff608_0x1ff630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244DCCu; }
        if (ctx->pc != 0x244DCCu) { return; }
    }
    ctx->pc = 0x244DCCu;
label_244dcc:
    // 0x244dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x244DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244DD0u;
            // 0x244dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244DCCu: goto label_244dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244DD8u;
}

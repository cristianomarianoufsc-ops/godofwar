#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192E28
// Address: 0x192e28 - 0x192ea0
void sub_00192E28_0x192e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192E28_0x192e28");
#endif

    ctx->pc = 0x192e28u;

    // 0x192e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192e2c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x192e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192e34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x192e38: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x192e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x192e3c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192e40: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x192e44: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x192e48: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x192e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192e4c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x192e50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e58: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192E58u;
    {
        const bool branch_taken_0x192e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E58u;
            // 0x192e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e58) {
            ctx->pc = 0x192E64u;
            goto label_192e64;
        }
    }
    ctx->pc = 0x192E60u;
    // 0x192e60: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_192e64:
    // 0x192e64: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x192E64u;
    {
        const bool branch_taken_0x192e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E64u;
            // 0x192e68: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e64) {
            ctx->pc = 0x192E80u;
            goto label_192e80;
        }
    }
    ctx->pc = 0x192E6Cu;
    // 0x192e6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192e70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x192e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x192e74: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x192e74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x192e78: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x192e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x192e7c: 0x0  nop
    ctx->pc = 0x192e7cu;
    // NOP
label_192e80:
    // 0x192e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192E80u;
    {
        const bool branch_taken_0x192e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E80u;
            // 0x192e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e80) {
            ctx->pc = 0x192E94u;
            goto label_192e94;
        }
    }
    ctx->pc = 0x192E88u;
    // 0x192e88: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x192E88u;
    SET_GPR_U32(ctx, 31, 0x192E90u);
    ctx->pc = 0x192E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192E88u;
            // 0x192e8c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E90u; }
        if (ctx->pc != 0x192E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E90u; }
        if (ctx->pc != 0x192E90u) { return; }
    }
    ctx->pc = 0x192E90u;
    // 0x192e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192e94:
    // 0x192e94: 0x3e00008  jr          $ra
    ctx->pc = 0x192E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E94u;
            // 0x192e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192E64u: goto label_192e64;
            case 0x192E80u: goto label_192e80;
            case 0x192E94u: goto label_192e94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192E9Cu;
    // 0x192e9c: 0x0  nop
    ctx->pc = 0x192e9cu;
    // NOP
}

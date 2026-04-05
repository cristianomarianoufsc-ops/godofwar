#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153CB0
// Address: 0x153cb0 - 0x153d80
void sub_00153CB0_0x153cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153CB0_0x153cb0");
#endif

    ctx->pc = 0x153cb0u;

    // 0x153cb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153cb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x153cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x153cb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153cbc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x153cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cc4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x153cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x153cc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x153cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x153ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153cd0: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x153cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x153cd4: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153CD4u;
    {
        const bool branch_taken_0x153cd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x153CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CD4u;
            // 0x153cd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cd4) {
            ctx->pc = 0x153D34u;
            goto label_153d34;
        }
    }
    ctx->pc = 0x153CDCu;
    // 0x153cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x153cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_153ce0:
    // 0x153ce0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x153ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ce4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x153ce8: 0x8c540060  lw          $s4, 0x60($v0)
    ctx->pc = 0x153ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x153cec: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x153cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_153cf0:
    // 0x153cf0: 0x26830098  addiu       $v1, $s4, 0x98
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x153cf4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x153cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153cf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x153cfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x153cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153d00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153D00u;
    {
        const bool branch_taken_0x153d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D00u;
            // 0x153d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d00) {
            ctx->pc = 0x153D14u;
            goto label_153d14;
        }
    }
    ctx->pc = 0x153D08u;
    // 0x153d08: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x153D08u;
    SET_GPR_U32(ctx, 31, 0x153D10u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D10u; }
        if (ctx->pc != 0x153D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D10u; }
        if (ctx->pc != 0x153D10u) { return; }
    }
    ctx->pc = 0x153D10u;
    // 0x153d10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x153d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_153d14:
    // 0x153d14: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x153d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153d18: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x153D18u;
    {
        const bool branch_taken_0x153d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D18u;
            // 0x153d1c: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d18) {
            ctx->pc = 0x153CF0u;
            runtime->cooperativeGuestYield();
            goto label_153cf0;
        }
    }
    ctx->pc = 0x153D20u;
    // 0x153d20: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x153d24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153d28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x153d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x153d2c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x153D2Cu;
    {
        const bool branch_taken_0x153d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D2Cu;
            // 0x153d30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d2c) {
            ctx->pc = 0x153CE0u;
            runtime->cooperativeGuestYield();
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153D34u;
label_153d34:
    // 0x153d34: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x153d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x153d38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x153d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x153d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_153d40:
    // 0x153d40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x153d44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153d48: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x153d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x153d4c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x153d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153d50: 0x0  nop
    ctx->pc = 0x153d50u;
    // NOP
    // 0x153d54: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x153D54u;
    {
        const bool branch_taken_0x153d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153d54) {
            ctx->pc = 0x153D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153D54u;
            // 0x153d58: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153D40u;
            runtime->cooperativeGuestYield();
            goto label_153d40;
        }
    }
    ctx->pc = 0x153D5Cu;
    // 0x153d5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x153d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153d60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x153d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153d68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x153d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153d6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x153d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153d74: 0x3e00008  jr          $ra
    ctx->pc = 0x153D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D74u;
            // 0x153d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153CE0u: goto label_153ce0;
            case 0x153CF0u: goto label_153cf0;
            case 0x153D14u: goto label_153d14;
            case 0x153D34u: goto label_153d34;
            case 0x153D40u: goto label_153d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153D7Cu;
    // 0x153d7c: 0x0  nop
    ctx->pc = 0x153d7cu;
    // NOP
}

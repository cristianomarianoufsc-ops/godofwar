#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DC68
// Address: 0x28dc68 - 0x28dd70
void sub_0028DC68_0x28dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DC68_0x28dc68");
#endif

    ctx->pc = 0x28dc68u;

    // 0x28dc68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28dc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28dc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dc70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x28dc74: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x28dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x28dc78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc7c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x28dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x28dc80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28dc80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x28dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x28dc88: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28dc88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x28dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x28dc90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x28dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x28dc94: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x28dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x28dc98: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28DC98u;
    {
        const bool branch_taken_0x28dc98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DC98u;
            // 0x28dc9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc98) {
            ctx->pc = 0x28DCD0u;
            goto label_28dcd0;
        }
    }
    ctx->pc = 0x28DCA0u;
    // 0x28dca0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x28dca0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x28dca4: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x28dca8: 0x26316a40  addiu       $s1, $s1, 0x6A40
    ctx->pc = 0x28dca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27200));
    // 0x28dcac: 0x8e064628  lw          $a2, 0x4628($s0)
    ctx->pc = 0x28dcacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17960)));
    // 0x28dcb0: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x28DCB0u;
    SET_GPR_U32(ctx, 31, 0x28DCB8u);
    ctx->pc = 0x28DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCB0u;
            // 0x28dcb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCB8u; }
        if (ctx->pc != 0x28DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCB8u; }
        if (ctx->pc != 0x28DCB8u) { return; }
    }
    ctx->pc = 0x28DCB8u;
    // 0x28dcb8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28dcbc: 0xae004628  sw          $zero, 0x4628($s0)
    ctx->pc = 0x28dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17960), GPR_U32(ctx, 0));
    // 0x28dcc0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28DCC0u;
    {
        const bool branch_taken_0x28dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCC0u;
            // 0x28dcc4: 0xac71462c  sw          $s1, 0x462C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17964), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcc0) {
            ctx->pc = 0x28DD48u;
            goto label_28dd48;
        }
    }
    ctx->pc = 0x28DCC8u;
label_28dcc8:
    // 0x28dcc8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28DCC8u;
    {
        const bool branch_taken_0x28dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCC8u;
            // 0x28dccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcc8) {
            ctx->pc = 0x28DD48u;
            goto label_28dd48;
        }
    }
    ctx->pc = 0x28DCD0u;
label_28dcd0:
    // 0x28dcd0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x28DCD0u;
    {
        const bool branch_taken_0x28dcd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCD0u;
            // 0x28dcd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcd0) {
            ctx->pc = 0x28DD44u;
            goto label_28dd44;
        }
    }
    ctx->pc = 0x28DCD8u;
    // 0x28dcd8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x28dcdc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x28dcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x28dce0: 0x24556a40  addiu       $s5, $v0, 0x6A40
    ctx->pc = 0x28dce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
    // 0x28dce4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x28dce8: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x28dcec: 0x0  nop
    ctx->pc = 0x28dcecu;
    // NOP
label_28dcf0:
    // 0x28dcf0: 0x8e24462c  lw          $a0, 0x462C($s1)
    ctx->pc = 0x28dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17964)));
    // 0x28dcf4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28dcf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28dcf8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28dcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28dcfc: 0x8e424628  lw          $v0, 0x4628($s2)
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17960)));
    // 0x28dd00: 0x8e23462c  lw          $v1, 0x462C($s1)
    ctx->pc = 0x28dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17964)));
    // 0x28dd04: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x28dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28dd08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dd0c: 0xae464628  sw          $a2, 0x4628($s2)
    ctx->pc = 0x28dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17960), GPR_U32(ctx, 6));
    // 0x28dd10: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x28dd14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DD14u;
    {
        const bool branch_taken_0x28dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD14u;
            // 0x28dd18: 0xae23462c  sw          $v1, 0x462C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd14) {
            ctx->pc = 0x28DD34u;
            goto label_28dd34;
        }
    }
    ctx->pc = 0x28DD1Cu;
    // 0x28dd1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd20: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x28DD20u;
    SET_GPR_U32(ctx, 31, 0x28DD28u);
    ctx->pc = 0x28DD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD20u;
            // 0x28dd24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD28u; }
        if (ctx->pc != 0x28DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD28u; }
        if (ctx->pc != 0x28DD28u) { return; }
    }
    ctx->pc = 0x28DD28u;
    // 0x28dd28: 0xae35462c  sw          $s5, 0x462C($s1)
    ctx->pc = 0x28dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17964), GPR_U32(ctx, 21));
    // 0x28dd2c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28DD2Cu;
    {
        const bool branch_taken_0x28dd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD2Cu;
            // 0x28dd30: 0xae404628  sw          $zero, 0x4628($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd2c) {
            ctx->pc = 0x28DCC8u;
            runtime->cooperativeGuestYield();
            goto label_28dcc8;
        }
    }
    ctx->pc = 0x28DD34u;
label_28dd34:
    // 0x28dd34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28dd38: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x28dd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x28dd3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28DD3Cu;
    {
        const bool branch_taken_0x28dd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD3Cu;
            // 0x28dd40: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd3c) {
            ctx->pc = 0x28DCF0u;
            runtime->cooperativeGuestYield();
            goto label_28dcf0;
        }
    }
    ctx->pc = 0x28DD44u;
label_28dd44:
    // 0x28dd44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28dd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dd48:
    // 0x28dd48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28dd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28dd4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x28dd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28dd50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x28dd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dd54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28dd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dd58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x28dd58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dd5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x28dd5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dd60: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x28dd60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28dd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dd68: 0x3e00008  jr          $ra
    ctx->pc = 0x28DD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD68u;
            // 0x28dd6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DCC8u: goto label_28dcc8;
            case 0x28DCD0u: goto label_28dcd0;
            case 0x28DCF0u: goto label_28dcf0;
            case 0x28DD34u: goto label_28dd34;
            case 0x28DD44u: goto label_28dd44;
            case 0x28DD48u: goto label_28dd48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DD70u;
}

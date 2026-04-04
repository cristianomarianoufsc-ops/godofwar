#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_276cf8
// Address: 0x276cf8 - 0x276db8
void entry_276cf8_0x276db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_276cf8_0x276db8");
#endif

    ctx->pc = 0x276cf8u;

    // 0x276cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276cfc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x276cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x276d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276d04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276d0c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x276d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d10: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x276d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276d14: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x276d18: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x276d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x276d1c: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x276d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x276d20: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x276d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x276d24: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x276d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x276d28: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x276d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x276d2c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276D2Cu;
    {
        const bool branch_taken_0x276d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x276d2c) {
            ctx->pc = 0x276D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276D2Cu;
            // 0x276d30: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276D48u;
            goto label_276d48;
        }
    }
    ctx->pc = 0x276D34u;
    // 0x276d34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x276d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x276d38: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x276d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x276d3c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x276d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x276d40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x276d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x276d44: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x276d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_276d48:
    // 0x276d48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x276d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276d4c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276D4Cu;
    {
        const bool branch_taken_0x276d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276d4c) {
            ctx->pc = 0x276D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276D4Cu;
            // 0x276d50: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276D5Cu;
            goto label_276d5c;
        }
    }
    ctx->pc = 0x276D54u;
    // 0x276d54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x276D54u;
    {
        const bool branch_taken_0x276d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276D54u;
            // 0x276d58: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d54) {
            ctx->pc = 0x276D70u;
            goto label_276d70;
        }
    }
    ctx->pc = 0x276D5Cu;
label_276d5c:
    // 0x276d5c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x276d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x276d60: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x276d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x276d64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x276d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x276d68: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x276d68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x276d6c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x276d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_276d70:
    // 0x276d70: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x276d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d78: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276D78u;
    {
        const bool branch_taken_0x276d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276d78) {
            ctx->pc = 0x276D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276D78u;
            // 0x276d7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276D94u;
            goto label_276d94;
        }
    }
    ctx->pc = 0x276D80u;
    // 0x276d80: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x276d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x276d84: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x276D84u;
    SET_GPR_U32(ctx, 31, 0x276D8Cu);
    ctx->pc = 0x276D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276D84u;
            // 0x276d88: 0x24a54610  addiu       $a1, $a1, 0x4610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D8Cu; }
        if (ctx->pc != 0x276D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D8Cu; }
        if (ctx->pc != 0x276D8Cu) { return; }
    }
    ctx->pc = 0x276D8Cu;
    // 0x276d8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x276d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x276d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_276d94:
    // 0x276d94: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x276d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x276d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276d9c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x276d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276da0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x276da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x276da4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x276da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x276da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276dac: 0x3e00008  jr          $ra
    ctx->pc = 0x276DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276DACu;
            // 0x276db0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276D48u: goto label_276d48;
            case 0x276D5Cu: goto label_276d5c;
            case 0x276D70u: goto label_276d70;
            case 0x276D94u: goto label_276d94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276DB4u;
    // 0x276db4: 0x0  nop
    ctx->pc = 0x276db4u;
    // NOP
}

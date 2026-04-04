#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284C60
// Address: 0x284c60 - 0x284dc8
void sub_00284C60_0x284c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284C60_0x284c60");
#endif

    ctx->pc = 0x284c60u;

    // 0x284c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x284c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x284c64: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x284c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x284c68: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x284c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x284c6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x284c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284c70: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x284c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x284c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284c78: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284C78u;
    SET_GPR_U32(ctx, 31, 0x284C80u);
    ctx->pc = 0x284C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C78u;
            // 0x284c7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C80u; }
        if (ctx->pc != 0x284C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C80u; }
        if (ctx->pc != 0x284C80u) { return; }
    }
    ctx->pc = 0x284C80u;
    // 0x284c80: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x284c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284c84: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x284c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x284c88: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284C88u;
    SET_GPR_U32(ctx, 31, 0x284C90u);
    ctx->pc = 0x284C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C88u;
            // 0x284c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C90u; }
        if (ctx->pc != 0x284C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C90u; }
        if (ctx->pc != 0x284C90u) { return; }
    }
    ctx->pc = 0x284C90u;
    // 0x284c90: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c94: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x284c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284c98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284C98u;
    {
        const bool branch_taken_0x284c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C98u;
            // 0x284c9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c98) {
            ctx->pc = 0x284CA8u;
            goto label_284ca8;
        }
    }
    ctx->pc = 0x284CA0u;
    // 0x284ca0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x284CA0u;
    {
        const bool branch_taken_0x284ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CA0u;
            // 0x284ca4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ca0) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284CA8u;
label_284ca8:
    // 0x284ca8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x284ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284cac: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x284cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284cb0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x284CB0u;
    {
        const bool branch_taken_0x284cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CB0u;
            // 0x284cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cb0) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284CB8u;
    // 0x284cb8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x284cbc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x284cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x284cc0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x284cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x284cc4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x284cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x284cc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284CC8u;
    {
        const bool branch_taken_0x284cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CC8u;
            // 0x284ccc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cc8) {
            ctx->pc = 0x284CDCu;
            goto label_284cdc;
        }
    }
    ctx->pc = 0x284CD0u;
    // 0x284cd0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x284cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x284cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284CD4u;
    {
        const bool branch_taken_0x284cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CD4u;
            // 0x284cd8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cd4) {
            ctx->pc = 0x284CF0u;
            goto label_284cf0;
        }
    }
    ctx->pc = 0x284CDCu;
label_284cdc:
    // 0x284cdc: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x284CDCu;
    {
        const bool branch_taken_0x284cdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x284CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CDCu;
            // 0x284ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cdc) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284CE4u;
    // 0x284ce4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x284ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x284ce8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x284CE8u;
    {
        const bool branch_taken_0x284ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CE8u;
            // 0x284cec: 0x24446948  addiu       $a0, $v0, 0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ce8) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284CF0u;
label_284cf0:
    // 0x284cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284CF0u;
    {
        const bool branch_taken_0x284cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CF0u;
            // 0x284cf4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cf0) {
            ctx->pc = 0x284D08u;
            goto label_284d08;
        }
    }
    ctx->pc = 0x284CF8u;
    // 0x284cf8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x284cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x284cfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x284cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x284D00u;
    {
        const bool branch_taken_0x284d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D00u;
            // 0x284d04: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d00) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284D08u;
label_284d08:
    // 0x284d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284D08u;
    {
        const bool branch_taken_0x284d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D08u;
            // 0x284d0c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d08) {
            ctx->pc = 0x284D20u;
            goto label_284d20;
        }
    }
    ctx->pc = 0x284D10u;
    // 0x284d10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x284d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x284d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x284D18u;
    {
        const bool branch_taken_0x284d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D18u;
            // 0x284d1c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d18) {
            ctx->pc = 0x284DB0u;
            goto label_284db0;
        }
    }
    ctx->pc = 0x284D20u;
label_284d20:
    // 0x284d20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x284d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284d24: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x284d24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d28: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284d2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x284d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284d30: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x284d30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284d34: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x284D34u;
    {
        const bool branch_taken_0x284d34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D34u;
            // 0x284d38: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d34) {
            ctx->pc = 0x284D4Cu;
            goto label_284d4c;
        }
    }
    ctx->pc = 0x284D3Cu;
    // 0x284d3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x284d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284d40: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x284d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x284d44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x284d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x284d48: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x284d48u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_284d4c:
    // 0x284d4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x284d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284d50: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x284d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x284d54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x284D54u;
    {
        const bool branch_taken_0x284d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D54u;
            // 0x284d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d54) {
            ctx->pc = 0x284D64u;
            goto label_284d64;
        }
    }
    ctx->pc = 0x284D5Cu;
    // 0x284d5c: 0x0  nop
    ctx->pc = 0x284d5cu;
    // NOP
label_284d60:
    // 0x284d60: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x284d60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_284d64:
    // 0x284d64: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D64u;
    {
        const bool branch_taken_0x284d64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x284d64) {
            ctx->pc = 0x284D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284D64u;
            // 0x284d68: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284D78u;
            goto label_284d78;
        }
    }
    ctx->pc = 0x284D6Cu;
    // 0x284d6c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x284d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x284d70: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x284d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x284d74: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x284d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_284d78:
    // 0x284d78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x284D78u;
    {
        const bool branch_taken_0x284d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D78u;
            // 0x284d7c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d78) {
            ctx->pc = 0x284D60u;
            runtime->cooperativeGuestYield();
            goto label_284d60;
        }
    }
    ctx->pc = 0x284D80u;
    // 0x284d80: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x284d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x284d84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x284d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x284d88: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284D88u;
    {
        const bool branch_taken_0x284d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284d88) {
            ctx->pc = 0x284D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284D88u;
            // 0x284d8c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284DACu;
            goto label_284dac;
        }
    }
    ctx->pc = 0x284D90u;
    // 0x284d90: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x284d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x284d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284D94u;
    {
        const bool branch_taken_0x284d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D94u;
            // 0x284d98: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d94) {
            ctx->pc = 0x284DA4u;
            goto label_284da4;
        }
    }
    ctx->pc = 0x284D9Cu;
    // 0x284d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284D9Cu;
    {
        const bool branch_taken_0x284d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D9Cu;
            // 0x284da0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d9c) {
            ctx->pc = 0x284DA8u;
            goto label_284da8;
        }
    }
    ctx->pc = 0x284DA4u;
label_284da4:
    // 0x284da4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x284da4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_284da8:
    // 0x284da8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x284da8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_284dac:
    // 0x284dac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x284dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284db0:
    // 0x284db0: 0xc0a113a  jal         func_2844E8
    ctx->pc = 0x284DB0u;
    SET_GPR_U32(ctx, 31, 0x284DB8u);
    ctx->pc = 0x2844E8u;
    if (runtime->hasFunction(0x2844E8u)) {
        auto targetFn = runtime->lookupFunction(0x2844E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DB8u; }
        if (ctx->pc != 0x284DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2844e8_0x284618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DB8u; }
        if (ctx->pc != 0x284DB8u) { return; }
    }
    ctx->pc = 0x284DB8u;
    // 0x284db8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x284db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284dbc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x284dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x284DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DC0u;
            // 0x284dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284CA8u: goto label_284ca8;
            case 0x284CDCu: goto label_284cdc;
            case 0x284CF0u: goto label_284cf0;
            case 0x284D08u: goto label_284d08;
            case 0x284D20u: goto label_284d20;
            case 0x284D4Cu: goto label_284d4c;
            case 0x284D60u: goto label_284d60;
            case 0x284D64u: goto label_284d64;
            case 0x284D78u: goto label_284d78;
            case 0x284DA4u: goto label_284da4;
            case 0x284DA8u: goto label_284da8;
            case 0x284DACu: goto label_284dac;
            case 0x284DB0u: goto label_284db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284DC8u;
}

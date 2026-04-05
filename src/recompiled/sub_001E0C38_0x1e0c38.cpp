#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0C38
// Address: 0x1e0c38 - 0x1e0d40
void sub_001E0C38_0x1e0c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0C38_0x1e0c38");
#endif

    ctx->pc = 0x1e0c38u;

    // 0x1e0c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0c3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1e0c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0c48: 0xad050188  sw          $a1, 0x188($t0)
    ctx->pc = 0x1e0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 392), GPR_U32(ctx, 5));
    // 0x1e0c4c: 0x8d020174  lw          $v0, 0x174($t0)
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 372)));
    // 0x1e0c50: 0xad070194  sw          $a3, 0x194($t0)
    ctx->pc = 0x1e0c50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 404), GPR_U32(ctx, 7));
    // 0x1e0c54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e0c58: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E0C58u;
    {
        const bool branch_taken_0x1e0c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C58u;
            // 0x1e0c5c: 0xad020174  sw          $v0, 0x174($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c58) {
            ctx->pc = 0x1E0D2Cu;
            goto label_1e0d2c;
        }
    }
    ctx->pc = 0x1E0C60u;
    // 0x1e0c60: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e0c64: 0xaca70194  sw          $a3, 0x194($a1)
    ctx->pc = 0x1e0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 7));
    // 0x1e0c68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e0c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e0c6c: 0xaca60190  sw          $a2, 0x190($a1)
    ctx->pc = 0x1e0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 6));
    // 0x1e0c70: 0xaca20174  sw          $v0, 0x174($a1)
    ctx->pc = 0x1e0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 372), GPR_U32(ctx, 2));
    // 0x1e0c74: 0xaca8018c  sw          $t0, 0x18C($a1)
    ctx->pc = 0x1e0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 396), GPR_U32(ctx, 8));
    // 0x1e0c78: 0x8d020174  lw          $v0, 0x174($t0)
    ctx->pc = 0x1e0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 372)));
    // 0x1e0c7c: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E0C7Cu;
    {
        const bool branch_taken_0x1e0c7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C7Cu;
            // 0x1e0c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c7c) {
            ctx->pc = 0x1E0D30u;
            goto label_1e0d30;
        }
    }
    ctx->pc = 0x1E0C84u;
    // 0x1e0c84: 0x91020194  lbu         $v0, 0x194($t0)
    ctx->pc = 0x1e0c84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 404)));
    // 0x1e0c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c8c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e0c90: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1e0c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1e0c94: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E0C94u;
    {
        const bool branch_taken_0x1e0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C94u;
            // 0x1e0c98: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c94) {
            ctx->pc = 0x1E0D04u;
            goto label_1e0d04;
        }
    }
    ctx->pc = 0x1E0C9Cu;
    // 0x1e0c9c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1e0ca0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0ca4: 0x24426d60  addiu       $v0, $v0, 0x6D60
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28000));
    // 0x1e0ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0cac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0cb0: 0x400008  jr          $v0
    ctx->pc = 0x1E0CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0CB8u: goto label_1e0cb8;
            case 0x1E0CD0u: goto label_1e0cd0;
            case 0x1E0CDCu: goto label_1e0cdc;
            case 0x1E0CFCu: goto label_1e0cfc;
            case 0x1E0D04u: goto label_1e0d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0CB8u;
label_1e0cb8:
    // 0x1e0cb8: 0x8d020188  lw          $v0, 0x188($t0)
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 392)));
    // 0x1e0cbc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1e0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e0cc0: 0x8c420260  lw          $v0, 0x260($v0)
    ctx->pc = 0x1e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x1e0cc4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1e0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1e0cc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e0cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e0ccc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e0cccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1e0cd0:
    // 0x1e0cd0: 0x8d020188  lw          $v0, 0x188($t0)
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 392)));
    // 0x1e0cd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E0CD4u;
    {
        const bool branch_taken_0x1e0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CD4u;
            // 0x1e0cd8: 0x8c450284  lw          $a1, 0x284($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd4) {
            ctx->pc = 0x1E0D04u;
            goto label_1e0d04;
        }
    }
    ctx->pc = 0x1E0CDCu;
label_1e0cdc:
    // 0x1e0cdc: 0x8d020188  lw          $v0, 0x188($t0)
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 392)));
    // 0x1e0ce0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e0ce4: 0x8c4301c0  lw          $v1, 0x1C0($v0)
    ctx->pc = 0x1e0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x1e0ce8: 0x8c4501d0  lw          $a1, 0x1D0($v0)
    ctx->pc = 0x1e0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1e0cec: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x1e0cf0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e0cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CF4u;
    {
        const bool branch_taken_0x1e0cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CF4u;
            // 0x1e0cf8: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cf4) {
            ctx->pc = 0x1E0D04u;
            goto label_1e0d04;
        }
    }
    ctx->pc = 0x1E0CFCu;
label_1e0cfc:
    // 0x1e0cfc: 0x8d020188  lw          $v0, 0x188($t0)
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 392)));
    // 0x1e0d00: 0x8c4501cc  lw          $a1, 0x1CC($v0)
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_1e0d04:
    // 0x1e0d04: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x1e0d04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e0d08: 0x24040418  addiu       $a0, $zero, 0x418
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x1e0d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d10: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1E0D10u;
    SET_GPR_U32(ctx, 31, 0x1E0D18u);
    ctx->pc = 0x1E0D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D10u;
            // 0x1e0d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D18u; }
        if (ctx->pc != 0x1E0D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D18u; }
        if (ctx->pc != 0x1E0D18u) { return; }
    }
    ctx->pc = 0x1E0D18u;
    // 0x1e0d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d1c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D1Cu;
    {
        const bool branch_taken_0x1e0d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D1Cu;
            // 0x1e0d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d1c) {
            ctx->pc = 0x1E0D2Cu;
            goto label_1e0d2c;
        }
    }
    ctx->pc = 0x1E0D24u;
    // 0x1e0d24: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1E0D24u;
    SET_GPR_U32(ctx, 31, 0x1E0D2Cu);
    ctx->pc = 0x1E0D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D24u;
            // 0x1e0d28: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D2Cu; }
        if (ctx->pc != 0x1E0D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D2Cu; }
        if (ctx->pc != 0x1E0D2Cu) { return; }
    }
    ctx->pc = 0x1E0D2Cu;
label_1e0d2c:
    // 0x1e0d2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0d30:
    // 0x1e0d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D34u;
            // 0x1e0d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0CB8u: goto label_1e0cb8;
            case 0x1E0CD0u: goto label_1e0cd0;
            case 0x1E0CDCu: goto label_1e0cdc;
            case 0x1E0CFCu: goto label_1e0cfc;
            case 0x1E0D04u: goto label_1e0d04;
            case 0x1E0D2Cu: goto label_1e0d2c;
            case 0x1E0D30u: goto label_1e0d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0D3Cu;
    // 0x1e0d3c: 0x0  nop
    ctx->pc = 0x1e0d3cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143C98
// Address: 0x143c98 - 0x143d70
void sub_00143C98_0x143c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C98_0x143c98");
#endif

    ctx->pc = 0x143c98u;

    // 0x143c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143c9c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x143c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x143ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143cac: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x143cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x143cb0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x143CB0u;
    {
        const bool branch_taken_0x143cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CB0u;
            // 0x143cb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cb0) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143CB8u;
    // 0x143cb8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143cc0: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x143cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
    // 0x143cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143cc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143ccc: 0x400008  jr          $v0
    ctx->pc = 0x143CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143CD4u: goto label_143cd4;
            case 0x143D1Cu: goto label_143d1c;
            case 0x143D40u: goto label_143d40;
            case 0x143D4Cu: goto label_143d4c;
            case 0x143D54u: goto label_143d54;
            case 0x143D58u: goto label_143d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143CD4u;
label_143cd4:
    // 0x143cd4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x143cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x143cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cdc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x143CDCu;
    SET_GPR_U32(ctx, 31, 0x143CE4u);
    ctx->pc = 0x143CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CDCu;
            // 0x143ce0: 0x24a51718  addiu       $a1, $a1, 0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE4u; }
        if (ctx->pc != 0x143CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE4u; }
        if (ctx->pc != 0x143CE4u) { return; }
    }
    ctx->pc = 0x143CE4u;
    // 0x143ce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CE4u;
    {
        const bool branch_taken_0x143ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CE4u;
            // 0x143ce8: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ce4) {
            ctx->pc = 0x143CF4u;
            goto label_143cf4;
        }
    }
    ctx->pc = 0x143CECu;
    // 0x143cec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x143CECu;
    {
        const bool branch_taken_0x143cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CECu;
            // 0x143cf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cec) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143CF4u;
label_143cf4:
    // 0x143cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cf8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x143CF8u;
    SET_GPR_U32(ctx, 31, 0x143D00u);
    ctx->pc = 0x143CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CF8u;
            // 0x143cfc: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D00u; }
        if (ctx->pc != 0x143D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D00u; }
        if (ctx->pc != 0x143D00u) { return; }
    }
    ctx->pc = 0x143D00u;
    // 0x143d00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x143D00u;
    {
        const bool branch_taken_0x143d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D00u;
            // 0x143d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d00) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143D08u;
    // 0x143d08: 0xc050ece  jal         func_143B38
    ctx->pc = 0x143D08u;
    SET_GPR_U32(ctx, 31, 0x143D10u);
    ctx->pc = 0x143D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143D08u;
            // 0x143d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143B38u;
    if (runtime->hasFunction(0x143B38u)) {
        auto targetFn = runtime->lookupFunction(0x143B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D10u; }
        if (ctx->pc != 0x143D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143b38_0x143c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D10u; }
        if (ctx->pc != 0x143D10u) { return; }
    }
    ctx->pc = 0x143D10u;
    // 0x143d10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x143d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143d14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143D14u;
    {
        const bool branch_taken_0x143d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D14u;
            // 0x143d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d14) {
            ctx->pc = 0x143D28u;
            goto label_143d28;
        }
    }
    ctx->pc = 0x143D1Cu;
label_143d1c:
    // 0x143d1c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x143d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143d28:
    // 0x143d28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x143d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143d2c: 0x0  nop
    ctx->pc = 0x143d2cu;
    // NOP
    // 0x143d30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x143D30u;
    {
        const bool branch_taken_0x143d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143d30) {
            ctx->pc = 0x143D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143D30u;
            // 0x143d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143D38u;
            goto label_143d38;
        }
    }
    ctx->pc = 0x143D38u;
label_143d38:
    // 0x143d38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143D38u;
    {
        const bool branch_taken_0x143d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D38u;
            // 0x143d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d38) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143D40u;
label_143d40:
    // 0x143d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x143d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143d44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143D44u;
    {
        const bool branch_taken_0x143d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D44u;
            // 0x143d48: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d44) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143D4Cu;
label_143d4c:
    // 0x143d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143D4Cu;
    {
        const bool branch_taken_0x143d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D4Cu;
            // 0x143d50: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d4c) {
            ctx->pc = 0x143D58u;
            goto label_143d58;
        }
    }
    ctx->pc = 0x143D54u;
label_143d54:
    // 0x143d54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143d58:
    // 0x143d58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d64: 0x3e00008  jr          $ra
    ctx->pc = 0x143D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D64u;
            // 0x143d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143CD4u: goto label_143cd4;
            case 0x143CF4u: goto label_143cf4;
            case 0x143D1Cu: goto label_143d1c;
            case 0x143D28u: goto label_143d28;
            case 0x143D38u: goto label_143d38;
            case 0x143D40u: goto label_143d40;
            case 0x143D4Cu: goto label_143d4c;
            case 0x143D54u: goto label_143d54;
            case 0x143D58u: goto label_143d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143D6Cu;
    // 0x143d6c: 0x0  nop
    ctx->pc = 0x143d6cu;
    // NOP
}

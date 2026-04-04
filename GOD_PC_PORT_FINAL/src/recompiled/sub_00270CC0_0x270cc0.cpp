#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270CC0
// Address: 0x270cc0 - 0x270d80
void sub_00270CC0_0x270cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270CC0_0x270cc0");
#endif

    ctx->pc = 0x270cc0u;

    // 0x270cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270cc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x270cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x270cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x270cd4: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x270cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x270cd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x270cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x270cdc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x270CDCu;
    {
        const bool branch_taken_0x270cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CDCu;
            // 0x270ce0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cdc) {
            ctx->pc = 0x270D68u;
            goto label_270d68;
        }
    }
    ctx->pc = 0x270CE4u;
    // 0x270ce4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x270ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270ce8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x270CE8u;
    {
        const bool branch_taken_0x270ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CE8u;
            // 0x270cec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ce8) {
            ctx->pc = 0x270D6Cu;
            goto label_270d6c;
        }
    }
    ctx->pc = 0x270CF0u;
    // 0x270cf0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x270cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x270cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270CF4u;
    {
        const bool branch_taken_0x270cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CF4u;
            // 0x270cf8: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cf4) {
            ctx->pc = 0x270D14u;
            goto label_270d14;
        }
    }
    ctx->pc = 0x270CFCu;
    // 0x270cfc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x270cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x270d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d04: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x270D04u;
    SET_GPR_U32(ctx, 31, 0x270D0Cu);
    ctx->pc = 0x270D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D04u;
            // 0x270d08: 0x24a54488  addiu       $a1, $a1, 0x4488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D0Cu; }
        if (ctx->pc != 0x270D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D0Cu; }
        if (ctx->pc != 0x270D0Cu) { return; }
    }
    ctx->pc = 0x270D0Cu;
    // 0x270d0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x270D0Cu;
    {
        const bool branch_taken_0x270d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D0Cu;
            // 0x270d10: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d0c) {
            ctx->pc = 0x270D50u;
            goto label_270d50;
        }
    }
    ctx->pc = 0x270D14u;
label_270d14:
    // 0x270d14: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x270d18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x270d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270d1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270D1Cu;
    {
        const bool branch_taken_0x270d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D1Cu;
            // 0x270d20: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d1c) {
            ctx->pc = 0x270D3Cu;
            goto label_270d3c;
        }
    }
    ctx->pc = 0x270D24u;
    // 0x270d24: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x270d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x270d28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x270d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x270d2c: 0xc09c178  jal         func_2705E0
    ctx->pc = 0x270D2Cu;
    SET_GPR_U32(ctx, 31, 0x270D34u);
    ctx->pc = 0x270D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D2Cu;
            // 0x270d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2705E0u;
    if (runtime->hasFunction(0x2705E0u)) {
        auto targetFn = runtime->lookupFunction(0x2705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D34u; }
        if (ctx->pc != 0x270D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002705E0_0x2705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D34u; }
        if (ctx->pc != 0x270D34u) { return; }
    }
    ctx->pc = 0x270D34u;
    // 0x270d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x270D34u;
    {
        const bool branch_taken_0x270d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D34u;
            // 0x270d38: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d34) {
            ctx->pc = 0x270D50u;
            goto label_270d50;
        }
    }
    ctx->pc = 0x270D3Cu;
label_270d3c:
    // 0x270d3c: 0x8e0501dc  lw          $a1, 0x1DC($s0)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x270d40: 0x8e0601ec  lw          $a2, 0x1EC($s0)
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x270d44: 0xc09c228  jal         func_2708A0
    ctx->pc = 0x270D44u;
    SET_GPR_U32(ctx, 31, 0x270D4Cu);
    ctx->pc = 0x270D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D44u;
            // 0x270d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2708A0u;
    if (runtime->hasFunction(0x2708A0u)) {
        auto targetFn = runtime->lookupFunction(0x2708A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D4Cu; }
        if (ctx->pc != 0x270D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002708A0_0x2708a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D4Cu; }
        if (ctx->pc != 0x270D4Cu) { return; }
    }
    ctx->pc = 0x270D4Cu;
    // 0x270d4c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x270d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_270d50:
    // 0x270d50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x270d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270d54: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x270d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x270d58: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x270d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x270d5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270d60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x270d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x270d64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x270d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_270d68:
    // 0x270d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x270d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_270d6c:
    // 0x270d6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x270d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x270d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270d78: 0x3e00008  jr          $ra
    ctx->pc = 0x270D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D78u;
            // 0x270d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270D14u: goto label_270d14;
            case 0x270D3Cu: goto label_270d3c;
            case 0x270D50u: goto label_270d50;
            case 0x270D68u: goto label_270d68;
            case 0x270D6Cu: goto label_270d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270D80u;
}

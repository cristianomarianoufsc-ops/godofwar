#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121DC0
// Address: 0x121dc0 - 0x121e58
void sub_00121DC0_0x121dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121DC0_0x121dc0");
#endif

    ctx->pc = 0x121dc0u;

    // 0x121dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121dc4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x121dc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x121dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x121dcc: 0x2442c518  addiu       $v0, $v0, -0x3AE8
    ctx->pc = 0x121dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952216));
    // 0x121dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121ddc: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x121ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x121de0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x121de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x121de4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x121de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x121de8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121DE8u;
    {
        const bool branch_taken_0x121de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x121DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121DE8u;
            // 0x121dec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121de8) {
            ctx->pc = 0x121DF8u;
            goto label_121df8;
        }
    }
    ctx->pc = 0x121DF0u;
    // 0x121df0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x121DF0u;
    SET_GPR_U32(ctx, 31, 0x121DF8u);
    ctx->pc = 0x121DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121DF0u;
            // 0x121df4: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DF8u; }
        if (ctx->pc != 0x121DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DF8u; }
        if (ctx->pc != 0x121DF8u) { return; }
    }
    ctx->pc = 0x121DF8u;
label_121df8:
    // 0x121df8: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x121df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x121dfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121DFCu;
    {
        const bool branch_taken_0x121dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121DFCu;
            // 0x121e00: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121dfc) {
            ctx->pc = 0x121E10u;
            goto label_121e10;
        }
    }
    ctx->pc = 0x121E04u;
    // 0x121e04: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x121E04u;
    SET_GPR_U32(ctx, 31, 0x121E0Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E0Cu; }
        if (ctx->pc != 0x121E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E0Cu; }
        if (ctx->pc != 0x121E0Cu) { return; }
    }
    ctx->pc = 0x121E0Cu;
    // 0x121e0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_121e10:
    // 0x121e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e14: 0x2442c9b8  addiu       $v0, $v0, -0x3648
    ctx->pc = 0x121e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953400));
    // 0x121e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e1c: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x121E1Cu;
    SET_GPR_U32(ctx, 31, 0x121E24u);
    ctx->pc = 0x121E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121E1Cu;
            // 0x121e20: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (runtime->hasFunction(0x239280u)) {
        auto targetFn = runtime->lookupFunction(0x239280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E24u; }
        if (ctx->pc != 0x121E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239280_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E24u; }
        if (ctx->pc != 0x121E24u) { return; }
    }
    ctx->pc = 0x121E24u;
    // 0x121e24: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x121e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x121e28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121E28u;
    {
        const bool branch_taken_0x121e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e28) {
            ctx->pc = 0x121E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121E28u;
            // 0x121e2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121E3Cu;
            goto label_121e3c;
        }
    }
    ctx->pc = 0x121E30u;
    // 0x121e30: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x121E30u;
    SET_GPR_U32(ctx, 31, 0x121E38u);
    ctx->pc = 0x121E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121E30u;
            // 0x121e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E38u; }
        if (ctx->pc != 0x121E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E38u; }
        if (ctx->pc != 0x121E38u) { return; }
    }
    ctx->pc = 0x121E38u;
    // 0x121e38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x121e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121e3c:
    // 0x121e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121e44: 0x3e00008  jr          $ra
    ctx->pc = 0x121E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121E44u;
            // 0x121e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121DF8u: goto label_121df8;
            case 0x121E10u: goto label_121e10;
            case 0x121E3Cu: goto label_121e3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121E4Cu;
    // 0x121e4c: 0x0  nop
    ctx->pc = 0x121e4cu;
    // NOP
    // 0x121e50: 0x3e00008  jr          $ra
    ctx->pc = 0x121E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121DF8u: goto label_121df8;
            case 0x121E10u: goto label_121e10;
            case 0x121E3Cu: goto label_121e3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121E58u;
}

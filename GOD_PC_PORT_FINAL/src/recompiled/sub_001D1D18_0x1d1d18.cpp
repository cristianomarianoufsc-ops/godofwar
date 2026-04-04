#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1D18
// Address: 0x1d1d18 - 0x1d23f0
void sub_001D1D18_0x1d1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D18_0x1d1d18");
#endif

    ctx->pc = 0x1d1d18u;

    // 0x1d1d18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d1d1c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1d1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1d1d20: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1d1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1d1d24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d28: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1d1d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1d1d2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d30: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1d1d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1d1d34: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1d1d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1d1d38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d1d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d1d3c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d1d40: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d1d44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1D44u;
    {
        const bool branch_taken_0x1d1d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D44u;
            // 0x1d1d48: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d44) {
            ctx->pc = 0x1D1D60u;
            goto label_1d1d60;
        }
    }
    ctx->pc = 0x1D1D4Cu;
    // 0x1d1d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1d50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1D50u;
    {
        const bool branch_taken_0x1d1d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D50u;
            // 0x1d1d54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d50) {
            ctx->pc = 0x1D1D60u;
            goto label_1d1d60;
        }
    }
    ctx->pc = 0x1D1D58u;
    // 0x1d1d58: 0x14620158  bne         $v1, $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x1D1D58u;
    {
        const bool branch_taken_0x1d1d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D58u;
            // 0x1d1d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d58) {
            ctx->pc = 0x1D22BCu;
            goto label_1d22bc;
        }
    }
    ctx->pc = 0x1D1D60u;
label_1d1d60:
    // 0x1d1d60: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1d1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d1d64: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d1d68: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d1d6c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1D74u);
        ctx->pc = 0x1D1D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D6Cu;
            // 0x1d1d70: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1D74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D74u; }
            if (ctx->pc != 0x1D1D74u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1D74u;
    // 0x1d1d74: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d1d78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1d7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1d80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1d84: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d1d88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1D88u;
    {
        const bool branch_taken_0x1d1d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D88u;
            // 0x1d1d8c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d88) {
            ctx->pc = 0x1D1D98u;
            goto label_1d1d98;
        }
    }
    ctx->pc = 0x1D1D90u;
    // 0x1d1d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1D90u;
    {
        const bool branch_taken_0x1d1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D90u;
            // 0x1d1d94: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d90) {
            ctx->pc = 0x1D1DB4u;
            goto label_1d1db4;
        }
    }
    ctx->pc = 0x1D1D98u;
label_1d1d98:
    // 0x1d1d98: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d1d9c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d1d9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d1da0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1DA0u;
    {
        const bool branch_taken_0x1d1da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D1DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DA0u;
            // 0x1d1da4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da0) {
            ctx->pc = 0x1D1DB4u;
            goto label_1d1db4;
        }
    }
    ctx->pc = 0x1D1DA8u;
    // 0x1d1da8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D1DA8u;
    SET_GPR_U32(ctx, 31, 0x1D1DB0u);
    ctx->pc = 0x1D1DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DA8u;
            // 0x1d1dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB0u; }
        if (ctx->pc != 0x1D1DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB0u; }
        if (ctx->pc != 0x1D1DB0u) { return; }
    }
    ctx->pc = 0x1D1DB0u;
    // 0x1d1db0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d1db4:
    // 0x1d1db4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d1db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1db8: 0x32830088  andi        $v1, $s4, 0x88
    ctx->pc = 0x1d1db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)136);
    // 0x1d1dbc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1d1dc0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1d1dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1dc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d1dc8: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1d1dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d1dcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d1dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d1dd0: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1d1dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d1dd4: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D1DD4u;
    {
        const bool branch_taken_0x1d1dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DD4u;
            // 0x1d1dd8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dd4) {
            ctx->pc = 0x1D1F20u;
            goto label_1d1f20;
        }
    }
    ctx->pc = 0x1D1DDCu;
    // 0x1d1ddc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1de4: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D1DE4u;
    SET_GPR_U32(ctx, 31, 0x1D1DECu);
    ctx->pc = 0x1D1DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DE4u;
            // 0x1d1de8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DECu; }
        if (ctx->pc != 0x1D1DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DECu; }
        if (ctx->pc != 0x1D1DECu) { return; }
    }
    ctx->pc = 0x1D1DECu;
    // 0x1d1dec: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D1DECu;
    {
        const bool branch_taken_0x1d1dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1dec) {
            ctx->pc = 0x1D1DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DECu;
            // 0x1d1df0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F10u;
            goto label_1d1f10;
        }
    }
    ctx->pc = 0x1D1DF4u;
    // 0x1d1df4: 0xc074c40  jal         func_1D3100
    ctx->pc = 0x1D1DF4u;
    SET_GPR_U32(ctx, 31, 0x1D1DFCu);
    ctx->pc = 0x1D1DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DF4u;
            // 0x1d1df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3100u;
    if (runtime->hasFunction(0x1D3100u)) {
        auto targetFn = runtime->lookupFunction(0x1D3100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DFCu; }
        if (ctx->pc != 0x1D1DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3100_0x1d3100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DFCu; }
        if (ctx->pc != 0x1D1DFCu) { return; }
    }
    ctx->pc = 0x1D1DFCu;
    // 0x1d1dfc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D1DFCu;
    {
        const bool branch_taken_0x1d1dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DFCu;
            // 0x1d1e00: 0xdba20030  lqc2        $vf2, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dfc) {
            ctx->pc = 0x1D1EB0u;
            goto label_1d1eb0;
        }
    }
    ctx->pc = 0x1D1E04u;
    // 0x1d1e04: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1d1e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d1e08: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1d1e08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d1e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e10: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d1e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1e14: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d1e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e18: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d1e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e1c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d1e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e20: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1d1e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
    // 0x1d1e24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d1e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1e28: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d1e28u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1e2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1e2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1e30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1e34: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D1E34u;
    {
        const bool branch_taken_0x1d1e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1e34) {
            ctx->pc = 0x1D1EA8u;
            goto label_1d1ea8;
        }
    }
    ctx->pc = 0x1D1E3Cu;
    // 0x1d1e3c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d1e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e40: 0x3c01c330  lui         $at, 0xC330
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49968 << 16));
    // 0x1d1e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d1e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d1e48: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d1e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e4c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d1e4cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1e50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1e50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1e54: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d1e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1e58: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1E58u;
    {
        const bool branch_taken_0x1d1e58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1e58) {
            ctx->pc = 0x1D1EA8u;
            goto label_1d1ea8;
        }
    }
    ctx->pc = 0x1D1E60u;
    // 0x1d1e60: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1d1e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d1e64: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d1e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e68: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d1e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e6c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d1e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e70: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d1e70u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1e74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1e74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1e78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1e7c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1D1E7Cu;
    {
        const bool branch_taken_0x1d1e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1e7c) {
            ctx->pc = 0x1D1EA8u;
            goto label_1d1ea8;
        }
    }
    ctx->pc = 0x1D1E84u;
    // 0x1d1e84: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d1e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e88: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d1e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1e8c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d1e8cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1e90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1e94: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d1e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1e98: 0x0  nop
    ctx->pc = 0x1d1e98u;
    // NOP
    // 0x1d1e9c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1E9Cu;
    {
        const bool branch_taken_0x1d1e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1e9c) {
            ctx->pc = 0x1D1EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E9Cu;
            // 0x1d1ea0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1EA8u;
            goto label_1d1ea8;
        }
    }
    ctx->pc = 0x1D1EA4u;
    // 0x1d1ea4: 0x0  nop
    ctx->pc = 0x1d1ea4u;
    // NOP
label_1d1ea8:
    // 0x1d1ea8: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1EA8u;
    {
        const bool branch_taken_0x1d1ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ea8) {
            ctx->pc = 0x1D1EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EA8u;
            // 0x1d1eac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F10u;
            goto label_1d1f10;
        }
    }
    ctx->pc = 0x1D1EB0u;
label_1d1eb0:
    // 0x1d1eb0: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1d1eb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1eb4: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1D1EB4u;
    SET_GPR_U32(ctx, 31, 0x1D1EBCu);
    ctx->pc = 0x1D1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EB4u;
            // 0x1d1eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EBCu; }
        if (ctx->pc != 0x1D1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EBCu; }
        if (ctx->pc != 0x1D1EBCu) { return; }
    }
    ctx->pc = 0x1D1EBCu;
    // 0x1d1ebc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1ec0: 0x2444001f  addiu       $a0, $v0, 0x1F
    ctx->pc = 0x1d1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1d1ec4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1d1ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1ec8: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1d1ec8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1d1ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ed0: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1d1ed0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1d1ed4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1ed8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1edc: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d1ee0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d1ee4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d1ee8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1EE8u;
    {
        const bool branch_taken_0x1d1ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EE8u;
            // 0x1d1eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ee8) {
            ctx->pc = 0x1D1F04u;
            goto label_1d1f04;
        }
    }
    ctx->pc = 0x1D1EF0u;
    // 0x1d1ef0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d1ef4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d1ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d1ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d1efc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1EFCu;
    {
        const bool branch_taken_0x1d1efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1efc) {
            ctx->pc = 0x1D1F08u;
            goto label_1d1f08;
        }
    }
    ctx->pc = 0x1D1F04u;
label_1d1f04:
    // 0x1d1f04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1f08:
    // 0x1d1f08: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1F08u;
    {
        const bool branch_taken_0x1d1f08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f08) {
            ctx->pc = 0x1D1F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F08u;
            // 0x1d1f0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F10u;
            goto label_1d1f10;
        }
    }
    ctx->pc = 0x1D1F10u;
label_1d1f10:
    // 0x1d1f10: 0x120000f0  beqz        $s0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D1F10u;
    {
        const bool branch_taken_0x1d1f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F10u;
            // 0x1d1f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f10) {
            ctx->pc = 0x1D22D4u;
            goto label_1d22d4;
        }
    }
    ctx->pc = 0x1D1F18u;
    // 0x1d1f18: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1D1F18u;
    {
        const bool branch_taken_0x1d1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F18u;
            // 0x1d1f1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f18) {
            ctx->pc = 0x1D20A8u;
            goto label_1d20a8;
        }
    }
    ctx->pc = 0x1D1F20u;
label_1d1f20:
    // 0x1d1f20: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1f24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1d1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1d1f28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d1f2c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d1f30: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d1f34: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1d1f38: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1d1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1d1f3c: 0x24c622f8  addiu       $a2, $a2, 0x22F8
    ctx->pc = 0x1d1f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8952));
    // 0x1d1f40: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d1f44: 0x3c0400a0  lui         $a0, 0xA0
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)160 << 16));
    // 0x1d1f48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d1f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f50: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1d1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1d1f54: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1d1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1d1f58: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x1d1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
    // 0x1d1f5c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1d1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1d1f60: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d1f64: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d1f68: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d1f6c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d1f70: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d1f74: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1d1f78: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x1d1f7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1F84u);
        ctx->pc = 0x1D1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F7Cu;
            // 0x1d1f80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1F84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F84u; }
            if (ctx->pc != 0x1D1F84u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1F84u;
    // 0x1d1f84: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d1f88: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x1d1f88u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1d1f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f90: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x1d1f94: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x1d1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1d1f98: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1FA0u);
        ctx->pc = 0x1D1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F98u;
            // 0x1d1f9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1FA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FA0u; }
            if (ctx->pc != 0x1D1FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1FA0u;
    // 0x1d1fa0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d1fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d1fa4: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1d1fa4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1d1fa8: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1d1fac: 0xc047864  jal         func_11E190
    ctx->pc = 0x1D1FACu;
    SET_GPR_U32(ctx, 31, 0x1D1FB4u);
    ctx->pc = 0x1D1FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FACu;
            // 0x1d1fb0: 0x700234a9  por         $a2, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FB4u; }
        if (ctx->pc != 0x1D1FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FB4u; }
        if (ctx->pc != 0x1D1FB4u) { return; }
    }
    ctx->pc = 0x1D1FB4u;
    // 0x1d1fb4: 0x32820080  andi        $v0, $s4, 0x80
    ctx->pc = 0x1d1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
    // 0x1d1fb8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D1FB8u;
    {
        const bool branch_taken_0x1d1fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FB8u;
            // 0x1d1fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fb8) {
            ctx->pc = 0x1D20A4u;
            goto label_1d20a4;
        }
    }
    ctx->pc = 0x1D1FC0u;
    // 0x1d1fc0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1fc4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D1FC4u;
    {
        const bool branch_taken_0x1d1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FC4u;
            // 0x1d1fc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fc4) {
            ctx->pc = 0x1D20A8u;
            goto label_1d20a8;
        }
    }
    ctx->pc = 0x1D1FCCu;
    // 0x1d1fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fd0: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D1FD0u;
    SET_GPR_U32(ctx, 31, 0x1D1FD8u);
    ctx->pc = 0x1D1FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FD0u;
            // 0x1d1fd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FD8u; }
        if (ctx->pc != 0x1D1FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FD8u; }
        if (ctx->pc != 0x1D1FD8u) { return; }
    }
    ctx->pc = 0x1D1FD8u;
    // 0x1d1fd8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D1FD8u;
    {
        const bool branch_taken_0x1d1fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FD8u;
            // 0x1d1fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fd8) {
            ctx->pc = 0x1D20A4u;
            goto label_1d20a4;
        }
    }
    ctx->pc = 0x1D1FE0u;
    // 0x1d1fe0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1d1fe4: 0x9645006c  lhu         $a1, 0x6C($s2)
    ctx->pc = 0x1d1fe4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1d1fe8: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1D1FE8u;
    SET_GPR_U32(ctx, 31, 0x1D1FF0u);
    ctx->pc = 0x1D1FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FE8u;
            // 0x1d1fec: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FF0u; }
        if (ctx->pc != 0x1D1FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FF0u; }
        if (ctx->pc != 0x1D1FF0u) { return; }
    }
    ctx->pc = 0x1D1FF0u;
    // 0x1d1ff0: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x1d1ff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d1ff4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d1ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d1ff8: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1d1ff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d1ffc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d1ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2000: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d2000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2004: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d2004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d2008: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d2008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d200c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d200cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2010: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
    // 0x1d2014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2018: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d2018u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d201c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d201cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2020: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d2020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2024: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2024u;
    {
        const bool branch_taken_0x1d2024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2024) {
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D202Cu;
    // 0x1d202c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d202cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2030: 0x3c01c330  lui         $at, 0xC330
    ctx->pc = 0x1d2030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49968 << 16));
    // 0x1d2034: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d2034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d2038: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d2038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d203c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d203cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2044: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d2044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2048: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2048u;
    {
        const bool branch_taken_0x1d2048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2048) {
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D2050u;
    // 0x1d2050: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1d2050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d2054: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d2054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d2058: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d2058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d205c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d205cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2060: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d2060u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2064: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2064u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d2068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d206c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1D206Cu;
    {
        const bool branch_taken_0x1d206c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d206c) {
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D2074u;
    // 0x1d2074: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d2074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2078: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d2078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d207c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d207cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2080: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2080u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2084: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d2084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2088: 0x0  nop
    ctx->pc = 0x1d2088u;
    // NOP
    // 0x1d208c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1D208Cu;
    {
        const bool branch_taken_0x1d208c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d208c) {
            ctx->pc = 0x1D2090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D208Cu;
            // 0x1d2090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D2094u;
    // 0x1d2094: 0x0  nop
    ctx->pc = 0x1d2094u;
    // NOP
label_1d2098:
    // 0x1d2098: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2098u;
    {
        const bool branch_taken_0x1d2098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2098u;
            // 0x1d209c: 0xdba10030  lqc2        $vf1, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2098) {
            ctx->pc = 0x1D20B8u;
            goto label_1d20b8;
        }
    }
    ctx->pc = 0x1D20A0u;
    // 0x1d20a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d20a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d20a4:
    // 0x1d20a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d20a8:
    // 0x1d20a8: 0xc0745bc  jal         func_1D16F0
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20A8u;
            // 0x1d20ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D16F0u;
    if (runtime->hasFunction(0x1D16F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D16F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B0u; }
        if (ctx->pc != 0x1D20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D16F0_0x1d16f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B0u; }
        if (ctx->pc != 0x1D20B0u) { return; }
    }
    ctx->pc = 0x1D20B0u;
    // 0x1d20b0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1D20B0u;
    {
        const bool branch_taken_0x1d20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20B0u;
            // 0x1d20b4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b0) {
            ctx->pc = 0x1D22D8u;
            goto label_1d22d8;
        }
    }
    ctx->pc = 0x1D20B8u;
label_1d20b8:
    // 0x1d20b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d20b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20bc: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1d20bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d20c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d20c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d20c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d20c8: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d20c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d20cc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d20ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d20d0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d20d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d20d4: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
    // 0x1d20d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d20d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d20dc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d20dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d20e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d20e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d20e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d20e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d20e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1D20E8u;
    {
        const bool branch_taken_0x1d20e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d20e8) {
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D20F0u;
    // 0x1d20f0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d20f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d20f4: 0x3c01c330  lui         $at, 0xC330
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49968 << 16));
    // 0x1d20f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d20f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d20fc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d20fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2100: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d2100u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2104: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2108: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d2108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d210c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D210Cu;
    {
        const bool branch_taken_0x1d210c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d210c) {
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D2114u;
    // 0x1d2114: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1d2114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d2118: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d2118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d211c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d211cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2120: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d2120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2124: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d2124u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d212c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d212cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2130: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2130u;
    {
        const bool branch_taken_0x1d2130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2130) {
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D2138u;
    // 0x1d2138: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d2138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d213c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d213cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2140: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d2140u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2144: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2144u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2148: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d2148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d214c: 0x0  nop
    ctx->pc = 0x1d214cu;
    // NOP
    // 0x1d2150: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2150u;
    {
        const bool branch_taken_0x1d2150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2150) {
            ctx->pc = 0x1D2154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2150u;
            // 0x1d2154: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D2158u;
label_1d2158:
    // 0x1d2158: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D2158u;
    {
        const bool branch_taken_0x1d2158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2158u;
            // 0x1d215c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2158) {
            ctx->pc = 0x1D21C8u;
            goto label_1d21c8;
        }
    }
    ctx->pc = 0x1D2160u;
    // 0x1d2160: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D2160u;
    SET_GPR_U32(ctx, 31, 0x1D2168u);
    ctx->pc = 0x1D2164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2160u;
            // 0x1d2164: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2168u; }
        if (ctx->pc != 0x1D2168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2168u; }
        if (ctx->pc != 0x1D2168u) { return; }
    }
    ctx->pc = 0x1D2168u;
    // 0x1d2168: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2168u;
    {
        const bool branch_taken_0x1d2168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2168u;
            // 0x1d216c: 0x7ba50030  lq          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2168) {
            ctx->pc = 0x1D21C8u;
            goto label_1d21c8;
        }
    }
    ctx->pc = 0x1D2170u;
    // 0x1d2170: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1D2170u;
    SET_GPR_U32(ctx, 31, 0x1D2178u);
    ctx->pc = 0x1D2174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2170u;
            // 0x1d2174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2178u; }
        if (ctx->pc != 0x1D2178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2178u; }
        if (ctx->pc != 0x1D2178u) { return; }
    }
    ctx->pc = 0x1D2178u;
    // 0x1d2178: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d2178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d217c: 0x2444001f  addiu       $a0, $v0, 0x1F
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1d2180: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1d2180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2184: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1d2184u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1d2188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d218c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1d218cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1d2190: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2194: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2198: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d219c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d21a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d21a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D21A4u;
    {
        const bool branch_taken_0x1d21a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21A4u;
            // 0x1d21a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21a4) {
            ctx->pc = 0x1D21C0u;
            goto label_1d21c0;
        }
    }
    ctx->pc = 0x1D21ACu;
    // 0x1d21ac: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1d21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d21b0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1d21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d21b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d21b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d21b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D21B8u;
    {
        const bool branch_taken_0x1d21b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21B8u;
            // 0x1d21bc: 0x38b00001  xori        $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21b8) {
            ctx->pc = 0x1D21C8u;
            goto label_1d21c8;
        }
    }
    ctx->pc = 0x1D21C0u;
label_1d21c0:
    // 0x1d21c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d21c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d21c4: 0x38b00001  xori        $s0, $a1, 0x1
    ctx->pc = 0x1d21c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1d21c8:
    // 0x1d21c8: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D21C8u;
    {
        const bool branch_taken_0x1d21c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21C8u;
            // 0x1d21cc: 0x7ba50030  lq          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21c8) {
            ctx->pc = 0x1D22D4u;
            goto label_1d22d4;
        }
    }
    ctx->pc = 0x1D21D0u;
    // 0x1d21d0: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1D21D0u;
    SET_GPR_U32(ctx, 31, 0x1D21D8u);
    ctx->pc = 0x1D21D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21D0u;
            // 0x1d21d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D8u; }
        if (ctx->pc != 0x1D21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D8u; }
        if (ctx->pc != 0x1D21D8u) { return; }
    }
    ctx->pc = 0x1D21D8u;
    // 0x1d21d8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d21dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d21dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d21e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d21e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21e4: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d21e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d21e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D21E8u;
    {
        const bool branch_taken_0x1d21e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D21ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21E8u;
            // 0x1d21ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21e8) {
            ctx->pc = 0x1D21F8u;
            goto label_1d21f8;
        }
    }
    ctx->pc = 0x1D21F0u;
    // 0x1d21f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D21F0u;
    {
        const bool branch_taken_0x1d21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21F0u;
            // 0x1d21f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21f0) {
            ctx->pc = 0x1D2214u;
            goto label_1d2214;
        }
    }
    ctx->pc = 0x1D21F8u;
label_1d21f8:
    // 0x1d21f8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d21f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d21fc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d21fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d2200: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2200u;
    {
        const bool branch_taken_0x1d2200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d2200) {
            ctx->pc = 0x1D2204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2200u;
            // 0x1d2204: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2214u;
            goto label_1d2214;
        }
    }
    ctx->pc = 0x1D2208u;
    // 0x1d2208: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D2208u;
    SET_GPR_U32(ctx, 31, 0x1D2210u);
    ctx->pc = 0x1D220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2208u;
            // 0x1d220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2210u; }
        if (ctx->pc != 0x1D2210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2210u; }
        if (ctx->pc != 0x1D2210u) { return; }
    }
    ctx->pc = 0x1D2210u;
    // 0x1d2210: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d2214:
    // 0x1d2214: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x1d2214u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d2218: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1D2218u;
    SET_GPR_U32(ctx, 31, 0x1D2220u);
    ctx->pc = 0x1D221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2218u;
            // 0x1d221c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2220u; }
        if (ctx->pc != 0x1D2220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2220u; }
        if (ctx->pc != 0x1D2220u) { return; }
    }
    ctx->pc = 0x1D2220u;
    // 0x1d2220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d2224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2228: 0xc082d84  jal         func_20B610
    ctx->pc = 0x1D2228u;
    SET_GPR_U32(ctx, 31, 0x1D2230u);
    ctx->pc = 0x1D222Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2228u;
            // 0x1d222c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B610u;
    if (runtime->hasFunction(0x20B610u)) {
        auto targetFn = runtime->lookupFunction(0x20B610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2230u; }
        if (ctx->pc != 0x1D2230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B610_0x20b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2230u; }
        if (ctx->pc != 0x1D2230u) { return; }
    }
    ctx->pc = 0x1D2230u;
    // 0x1d2230: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2234: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2234u;
    {
        const bool branch_taken_0x1d2234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2234u;
            // 0x1d2238: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2234) {
            ctx->pc = 0x1D2270u;
            goto label_1d2270;
        }
    }
    ctx->pc = 0x1D223Cu;
    // 0x1d223c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1d223cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1d2240: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x1d2240u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2244: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1d2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1d2248: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d224c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1d224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1d2250: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2254: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2258: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d225c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d2260: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D2260u;
    SET_GPR_U32(ctx, 31, 0x1D2268u);
    ctx->pc = 0x1D2264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2260u;
            // 0x1d2264: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2268u; }
        if (ctx->pc != 0x1D2268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2268u; }
        if (ctx->pc != 0x1D2268u) { return; }
    }
    ctx->pc = 0x1D2268u;
    // 0x1d2268: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D2268u;
    {
        const bool branch_taken_0x1d2268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2268u;
            // 0x1d226c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2268) {
            ctx->pc = 0x1D22D8u;
            goto label_1d22d8;
        }
    }
    ctx->pc = 0x1D2270u;
label_1d2270:
    // 0x1d2270: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1d2274: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d2278: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d2278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d227c: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d2280: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1d2284: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d2284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d2288: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d228c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2294: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2294u;
    {
        const bool branch_taken_0x1d2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D2298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2294u;
            // 0x1d2298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2294) {
            ctx->pc = 0x1D22A0u;
            goto label_1d22a0;
        }
    }
    ctx->pc = 0x1D229Cu;
    // 0x1d229c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1d229cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d22a0:
    // 0x1d22a0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1D22A0u;
    {
        const bool branch_taken_0x1d22a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22A0u;
            // 0x1d22a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22a0) {
            ctx->pc = 0x1D22D8u;
            goto label_1d22d8;
        }
    }
    ctx->pc = 0x1D22A8u;
    // 0x1d22a8: 0x78c50050  lq          $a1, 0x50($a2)
    ctx->pc = 0x1d22a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1d22ac: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x1D22ACu;
    SET_GPR_U32(ctx, 31, 0x1D22B4u);
    ctx->pc = 0x1D22B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22ACu;
            // 0x1d22b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22B4u; }
        if (ctx->pc != 0x1D22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22B4u; }
        if (ctx->pc != 0x1D22B4u) { return; }
    }
    ctx->pc = 0x1D22B4u;
    // 0x1d22b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D22B4u;
    {
        const bool branch_taken_0x1d22b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22B4u;
            // 0x1d22b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b4) {
            ctx->pc = 0x1D22D8u;
            goto label_1d22d8;
        }
    }
    ctx->pc = 0x1D22BCu;
label_1d22bc:
    // 0x1d22bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D22BCu;
    {
        const bool branch_taken_0x1d22bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D22C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22BCu;
            // 0x1d22c0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22bc) {
            ctx->pc = 0x1D22D8u;
            goto label_1d22d8;
        }
    }
    ctx->pc = 0x1D22C4u;
    // 0x1d22c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d22c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d22c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d22cc: 0xc0745bc  jal         func_1D16F0
    ctx->pc = 0x1D22CCu;
    SET_GPR_U32(ctx, 31, 0x1D22D4u);
    ctx->pc = 0x1D22D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22CCu;
            // 0x1d22d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D16F0u;
    if (runtime->hasFunction(0x1D16F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D16F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22D4u; }
        if (ctx->pc != 0x1D22D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D16F0_0x1d16f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22D4u; }
        if (ctx->pc != 0x1D22D4u) { return; }
    }
    ctx->pc = 0x1D22D4u;
label_1d22d4:
    // 0x1d22d4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1d22d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d22d8:
    // 0x1d22d8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1d22d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d22dc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1d22dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d22e0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1d22e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d22e4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1d22e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d22e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d22e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d22ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D22ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22ECu;
            // 0x1d22f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D22F4u;
    // 0x1d22f4: 0x0  nop
    ctx->pc = 0x1d22f4u;
    // NOP
    // 0x1d22f8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d22fc: 0x8c4377bc  lw          $v1, 0x77BC($v0)
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30652)));
    // 0x1d2300: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2300u;
    {
        const bool branch_taken_0x1d2300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2300u;
            // 0x1d2304: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2300) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D2308u;
    // 0x1d2308: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1d230c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2314: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1d2318: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d231c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D231Cu;
    {
        const bool branch_taken_0x1d231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D231Cu;
            // 0x1d2320: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d231c) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D2324u;
    // 0x1d2324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2328: 0x8c43f190  lw          $v1, -0xE70($v0)
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x1d232c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d2330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2330u;
            // 0x1d2334: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2338u;
label_1d2338:
    // 0x1d2338: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2338u;
            // 0x1d233c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2340u;
    // 0x1d2340: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2344: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1d2344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1d2348: 0x8c46f190  lw          $a2, -0xE70($v0)
    ctx->pc = 0x1d2348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x1d234c: 0x8c6477b4  lw          $a0, 0x77B4($v1)
    ctx->pc = 0x1d234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30644)));
    // 0x1d2350: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d2354: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1d2358: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1d2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d235c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d2360: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D2360u;
    {
        const bool branch_taken_0x1d2360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2360u;
            // 0x1d2364: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2360) {
            ctx->pc = 0x1D23E0u;
            goto label_1d23e0;
        }
    }
    ctx->pc = 0x1D2368u;
    // 0x1d2368: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1d236c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D236Cu;
    {
        const bool branch_taken_0x1d236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D236Cu;
            // 0x1d2370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d236c) {
            ctx->pc = 0x1D23B4u;
            goto label_1d23b4;
        }
    }
    ctx->pc = 0x1D2374u;
    // 0x1d2374: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d2374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d2378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d237c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D237Cu;
    {
        const bool branch_taken_0x1d237c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D237Cu;
            // 0x1d2380: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d237c) {
            ctx->pc = 0x1D23B4u;
            goto label_1d23b4;
        }
    }
    ctx->pc = 0x1D2384u;
    // 0x1d2384: 0x0  nop
    ctx->pc = 0x1d2384u;
    // NOP
label_1d2388:
    // 0x1d2388: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d238c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d2390: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d2390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d2394: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2394u;
    {
        const bool branch_taken_0x1d2394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2394) {
            ctx->pc = 0x1D2398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2394u;
            // 0x1d2398: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D23A4u;
            goto label_1d23a4;
        }
    }
    ctx->pc = 0x1D239Cu;
    // 0x1d239c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D239Cu;
    {
        const bool branch_taken_0x1d239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D239Cu;
            // 0x1d23a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d239c) {
            ctx->pc = 0x1D23B4u;
            goto label_1d23b4;
        }
    }
    ctx->pc = 0x1D23A4u;
label_1d23a4:
    // 0x1d23a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d23a8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D23A8u;
    {
        const bool branch_taken_0x1d23a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D23ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23A8u;
            // 0x1d23ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a8) {
            ctx->pc = 0x1D2388u;
            runtime->cooperativeGuestYield();
            goto label_1d2388;
        }
    }
    ctx->pc = 0x1D23B0u;
    // 0x1d23b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d23b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d23b4:
    // 0x1d23b4: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x1d23b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1d23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d23bc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1d23bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d23c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d23c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D23C4u;
    {
        const bool branch_taken_0x1d23c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23C4u;
            // 0x1d23c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23c4) {
            ctx->pc = 0x1D23E4u;
            goto label_1d23e4;
        }
    }
    ctx->pc = 0x1D23CCu;
    // 0x1d23cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d23d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d23d4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1d23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1d23d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d23dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1d23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1d23e0:
    // 0x1d23e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d23e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d23e4:
    // 0x1d23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D23E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D23E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23E4u;
            // 0x1d23e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0x0  nop
    ctx->pc = 0x1d23ecu;
    // NOP
}

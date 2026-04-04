#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1CF8
// Address: 0x1b1cf8 - 0x1b2390
void sub_001B1CF8_0x1b1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1CF8_0x1b1cf8");
#endif

    ctx->pc = 0x1b1cf8u;

    // 0x1b1cf8: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1b1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x1b1cfc: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x1b1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x1b1d00: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x1b1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x1b1d04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b1d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d08: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x1b1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x1b1d0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b1d0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d10: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x1b1d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x1b1d14: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x1b1d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x1b1d18: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x1b1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x1b1d1c: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x1b1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
    // 0x1b1d20: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x1b1d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x1b1d24: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1b1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b1d28: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1b1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1b1d2c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1b1d30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b1d34: 0x94450024  lhu         $a1, 0x24($v0)
    ctx->pc = 0x1b1d34u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b1d38: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1D38u;
    {
        const bool branch_taken_0x1b1d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B1D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D38u;
            // 0x1b1d3c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d38) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D40u;
    // 0x1b1d40: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b1d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d44: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x1b1d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b1d48: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1D48u;
    {
        const bool branch_taken_0x1b1d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D48u;
            // 0x1b1d4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d48) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D50u;
label_1b1d50:
    // 0x1b1d50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b1d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1d58: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1D58u;
    {
        const bool branch_taken_0x1b1d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B1D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D58u;
            // 0x1b1d5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d58) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D60u;
    // 0x1b1d60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d64: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x1b1d64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b1d68: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B1D68u;
    {
        const bool branch_taken_0x1b1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D68u;
            // 0x1b1d6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d68) {
            ctx->pc = 0x1B1D50u;
            runtime->cooperativeGuestYield();
            goto label_1b1d50;
        }
    }
    ctx->pc = 0x1B1D70u;
label_1b1d70:
    // 0x1b1d70: 0x1260017e  beqz        $s3, . + 4 + (0x17E << 2)
    ctx->pc = 0x1B1D70u;
    {
        const bool branch_taken_0x1b1d70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D70u;
            // 0x1b1d74: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d70) {
            ctx->pc = 0x1B236Cu;
            goto label_1b236c;
        }
    }
    ctx->pc = 0x1B1D78u;
    // 0x1b1d78: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1d78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1d7c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1B1D7Cu;
    {
        const bool branch_taken_0x1b1d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D7Cu;
            // 0x1b1d80: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d7c) {
            ctx->pc = 0x1B1FACu;
            goto label_1b1fac;
        }
    }
    ctx->pc = 0x1B1D84u;
    // 0x1b1d84: 0x8c62cb58  lw          $v0, -0x34A8($v1)
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953816)));
    // 0x1b1d88: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B1D88u;
    {
        const bool branch_taken_0x1b1d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D88u;
            // 0x1b1d8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d88) {
            ctx->pc = 0x1B1E78u;
            goto label_1b1e78;
        }
    }
    ctx->pc = 0x1B1D90u;
    // 0x1b1d90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b1d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d94: 0x0  nop
    ctx->pc = 0x1b1d94u;
    // NOP
label_1b1d98:
    // 0x1b1d98: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1d9c: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x1b1d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b1da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1da4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1DA4u;
    {
        const bool branch_taken_0x1b1da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DA4u;
            // 0x1b1da8: 0x2462cb58  addiu       $v0, $v1, -0x34A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1da4) {
            ctx->pc = 0x1B1E5Cu;
            goto label_1b1e5c;
        }
    }
    ctx->pc = 0x1B1DACu;
    // 0x1b1dac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1db4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b1db8: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1b1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1b1dbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1dc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1dcc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b1dd0: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b1dd4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B1DD4u;
    {
        const bool branch_taken_0x1b1dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DD4u;
            // 0x1b1dd8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dd4) {
            ctx->pc = 0x1B1E5Cu;
            goto label_1b1e5c;
        }
    }
    ctx->pc = 0x1B1DDCu;
    // 0x1b1ddc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b1de0:
    // 0x1b1de0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b1de4: 0x2442cb58  addiu       $v0, $v0, -0x34A8
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953816));
    // 0x1b1de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b1df0: 0x70280b  movn        $a1, $v1, $s0
    ctx->pc = 0x1b1df0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b1df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1df8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1dfc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1DFCu;
    {
        const bool branch_taken_0x1b1dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1dfc) {
            ctx->pc = 0x1B1E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DFCu;
            // 0x1b1e00: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E1Cu;
            goto label_1b1e1c;
        }
    }
    ctx->pc = 0x1B1E04u;
    // 0x1b1e04: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1b1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1b1e08: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b1e0c: 0x244271a8  addiu       $v0, $v0, 0x71A8
    ctx->pc = 0x1b1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29096));
    // 0x1b1e10: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1E10u;
    {
        const bool branch_taken_0x1b1e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1e10) {
            ctx->pc = 0x1B1E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E10u;
            // 0x1b1e14: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E54u;
            goto label_1b1e54;
        }
    }
    ctx->pc = 0x1B1E18u;
    // 0x1b1e18: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1b1e18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1b1e1c:
    // 0x1b1e1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1e20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1E20u;
    {
        const bool branch_taken_0x1b1e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E20u;
            // 0x1b1e24: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e20) {
            ctx->pc = 0x1B1E50u;
            goto label_1b1e50;
        }
    }
    ctx->pc = 0x1B1E28u;
    // 0x1b1e28: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1b1e28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1e2c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b1e30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1e38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1e3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b1e40: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b1e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b1e44: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b1e48: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1E50u);
        ctx->pc = 0x1B1E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E48u;
            // 0x1b1e4c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1E50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E50u; }
            if (ctx->pc != 0x1B1E50u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1E50u;
label_1b1e50:
    // 0x1b1e50: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b1e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1e54:
    // 0x1b1e54: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B1E54u;
    {
        const bool branch_taken_0x1b1e54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E54u;
            // 0x1b1e58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e54) {
            ctx->pc = 0x1B1DE0u;
            runtime->cooperativeGuestYield();
            goto label_1b1de0;
        }
    }
    ctx->pc = 0x1B1E5Cu;
label_1b1e5c:
    // 0x1b1e5c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b1e60: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b1e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b1e64: 0x2462cb58  addiu       $v0, $v1, -0x34A8
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953816));
    // 0x1b1e68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1e70: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1B1E70u;
    {
        const bool branch_taken_0x1b1e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E70u;
            // 0x1b1e74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e70) {
            ctx->pc = 0x1B1D98u;
            runtime->cooperativeGuestYield();
            goto label_1b1d98;
        }
    }
    ctx->pc = 0x1B1E78u;
label_1b1e78:
    // 0x1b1e78: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1e7c: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x1b1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x1b1e80: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B1E80u;
    {
        const bool branch_taken_0x1b1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E80u;
            // 0x1b1e84: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e80) {
            ctx->pc = 0x1B1FACu;
            goto label_1b1fac;
        }
    }
    ctx->pc = 0x1B1E88u;
    // 0x1b1e88: 0x8c42ec9c  lw          $v0, -0x1364($v0)
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962332)));
    // 0x1b1e8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1e90: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b1e94: 0x8c5100c0  lw          $s1, 0xC0($v0)
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b1e98: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1B1E98u;
    {
        const bool branch_taken_0x1b1e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E98u;
            // 0x1b1e9c: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e98) {
            ctx->pc = 0x1B1FACu;
            goto label_1b1fac;
        }
    }
    ctx->pc = 0x1B1EA0u;
label_1b1ea0:
    // 0x1b1ea0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ea4: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x1b1ea4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1b1ea8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1eac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1eb0: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B1EB0u;
    {
        const bool branch_taken_0x1b1eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1eb0) {
            ctx->pc = 0x1B1EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EB0u;
            // 0x1b1eb4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1EB8u;
    // 0x1b1eb8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b1ebc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b1ec0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b1ec4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b1ec8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1ED0u);
        ctx->pc = 0x1B1ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EC8u;
            // 0x1b1ecc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1ED0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1ED0u; }
            if (ctx->pc != 0x1B1ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1ED0u;
    // 0x1b1ed0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b1ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ed4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b1ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b1ed8: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B1ED8u;
    {
        const bool branch_taken_0x1b1ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ed8) {
            ctx->pc = 0x1B1EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1ED8u;
            // 0x1b1edc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1EE0u;
    // 0x1b1ee0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b1ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1ee8: 0x244247f0  addiu       $v0, $v0, 0x47F0
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18416));
    // 0x1b1eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1ef4: 0x400008  jr          $v0
    ctx->pc = 0x1B1EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1EFCu;
label_1b1efc:
    // 0x1b1efc: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1efcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1F00u;
    {
        const bool branch_taken_0x1b1f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F00u;
            // 0x1b1f04: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f00) {
            ctx->pc = 0x1B1F20u;
            goto label_1b1f20;
        }
    }
    ctx->pc = 0x1B1F08u;
label_1b1f08:
    // 0x1b1f08: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1F0Cu;
    {
        const bool branch_taken_0x1b1f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F0Cu;
            // 0x1b1f10: 0x30420200  andi        $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f0c) {
            ctx->pc = 0x1B1F20u;
            goto label_1b1f20;
        }
    }
    ctx->pc = 0x1B1F14u;
    // 0x1b1f14: 0x0  nop
    ctx->pc = 0x1b1f14u;
    // NOP
label_1b1f18:
    // 0x1b1f18: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1f18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1f1c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1b1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1b1f20:
    // 0x1b1f20: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B1F20u;
    {
        const bool branch_taken_0x1b1f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f20) {
            ctx->pc = 0x1B1F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F20u;
            // 0x1b1f24: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1F28u;
    // 0x1b1f28: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b1f28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1f2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b1f30: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b1f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1f38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1f3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1f44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b1f48: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b1f4c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b1f50: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1F58u);
        ctx->pc = 0x1B1F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F50u;
            // 0x1b1f54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1F58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F58u; }
            if (ctx->pc != 0x1B1F58u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1F58u;
    // 0x1b1f58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1F58u;
    {
        const bool branch_taken_0x1b1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F58u;
            // 0x1b1f5c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f58) {
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1F60u;
label_1b1f60:
    // 0x1b1f60: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1b1f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1b1f64: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1b1f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1b1f68: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1F68u;
    {
        const bool branch_taken_0x1b1f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f68) {
            ctx->pc = 0x1B1F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F68u;
            // 0x1b1f6c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1F70u;
    // 0x1b1f70: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b1f70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1f74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b1f78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b1f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1f8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b1f90: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b1f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b1f94: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b1f98: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1FA0u);
        ctx->pc = 0x1B1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F98u;
            // 0x1b1f9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1FA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FA0u; }
            if (ctx->pc != 0x1B1FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1FA0u;
label_1b1fa0:
    // 0x1b1fa0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b1fa4:
    // 0x1b1fa4: 0x1620ffbe  bnez        $s1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B1FA4u;
    {
        const bool branch_taken_0x1b1fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FA4u;
            // 0x1b1fa8: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fa4) {
            ctx->pc = 0x1B1EA0u;
            runtime->cooperativeGuestYield();
            goto label_1b1ea0;
        }
    }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b1facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1fb0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1b1fb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b1fb8: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B1FB8u;
    {
        const bool branch_taken_0x1b1fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1fb8) {
            ctx->pc = 0x1B1FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FB8u;
            // 0x1b1fbc: 0x92630014  lbu         $v1, 0x14($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B202Cu;
            goto label_1b202c;
        }
    }
    ctx->pc = 0x1B1FC0u;
    // 0x1b1fc0: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x1b1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x1b1fc4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b1fc8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1FC8u;
    {
        const bool branch_taken_0x1b1fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FC8u;
            // 0x1b1fcc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc8) {
            ctx->pc = 0x1B2028u;
            goto label_1b2028;
        }
    }
    ctx->pc = 0x1B1FD0u;
    // 0x1b1fd0: 0x9445005c  lhu         $a1, 0x5C($v0)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b1fd4: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x1b1fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1b1fd8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1b1fd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b1fdc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1FDCu;
    {
        const bool branch_taken_0x1b1fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FDCu;
            // 0x1b1fe0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fdc) {
            ctx->pc = 0x1B2010u;
            goto label_1b2010;
        }
    }
    ctx->pc = 0x1B1FE4u;
    // 0x1b1fe4: 0x0  nop
    ctx->pc = 0x1b1fe4u;
    // NOP
label_1b1fe8:
    // 0x1b1fe8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1b1fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ff0: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x1b1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b1ff4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b1ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b1ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1ffc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b1ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b2000: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x1b2000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b2004: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b2004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b2008: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2008u;
    {
        const bool branch_taken_0x1b2008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2008u;
            // 0x1b200c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2008) {
            ctx->pc = 0x1B1FE8u;
            runtime->cooperativeGuestYield();
            goto label_1b1fe8;
        }
    }
    ctx->pc = 0x1B2010u;
label_1b2010:
    // 0x1b2010: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2014: 0x8ea40104  lw          $a0, 0x104($s5)
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x1b2018: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1b201c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1b201cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x1b2020: 0xfc43bdf8  sd          $v1, -0x4208($v0)
    ctx->pc = 0x1b2020u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294950392), GPR_U64(ctx, 3));
    // 0x1b2024: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x1b2024u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_1b2028:
    // 0x1b2028: 0x92630014  lbu         $v1, 0x14($s3)
    ctx->pc = 0x1b2028u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_1b202c:
    // 0x1b202c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2030: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B2030u;
    {
        const bool branch_taken_0x1b2030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2030u;
            // 0x1b2034: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2030) {
            ctx->pc = 0x1B20D0u;
            goto label_1b20d0;
        }
    }
    ctx->pc = 0x1B2038u;
    // 0x1b2038: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b2038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b203c: 0x8e42cb78  lw          $v0, -0x3488($s2)
    ctx->pc = 0x1b203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953848)));
    // 0x1b2040: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B2040u;
    {
        const bool branch_taken_0x1b2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2040u;
            // 0x1b2044: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2040) {
            ctx->pc = 0x1B20D0u;
            goto label_1b20d0;
        }
    }
    ctx->pc = 0x1B2048u;
    // 0x1b2048: 0x2643cb78  addiu       $v1, $s2, -0x3488
    ctx->pc = 0x1b2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953848));
    // 0x1b204c: 0x0  nop
    ctx->pc = 0x1b204cu;
    // NOP
label_1b2050:
    // 0x1b2050: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b2050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b2054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b205c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2060: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1b2064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b206c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2074: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b2078: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b207c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B207Cu;
    {
        const bool branch_taken_0x1b207c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b207c) {
            ctx->pc = 0x1B2080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B207Cu;
            // 0x1b2080: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B20B8u;
            goto label_1b20b8;
        }
    }
    ctx->pc = 0x1B2084u;
    // 0x1b2084: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x1b2084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_1b2088:
    // 0x1b2088: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b208c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1b2090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2094: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2098: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1b2098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b209c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1b209cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1b20a0: 0xc054104  jal         func_150410
    ctx->pc = 0x1B20A0u;
    SET_GPR_U32(ctx, 31, 0x1B20A8u);
    ctx->pc = 0x1B20A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20A0u;
            // 0x1b20a4: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20A8u; }
        if (ctx->pc != 0x1B20A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20A8u; }
        if (ctx->pc != 0x1B20A8u) { return; }
    }
    ctx->pc = 0x1B20A8u;
    // 0x1b20a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b20ac: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B20ACu;
    {
        const bool branch_taken_0x1b20ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b20ac) {
            ctx->pc = 0x1B20B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20ACu;
            // 0x1b20b0: 0x92620014  lbu         $v0, 0x14($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2088u;
            runtime->cooperativeGuestYield();
            goto label_1b2088;
        }
    }
    ctx->pc = 0x1B20B4u;
    // 0x1b20b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b20b8:
    // 0x1b20b8: 0x2642cb78  addiu       $v0, $s2, -0x3488
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953848));
    // 0x1b20bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b20c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b20c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b20c8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1B20C8u;
    {
        const bool branch_taken_0x1b20c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B20CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20C8u;
            // 0x1b20cc: 0x2643cb78  addiu       $v1, $s2, -0x3488 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20c8) {
            ctx->pc = 0x1B2050u;
            runtime->cooperativeGuestYield();
            goto label_1b2050;
        }
    }
    ctx->pc = 0x1B20D0u;
label_1b20d0:
    // 0x1b20d0: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x1b20d4: 0x26c2ec58  addiu       $v0, $s6, -0x13A8
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962264));
    // 0x1b20d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b20dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b20e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b20e4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1b20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b20e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B20E8u;
    {
        const bool branch_taken_0x1b20e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20E8u;
            // 0x1b20ec: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20e8) {
            ctx->pc = 0x1B2100u;
            goto label_1b2100;
        }
    }
    ctx->pc = 0x1B20F0u;
    // 0x1b20f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b20f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B20F4u;
    {
        const bool branch_taken_0x1b20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20F4u;
            // 0x1b20f8: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20f4) {
            ctx->pc = 0x1B2104u;
            goto label_1b2104;
        }
    }
    ctx->pc = 0x1B20FCu;
    // 0x1b20fc: 0x0  nop
    ctx->pc = 0x1b20fcu;
    // NOP
label_1b2100:
    // 0x1b2100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2104:
    // 0x1b2104: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2104u;
    {
        const bool branch_taken_0x1b2104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2104u;
            // 0x1b2108: 0x26c2ec58  addiu       $v0, $s6, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2104) {
            ctx->pc = 0x1B2240u;
            goto label_1b2240;
        }
    }
    ctx->pc = 0x1B210Cu;
    // 0x1b210c: 0x92620015  lbu         $v0, 0x15($s3)
    ctx->pc = 0x1b210cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x1b2110: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2110u;
    {
        const bool branch_taken_0x1b2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2110u;
            // 0x1b2114: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2110) {
            ctx->pc = 0x1B2160u;
            goto label_1b2160;
        }
    }
    ctx->pc = 0x1B2118u;
    // 0x1b2118: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b2118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b211c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B211Cu;
    {
        const bool branch_taken_0x1b211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b211c) {
            ctx->pc = 0x1B2120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B211Cu;
            // 0x1b2120: 0x86650016  lh          $a1, 0x16($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B219Cu;
            goto label_1b219c;
        }
    }
    ctx->pc = 0x1B2124u;
    // 0x1b2124: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b2124u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2128: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b212c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b2130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b213c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2140: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b2144: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b2144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b2148: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b214c: 0x40f809  jalr        $v0
    ctx->pc = 0x1B214Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2154u);
        ctx->pc = 0x1B2150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B214Cu;
            // 0x1b2150: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2154u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2154u; }
            if (ctx->pc != 0x1B2154u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2154u;
    // 0x1b2154: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2154u;
    {
        const bool branch_taken_0x1b2154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2154u;
            // 0x1b2158: 0x86650016  lh          $a1, 0x16($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2154) {
            ctx->pc = 0x1B219Cu;
            goto label_1b219c;
        }
    }
    ctx->pc = 0x1B215Cu;
    // 0x1b215c: 0x0  nop
    ctx->pc = 0x1b215cu;
    // NOP
label_1b2160:
    // 0x1b2160: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b2160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b2164: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2164u;
    {
        const bool branch_taken_0x1b2164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2164u;
            // 0x1b2168: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2164) {
            ctx->pc = 0x1B2198u;
            goto label_1b2198;
        }
    }
    ctx->pc = 0x1B216Cu;
    // 0x1b216c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b216cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2170: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b2174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b2174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b217c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2180: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2184: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b2188: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b2188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b218c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b2190: 0x40f809  jalr        $v0
    ctx->pc = 0x1B2190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2198u);
        ctx->pc = 0x1B2194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2190u;
            // 0x1b2194: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2198u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2198u; }
            if (ctx->pc != 0x1B2198u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2198u;
label_1b2198:
    // 0x1b2198: 0x86650016  lh          $a1, 0x16($s3)
    ctx->pc = 0x1b2198u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_1b219c:
    // 0x1b219c: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B219Cu;
    {
        const bool branch_taken_0x1b219c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B21A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B219Cu;
            // 0x1b21a0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b219c) {
            ctx->pc = 0x1B21F8u;
            goto label_1b21f8;
        }
    }
    ctx->pc = 0x1B21A4u;
    // 0x1b21a4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b21a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b21a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b21a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b21acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b21b4: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1B21B4u;
    SET_GPR_U32(ctx, 31, 0x1B21BCu);
    ctx->pc = 0x1B21B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21B4u;
            // 0x1b21b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21BCu; }
        if (ctx->pc != 0x1B21BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21BCu; }
        if (ctx->pc != 0x1B21BCu) { return; }
    }
    ctx->pc = 0x1B21BCu;
    // 0x1b21bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b21bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21c0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1B21C0u;
    {
        const bool branch_taken_0x1b21c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21C0u;
            // 0x1b21c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21c0) {
            ctx->pc = 0x1B21F8u;
            goto label_1b21f8;
        }
    }
    ctx->pc = 0x1B21C8u;
label_1b21c8:
    // 0x1b21c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b21cc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B21CCu;
    {
        const bool branch_taken_0x1b21cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21cc) {
            ctx->pc = 0x1B21D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21CCu;
            // 0x1b21d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B21ECu;
            goto label_1b21ec;
        }
    }
    ctx->pc = 0x1B21D4u;
    // 0x1b21d4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1b21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1b21d8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b21d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b21dc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1b21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b21e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B21E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B21E8u);
        ctx->pc = 0x1B21E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21E0u;
            // 0x1b21e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B21E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E8u; }
            if (ctx->pc != 0x1B21E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B21E8u;
    // 0x1b21e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b21ec:
    // 0x1b21ec: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x1b21ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1b21f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B21F0u;
    {
        const bool branch_taken_0x1b21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21F0u;
            // 0x1b21f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21f0) {
            ctx->pc = 0x1B21C8u;
            runtime->cooperativeGuestYield();
            goto label_1b21c8;
        }
    }
    ctx->pc = 0x1B21F8u;
label_1b21f8:
    // 0x1b21f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b21fc: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x1b21fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2200: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1b2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2208: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1b2208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1b220c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b220cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2210: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x1b2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2214: 0xc04015e  jal         func_100578
    ctx->pc = 0x1B2214u;
    SET_GPR_U32(ctx, 31, 0x1B221Cu);
    ctx->pc = 0x1B2218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2214u;
            // 0x1b2218: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B221Cu; }
        if (ctx->pc != 0x1B221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B221Cu; }
        if (ctx->pc != 0x1B221Cu) { return; }
    }
    ctx->pc = 0x1B221Cu;
    // 0x1b221c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2220: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x1B2220u;
    SET_GPR_U32(ctx, 31, 0x1B2228u);
    ctx->pc = 0x1B2224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2220u;
            // 0x1b2224: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2228u; }
        if (ctx->pc != 0x1B2228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2228u; }
        if (ctx->pc != 0x1B2228u) { return; }
    }
    ctx->pc = 0x1B2228u;
    // 0x1b2228: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b2228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b222c: 0xc040298  jal         func_100A60
    ctx->pc = 0x1B222Cu;
    SET_GPR_U32(ctx, 31, 0x1B2234u);
    ctx->pc = 0x1B2230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B222Cu;
            // 0x1b2230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2234u; }
        if (ctx->pc != 0x1B2234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2234u; }
        if (ctx->pc != 0x1B2234u) { return; }
    }
    ctx->pc = 0x1B2234u;
    // 0x1b2234: 0xc040622  jal         func_101888
    ctx->pc = 0x1B2234u;
    SET_GPR_U32(ctx, 31, 0x1B223Cu);
    ctx->pc = 0x1B2238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2234u;
            // 0x1b2238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B223Cu; }
        if (ctx->pc != 0x1B223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B223Cu; }
        if (ctx->pc != 0x1B223Cu) { return; }
    }
    ctx->pc = 0x1B223Cu;
    // 0x1b223c: 0x26c2ec58  addiu       $v0, $s6, -0x13A8
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962264));
label_1b2240:
    // 0x1b2240: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b2244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2248: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b224c: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b2250: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2250u;
    {
        const bool branch_taken_0x1b2250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2250u;
            // 0x1b2254: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2250) {
            ctx->pc = 0x1B2274u;
            goto label_1b2274;
        }
    }
    ctx->pc = 0x1B2258u;
    // 0x1b2258: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b225c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b225cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2260:
    // 0x1b2260: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2260u;
    {
        const bool branch_taken_0x1b2260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2260u;
            // 0x1b2264: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2260) {
            ctx->pc = 0x1B2274u;
            goto label_1b2274;
        }
    }
    ctx->pc = 0x1B2268u;
    // 0x1b2268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b2268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b226c: 0x5622fffc  bnel        $s1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B226Cu;
    {
        const bool branch_taken_0x1b226c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b226c) {
            ctx->pc = 0x1B2270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B226Cu;
            // 0x1b2270: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2260u;
            runtime->cooperativeGuestYield();
            goto label_1b2260;
        }
    }
    ctx->pc = 0x1B2274u;
label_1b2274:
    // 0x1b2274: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2274u;
            // 0x1b2278: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2320u;
            goto label_1b2320;
        }
    }
    ctx->pc = 0x1B227Cu;
    // 0x1b227c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B227Cu;
    {
        const bool branch_taken_0x1b227c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B2280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B227Cu;
            // 0x1b2280: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b227c) {
            ctx->pc = 0x1B22D0u;
            goto label_1b22d0;
        }
    }
    ctx->pc = 0x1B2284u;
    // 0x1b2284: 0x0  nop
    ctx->pc = 0x1b2284u;
    // NOP
label_1b2288:
    // 0x1b2288: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b228c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2290: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b2294: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2294u;
    {
        const bool branch_taken_0x1b2294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2294) {
            ctx->pc = 0x1B2298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2294u;
            // 0x1b2298: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B229Cu;
            goto label_1b229c;
        }
    }
    ctx->pc = 0x1B229Cu;
label_1b229c:
    // 0x1b229c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b229cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b22a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b22a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b22a4: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1b22a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b22a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22ac: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b22b0: 0xf1202a  slt         $a0, $a3, $s1
    ctx->pc = 0x1b22b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b22b4: 0x3010  mfhi        $a2
    ctx->pc = 0x1b22b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1b22b8: 0xa0460210  sb          $a2, 0x210($v0)
    ctx->pc = 0x1b22b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 528), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b22bc: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b22c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b22c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b22c4: 0x1012  mflo        $v0
    ctx->pc = 0x1b22c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b22c8: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B22C8u;
    {
        const bool branch_taken_0x1b22c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22C8u;
            // 0x1b22cc: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22c8) {
            ctx->pc = 0x1B2288u;
            runtime->cooperativeGuestYield();
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B22D0u;
label_1b22d0:
    // 0x1b22d0: 0x26c2ec58  addiu       $v0, $s6, -0x13A8
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962264));
    // 0x1b22d4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b22d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b22dc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b22e0: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b22e4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B22E4u;
    {
        const bool branch_taken_0x1b22e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22E4u;
            // 0x1b22e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22e4) {
            ctx->pc = 0x1B231Cu;
            goto label_1b231c;
        }
    }
    ctx->pc = 0x1B22ECu;
    // 0x1b22ec: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_1b22f0:
    // 0x1b22f0: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b22f4: 0x90450210  lbu         $a1, 0x210($v0)
    ctx->pc = 0x1b22f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1b22f8: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x1b22f8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1b22fc: 0xc05c368  jal         func_170DA0
    ctx->pc = 0x1B22FCu;
    SET_GPR_U32(ctx, 31, 0x1B2304u);
    ctx->pc = 0x1B2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22FCu;
            // 0x1b2300: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DA0u;
    if (runtime->hasFunction(0x170DA0u)) {
        auto targetFn = runtime->lookupFunction(0x170DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2304u; }
        if (ctx->pc != 0x1B2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170da0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2304u; }
        if (ctx->pc != 0x1B2304u) { return; }
    }
    ctx->pc = 0x1B2304u;
    // 0x1b2304: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b2308: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2308u;
    {
        const bool branch_taken_0x1b2308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2308u;
            // 0x1b230c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2308) {
            ctx->pc = 0x1B2320u;
            goto label_1b2320;
        }
    }
    ctx->pc = 0x1B2310u;
    // 0x1b2310: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2314: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B2314u;
    {
        const bool branch_taken_0x1b2314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2314u;
            // 0x1b2318: 0x3b11021  addu        $v0, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2314) {
            ctx->pc = 0x1B22F0u;
            runtime->cooperativeGuestYield();
            goto label_1b22f0;
        }
    }
    ctx->pc = 0x1B231Cu;
label_1b231c:
    // 0x1b231c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2320:
    // 0x1b2320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2324: 0xc06c522  jal         func_1B1488
    ctx->pc = 0x1B2324u;
    SET_GPR_U32(ctx, 31, 0x1B232Cu);
    ctx->pc = 0x1B2328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2324u;
            // 0x1b2328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1488u;
    if (runtime->hasFunction(0x1B1488u)) {
        auto targetFn = runtime->lookupFunction(0x1B1488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B232Cu; }
        if (ctx->pc != 0x1B232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1488_0x1b1488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B232Cu; }
        if (ctx->pc != 0x1B232Cu) { return; }
    }
    ctx->pc = 0x1B232Cu;
    // 0x1b232c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1b232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2330: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2334: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b2334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b2338: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b233c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2340: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b2340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b2344: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b2344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b2348: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2348u;
    {
        const bool branch_taken_0x1b2348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2348u;
            // 0x1b234c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2348) {
            ctx->pc = 0x1B2368u;
            goto label_1b2368;
        }
    }
    ctx->pc = 0x1B2350u;
    // 0x1b2350: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b2354: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b2354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2358: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b235c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b2360: 0x40f809  jalr        $v0
    ctx->pc = 0x1B2360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2368u);
        ctx->pc = 0x1B2364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2360u;
            // 0x1b2364: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2368u; }
            if (ctx->pc != 0x1B2368u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2368u;
label_1b2368:
    // 0x1b2368: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x1b2368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_1b236c:
    // 0x1b236c: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x1b236cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1b2370: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x1b2370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1b2374: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x1b2374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b2378: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x1b2378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b237c: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x1b237cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b2380: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x1b2380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b2384: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x1b2384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b2388: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2388u;
            // 0x1b238c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2390u;
}

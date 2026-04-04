#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231860
// Address: 0x231860 - 0x231a28
void sub_00231860_0x231860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231860_0x231860");
#endif

    ctx->pc = 0x231860u;

    // 0x231860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231864: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23186c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23186cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231874: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x231874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x231878: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23187c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23187cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x231880: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x231880u;
    {
        const bool branch_taken_0x231880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231880u;
            // 0x231884: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231880) {
            ctx->pc = 0x2319ACu;
            goto label_2319ac;
        }
    }
    ctx->pc = 0x231888u;
    // 0x231888: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x231888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23188c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x23188cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x231890: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x231890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x231894: 0x40f809  jalr        $v0
    ctx->pc = 0x231894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23189Cu);
        ctx->pc = 0x231898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231894u;
            // 0x231898: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23189Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318D8u: goto label_2318d8;
            case 0x2318F0u: goto label_2318f0;
            case 0x231920u: goto label_231920;
            case 0x231928u: goto label_231928;
            case 0x231950u: goto label_231950;
            case 0x231954u: goto label_231954;
            case 0x231988u: goto label_231988;
            case 0x23198Cu: goto label_23198c;
            case 0x2319ACu: goto label_2319ac;
            case 0x2319B0u: goto label_2319b0;
            case 0x231A10u: goto label_231a10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23189Cu; }
            if (ctx->pc != 0x23189Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23189Cu;
    // 0x23189c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x23189Cu;
    {
        const bool branch_taken_0x23189c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23189Cu;
            // 0x2318a0: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23189c) {
            ctx->pc = 0x2319ACu;
            goto label_2319ac;
        }
    }
    ctx->pc = 0x2318A4u;
    // 0x2318a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2318a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2318a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2318ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2318acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2318b0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2318b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2318b4: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2318B4u;
    {
        const bool branch_taken_0x2318b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2318B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2318B4u;
            // 0x2318b8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318b4) {
            ctx->pc = 0x2318D8u;
            goto label_2318d8;
        }
    }
    ctx->pc = 0x2318BCu;
    // 0x2318bc: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x2318bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2318c0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2318c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2318c4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2318c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2318c8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2318c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2318cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2318CCu;
    {
        const bool branch_taken_0x2318cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2318cc) {
            ctx->pc = 0x2318D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2318CCu;
            // 0x2318d0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2318F0u;
            goto label_2318f0;
        }
    }
    ctx->pc = 0x2318D4u;
    // 0x2318d4: 0x0  nop
    ctx->pc = 0x2318d4u;
    // NOP
label_2318d8:
    // 0x2318d8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2318dc: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x2318dcu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2318e0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2318e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2318e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2318e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2318e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2318E8u;
    {
        const bool branch_taken_0x2318e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2318E8u;
            // 0x2318ec: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318e8) {
            ctx->pc = 0x231988u;
            goto label_231988;
        }
    }
    ctx->pc = 0x2318F0u;
label_2318f0:
    // 0x2318f0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x2318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2318f4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2318f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2318f8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2318f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2318fc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2318fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231900u;
    {
        const bool branch_taken_0x231900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231900u;
            // 0x231904: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231900) {
            ctx->pc = 0x231920u;
            goto label_231920;
        }
    }
    ctx->pc = 0x231908u;
    // 0x231908: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x231908u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x23190c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x23190cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x231910: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x231910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x231914: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x231914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x231918: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x231918u;
    {
        const bool branch_taken_0x231918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231918u;
            // 0x23191c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231918) {
            ctx->pc = 0x23198Cu;
            goto label_23198c;
        }
    }
    ctx->pc = 0x231920u;
label_231920:
    // 0x231920: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x231924: 0x0  nop
    ctx->pc = 0x231924u;
    // NOP
label_231928:
    // 0x231928: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x231928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x23192c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x23192cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x231930: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x231930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x231934: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x231934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231938: 0x0  nop
    ctx->pc = 0x231938u;
    // NOP
    // 0x23193c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23193Cu;
    {
        const bool branch_taken_0x23193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23193c) {
            ctx->pc = 0x231940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23193Cu;
            // 0x231940: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231928u;
            runtime->cooperativeGuestYield();
            goto label_231928;
        }
    }
    ctx->pc = 0x231944u;
    // 0x231944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231944u;
    {
        const bool branch_taken_0x231944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231944u;
            // 0x231948: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231944) {
            ctx->pc = 0x231954u;
            goto label_231954;
        }
    }
    ctx->pc = 0x23194Cu;
    // 0x23194c: 0x0  nop
    ctx->pc = 0x23194cu;
    // NOP
label_231950:
    // 0x231950: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x231950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_231954:
    // 0x231954: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x231954u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x231958: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23195c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x23195cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231960: 0x0  nop
    ctx->pc = 0x231960u;
    // NOP
    // 0x231964: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231964u;
    {
        const bool branch_taken_0x231964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231964) {
            ctx->pc = 0x231968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231964u;
            // 0x231968: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231950u;
            runtime->cooperativeGuestYield();
            goto label_231950;
        }
    }
    ctx->pc = 0x23196Cu;
    // 0x23196c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x231970: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x231970u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x231974: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x231974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231978: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x231978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23197c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x23197cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x231980: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x231980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x231984: 0x0  nop
    ctx->pc = 0x231984u;
    // NOP
label_231988:
    // 0x231988: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x231988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23198c:
    // 0x23198c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x23198cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x231990: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x231994: 0x11180a  movz        $v1, $zero, $s1
    ctx->pc = 0x231994u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x231998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23199c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x23199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2319a0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2319a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2319a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2319A4u;
    {
        const bool branch_taken_0x2319a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319A4u;
            // 0x2319a8: 0xa6240004  sh          $a0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319a4) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x2319ACu;
label_2319ac:
    // 0x2319ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2319acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2319b0:
    // 0x2319b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2319b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2319b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2319b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2319b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2319b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2319bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2319BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2319C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319BCu;
            // 0x2319c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318D8u: goto label_2318d8;
            case 0x2318F0u: goto label_2318f0;
            case 0x231920u: goto label_231920;
            case 0x231928u: goto label_231928;
            case 0x231950u: goto label_231950;
            case 0x231954u: goto label_231954;
            case 0x231988u: goto label_231988;
            case 0x23198Cu: goto label_23198c;
            case 0x2319ACu: goto label_2319ac;
            case 0x2319B0u: goto label_2319b0;
            case 0x231A10u: goto label_231a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2319C4u;
    // 0x2319c4: 0x0  nop
    ctx->pc = 0x2319c4u;
    // NOP
    // 0x2319c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2319cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2319ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2319d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2319d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2319d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2319d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2319d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2319dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2319dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2319e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2319e4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x2319e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2319e8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2319ec: 0x40f809  jalr        $v0
    ctx->pc = 0x2319ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2319F4u);
        ctx->pc = 0x2319F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319ECu;
            // 0x2319f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2319F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318D8u: goto label_2318d8;
            case 0x2318F0u: goto label_2318f0;
            case 0x231920u: goto label_231920;
            case 0x231928u: goto label_231928;
            case 0x231950u: goto label_231950;
            case 0x231954u: goto label_231954;
            case 0x231988u: goto label_231988;
            case 0x23198Cu: goto label_23198c;
            case 0x2319ACu: goto label_2319ac;
            case 0x2319B0u: goto label_2319b0;
            case 0x231A10u: goto label_231a10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2319F4u; }
            if (ctx->pc != 0x2319F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2319F4u;
    // 0x2319f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2319F4u;
    {
        const bool branch_taken_0x2319f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319F4u;
            // 0x2319f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319f4) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2319FCu;
    // 0x2319fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2319fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x231a00: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x231a04: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x231a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x231a08: 0x40f809  jalr        $v0
    ctx->pc = 0x231A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231A10u);
        ctx->pc = 0x231A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A08u;
            // 0x231a0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231A10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318D8u: goto label_2318d8;
            case 0x2318F0u: goto label_2318f0;
            case 0x231920u: goto label_231920;
            case 0x231928u: goto label_231928;
            case 0x231950u: goto label_231950;
            case 0x231954u: goto label_231954;
            case 0x231988u: goto label_231988;
            case 0x23198Cu: goto label_23198c;
            case 0x2319ACu: goto label_2319ac;
            case 0x2319B0u: goto label_2319b0;
            case 0x231A10u: goto label_231a10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231A10u; }
            if (ctx->pc != 0x231A10u) { return; }
        }
        }
    }
    ctx->pc = 0x231A10u;
label_231a10:
    // 0x231a10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A1Cu;
            // 0x231a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2318D8u: goto label_2318d8;
            case 0x2318F0u: goto label_2318f0;
            case 0x231920u: goto label_231920;
            case 0x231928u: goto label_231928;
            case 0x231950u: goto label_231950;
            case 0x231954u: goto label_231954;
            case 0x231988u: goto label_231988;
            case 0x23198Cu: goto label_23198c;
            case 0x2319ACu: goto label_2319ac;
            case 0x2319B0u: goto label_2319b0;
            case 0x231A10u: goto label_231a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231A24u;
    // 0x231a24: 0x0  nop
    ctx->pc = 0x231a24u;
    // NOP
}

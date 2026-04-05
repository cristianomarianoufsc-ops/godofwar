#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28ee88
// Address: 0x28ee88 - 0x28f038
void entry_28ee88_0x28f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28ee88_0x28f038");
#endif

    ctx->pc = 0x28ee88u;

    // 0x28ee88: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x28ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28ee8c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28ee8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28ee90: 0x24430019  addiu       $v1, $v0, 0x19
    ctx->pc = 0x28ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x28ee94: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x28ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x28ee98: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x28ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x28ee9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x28ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x28eea0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x28eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x28eea4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x28eea4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eea8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x28eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x28eeac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28eeb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28eeb4: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x28eeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x28eeb8: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x28eebc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28eebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eec0: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x28eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x28eec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28eec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28eec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eecc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EECCu;
    {
        const bool branch_taken_0x28eecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EECCu;
            // 0x28eed0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eecc) {
            ctx->pc = 0x28EEE4u;
            goto label_28eee4;
        }
    }
    ctx->pc = 0x28EED4u;
    // 0x28eed4: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x28EED4u;
    {
        const bool branch_taken_0x28eed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EED4u;
            // 0x28eed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eed4) {
            ctx->pc = 0x28F018u;
            goto label_28f018;
        }
    }
    ctx->pc = 0x28EEDCu;
    // 0x28eedc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EEDCu;
    {
        const bool branch_taken_0x28eedc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEDCu;
            // 0x28eee0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eedc) {
            ctx->pc = 0x28EEECu;
            goto label_28eeec;
        }
    }
    ctx->pc = 0x28EEE4u;
label_28eee4:
    // 0x28eee4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x28EEE4u;
    {
        const bool branch_taken_0x28eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEE4u;
            // 0x28eee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eee4) {
            ctx->pc = 0x28F018u;
            goto label_28f018;
        }
    }
    ctx->pc = 0x28EEECu;
label_28eeec:
    // 0x28eeec: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x28eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x28eef0: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x28eef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28eef4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28EEF4u;
    {
        const bool branch_taken_0x28eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEF4u;
            // 0x28eef8: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eef4) {
            ctx->pc = 0x28EF74u;
            goto label_28ef74;
        }
    }
    ctx->pc = 0x28EEFCu;
    // 0x28eefc: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x28ef00: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x28ef04: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x28ef08: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28ef08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ef0c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x28ef0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ef10: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ef14: 0x0  nop
    ctx->pc = 0x28ef14u;
    // NOP
label_28ef18:
    // 0x28ef18: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x28EF18u;
    {
        const bool branch_taken_0x28ef18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x28EF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF18u;
            // 0x28ef1c: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef18) {
            ctx->pc = 0x28EF58u;
            goto label_28ef58;
        }
    }
    ctx->pc = 0x28EF20u;
    // 0x28ef20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EF20u;
    {
        const bool branch_taken_0x28ef20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ef20) {
            ctx->pc = 0x28EF38u;
            goto label_28ef38;
        }
    }
    ctx->pc = 0x28EF28u;
    // 0x28ef28: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF28u;
    {
        const bool branch_taken_0x28ef28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x28EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF28u;
            // 0x28ef2c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef28) {
            ctx->pc = 0x28EF48u;
            goto label_28ef48;
        }
    }
    ctx->pc = 0x28EF30u;
    // 0x28ef30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28EF30u;
    {
        const bool branch_taken_0x28ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF30u;
            // 0x28ef34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef30) {
            ctx->pc = 0x28EF60u;
            goto label_28ef60;
        }
    }
    ctx->pc = 0x28EF38u;
label_28ef38:
    // 0x28ef38: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28EF38u;
    {
        const bool branch_taken_0x28ef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x28ef38) {
            ctx->pc = 0x28EF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF38u;
            // 0x28ef3c: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF40u;
    // 0x28ef40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF40u;
    {
        const bool branch_taken_0x28ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF40u;
            // 0x28ef44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef40) {
            ctx->pc = 0x28EF60u;
            goto label_28ef60;
        }
    }
    ctx->pc = 0x28EF48u;
label_28ef48:
    // 0x28ef48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EF48u;
    {
        const bool branch_taken_0x28ef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF48u;
            // 0x28ef4c: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef48) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF50u;
    // 0x28ef50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EF50u;
    {
        const bool branch_taken_0x28ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF50u;
            // 0x28ef54: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef50) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF58u;
label_28ef58:
    // 0x28ef58: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x28ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_28ef5c:
    // 0x28ef5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28ef60:
    // 0x28ef60: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x28ef60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28ef64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EF64u;
    {
        const bool branch_taken_0x28ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF64u;
            // 0x28ef68: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef64) {
            ctx->pc = 0x28EF74u;
            goto label_28ef74;
        }
    }
    ctx->pc = 0x28EF6Cu;
    // 0x28ef6c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28EF6Cu;
    {
        const bool branch_taken_0x28ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x28ef6c) {
            ctx->pc = 0x28EF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF6Cu;
            // 0x28ef70: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EF18u;
            runtime->cooperativeGuestYield();
            goto label_28ef18;
        }
    }
    ctx->pc = 0x28EF74u;
label_28ef74:
    // 0x28ef74: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28ef78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ef7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EF7Cu;
    {
        const bool branch_taken_0x28ef7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF7Cu;
            // 0x28ef80: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef7c) {
            ctx->pc = 0x28EF8Cu;
            goto label_28ef8c;
        }
    }
    ctx->pc = 0x28EF84u;
    // 0x28ef84: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28EF84u;
    {
        const bool branch_taken_0x28ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF84u;
            // 0x28ef88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef84) {
            ctx->pc = 0x28F018u;
            goto label_28f018;
        }
    }
    ctx->pc = 0x28EF8Cu;
label_28ef8c:
    // 0x28ef8c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x28ef8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28ef90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28EF90u;
    {
        const bool branch_taken_0x28ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF90u;
            // 0x28ef94: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef90) {
            ctx->pc = 0x28EFF4u;
            goto label_28eff4;
        }
    }
    ctx->pc = 0x28EF98u;
    // 0x28ef98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ef9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28ef9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efa0: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x28efa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x28efa4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28efa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_28efa8:
    // 0x28efa8: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x28efa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28efac: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x28efacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28efb0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28EFB0u;
    {
        const bool branch_taken_0x28efb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFB0u;
            // 0x28efb4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efb0) {
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFB8u;
    // 0x28efb8: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x28efb8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28efbc: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x28EFBCu;
    {
        const bool branch_taken_0x28efbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x28efbc) {
            ctx->pc = 0x28EFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFBCu;
            // 0x28efc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EFC4u;
            goto label_28efc4;
        }
    }
    ctx->pc = 0x28EFC4u;
label_28efc4:
    // 0x28efc4: 0x1010  mfhi        $v0
    ctx->pc = 0x28efc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28efc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EFC8u;
    {
        const bool branch_taken_0x28efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28efc8) {
            ctx->pc = 0x28EFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFC8u;
            // 0x28efcc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFD0u;
    // 0x28efd0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EFD0u;
    {
        const bool branch_taken_0x28efd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFD0u;
            // 0x28efd4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efd0) {
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFD8u;
    // 0x28efd8: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x28efd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x28efdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28efdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28efe0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28efe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_28efe4:
    // 0x28efe4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28efe8: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28efec: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28EFECu;
    {
        const bool branch_taken_0x28efec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28efec) {
            ctx->pc = 0x28EFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFECu;
            // 0x28eff0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EFA8u;
            runtime->cooperativeGuestYield();
            goto label_28efa8;
        }
    }
    ctx->pc = 0x28EFF4u;
label_28eff4:
    // 0x28eff4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28eff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28eff8: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x28eff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x28effc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28effcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f004: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x28f004u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28f008: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F008u;
    SET_GPR_U32(ctx, 31, 0x28F010u);
    ctx->pc = 0x28F00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F008u;
            // 0x28f00c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F010u; }
        if (ctx->pc != 0x28F010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F010u; }
        if (ctx->pc != 0x28F010u) { return; }
    }
    ctx->pc = 0x28F010u;
    // 0x28f010: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28f010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x28f014: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28f014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f018:
    // 0x28f018: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f01c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28f01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f020: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x28f020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f024: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x28f024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f028: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x28f028u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f02c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f030: 0x3e00008  jr          $ra
    ctx->pc = 0x28F030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F030u;
            // 0x28f034: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28EEE4u: goto label_28eee4;
            case 0x28EEECu: goto label_28eeec;
            case 0x28EF18u: goto label_28ef18;
            case 0x28EF38u: goto label_28ef38;
            case 0x28EF48u: goto label_28ef48;
            case 0x28EF58u: goto label_28ef58;
            case 0x28EF5Cu: goto label_28ef5c;
            case 0x28EF60u: goto label_28ef60;
            case 0x28EF74u: goto label_28ef74;
            case 0x28EF8Cu: goto label_28ef8c;
            case 0x28EFA8u: goto label_28efa8;
            case 0x28EFC4u: goto label_28efc4;
            case 0x28EFE4u: goto label_28efe4;
            case 0x28EFF4u: goto label_28eff4;
            case 0x28F018u: goto label_28f018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F038u;
}

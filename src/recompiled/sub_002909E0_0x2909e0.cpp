#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002909E0
// Address: 0x2909e0 - 0x290cd8
void sub_002909E0_0x2909e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002909E0_0x2909e0");
#endif

    ctx->pc = 0x2909e0u;

    // 0x2909e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2909e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2909e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2909e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2909e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2909e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2909ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2909ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2909f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2909f4: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2909F4u;
    {
        const bool branch_taken_0x2909f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909F4u;
            // 0x2909f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909f4) {
            ctx->pc = 0x290CC0u;
            goto label_290cc0;
        }
    }
    ctx->pc = 0x2909FCu;
    // 0x2909fc: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x2909FCu;
    SET_GPR_U32(ctx, 31, 0x290A04u);
    ctx->pc = 0x28B648u;
    if (runtime->hasFunction(0x28B648u)) {
        auto targetFn = runtime->lookupFunction(0x28B648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A04u; }
        if (ctx->pc != 0x290A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B648_0x28b648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A04u; }
        if (ctx->pc != 0x290A04u) { return; }
    }
    ctx->pc = 0x290A04u;
    // 0x290a04: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x290a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x290a08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290a0c: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x290a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x290a10: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x290a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x290a14: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x290a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x290a18: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290a1c: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x290a1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x290a20: 0x24ab4638  addiu       $t3, $a1, 0x4638
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
    // 0x290a24: 0x1493821  addu        $a3, $t2, $t1
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x290a28: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x290a2c: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x290a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x290a30: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x290a30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a34: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x290a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x290a38: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x290A38u;
    {
        const bool branch_taken_0x290a38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x290A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A38u;
            // 0x290a3c: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a38) {
            ctx->pc = 0x290AACu;
            goto label_290aac;
        }
    }
    ctx->pc = 0x290A40u;
    // 0x290a40: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x290a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x290a44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290A44u;
    {
        const bool branch_taken_0x290a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A44u;
            // 0x290a48: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a44) {
            ctx->pc = 0x290A68u;
            goto label_290a68;
        }
    }
    ctx->pc = 0x290A4Cu;
    // 0x290a4c: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x290a50: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x290a50u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x290a54: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x290a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x290a58: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x290a5c: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x290a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x290a60: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x290a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290a64: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x290a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_290a68:
    // 0x290a68: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x290a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x290a6c: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x290a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x290a70: 0xdc854a40  ld          $a1, 0x4A40($a0)
    ctx->pc = 0x290a70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 19008)));
    // 0x290a74: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x290a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x290a78: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x290a78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x290a7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x290a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x290a80: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x290a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x290a84: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x290A84u;
    {
        const bool branch_taken_0x290a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A84u;
            // 0x290a88: 0xad6a0008  sw          $t2, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a84) {
            ctx->pc = 0x290A9Cu;
            goto label_290a9c;
        }
    }
    ctx->pc = 0x290A8Cu;
    // 0x290a8c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x290a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a94: 0xc0a4336  jal         func_290CD8
    ctx->pc = 0x290A94u;
    SET_GPR_U32(ctx, 31, 0x290A9Cu);
    ctx->pc = 0x290A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290A94u;
            // 0x290a98: 0x8c454a48  lw          $a1, 0x4A48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19016)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290CD8u;
    if (runtime->hasFunction(0x290CD8u)) {
        auto targetFn = runtime->lookupFunction(0x290CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A9Cu; }
        if (ctx->pc != 0x290A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290CD8_0x290cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A9Cu; }
        if (ctx->pc != 0x290A9Cu) { return; }
    }
    ctx->pc = 0x290A9Cu;
label_290a9c:
    // 0x290a9c: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x290A9Cu;
    SET_GPR_U32(ctx, 31, 0x290AA4u);
    ctx->pc = 0x290AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290A9Cu;
            // 0x290aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AA4u; }
        if (ctx->pc != 0x290AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AA4u; }
        if (ctx->pc != 0x290AA4u) { return; }
    }
    ctx->pc = 0x290AA4u;
    // 0x290aa4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x290AA4u;
    {
        const bool branch_taken_0x290aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290AA4u;
            // 0x290aa8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa4) {
            ctx->pc = 0x290CC4u;
            goto label_290cc4;
        }
    }
    ctx->pc = 0x290AACu;
label_290aac:
    // 0x290aac: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x290aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x290ab0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x290ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x290ab4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290AB4u;
    {
        const bool branch_taken_0x290ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290AB4u;
            // 0x290ab8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ab4) {
            ctx->pc = 0x290AECu;
            goto label_290aec;
        }
    }
    ctx->pc = 0x290ABCu;
    // 0x290abc: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x290ac0: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x290ac4: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x290ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x290ac8: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x290ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x290acc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290ACCu;
    {
        const bool branch_taken_0x290acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290ACCu;
            // 0x290ad0: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290acc) {
            ctx->pc = 0x290ADCu;
            goto label_290adc;
        }
    }
    ctx->pc = 0x290AD4u;
    // 0x290ad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290AD4u;
    {
        const bool branch_taken_0x290ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290AD4u;
            // 0x290ad8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ad4) {
            ctx->pc = 0x290AECu;
            goto label_290aec;
        }
    }
    ctx->pc = 0x290ADCu;
label_290adc:
    // 0x290adc: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x290adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x290ae0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x290ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ae4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x290ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290ae8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x290ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_290aec:
    // 0x290aec: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x290af0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290af8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x290AF8u;
    {
        const bool branch_taken_0x290af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290AF8u;
            // 0x290afc: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290af8) {
            ctx->pc = 0x290B48u;
            goto label_290b48;
        }
    }
    ctx->pc = 0x290B00u;
    // 0x290b00: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x290b04: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x290B04u;
    {
        const bool branch_taken_0x290b04 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B04u;
            // 0x290b08: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b04) {
            ctx->pc = 0x290B34u;
            goto label_290b34;
        }
    }
    ctx->pc = 0x290B0Cu;
    // 0x290b0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x290b10: 0x24424640  addiu       $v0, $v0, 0x4640
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
    // 0x290b14: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290B14u;
    {
        const bool branch_taken_0x290b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290b14) {
            ctx->pc = 0x290B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290B14u;
            // 0x290b18: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290B38u;
            goto label_290b38;
        }
    }
    ctx->pc = 0x290B1Cu;
    // 0x290b1c: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x290b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x290b20: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b24: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x290b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x290b28: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x290b28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x290b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290B2Cu;
    {
        const bool branch_taken_0x290b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B2Cu;
            // 0x290b30: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b2c) {
            ctx->pc = 0x290B44u;
            goto label_290b44;
        }
    }
    ctx->pc = 0x290B34u;
label_290b34:
    // 0x290b34: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x290b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_290b38:
    // 0x290b38: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x290b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b3c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x290b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290b40: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x290b40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_290b44:
    // 0x290b44: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x290b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_290b48:
    // 0x290b48: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x290b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x290b4c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x290b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x290b50: 0x15800059  bnez        $t4, . + 4 + (0x59 << 2)
    ctx->pc = 0x290B50u;
    {
        const bool branch_taken_0x290b50 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B50u;
            // 0x290b54: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b50) {
            ctx->pc = 0x290CB8u;
            goto label_290cb8;
        }
    }
    ctx->pc = 0x290B58u;
    // 0x290b58: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x290b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x290b5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290B5Cu;
    {
        const bool branch_taken_0x290b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B5Cu;
            // 0x290b60: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b5c) {
            ctx->pc = 0x290BA8u;
            goto label_290ba8;
        }
    }
    ctx->pc = 0x290B64u;
    // 0x290b64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290b68: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x290b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x290b6c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x290b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x290b70: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x290b70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x290b74: 0x25a54638  addiu       $a1, $t5, 0x4638
    ctx->pc = 0x290b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 17976));
    // 0x290b78: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b80: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x290b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x290b84: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x290b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x290b88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290b8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290b8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290b90: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x290b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x290b94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x290b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x290b98: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x290b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x290b9c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x290b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x290ba0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x290BA0u;
    {
        const bool branch_taken_0x290ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BA0u;
            // 0x290ba4: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ba0) {
            ctx->pc = 0x290CA8u;
            goto label_290ca8;
        }
    }
    ctx->pc = 0x290BA8u;
label_290ba8:
    // 0x290ba8: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x290ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x290bac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290BACu;
    {
        const bool branch_taken_0x290bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BACu;
            // 0x290bb0: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bac) {
            ctx->pc = 0x290BBCu;
            goto label_290bbc;
        }
    }
    ctx->pc = 0x290BB4u;
    // 0x290bb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x290BB4u;
    {
        const bool branch_taken_0x290bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BB4u;
            // 0x290bb8: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bb4) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290BBCu;
label_290bbc:
    // 0x290bbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290BBCu;
    {
        const bool branch_taken_0x290bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BBCu;
            // 0x290bc0: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bbc) {
            ctx->pc = 0x290BCCu;
            goto label_290bcc;
        }
    }
    ctx->pc = 0x290BC4u;
    // 0x290bc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x290BC4u;
    {
        const bool branch_taken_0x290bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BC4u;
            // 0x290bc8: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bc4) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290BCCu;
label_290bcc:
    // 0x290bcc: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x290bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x290bd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x290BD0u;
    {
        const bool branch_taken_0x290bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BD0u;
            // 0x290bd4: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bd0) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290BD8u;
    // 0x290bd8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x290bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x290bdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290BDCu;
    {
        const bool branch_taken_0x290bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BDCu;
            // 0x290be0: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bdc) {
            ctx->pc = 0x290BECu;
            goto label_290bec;
        }
    }
    ctx->pc = 0x290BE4u;
    // 0x290be4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x290BE4u;
    {
        const bool branch_taken_0x290be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BE4u;
            // 0x290be8: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290be4) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290BECu;
label_290bec:
    // 0x290bec: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x290becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x290bf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290BF0u;
    {
        const bool branch_taken_0x290bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BF0u;
            // 0x290bf4: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bf0) {
            ctx->pc = 0x290C00u;
            goto label_290c00;
        }
    }
    ctx->pc = 0x290BF8u;
    // 0x290bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290BF8u;
    {
        const bool branch_taken_0x290bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BF8u;
            // 0x290bfc: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bf8) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290C00u;
label_290c00:
    // 0x290c00: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x290c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x290c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290C04u;
    {
        const bool branch_taken_0x290c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C04u;
            // 0x290c08: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c04) {
            ctx->pc = 0x290C14u;
            goto label_290c14;
        }
    }
    ctx->pc = 0x290C0Cu;
    // 0x290c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290C0Cu;
    {
        const bool branch_taken_0x290c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C0Cu;
            // 0x290c10: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c0c) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290C14u;
label_290c14:
    // 0x290c14: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_290c18:
    // 0x290c18: 0x25ab4638  addiu       $t3, $t5, 0x4638
    ctx->pc = 0x290c18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 17976));
    // 0x290c1c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x290c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x290c20: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x290c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x290c24: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x290c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x290c28: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x290C28u;
    {
        const bool branch_taken_0x290c28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x290c28) {
            ctx->pc = 0x290C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C28u;
            // 0x290c2c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290C64u;
            goto label_290c64;
        }
    }
    ctx->pc = 0x290C30u;
    // 0x290c30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290c34: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x290c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x290c38: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x290c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x290c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290c40: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x290c40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x290c44: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x290c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x290c48: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x290c48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290c4c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x290c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x290c50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x290c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x290c54: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x290c54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x290c58: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290c5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x290C5Cu;
    {
        const bool branch_taken_0x290c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C5Cu;
            // 0x290c60: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c5c) {
            ctx->pc = 0x290CA8u;
            goto label_290ca8;
        }
    }
    ctx->pc = 0x290C64u;
label_290c64:
    // 0x290c64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290c68: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x290c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x290c6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x290c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x290c70: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x290c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x290c74: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x290C74u;
    {
        const bool branch_taken_0x290c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c74) {
            ctx->pc = 0x290C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C74u;
            // 0x290c78: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290CA8u;
            goto label_290ca8;
        }
    }
    ctx->pc = 0x290C7Cu;
    // 0x290c7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290c80: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x290c84: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_290c88:
    // 0x290c88: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290C88u;
    {
        const bool branch_taken_0x290c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x290c88) {
            ctx->pc = 0x290C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C88u;
            // 0x290c8c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290CA8u;
            goto label_290ca8;
        }
    }
    ctx->pc = 0x290C90u;
    // 0x290c90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x290c94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x290c98: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x290c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x290c9c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x290C9Cu;
    {
        const bool branch_taken_0x290c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290c9c) {
            ctx->pc = 0x290CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290C9Cu;
            // 0x290ca0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290C88u;
            runtime->cooperativeGuestYield();
            goto label_290c88;
        }
    }
    ctx->pc = 0x290CA4u;
    // 0x290ca4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x290ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_290ca8:
    // 0x290ca8: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x290ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x290cac: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x290cacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x290cb0: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x290cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x290cb4: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x290cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
label_290cb8:
    // 0x290cb8: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x290CB8u;
    SET_GPR_U32(ctx, 31, 0x290CC0u);
    ctx->pc = 0x290CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290CB8u;
            // 0x290cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290CC0u; }
        if (ctx->pc != 0x290CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290CC0u; }
        if (ctx->pc != 0x290CC0u) { return; }
    }
    ctx->pc = 0x290CC0u;
label_290cc0:
    // 0x290cc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x290cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290cc4:
    // 0x290cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x290CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290CCCu;
            // 0x290cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290A68u: goto label_290a68;
            case 0x290A9Cu: goto label_290a9c;
            case 0x290AACu: goto label_290aac;
            case 0x290ADCu: goto label_290adc;
            case 0x290AECu: goto label_290aec;
            case 0x290B34u: goto label_290b34;
            case 0x290B38u: goto label_290b38;
            case 0x290B44u: goto label_290b44;
            case 0x290B48u: goto label_290b48;
            case 0x290BA8u: goto label_290ba8;
            case 0x290BBCu: goto label_290bbc;
            case 0x290BCCu: goto label_290bcc;
            case 0x290BECu: goto label_290bec;
            case 0x290C00u: goto label_290c00;
            case 0x290C14u: goto label_290c14;
            case 0x290C18u: goto label_290c18;
            case 0x290C64u: goto label_290c64;
            case 0x290C88u: goto label_290c88;
            case 0x290CA8u: goto label_290ca8;
            case 0x290CB8u: goto label_290cb8;
            case 0x290CC0u: goto label_290cc0;
            case 0x290CC4u: goto label_290cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CD4u;
    // 0x290cd4: 0x0  nop
    ctx->pc = 0x290cd4u;
    // NOP
}

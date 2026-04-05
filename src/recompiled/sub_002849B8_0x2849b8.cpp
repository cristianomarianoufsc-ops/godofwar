#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002849B8
// Address: 0x2849b8 - 0x284c60
void sub_002849B8_0x2849b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002849B8_0x2849b8");
#endif

    ctx->pc = 0x2849b8u;

    // 0x2849b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2849b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2849bc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2849bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2849c0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2849c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2849c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2849c8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2849c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2849cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2849ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849d0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2849d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2849d4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2849d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2849d8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2849d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2849dc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2849dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2849e0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2849e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2849e4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2849e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2849e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2849e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2849ec: 0xc0a1186  jal         func_284618
    ctx->pc = 0x2849ECu;
    SET_GPR_U32(ctx, 31, 0x2849F4u);
    ctx->pc = 0x2849F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2849ECu;
            // 0x2849f0: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849F4u; }
        if (ctx->pc != 0x2849F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849F4u; }
        if (ctx->pc != 0x2849F4u) { return; }
    }
    ctx->pc = 0x2849F4u;
    // 0x2849f4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2849f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2849f8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2849f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2849fc: 0xc0a1186  jal         func_284618
    ctx->pc = 0x2849FCu;
    SET_GPR_U32(ctx, 31, 0x284A04u);
    ctx->pc = 0x284A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2849FCu;
            // 0x284a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284A04u; }
        if (ctx->pc != 0x284A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284A04u; }
        if (ctx->pc != 0x284A04u) { return; }
    }
    ctx->pc = 0x284A04u;
    // 0x284a04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x284a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284a08: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x284a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284a0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x284A0Cu;
    {
        const bool branch_taken_0x284a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A0Cu;
            // 0x284a10: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a0c) {
            ctx->pc = 0x284A68u;
            goto label_284a68;
        }
    }
    ctx->pc = 0x284A14u;
    // 0x284a14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x284a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284a18: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x284a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284a1c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x284A1Cu;
    {
        const bool branch_taken_0x284a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a1c) {
            ctx->pc = 0x284A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284A1Cu;
            // 0x284a20: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284A90u;
            goto label_284a90;
        }
    }
    ctx->pc = 0x284A24u;
    // 0x284a24: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x284a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x284a28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284A28u;
    {
        const bool branch_taken_0x284a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A28u;
            // 0x284a2c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a28) {
            ctx->pc = 0x284A44u;
            goto label_284a44;
        }
    }
    ctx->pc = 0x284A30u;
    // 0x284a30: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x284a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x284a34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284A34u;
    {
        const bool branch_taken_0x284a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A34u;
            // 0x284a38: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a34) {
            ctx->pc = 0x284A54u;
            goto label_284a54;
        }
    }
    ctx->pc = 0x284A3Cu;
    // 0x284a3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x284A3Cu;
    {
        const bool branch_taken_0x284a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A3Cu;
            // 0x284a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a3c) {
            ctx->pc = 0x284A70u;
            goto label_284a70;
        }
    }
    ctx->pc = 0x284A44u;
label_284a44:
    // 0x284a44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284A44u;
    {
        const bool branch_taken_0x284a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A44u;
            // 0x284a48: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a44) {
            ctx->pc = 0x284A60u;
            goto label_284a60;
        }
    }
    ctx->pc = 0x284A4Cu;
    // 0x284a4c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x284A4Cu;
    {
        const bool branch_taken_0x284a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A4Cu;
            // 0x284a50: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a4c) {
            ctx->pc = 0x284A90u;
            goto label_284a90;
        }
    }
    ctx->pc = 0x284A54u;
label_284a54:
    // 0x284a54: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x284a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x284a58: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x284A58u;
    {
        const bool branch_taken_0x284a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A58u;
            // 0x284a5c: 0x24446948  addiu       $a0, $v0, 0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a58) {
            ctx->pc = 0x284C2Cu;
            goto label_284c2c;
        }
    }
    ctx->pc = 0x284A60u;
label_284a60:
    // 0x284a60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284A60u;
    {
        const bool branch_taken_0x284a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A60u;
            // 0x284a64: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a60) {
            ctx->pc = 0x284A84u;
            goto label_284a84;
        }
    }
    ctx->pc = 0x284A68u;
label_284a68:
    // 0x284a68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x284a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x284a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x284a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_284a70:
    // 0x284a70: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x284a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x284a74: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x284a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x284a78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x284a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284a7c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x284A7Cu;
    {
        const bool branch_taken_0x284a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A7Cu;
            // 0x284a80: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a7c) {
            ctx->pc = 0x284C2Cu;
            goto label_284c2c;
        }
    }
    ctx->pc = 0x284A84u;
label_284a84:
    // 0x284a84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284A84u;
    {
        const bool branch_taken_0x284a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A84u;
            // 0x284a88: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a84) {
            ctx->pc = 0x284AA8u;
            goto label_284aa8;
        }
    }
    ctx->pc = 0x284A8Cu;
    // 0x284a8c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x284a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_284a90:
    // 0x284a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x284a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x284a98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x284a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x284a9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x284a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x284aa0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x284AA0u;
    {
        const bool branch_taken_0x284aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284AA0u;
            // 0x284aa4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aa0) {
            ctx->pc = 0x284C2Cu;
            goto label_284c2c;
        }
    }
    ctx->pc = 0x284AA8u;
label_284aa8:
    // 0x284aa8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x284aa8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x284aac: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x284aacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x284ab0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284ab4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x284ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x284ab8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x284ab8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x284abc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x284abcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x284ac0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x284ac0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x284ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ac8: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x284AC8u;
    SET_GPR_U32(ctx, 31, 0x284AD0u);
    ctx->pc = 0x284ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284AC8u;
            // 0x284acc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AD0u; }
        if (ctx->pc != 0x284AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AD0u; }
        if (ctx->pc != 0x284AD0u) { return; }
    }
    ctx->pc = 0x284AD0u;
    // 0x284ad0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x284ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ad8: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x284AD8u;
    SET_GPR_U32(ctx, 31, 0x284AE0u);
    ctx->pc = 0x284ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284AD8u;
            // 0x284adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AE0u; }
        if (ctx->pc != 0x284AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AE0u; }
        if (ctx->pc != 0x284AE0u) { return; }
    }
    ctx->pc = 0x284AE0u;
    // 0x284ae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x284ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x284ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ae8: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x284AE8u;
    SET_GPR_U32(ctx, 31, 0x284AF0u);
    ctx->pc = 0x284AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284AE8u;
            // 0x284aec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AF0u; }
        if (ctx->pc != 0x284AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AF0u; }
        if (ctx->pc != 0x284AF0u) { return; }
    }
    ctx->pc = 0x284AF0u;
    // 0x284af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284af8: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x284AF8u;
    SET_GPR_U32(ctx, 31, 0x284B00u);
    ctx->pc = 0x284AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284AF8u;
            // 0x284afc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B00u; }
        if (ctx->pc != 0x284B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B00u; }
        if (ctx->pc != 0x284B00u) { return; }
    }
    ctx->pc = 0x284B00u;
    // 0x284b00: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x284b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x284b04: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x284b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284b08: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x284b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x284b0c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x284b0cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x284b10: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x284b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x284b14: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x284b14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x284b18: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x284b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284b1c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x284b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x284b20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x284b24: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x284b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x284b28: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x284b2c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x284b2cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x284b30: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x284b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x284b34: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x284b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x284b38: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x284b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x284b3c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x284b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x284b40: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x284b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x284b44: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x284b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x284b48: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x284b48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284b50: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x284b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x284b54: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x284b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x284b58: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x284b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x284b5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x284B5Cu;
    {
        const bool branch_taken_0x284b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B5Cu;
            // 0x284b60: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b5c) {
            ctx->pc = 0x284BA4u;
            goto label_284ba4;
        }
    }
    ctx->pc = 0x284B64u;
    // 0x284b64: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x284b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284b68: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x284b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x284b6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x284b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284b70: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x284b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x284b74: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x284b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_284b78:
    // 0x284b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x284b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x284b7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284B80u;
    {
        const bool branch_taken_0x284b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B80u;
            // 0x284b84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b80) {
            ctx->pc = 0x284B90u;
            goto label_284b90;
        }
    }
    ctx->pc = 0x284B88u;
    // 0x284b88: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x284b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x284b8c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x284b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_284b90:
    // 0x284b90: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x284b90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x284b94: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x284b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x284b98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x284B98u;
    {
        const bool branch_taken_0x284b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B98u;
            // 0x284b9c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b98) {
            ctx->pc = 0x284B78u;
            runtime->cooperativeGuestYield();
            goto label_284b78;
        }
    }
    ctx->pc = 0x284BA0u;
    // 0x284ba0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x284ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_284ba4:
    // 0x284ba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284ba8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x284ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x284bac: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x284bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x284bb0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x284BB0u;
    {
        const bool branch_taken_0x284bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284BB0u;
            // 0x284bb4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bb0) {
            ctx->pc = 0x284BF8u;
            goto label_284bf8;
        }
    }
    ctx->pc = 0x284BB8u;
    // 0x284bb8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x284bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x284bbc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x284bbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284bc0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x284bc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x284bc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284bc8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x284bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284bcc: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x284bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_284bd0:
    // 0x284bd0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x284bd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x284bd4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x284bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x284bd8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x284bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x284bdc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x284bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x284be0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x284be0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x284be4: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x284be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x284be8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x284BE8u;
    {
        const bool branch_taken_0x284be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284BE8u;
            // 0x284bec: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284be8) {
            ctx->pc = 0x284BD0u;
            runtime->cooperativeGuestYield();
            goto label_284bd0;
        }
    }
    ctx->pc = 0x284BF0u;
    // 0x284bf0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x284bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x284bf4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x284bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_284bf8:
    // 0x284bf8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x284bfc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284BFCu;
    {
        const bool branch_taken_0x284bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284bfc) {
            ctx->pc = 0x284C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284BFCu;
            // 0x284c00: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284C20u;
            goto label_284c20;
        }
    }
    ctx->pc = 0x284C04u;
    // 0x284c04: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x284c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284C08u;
    {
        const bool branch_taken_0x284c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C08u;
            // 0x284c0c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c08) {
            ctx->pc = 0x284C18u;
            goto label_284c18;
        }
    }
    ctx->pc = 0x284C10u;
    // 0x284c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284C10u;
    {
        const bool branch_taken_0x284c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C10u;
            // 0x284c14: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c10) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x284c18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_284c1c:
    // 0x284c1c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x284c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_284c20:
    // 0x284c20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284c24: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x284c24u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x284c28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x284c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_284c2c:
    // 0x284c2c: 0xc0a113a  jal         func_2844E8
    ctx->pc = 0x284C2Cu;
    SET_GPR_U32(ctx, 31, 0x284C34u);
    ctx->pc = 0x2844E8u;
    if (runtime->hasFunction(0x2844E8u)) {
        auto targetFn = runtime->lookupFunction(0x2844E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C34u; }
        if (ctx->pc != 0x284C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2844e8_0x284618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C34u; }
        if (ctx->pc != 0x284C34u) { return; }
    }
    ctx->pc = 0x284C34u;
    // 0x284c34: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x284c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x284c38: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x284c38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284c3c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x284c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x284c40: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x284c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x284c44: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x284c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x284c48: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x284c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x284c4c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x284c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x284c50: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x284c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284c54: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x284c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284c58: 0x3e00008  jr          $ra
    ctx->pc = 0x284C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C58u;
            // 0x284c5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284A44u: goto label_284a44;
            case 0x284A54u: goto label_284a54;
            case 0x284A60u: goto label_284a60;
            case 0x284A68u: goto label_284a68;
            case 0x284A70u: goto label_284a70;
            case 0x284A84u: goto label_284a84;
            case 0x284A90u: goto label_284a90;
            case 0x284AA8u: goto label_284aa8;
            case 0x284B78u: goto label_284b78;
            case 0x284B90u: goto label_284b90;
            case 0x284BA4u: goto label_284ba4;
            case 0x284BD0u: goto label_284bd0;
            case 0x284BF8u: goto label_284bf8;
            case 0x284C18u: goto label_284c18;
            case 0x284C1Cu: goto label_284c1c;
            case 0x284C20u: goto label_284c20;
            case 0x284C2Cu: goto label_284c2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284C60u;
}

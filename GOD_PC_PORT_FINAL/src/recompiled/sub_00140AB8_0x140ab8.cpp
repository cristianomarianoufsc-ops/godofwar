#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140AB8
// Address: 0x140ab8 - 0x140c28
void sub_00140AB8_0x140ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140AB8_0x140ab8");
#endif

    ctx->pc = 0x140ab8u;

    // 0x140ab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140abc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140ac0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x140ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x140ac4: 0x8c501044  lw          $s0, 0x1044($v0)
    ctx->pc = 0x140ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4164)));
    // 0x140ac8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x140ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x140acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140ad0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x140ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x140ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140ad8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x140adc: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140ae0: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140ae4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140ae8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140AE8u;
    {
        const bool branch_taken_0x140ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AE8u;
            // 0x140aec: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ae8) {
            ctx->pc = 0x140B18u;
            goto label_140b18;
        }
    }
    ctx->pc = 0x140AF0u;
    // 0x140af0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140af4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140af8: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x140afc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x140b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140b04: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x140b08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140b0c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x140b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x140b10: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140b14: 0x0  nop
    ctx->pc = 0x140b14u;
    // NOP
label_140b18:
    // 0x140b18: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140b24: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x140b28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140b2c: 0xae23ed60  sw          $v1, -0x12A0($s1)
    ctx->pc = 0x140b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 3));
    // 0x140b30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140b34: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140B34u;
    SET_GPR_U32(ctx, 31, 0x140B3Cu);
    ctx->pc = 0x140B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B34u;
            // 0x140b38: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B3Cu; }
        if (ctx->pc != 0x140B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B3Cu; }
        if (ctx->pc != 0x140B3Cu) { return; }
    }
    ctx->pc = 0x140B3Cu;
    // 0x140b3c: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x140b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x140b40: 0x2664bb98  addiu       $a0, $s3, -0x4468
    ctx->pc = 0x140b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x140b44: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x140b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140b50: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x140b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x140b54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x140b58: 0xc050c7e  jal         func_1431F8
    ctx->pc = 0x140B58u;
    SET_GPR_U32(ctx, 31, 0x140B60u);
    ctx->pc = 0x140B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B58u;
            // 0x140b5c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1431F8u;
    if (runtime->hasFunction(0x1431F8u)) {
        auto targetFn = runtime->lookupFunction(0x1431F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B60u; }
        if (ctx->pc != 0x140B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001431F8_0x1431f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B60u; }
        if (ctx->pc != 0x140B60u) { return; }
    }
    ctx->pc = 0x140B60u;
    // 0x140b60: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x140b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140b70: 0xac62c7d0  sw          $v0, -0x3830($v1)
    ctx->pc = 0x140b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952912), GPR_U32(ctx, 2));
    // 0x140b74: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x140B74u;
    SET_GPR_U32(ctx, 31, 0x140B7Cu);
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B7Cu; }
        if (ctx->pc != 0x140B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B7Cu; }
        if (ctx->pc != 0x140B7Cu) { return; }
    }
    ctx->pc = 0x140B7Cu;
    // 0x140b7c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x140b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x140b80: 0xc060e1e  jal         func_183878
    ctx->pc = 0x140B80u;
    SET_GPR_U32(ctx, 31, 0x140B88u);
    ctx->pc = 0x140B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B80u;
            // 0x140b84: 0x248416e8  addiu       $a0, $a0, 0x16E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B88u; }
        if (ctx->pc != 0x140B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B88u; }
        if (ctx->pc != 0x140B88u) { return; }
    }
    ctx->pc = 0x140B88u;
    // 0x140b88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x140b8c: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x140b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x140b90: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140b94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x140B94u;
    {
        const bool branch_taken_0x140b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B94u;
            // 0x140b98: 0x8e22ed60  lw          $v0, -0x12A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b94) {
            ctx->pc = 0x140BC0u;
            goto label_140bc0;
        }
    }
    ctx->pc = 0x140B9Cu;
    // 0x140b9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x140b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140ba0:
    // 0x140ba0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x140ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x140ba4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140ba8: 0x0  nop
    ctx->pc = 0x140ba8u;
    // NOP
    // 0x140bac: 0x0  nop
    ctx->pc = 0x140bacu;
    // NOP
    // 0x140bb0: 0x0  nop
    ctx->pc = 0x140bb0u;
    // NOP
    // 0x140bb4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140BB4u;
    {
        const bool branch_taken_0x140bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bb4) {
            ctx->pc = 0x140BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140BB4u;
            // 0x140bb8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140BA0u;
            runtime->cooperativeGuestYield();
            goto label_140ba0;
        }
    }
    ctx->pc = 0x140BBCu;
    // 0x140bbc: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x140bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140bc0:
    // 0x140bc0: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140bc4: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x140bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x140bc8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140bd0: 0xae26ed60  sw          $a2, -0x12A0($s1)
    ctx->pc = 0x140bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 6));
    // 0x140bd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140bd8: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140be0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140BE0u;
    {
        const bool branch_taken_0x140be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140BE0u;
            // 0x140be4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140be0) {
            ctx->pc = 0x140BF8u;
            goto label_140bf8;
        }
    }
    ctx->pc = 0x140BE8u;
    // 0x140be8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140bec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140bf0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140BF0u;
    SET_GPR_U32(ctx, 31, 0x140BF8u);
    ctx->pc = 0x140BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140BF0u;
            // 0x140bf4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BF8u; }
        if (ctx->pc != 0x140BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BF8u; }
        if (ctx->pc != 0x140BF8u) { return; }
    }
    ctx->pc = 0x140BF8u;
label_140bf8:
    // 0x140bf8: 0x2663bb98  addiu       $v1, $s3, -0x4468
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x140bfc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140c00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140c04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x140c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140c08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x140c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140c10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x140c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c18: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x140c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x140c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x140C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C1Cu;
            // 0x140c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140B18u: goto label_140b18;
            case 0x140BA0u: goto label_140ba0;
            case 0x140BC0u: goto label_140bc0;
            case 0x140BF8u: goto label_140bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140C24u;
    // 0x140c24: 0x0  nop
    ctx->pc = 0x140c24u;
    // NOP
}

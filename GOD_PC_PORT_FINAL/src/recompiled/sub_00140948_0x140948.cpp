#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140948
// Address: 0x140948 - 0x140ab8
void sub_00140948_0x140948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140948_0x140948");
#endif

    ctx->pc = 0x140948u;

    // 0x140948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14094c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140950: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x140950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x140954: 0x8c501044  lw          $s0, 0x1044($v0)
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4164)));
    // 0x140958: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x140958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14095c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140960: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x140960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x140964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140968: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14096c: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140970: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x140970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140974: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140978: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140978u;
    {
        const bool branch_taken_0x140978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140978u;
            // 0x14097c: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140978) {
            ctx->pc = 0x1409A8u;
            goto label_1409a8;
        }
    }
    ctx->pc = 0x140980u;
    // 0x140980: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140988: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x140988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x14098c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14098cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x140990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140994: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x140998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14099c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14099cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1409a0: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x1409a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x1409a4: 0x0  nop
    ctx->pc = 0x1409a4u;
    // NOP
label_1409a8:
    // 0x1409a8: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x1409ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1409acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1409b4: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x1409b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x1409b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1409bc: 0xae23ed60  sw          $v1, -0x12A0($s1)
    ctx->pc = 0x1409bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 3));
    // 0x1409c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1409c4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1409C4u;
    SET_GPR_U32(ctx, 31, 0x1409CCu);
    ctx->pc = 0x1409C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409C4u;
            // 0x1409c8: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409CCu; }
        if (ctx->pc != 0x1409CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409CCu; }
        if (ctx->pc != 0x1409CCu) { return; }
    }
    ctx->pc = 0x1409CCu;
    // 0x1409cc: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1409d0: 0x2664bb98  addiu       $a0, $s3, -0x4468
    ctx->pc = 0x1409d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x1409d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1409d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1409d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1409dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1409e0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1409e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1409e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1409e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1409e8: 0xc050c02  jal         func_143008
    ctx->pc = 0x1409E8u;
    SET_GPR_U32(ctx, 31, 0x1409F0u);
    ctx->pc = 0x1409ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409E8u;
            // 0x1409ec: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143008u;
    if (runtime->hasFunction(0x143008u)) {
        auto targetFn = runtime->lookupFunction(0x143008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409F0u; }
        if (ctx->pc != 0x1409F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143008_0x1431f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409F0u; }
        if (ctx->pc != 0x1409F0u) { return; }
    }
    ctx->pc = 0x1409F0u;
    // 0x1409f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1409f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1409f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140a00: 0xac62c7d0  sw          $v0, -0x3830($v1)
    ctx->pc = 0x140a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952912), GPR_U32(ctx, 2));
    // 0x140a04: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x140A04u;
    SET_GPR_U32(ctx, 31, 0x140A0Cu);
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A0Cu; }
        if (ctx->pc != 0x140A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A0Cu; }
        if (ctx->pc != 0x140A0Cu) { return; }
    }
    ctx->pc = 0x140A0Cu;
    // 0x140a0c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x140a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x140a10: 0xc060e1e  jal         func_183878
    ctx->pc = 0x140A10u;
    SET_GPR_U32(ctx, 31, 0x140A18u);
    ctx->pc = 0x140A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A10u;
            // 0x140a14: 0x248416d0  addiu       $a0, $a0, 0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A18u; }
        if (ctx->pc != 0x140A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A18u; }
        if (ctx->pc != 0x140A18u) { return; }
    }
    ctx->pc = 0x140A18u;
    // 0x140a18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x140a1c: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x140a20: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140a24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x140A24u;
    {
        const bool branch_taken_0x140a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A24u;
            // 0x140a28: 0x8e22ed60  lw          $v0, -0x12A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a24) {
            ctx->pc = 0x140A50u;
            goto label_140a50;
        }
    }
    ctx->pc = 0x140A2Cu;
    // 0x140a2c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x140a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140a30:
    // 0x140a30: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x140a34: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140a38: 0x0  nop
    ctx->pc = 0x140a38u;
    // NOP
    // 0x140a3c: 0x0  nop
    ctx->pc = 0x140a3cu;
    // NOP
    // 0x140a40: 0x0  nop
    ctx->pc = 0x140a40u;
    // NOP
    // 0x140a44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140A44u;
    {
        const bool branch_taken_0x140a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a44) {
            ctx->pc = 0x140A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140A44u;
            // 0x140a48: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140A30u;
            runtime->cooperativeGuestYield();
            goto label_140a30;
        }
    }
    ctx->pc = 0x140A4Cu;
    // 0x140a4c: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x140a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140a50:
    // 0x140a50: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140a54: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x140a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x140a58: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140a60: 0xae26ed60  sw          $a2, -0x12A0($s1)
    ctx->pc = 0x140a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 6));
    // 0x140a64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140a68: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140a6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140a70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140A70u;
    {
        const bool branch_taken_0x140a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A70u;
            // 0x140a74: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a70) {
            ctx->pc = 0x140A88u;
            goto label_140a88;
        }
    }
    ctx->pc = 0x140A78u;
    // 0x140a78: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140a7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140a80: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140A80u;
    SET_GPR_U32(ctx, 31, 0x140A88u);
    ctx->pc = 0x140A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A80u;
            // 0x140a84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A88u; }
        if (ctx->pc != 0x140A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A88u; }
        if (ctx->pc != 0x140A88u) { return; }
    }
    ctx->pc = 0x140A88u;
label_140a88:
    // 0x140a88: 0x2663bb98  addiu       $v1, $s3, -0x4468
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x140a8c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140a90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140a94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x140a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140a98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x140a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140aa0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x140aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140aa8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x140aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x140aac: 0x3e00008  jr          $ra
    ctx->pc = 0x140AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AACu;
            // 0x140ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1409A8u: goto label_1409a8;
            case 0x140A30u: goto label_140a30;
            case 0x140A50u: goto label_140a50;
            case 0x140A88u: goto label_140a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140AB4u;
    // 0x140ab4: 0x0  nop
    ctx->pc = 0x140ab4u;
    // NOP
}

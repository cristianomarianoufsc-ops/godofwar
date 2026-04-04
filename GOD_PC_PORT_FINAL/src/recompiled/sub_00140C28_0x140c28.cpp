#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140C28
// Address: 0x140c28 - 0x140da8
void sub_00140C28_0x140c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140C28_0x140c28");
#endif

    ctx->pc = 0x140c28u;

    // 0x140c28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140c2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140c30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x140c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x140c34: 0x8c501044  lw          $s0, 0x1044($v0)
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4164)));
    // 0x140c38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x140c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x140c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140c40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x140c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x140c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140c48: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x140c48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x140c4c: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140c50: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x140c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140c54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140c58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140C58u;
    {
        const bool branch_taken_0x140c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C58u;
            // 0x140c5c: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c58) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140C60u;
    // 0x140c60: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140c68: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x140c6c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x140c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x140c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140c74: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x140c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140c7c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x140c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x140c80: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140c84: 0x0  nop
    ctx->pc = 0x140c84u;
    // NOP
label_140c88:
    // 0x140c88: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140c94: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x140c98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140c9c: 0xae23ed60  sw          $v1, -0x12A0($s1)
    ctx->pc = 0x140c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 3));
    // 0x140ca0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140ca4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140CA4u;
    SET_GPR_U32(ctx, 31, 0x140CACu);
    ctx->pc = 0x140CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CA4u;
            // 0x140ca8: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CACu; }
        if (ctx->pc != 0x140CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CACu; }
        if (ctx->pc != 0x140CACu) { return; }
    }
    ctx->pc = 0x140CACu;
    // 0x140cac: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x140cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x140cb0: 0x2664bb98  addiu       $a0, $s3, -0x4468
    ctx->pc = 0x140cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x140cb4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x140cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140cbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x140cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140cc0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x140cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x140cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x140cc8: 0xc050d88  jal         func_143620
    ctx->pc = 0x140CC8u;
    SET_GPR_U32(ctx, 31, 0x140CD0u);
    ctx->pc = 0x140CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CC8u;
            // 0x140ccc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143620_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    }
    ctx->pc = 0x140CD0u;
    // 0x140cd0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x140cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x140cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140ce0: 0xac62c7d0  sw          $v0, -0x3830($v1)
    ctx->pc = 0x140ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952912), GPR_U32(ctx, 2));
    // 0x140ce4: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x140CE4u;
    SET_GPR_U32(ctx, 31, 0x140CECu);
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CECu; }
        if (ctx->pc != 0x140CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CECu; }
        if (ctx->pc != 0x140CECu) { return; }
    }
    ctx->pc = 0x140CECu;
    // 0x140cec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x140cf0: 0xc060e1e  jal         func_183878
    ctx->pc = 0x140CF0u;
    SET_GPR_U32(ctx, 31, 0x140CF8u);
    ctx->pc = 0x140CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CF0u;
            // 0x140cf4: 0x24841700  addiu       $a0, $a0, 0x1700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CF8u; }
        if (ctx->pc != 0x140CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CF8u; }
        if (ctx->pc != 0x140CF8u) { return; }
    }
    ctx->pc = 0x140CF8u;
    // 0x140cf8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x140cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x140cfc: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x140cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x140d00: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140d04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x140D04u;
    {
        const bool branch_taken_0x140d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D04u;
            // 0x140d08: 0x8e22ed60  lw          $v0, -0x12A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d04) {
            ctx->pc = 0x140D30u;
            goto label_140d30;
        }
    }
    ctx->pc = 0x140D0Cu;
    // 0x140d0c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x140d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140d10:
    // 0x140d10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x140d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x140d14: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140d18: 0x0  nop
    ctx->pc = 0x140d18u;
    // NOP
    // 0x140d1c: 0x0  nop
    ctx->pc = 0x140d1cu;
    // NOP
    // 0x140d20: 0x0  nop
    ctx->pc = 0x140d20u;
    // NOP
    // 0x140d24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140D24u;
    {
        const bool branch_taken_0x140d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d24) {
            ctx->pc = 0x140D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140D24u;
            // 0x140d28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140D10u;
            runtime->cooperativeGuestYield();
            goto label_140d10;
        }
    }
    ctx->pc = 0x140D2Cu;
    // 0x140d2c: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x140d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140d30:
    // 0x140d30: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140d34: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x140d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x140d38: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140d40: 0xae26ed60  sw          $a2, -0x12A0($s1)
    ctx->pc = 0x140d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 6));
    // 0x140d44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140d48: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140d48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140d4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140d50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140D50u;
    {
        const bool branch_taken_0x140d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D50u;
            // 0x140d54: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d50) {
            ctx->pc = 0x140D68u;
            goto label_140d68;
        }
    }
    ctx->pc = 0x140D58u;
    // 0x140d58: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140d5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140d60: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140D60u;
    SET_GPR_U32(ctx, 31, 0x140D68u);
    ctx->pc = 0x140D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D60u;
            // 0x140d64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D68u; }
        if (ctx->pc != 0x140D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D68u; }
        if (ctx->pc != 0x140D68u) { return; }
    }
    ctx->pc = 0x140D68u;
label_140d68:
    // 0x140d68: 0x2663bb98  addiu       $v1, $s3, -0x4468
    ctx->pc = 0x140d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x140d6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140d70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140d74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x140d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140d78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x140d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140d80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x140d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d88: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x140d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x140d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x140D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D8Cu;
            // 0x140d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140C88u: goto label_140c88;
            case 0x140D10u: goto label_140d10;
            case 0x140D30u: goto label_140d30;
            case 0x140D68u: goto label_140d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140D94u;
    // 0x140d94: 0x0  nop
    ctx->pc = 0x140d94u;
    // NOP
    // 0x140d98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x140d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x140d9c: 0x0  nop
    ctx->pc = 0x140d9cu;
    // NOP
    // 0x140da0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x140da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x140da4: 0x0  nop
    ctx->pc = 0x140da4u;
    // NOP
}

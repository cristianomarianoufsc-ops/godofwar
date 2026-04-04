#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8BA0
// Address: 0x1a8ba0 - 0x1a8e30
void sub_001A8BA0_0x1a8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8BA0_0x1a8ba0");
#endif

    ctx->pc = 0x1a8ba0u;

    // 0x1a8ba0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a8ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a8ba4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a8ba8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a8ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a8bac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bb0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a8bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a8bb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bb8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a8bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a8bbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a8bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bc0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a8bc4: 0x1660007c  bnez        $s3, . + 4 + (0x7C << 2)
    ctx->pc = 0x1A8BC4u;
    {
        const bool branch_taken_0x1a8bc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BC4u;
            // 0x1a8bc8: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bc4) {
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8BCCu;
    // 0x1a8bcc: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x1a8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1a8bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8bd4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8BD4u;
    {
        const bool branch_taken_0x1a8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BD4u;
            // 0x1a8bd8: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bd4) {
            ctx->pc = 0x1A8BFCu;
            goto label_1a8bfc;
        }
    }
    ctx->pc = 0x1A8BDCu;
    // 0x1a8bdc: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8be0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8be4: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8be8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8bec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8bf0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8BF0u;
    SET_GPR_U32(ctx, 31, 0x1A8BF8u);
    ctx->pc = 0x1A8BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BF0u;
            // 0x1a8bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BF8u; }
        if (ctx->pc != 0x1A8BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BF8u; }
        if (ctx->pc != 0x1A8BF8u) { return; }
    }
    ctx->pc = 0x1A8BF8u;
    // 0x1a8bf8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8bfc:
    // 0x1a8bfc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8c00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8C00u;
    {
        const bool branch_taken_0x1a8c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C00u;
            // 0x1a8c04: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c00) {
            ctx->pc = 0x1A8C18u;
            goto label_1a8c18;
        }
    }
    ctx->pc = 0x1A8C08u;
    // 0x1a8c08: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a8c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8c0c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1A8C0Cu;
    {
        const bool branch_taken_0x1a8c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C0Cu;
            // 0x1a8c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c0c) {
            ctx->pc = 0x1A8E10u;
            goto label_1a8e10;
        }
    }
    ctx->pc = 0x1A8C14u;
    // 0x1a8c14: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x1a8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_1a8c18:
    // 0x1a8c18: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1a8c1c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x1a8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x1a8c20: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8c28: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8C28u;
    {
        const bool branch_taken_0x1a8c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C28u;
            // 0x1a8c2c: 0xae420100  sw          $v0, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c28) {
            ctx->pc = 0x1A8C50u;
            goto label_1a8c50;
        }
    }
    ctx->pc = 0x1A8C30u;
    // 0x1a8c30: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8c34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8c38: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8c3c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8c40: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8c44: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8C44u;
    SET_GPR_U32(ctx, 31, 0x1A8C4Cu);
    ctx->pc = 0x1A8C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C44u;
            // 0x1a8c48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C4Cu; }
        if (ctx->pc != 0x1A8C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C4Cu; }
        if (ctx->pc != 0x1A8C4Cu) { return; }
    }
    ctx->pc = 0x1A8C4Cu;
    // 0x1a8c4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8c50:
    // 0x1a8c50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8c54: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8c58: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C58u;
    {
        const bool branch_taken_0x1a8c58 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1A8C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C58u;
            // 0x1a8c5c: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c58) {
            ctx->pc = 0x1A8C68u;
            goto label_1a8c68;
        }
    }
    ctx->pc = 0x1A8C60u;
    // 0x1a8c60: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1A8C60u;
    {
        const bool branch_taken_0x1a8c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C60u;
            // 0x1a8c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c60) {
            ctx->pc = 0x1A8E10u;
            goto label_1a8e10;
        }
    }
    ctx->pc = 0x1A8C68u;
label_1a8c68:
    // 0x1a8c68: 0x8e4300e8  lw          $v1, 0xE8($s2)
    ctx->pc = 0x1a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1a8c6c: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8C6Cu;
    {
        const bool branch_taken_0x1a8c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C6Cu;
            // 0x1a8c70: 0x265000e8  addiu       $s0, $s2, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c6c) {
            ctx->pc = 0x1A8C94u;
            goto label_1a8c94;
        }
    }
    ctx->pc = 0x1A8C74u;
    // 0x1a8c74: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8c78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8c7c: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8c80: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8c84: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8c88: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8C88u;
    SET_GPR_U32(ctx, 31, 0x1A8C90u);
    ctx->pc = 0x1A8C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C88u;
            // 0x1a8c8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C90u; }
        if (ctx->pc != 0x1A8C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C90u; }
        if (ctx->pc != 0x1A8C90u) { return; }
    }
    ctx->pc = 0x1A8C90u;
    // 0x1a8c90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8c94:
    // 0x1a8c94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8c98: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x1a8c9c: 0x265000d8  addiu       $s0, $s2, 0xD8
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    // 0x1a8ca0: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8CA0u;
    {
        const bool branch_taken_0x1a8ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CA0u;
            // 0x1a8ca4: 0xa7a20006  sh          $v0, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ca0) {
            ctx->pc = 0x1A8CC8u;
            goto label_1a8cc8;
        }
    }
    ctx->pc = 0x1A8CA8u;
    // 0x1a8ca8: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8cac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8cb0: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8cb4: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8cb8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8cbc: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8CBCu;
    SET_GPR_U32(ctx, 31, 0x1A8CC4u);
    ctx->pc = 0x1A8CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CBCu;
            // 0x1a8cc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CC4u; }
        if (ctx->pc != 0x1A8CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CC4u; }
        if (ctx->pc != 0x1A8CC4u) { return; }
    }
    ctx->pc = 0x1A8CC4u;
    // 0x1a8cc4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8cc8:
    // 0x1a8cc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8ccc: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x1a8cd0: 0x265000e0  addiu       $s0, $s2, 0xE0
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1a8cd4: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8CD4u;
    {
        const bool branch_taken_0x1a8cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CD4u;
            // 0x1a8cd8: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cd4) {
            ctx->pc = 0x1A8CFCu;
            goto label_1a8cfc;
        }
    }
    ctx->pc = 0x1A8CDCu;
    // 0x1a8cdc: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8ce0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8ce4: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8ce8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8cec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8cf0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8CF0u;
    SET_GPR_U32(ctx, 31, 0x1A8CF8u);
    ctx->pc = 0x1A8CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CF0u;
            // 0x1a8cf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CF8u; }
        if (ctx->pc != 0x1A8CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CF8u; }
        if (ctx->pc != 0x1A8CF8u) { return; }
    }
    ctx->pc = 0x1A8CF8u;
    // 0x1a8cf8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8cfc:
    // 0x1a8cfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8d00: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1a8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1a8d04: 0x265000f0  addiu       $s0, $s2, 0xF0
    ctx->pc = 0x1a8d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x1a8d08: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8D08u;
    {
        const bool branch_taken_0x1a8d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D08u;
            // 0x1a8d0c: 0xa7a20004  sh          $v0, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d08) {
            ctx->pc = 0x1A8D30u;
            goto label_1a8d30;
        }
    }
    ctx->pc = 0x1A8D10u;
    // 0x1a8d10: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8d14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8d18: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8d1c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8d20: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8d24: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8D24u;
    SET_GPR_U32(ctx, 31, 0x1A8D2Cu);
    ctx->pc = 0x1A8D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D24u;
            // 0x1a8d28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D2Cu; }
        if (ctx->pc != 0x1A8D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D2Cu; }
        if (ctx->pc != 0x1A8D2Cu) { return; }
    }
    ctx->pc = 0x1A8D2Cu;
    // 0x1a8d2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8d30:
    // 0x1a8d30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8d34: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x1a8d38: 0x265000f8  addiu       $s0, $s2, 0xF8
    ctx->pc = 0x1a8d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    // 0x1a8d3c: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x1a8d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8d40: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8D40u;
    {
        const bool branch_taken_0x1a8d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A8D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D40u;
            // 0x1a8d44: 0xa7b1000a  sh          $s1, 0xA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d40) {
            ctx->pc = 0x1A8D68u;
            goto label_1a8d68;
        }
    }
    ctx->pc = 0x1A8D48u;
    // 0x1a8d48: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1a8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1a8d4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8d50: 0xac52cac8  sw          $s2, -0x3538($v0)
    ctx->pc = 0x1a8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 18));
    // 0x1a8d54: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1a8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1a8d58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8d5c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D64u);
    ctx->pc = 0x1A8D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D5Cu;
            // 0x1a8d60: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D64u; }
        if (ctx->pc != 0x1A8D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D64u; }
        if (ctx->pc != 0x1A8D64u) { return; }
    }
    ctx->pc = 0x1A8D64u;
    // 0x1a8d64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a8d68:
    // 0x1a8d68: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8d6c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8D6Cu;
    {
        const bool branch_taken_0x1a8d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D6Cu;
            // 0x1a8d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d6c) {
            ctx->pc = 0x1A8DA4u;
            goto label_1a8da4;
        }
    }
    ctx->pc = 0x1A8D74u;
    // 0x1a8d74: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a8d78: 0x24a54228  addiu       $a1, $a1, 0x4228
    ctx->pc = 0x1a8d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16936));
    // 0x1a8d7c: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1A8D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D84u);
    ctx->pc = 0x1A8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D7Cu;
            // 0x1a8d80: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D84u; }
        if (ctx->pc != 0x1A8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D84u; }
        if (ctx->pc != 0x1A8D84u) { return; }
    }
    ctx->pc = 0x1A8D84u;
    // 0x1a8d84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8D84u;
    {
        const bool branch_taken_0x1a8d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D84u;
            // 0x1a8d88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d84) {
            ctx->pc = 0x1A8DA8u;
            goto label_1a8da8;
        }
    }
    ctx->pc = 0x1A8D8Cu;
    // 0x1a8d8c: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1a8d90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a8d94: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1A8D94u;
    SET_GPR_U32(ctx, 31, 0x1A8D9Cu);
    ctx->pc = 0x1A8D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D94u;
            // 0x1a8d98: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D9Cu; }
        if (ctx->pc != 0x1A8D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D9Cu; }
        if (ctx->pc != 0x1A8D9Cu) { return; }
    }
    ctx->pc = 0x1A8D9Cu;
    // 0x1a8d9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a8d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8da0: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x1a8da0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
label_1a8da4:
    // 0x1a8da4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8da8:
    // 0x1a8da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8dac: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1a8dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8db0: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1a8db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8db4: 0xa3a3000e  sb          $v1, 0xE($sp)
    ctx->pc = 0x1a8db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 3));
label_1a8db8:
    // 0x1a8db8: 0xc06a70a  jal         func_1A9C28
    ctx->pc = 0x1A8DB8u;
    SET_GPR_U32(ctx, 31, 0x1A8DC0u);
    ctx->pc = 0x1A8DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DB8u;
            // 0x1a8dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C28u;
    if (runtime->hasFunction(0x1A9C28u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DC0u; }
        if (ctx->pc != 0x1A8DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9C28_0x1a9c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DC0u; }
        if (ctx->pc != 0x1A8DC0u) { return; }
    }
    ctx->pc = 0x1A8DC0u;
    // 0x1a8dc0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a8dc4: 0x96510042  lhu         $s1, 0x42($s2)
    ctx->pc = 0x1a8dc4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x1a8dc8: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A8DC8u;
    SET_GPR_U32(ctx, 31, 0x1A8DD0u);
    ctx->pc = 0x1A8DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DC8u;
            // 0x1a8dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD0u; }
        if (ctx->pc != 0x1A8DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD0u; }
        if (ctx->pc != 0x1A8DD0u) { return; }
    }
    ctx->pc = 0x1A8DD0u;
    // 0x1a8dd0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1a8dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dd8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a8dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ddc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a8ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8de0: 0xc0691ae  jal         func_1A46B8
    ctx->pc = 0x1A8DE0u;
    SET_GPR_U32(ctx, 31, 0x1A8DE8u);
    ctx->pc = 0x1A8DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DE0u;
            // 0x1a8de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B8u;
    if (runtime->hasFunction(0x1A46B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A46B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DE8u; }
        if (ctx->pc != 0x1A8DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A46B8_0x1a46b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DE8u; }
        if (ctx->pc != 0x1A8DE8u) { return; }
    }
    ctx->pc = 0x1A8DE8u;
    // 0x1a8de8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a8de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8df4: 0xc0691e4  jal         func_1A4790
    ctx->pc = 0x1A8DF4u;
    SET_GPR_U32(ctx, 31, 0x1A8DFCu);
    ctx->pc = 0x1A8DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DF4u;
            // 0x1a8df8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4790u;
    if (runtime->hasFunction(0x1A4790u)) {
        auto targetFn = runtime->lookupFunction(0x1A4790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DFCu; }
        if (ctx->pc != 0x1A8DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4790_0x1a4790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DFCu; }
        if (ctx->pc != 0x1A8DFCu) { return; }
    }
    ctx->pc = 0x1A8DFCu;
    // 0x1a8dfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e04: 0xc090904  jal         func_242410
    ctx->pc = 0x1A8E04u;
    SET_GPR_U32(ctx, 31, 0x1A8E0Cu);
    ctx->pc = 0x1A8E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E04u;
            // 0x1a8e08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242410u;
    if (runtime->hasFunction(0x242410u)) {
        auto targetFn = runtime->lookupFunction(0x242410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E0Cu; }
        if (ctx->pc != 0x1A8E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242410_0x242410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E0Cu; }
        if (ctx->pc != 0x1A8E0Cu) { return; }
    }
    ctx->pc = 0x1A8E0Cu;
    // 0x1a8e0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e10:
    // 0x1a8e10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a8e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8e14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a8e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8e18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a8e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8e1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a8e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8e20: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a8e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8e24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a8e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a8e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E28u;
            // 0x1a8e2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8BFCu: goto label_1a8bfc;
            case 0x1A8C18u: goto label_1a8c18;
            case 0x1A8C50u: goto label_1a8c50;
            case 0x1A8C68u: goto label_1a8c68;
            case 0x1A8C94u: goto label_1a8c94;
            case 0x1A8CC8u: goto label_1a8cc8;
            case 0x1A8CFCu: goto label_1a8cfc;
            case 0x1A8D30u: goto label_1a8d30;
            case 0x1A8D68u: goto label_1a8d68;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8E10u: goto label_1a8e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8E30u;
}

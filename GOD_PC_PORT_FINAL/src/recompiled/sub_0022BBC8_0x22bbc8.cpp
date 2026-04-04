#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BBC8
// Address: 0x22bbc8 - 0x22bd50
void sub_0022BBC8_0x22bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BBC8_0x22bbc8");
#endif

    ctx->pc = 0x22bbc8u;

    // 0x22bbc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22bbcc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x22bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x22bbd0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x22bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x22bbd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22bbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbd8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x22bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x22bbdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbe0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x22bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x22bbe4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x22bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22bbe8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22bbec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22bbf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22bbf4: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22bbf8: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BBF8u;
    {
        const bool branch_taken_0x22bbf8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBF8u;
            // 0x22bbfc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbf8) {
            ctx->pc = 0x22BC1Cu;
            goto label_22bc1c;
        }
    }
    ctx->pc = 0x22BC00u;
    // 0x22bc00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22bc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bc04: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x22BC04u;
    SET_GPR_U32(ctx, 31, 0x22BC0Cu);
    ctx->pc = 0x22BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC04u;
            // 0x22bc08: 0x8c441208  lw          $a0, 0x1208($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC0Cu; }
        if (ctx->pc != 0x22BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC0Cu; }
        if (ctx->pc != 0x22BC0Cu) { return; }
    }
    ctx->pc = 0x22BC0Cu;
    // 0x22bc0c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22bc10: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x22bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x22bc14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22BC14u;
    {
        const bool branch_taken_0x22bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC14u;
            // 0x22bc18: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc14) {
            ctx->pc = 0x22BC28u;
            goto label_22bc28;
        }
    }
    ctx->pc = 0x22BC1Cu;
label_22bc1c:
    // 0x22bc1c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x22bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22bc20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22bc24: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22bc28:
    // 0x22bc28: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x22bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x22bc2c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x22bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22bc30: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x22bc30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bc34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22bc38: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22BC38u;
    {
        const bool branch_taken_0x22bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC38u;
            // 0x22bc3c: 0x26220038  addiu       $v0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc38) {
            ctx->pc = 0x22BD2Cu;
            goto label_22bd2c;
        }
    }
    ctx->pc = 0x22BC40u;
    // 0x22bc40: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22bc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bc44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22bc48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BC48u;
    {
        const bool branch_taken_0x22bc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bc48) {
            ctx->pc = 0x22BC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC48u;
            // 0x22bc4c: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BC68u;
            goto label_22bc68;
        }
    }
    ctx->pc = 0x22BC50u;
    // 0x22bc50: 0xc08ad04  jal         func_22B410
    ctx->pc = 0x22BC50u;
    SET_GPR_U32(ctx, 31, 0x22BC58u);
    ctx->pc = 0x22BC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC50u;
            // 0x22bc54: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B410u;
    if (runtime->hasFunction(0x22B410u)) {
        auto targetFn = runtime->lookupFunction(0x22B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC58u; }
        if (ctx->pc != 0x22BC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B410_0x22b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC58u; }
        if (ctx->pc != 0x22BC58u) { return; }
    }
    ctx->pc = 0x22BC58u;
    // 0x22bc58: 0xc08ade0  jal         func_22B780
    ctx->pc = 0x22BC58u;
    SET_GPR_U32(ctx, 31, 0x22BC60u);
    ctx->pc = 0x22BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC58u;
            // 0x22bc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B780u;
    if (runtime->hasFunction(0x22B780u)) {
        auto targetFn = runtime->lookupFunction(0x22B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC60u; }
        if (ctx->pc != 0x22BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b780_0x22b7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC60u; }
        if (ctx->pc != 0x22BC60u) { return; }
    }
    ctx->pc = 0x22BC60u;
    // 0x22bc60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22bc64: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_22bc68:
    // 0x22bc68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22bc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc70: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22BC70u;
    SET_GPR_U32(ctx, 31, 0x22BC78u);
    ctx->pc = 0x22BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC70u;
            // 0x22bc74: 0x24a58290  addiu       $a1, $a1, -0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC78u; }
        if (ctx->pc != 0x22BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC78u; }
        if (ctx->pc != 0x22BC78u) { return; }
    }
    ctx->pc = 0x22BC78u;
    // 0x22bc78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22bc7c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x22bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22bc80: 0x8e31004c  lw          $s1, 0x4C($s1)
    ctx->pc = 0x22bc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x22bc84: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22bc88: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22BC88u;
    SET_GPR_U32(ctx, 31, 0x22BC90u);
    ctx->pc = 0x22BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC88u;
            // 0x22bc8c: 0x8c520140  lw          $s2, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC90u; }
        if (ctx->pc != 0x22BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC90u; }
        if (ctx->pc != 0x22BC90u) { return; }
    }
    ctx->pc = 0x22BC90u;
    // 0x22bc90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22BC90u;
    SET_GPR_U32(ctx, 31, 0x22BC98u);
    ctx->pc = 0x22BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC90u;
            // 0x22bc94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC98u; }
        if (ctx->pc != 0x22BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC98u; }
        if (ctx->pc != 0x22BC98u) { return; }
    }
    ctx->pc = 0x22BC98u;
    // 0x22bc98: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22bc9c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x22bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22bca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22bca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22bca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcac: 0xc060284  jal         func_180A10
    ctx->pc = 0x22BCACu;
    SET_GPR_U32(ctx, 31, 0x22BCB4u);
    ctx->pc = 0x22BCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCACu;
            // 0x22bcb0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCB4u; }
        if (ctx->pc != 0x22BCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCB4u; }
        if (ctx->pc != 0x22BCB4u) { return; }
    }
    ctx->pc = 0x22BCB4u;
    // 0x22bcb4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22bcb8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22bcbc: 0x8c64c74c  lw          $a0, -0x38B4($v1)
    ctx->pc = 0x22bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952780)));
    // 0x22bcc0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x22bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x22bcc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22bcc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x22bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x22bccc: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x22bcccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bcd0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x22bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x22bcd4: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x22bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x22bcd8: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x22bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x22bcdc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x22bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x22bce0: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x22bce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bce4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x22bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x22bce8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BCE8u;
    {
        const bool branch_taken_0x22bce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCE8u;
            // 0x22bcec: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bce8) {
            ctx->pc = 0x22BCF8u;
            goto label_22bcf8;
        }
    }
    ctx->pc = 0x22BCF0u;
    // 0x22bcf0: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x22BCF0u;
    SET_GPR_U32(ctx, 31, 0x22BCF8u);
    ctx->pc = 0x22BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCF0u;
            // 0x22bcf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCF8u; }
        if (ctx->pc != 0x22BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCF8u; }
        if (ctx->pc != 0x22BCF8u) { return; }
    }
    ctx->pc = 0x22BCF8u;
label_22bcf8:
    // 0x22bcf8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22bcfc: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x22bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x22bd00: 0x2442eaf8  addiu       $v0, $v0, -0x1508
    ctx->pc = 0x22bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961912));
    // 0x22bd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd08: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x22bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x22bd0c: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x22BD0Cu;
    SET_GPR_U32(ctx, 31, 0x22BD14u);
    ctx->pc = 0x22BD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD0Cu;
            // 0x22bd10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD14u; }
        if (ctx->pc != 0x22BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD14u; }
        if (ctx->pc != 0x22BD14u) { return; }
    }
    ctx->pc = 0x22BD14u;
    // 0x22bd14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd18: 0xc08f1e0  jal         func_23C780
    ctx->pc = 0x22BD18u;
    SET_GPR_U32(ctx, 31, 0x22BD20u);
    ctx->pc = 0x22BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD18u;
            // 0x22bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C780u;
    if (runtime->hasFunction(0x23C780u)) {
        auto targetFn = runtime->lookupFunction(0x23C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD20u; }
        if (ctx->pc != 0x22BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c780_0x23c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD20u; }
        if (ctx->pc != 0x22BD20u) { return; }
    }
    ctx->pc = 0x22BD20u;
    // 0x22bd20: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22bd24: 0x244288b8  addiu       $v0, $v0, -0x7748
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936760));
    // 0x22bd28: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x22bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_22bd2c:
    // 0x22bd2c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x22bd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22bd30: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x22bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22bd34: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x22bd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22bd38: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x22bd38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bd3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22bd3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22bd40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22bd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22bd44: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD44u;
            // 0x22bd48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BC1Cu: goto label_22bc1c;
            case 0x22BC28u: goto label_22bc28;
            case 0x22BC68u: goto label_22bc68;
            case 0x22BCF8u: goto label_22bcf8;
            case 0x22BD2Cu: goto label_22bd2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BD4Cu;
    // 0x22bd4c: 0x0  nop
    ctx->pc = 0x22bd4cu;
    // NOP
}

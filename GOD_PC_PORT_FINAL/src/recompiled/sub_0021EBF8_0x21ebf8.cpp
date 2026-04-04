#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EBF8
// Address: 0x21ebf8 - 0x21ed08
void sub_0021EBF8_0x21ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EBF8_0x21ebf8");
#endif

    ctx->pc = 0x21ebf8u;

    // 0x21ebf8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x21ebfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ebfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ec00: 0x3c058b04  lui         $a1, 0x8B04
    ctx->pc = 0x21ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35588 << 16));
    // 0x21ec04: 0x2484d9c0  addiu       $a0, $a0, -0x2640
    ctx->pc = 0x21ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
    // 0x21ec08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ec0c: 0x34a54410  ori         $a1, $a1, 0x4410
    ctx->pc = 0x21ec0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17424);
    // 0x21ec10: 0xc05eff4  jal         func_17BFD0
    ctx->pc = 0x21EC10u;
    SET_GPR_U32(ctx, 31, 0x21EC18u);
    ctx->pc = 0x21EC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC10u;
            // 0x21ec14: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BFD0u;
    if (runtime->hasFunction(0x17BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x17BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC18u; }
        if (ctx->pc != 0x21EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bfd0_0x17bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC18u; }
        if (ctx->pc != 0x21EC18u) { return; }
    }
    ctx->pc = 0x21EC18u;
    // 0x21ec18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EC18u;
    {
        const bool branch_taken_0x21ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ec18) {
            ctx->pc = 0x21EC28u;
            goto label_21ec28;
        }
    }
    ctx->pc = 0x21EC20u;
    // 0x21ec20: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x21EC20u;
    SET_GPR_U32(ctx, 31, 0x21EC28u);
    ctx->pc = 0x21EC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC20u;
            // 0x21ec24: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC28u; }
        if (ctx->pc != 0x21EC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC28u; }
        if (ctx->pc != 0x21EC28u) { return; }
    }
    ctx->pc = 0x21EC28u;
label_21ec28:
    // 0x21ec28: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EC28u;
    SET_GPR_U32(ctx, 31, 0x21EC30u);
    ctx->pc = 0x21EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC28u;
            // 0x21ec2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC30u; }
        if (ctx->pc != 0x21EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC30u; }
        if (ctx->pc != 0x21EC30u) { return; }
    }
    ctx->pc = 0x21EC30u;
    // 0x21ec30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ec34: 0x8c45e5e8  lw          $a1, -0x1A18($v0)
    ctx->pc = 0x21ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960616)));
    // 0x21ec38: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x21EC38u;
    {
        const bool branch_taken_0x21ec38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC38u;
            // 0x21ec3c: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec38) {
            ctx->pc = 0x21EC68u;
            goto label_21ec68;
        }
    }
    ctx->pc = 0x21EC40u;
    // 0x21ec40: 0xc0a2644  jal         func_289910
    ctx->pc = 0x21EC40u;
    SET_GPR_U32(ctx, 31, 0x21EC48u);
    ctx->pc = 0x21EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC40u;
            // 0x21ec44: 0x2484e550  addiu       $a0, $a0, -0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC48u; }
        if (ctx->pc != 0x21EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC48u; }
        if (ctx->pc != 0x21EC48u) { return; }
    }
    ctx->pc = 0x21EC48u;
    // 0x21ec48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ec4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ec50: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21ec54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ec58: 0xa443cc9c  sh          $v1, -0x3364($v0)
    ctx->pc = 0x21ec58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954140), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ec5c: 0xac8301c0  sw          $v1, 0x1C0($a0)
    ctx->pc = 0x21ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 3));
    // 0x21ec60: 0xc087ba4  jal         func_21EE90
    ctx->pc = 0x21EC60u;
    SET_GPR_U32(ctx, 31, 0x21EC68u);
    ctx->pc = 0x21EC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC60u;
            // 0x21ec64: 0xac8001c4  sw          $zero, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EE90u;
    if (runtime->hasFunction(0x21EE90u)) {
        auto targetFn = runtime->lookupFunction(0x21EE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC68u; }
        if (ctx->pc != 0x21EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21ee90_0x21eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC68u; }
        if (ctx->pc != 0x21EC68u) { return; }
    }
    ctx->pc = 0x21EC68u;
label_21ec68:
    // 0x21ec68: 0xc087a56  jal         func_21E958
    ctx->pc = 0x21EC68u;
    SET_GPR_U32(ctx, 31, 0x21EC70u);
    ctx->pc = 0x21E958u;
    if (runtime->hasFunction(0x21E958u)) {
        auto targetFn = runtime->lookupFunction(0x21E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC70u; }
        if (ctx->pc != 0x21EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E958_0x21e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC70u; }
        if (ctx->pc != 0x21EC70u) { return; }
    }
    ctx->pc = 0x21EC70u;
    // 0x21ec70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ec74: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21ec78: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x21ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
    // 0x21ec7c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21EC7Cu;
    {
        const bool branch_taken_0x21ec7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC7Cu;
            // 0x21ec80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec7c) {
            ctx->pc = 0x21ECFCu;
            goto label_21ecfc;
        }
    }
    ctx->pc = 0x21EC84u;
    // 0x21ec84: 0x8c640278  lw          $a0, 0x278($v1)
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x21ec88: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EC88u;
    {
        const bool branch_taken_0x21ec88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21EC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC88u;
            // 0x21ec8c: 0xac6001a8  sw          $zero, 0x1A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec88) {
            ctx->pc = 0x21ECA4u;
            goto label_21eca4;
        }
    }
    ctx->pc = 0x21EC90u;
    // 0x21ec90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ec94: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21EC94u;
    {
        const bool branch_taken_0x21ec94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC94u;
            // 0x21ec98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec94) {
            ctx->pc = 0x21ECD0u;
            goto label_21ecd0;
        }
    }
    ctx->pc = 0x21EC9Cu;
    // 0x21ec9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21EC9Cu;
    {
        const bool branch_taken_0x21ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ec9c) {
            ctx->pc = 0x21ED00u;
            goto label_21ed00;
        }
    }
    ctx->pc = 0x21ECA4u;
label_21eca4:
    // 0x21eca4: 0x946301c0  lhu         $v1, 0x1C0($v1)
    ctx->pc = 0x21eca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x21eca8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ecac: 0xc0878c0  jal         func_21E300
    ctx->pc = 0x21ECACu;
    SET_GPR_U32(ctx, 31, 0x21ECB4u);
    ctx->pc = 0x21ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECACu;
            // 0x21ecb0: 0xa443cc9c  sh          $v1, -0x3364($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954140), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E300u;
    if (runtime->hasFunction(0x21E300u)) {
        auto targetFn = runtime->lookupFunction(0x21E300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECB4u; }
        if (ctx->pc != 0x21ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E300_0x21e300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECB4u; }
        if (ctx->pc != 0x21ECB4u) { return; }
    }
    ctx->pc = 0x21ECB4u;
    // 0x21ecb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ecb8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x21ecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x21ecbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21ecbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ecc0: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21ECC0u;
    SET_GPR_U32(ctx, 31, 0x21ECC8u);
    ctx->pc = 0x21ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECC0u;
            // 0x21ecc4: 0x8c4411d0  lw          $a0, 0x11D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECC8u; }
        if (ctx->pc != 0x21ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECC8u; }
        if (ctx->pc != 0x21ECC8u) { return; }
    }
    ctx->pc = 0x21ECC8u;
    // 0x21ecc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21ECC8u;
    {
        const bool branch_taken_0x21ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECC8u;
            // 0x21eccc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecc8) {
            ctx->pc = 0x21ECF4u;
            goto label_21ecf4;
        }
    }
    ctx->pc = 0x21ECD0u;
label_21ecd0:
    // 0x21ecd0: 0xc06ef3e  jal         func_1BBCF8
    ctx->pc = 0x21ECD0u;
    SET_GPR_U32(ctx, 31, 0x21ECD8u);
    ctx->pc = 0x1BBCF8u;
    if (runtime->hasFunction(0x1BBCF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECD8u; }
        if (ctx->pc != 0x21ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bbcf8_0x1bbd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECD8u; }
        if (ctx->pc != 0x21ECD8u) { return; }
    }
    ctx->pc = 0x21ECD8u;
    // 0x21ecd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21ECD8u;
    {
        const bool branch_taken_0x21ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECD8u;
            // 0x21ecdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecd8) {
            ctx->pc = 0x21ED00u;
            goto label_21ed00;
        }
    }
    ctx->pc = 0x21ECE0u;
    // 0x21ece0: 0xc08bd68  jal         func_22F5A0
    ctx->pc = 0x21ECE0u;
    SET_GPR_U32(ctx, 31, 0x21ECE8u);
    ctx->pc = 0x22F5A0u;
    if (runtime->hasFunction(0x22F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECE8u; }
        if (ctx->pc != 0x21ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F5A0_0x22f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECE8u; }
        if (ctx->pc != 0x21ECE8u) { return; }
    }
    ctx->pc = 0x21ECE8u;
    // 0x21ece8: 0xc0879d4  jal         func_21E750
    ctx->pc = 0x21ECE8u;
    SET_GPR_U32(ctx, 31, 0x21ECF0u);
    ctx->pc = 0x21E750u;
    if (runtime->hasFunction(0x21E750u)) {
        auto targetFn = runtime->lookupFunction(0x21E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECF0u; }
        if (ctx->pc != 0x21ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21e750_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECF0u; }
        if (ctx->pc != 0x21ECF0u) { return; }
    }
    ctx->pc = 0x21ECF0u;
    // 0x21ecf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21ecf4:
    // 0x21ecf4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ecf8: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
label_21ecfc:
    // 0x21ecfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ed00:
    // 0x21ed00: 0x3e00008  jr          $ra
    ctx->pc = 0x21ED00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED00u;
            // 0x21ed04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EC28u: goto label_21ec28;
            case 0x21EC68u: goto label_21ec68;
            case 0x21ECA4u: goto label_21eca4;
            case 0x21ECD0u: goto label_21ecd0;
            case 0x21ECF4u: goto label_21ecf4;
            case 0x21ECFCu: goto label_21ecfc;
            case 0x21ED00u: goto label_21ed00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ED08u;
}

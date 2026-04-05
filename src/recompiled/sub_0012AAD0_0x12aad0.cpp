#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012AAD0
// Address: 0x12aad0 - 0x12b2b8
void sub_0012AAD0_0x12aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AAD0_0x12aad0");
#endif

    ctx->pc = 0x12aad0u;

    // 0x12aad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12aad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12aad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12aadc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12aadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aae0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x12aae4: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x12aae8: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AAE8u;
    {
        const bool branch_taken_0x12aae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x12AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAE8u;
            // 0x12aaec: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aae8) {
            ctx->pc = 0x12AB10u;
            goto label_12ab10;
        }
    }
    ctx->pc = 0x12AAF0u;
    // 0x12aaf0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12aaf4: 0x0  nop
    ctx->pc = 0x12aaf4u;
    // NOP
label_12aaf8:
    // 0x12aaf8: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AAF8u;
    {
        const bool branch_taken_0x12aaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x12aaf8) {
            ctx->pc = 0x12AAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAF8u;
            // 0x12aafc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AB08u;
            goto label_12ab08;
        }
    }
    ctx->pc = 0x12AB00u;
    // 0x12ab00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12AB00u;
    {
        const bool branch_taken_0x12ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB00u;
            // 0x12ab04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab00) {
            ctx->pc = 0x12AB14u;
            goto label_12ab14;
        }
    }
    ctx->pc = 0x12AB08u;
label_12ab08:
    // 0x12ab08: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12AB08u;
    {
        const bool branch_taken_0x12ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ab08) {
            ctx->pc = 0x12AB0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB08u;
            // 0x12ab0c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AAF8u;
            runtime->cooperativeGuestYield();
            goto label_12aaf8;
        }
    }
    ctx->pc = 0x12AB10u;
label_12ab10:
    // 0x12ab10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ab10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab14:
    // 0x12ab14: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12AB14u;
    {
        const bool branch_taken_0x12ab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab14) {
            ctx->pc = 0x12AB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB14u;
            // 0x12ab18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AB80u;
            goto label_12ab80;
        }
    }
    ctx->pc = 0x12AB1Cu;
    // 0x12ab1c: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AB1Cu;
    {
        const bool branch_taken_0x12ab1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x12AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB1Cu;
            // 0x12ab20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab1c) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AB24u;
    // 0x12ab24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x12ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12ab28:
    // 0x12ab28: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AB28u;
    {
        const bool branch_taken_0x12ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x12ab28) {
            ctx->pc = 0x12AB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB28u;
            // 0x12ab2c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AB38u;
            goto label_12ab38;
        }
    }
    ctx->pc = 0x12AB30u;
    // 0x12ab30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12AB30u;
    {
        const bool branch_taken_0x12ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB30u;
            // 0x12ab34: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab30) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AB38u;
label_12ab38:
    // 0x12ab38: 0x54a4fffb  bnel        $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12AB38u;
    {
        const bool branch_taken_0x12ab38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ab38) {
            ctx->pc = 0x12AB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB38u;
            // 0x12ab3c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AB28u;
            runtime->cooperativeGuestYield();
            goto label_12ab28;
        }
    }
    ctx->pc = 0x12AB40u;
    // 0x12ab40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12ab40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab44:
    // 0x12ab44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ab48: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12ab4c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x12ab50: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab54: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x12ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x12ab58: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12ab5c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ab60: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x12ab64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12ab68: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x12ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x12ab6c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x12AB6Cu;
    SET_GPR_U32(ctx, 31, 0x12AB74u);
    ctx->pc = 0x12AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB6Cu;
            // 0x12ab70: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB74u; }
        if (ctx->pc != 0x12AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB74u; }
        if (ctx->pc != 0x12AB74u) { return; }
    }
    ctx->pc = 0x12AB74u;
    // 0x12ab74: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12AB74u;
    SET_GPR_U32(ctx, 31, 0x12AB7Cu);
    ctx->pc = 0x12AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB74u;
            // 0x12ab78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB7Cu; }
        if (ctx->pc != 0x12AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB7Cu; }
        if (ctx->pc != 0x12AB7Cu) { return; }
    }
    ctx->pc = 0x12AB7Cu;
    // 0x12ab7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ab7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ab80:
    // 0x12ab80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x12AB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB84u;
            // 0x12ab88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12AB8Cu;
    // 0x12ab8c: 0x0  nop
    ctx->pc = 0x12ab8cu;
    // NOP
    // 0x12ab90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x12AB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB94u;
            // 0x12ab98: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12AB9Cu;
    // 0x12ab9c: 0x0  nop
    ctx->pc = 0x12ab9cu;
    // NOP
    // 0x12aba0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12aba4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x12aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x12aba8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x12aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x12abac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12abacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abb0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x12abb4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12abb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x12abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x12abbc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x12abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x12abc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x12abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x12abc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12abc8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x12abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x12abcc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x12abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x12abd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12abd4: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x12abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x12abd8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x12abd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12abdc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x12abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x12abe0: 0x40f809  jalr        $v0
    ctx->pc = 0x12ABE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ABE8u);
        ctx->pc = 0x12ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABE0u;
            // 0x12abe4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12ABE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12ABE8u; }
            if (ctx->pc != 0x12ABE8u) { return; }
        }
        }
    }
    ctx->pc = 0x12ABE8u;
    // 0x12abe8: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x12ABE8u;
    {
        const bool branch_taken_0x12abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABE8u;
            // 0x12abec: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abe8) {
            ctx->pc = 0x12B060u;
            goto label_12b060;
        }
    }
    ctx->pc = 0x12ABF0u;
    // 0x12abf0: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x12abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x12abf4: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12abf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12abf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12abfc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABFCu;
            // 0x12ac00: 0x8ed20018  lw          $s2, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AC28u;
            goto label_12ac28;
        }
    }
    ctx->pc = 0x12AC04u;
    // 0x12ac04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12ac08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ac0c: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x12ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x12ac10: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12ac14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ac18: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x12ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x12ac1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ac20: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12ac24: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x12ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
label_12ac28:
    // 0x12ac28: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12ac2c: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12ac2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12ac30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12ac38: 0x3c1e002d  lui         $fp, 0x2D
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)45 << 16));
    // 0x12ac3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ac40: 0xaee3ed60  sw          $v1, -0x12A0($s7)
    ctx->pc = 0x12ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 3));
    // 0x12ac44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12ac48: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12AC48u;
    SET_GPR_U32(ctx, 31, 0x12AC50u);
    ctx->pc = 0x12AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC48u;
            // 0x12ac4c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC50u; }
        if (ctx->pc != 0x12AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC50u; }
        if (ctx->pc != 0x12AC50u) { return; }
    }
    ctx->pc = 0x12AC50u;
    // 0x12ac50: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x12ac54: 0x27c4bb98  addiu       $a0, $fp, -0x4468
    ctx->pc = 0x12ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x12ac58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ac5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ac60: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ac64: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12ac68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ac6c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12ac70: 0x8ee2ed60  lw          $v0, -0x12A0($s7)
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x12ac74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ac78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12ac7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ac80: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x12ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12ac84: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12ac88: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12ac8c: 0x40f809  jalr        $v0
    ctx->pc = 0x12AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12AC94u);
        ctx->pc = 0x12AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC8Cu;
            // 0x12ac90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12AC94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12AC94u; }
            if (ctx->pc != 0x12AC94u) { return; }
        }
        }
    }
    ctx->pc = 0x12AC94u;
    // 0x12ac94: 0x8ee2ed60  lw          $v0, -0x12A0($s7)
    ctx->pc = 0x12ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x12ac98: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x12ac98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12ac9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12aca0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12aca4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12ACA4u;
    SET_GPR_U32(ctx, 31, 0x12ACACu);
    ctx->pc = 0x12ACA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACA4u;
            // 0x12aca8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACACu; }
        if (ctx->pc != 0x12ACACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACACu; }
        if (ctx->pc != 0x12ACACu) { return; }
    }
    ctx->pc = 0x12ACACu;
    // 0x12acac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12acb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12acb4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12ACB4u;
    SET_GPR_U32(ctx, 31, 0x12ACBCu);
    ctx->pc = 0x12ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACB4u;
            // 0x12acb8: 0x8c50f1ac  lw          $s0, -0xE54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACBCu; }
        if (ctx->pc != 0x12ACBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACBCu; }
        if (ctx->pc != 0x12ACBCu) { return; }
    }
    ctx->pc = 0x12ACBCu;
    // 0x12acbc: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12acc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12acc4: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12acc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12accc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12ACCCu;
    SET_GPR_U32(ctx, 31, 0x12ACD4u);
    ctx->pc = 0x12ACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACCCu;
            // 0x12acd0: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACD4u; }
        if (ctx->pc != 0x12ACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACD4u; }
        if (ctx->pc != 0x12ACD4u) { return; }
    }
    ctx->pc = 0x12ACD4u;
    // 0x12acd4: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12acd8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12acdc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ace0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12ace4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12ace8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12acec: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x12acecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x12acf0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12acf4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12acf8: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x12acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12acfc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12ad00: 0x9ca2f19c  lwu         $v0, -0xE64($a1)
    ctx->pc = 0x12ad00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294963612)));
    // 0x12ad04: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x12ad04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x12ad08: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x12ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12ad0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ad10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12ad14: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x12ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x12ad18: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x12ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x12ad1c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12ad1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ad20: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x12ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x12ad24: 0xc6a10374  lwc1        $f1, 0x374($s5)
    ctx->pc = 0x12ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ad28: 0x8c65dd58  lw          $a1, -0x22A8($v1)
    ctx->pc = 0x12ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958424)));
    // 0x12ad2c: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x12ad30: 0xc6a20370  lwc1        $f2, 0x370($s5)
    ctx->pc = 0x12ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ad34: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12ad34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12ad38: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x12ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12ad3c: 0x53982  srl         $a3, $a1, 6
    ctx->pc = 0x12ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x12ad40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ad44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12ad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12ad48: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x12ad48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12ad4c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x12ad4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x12ad50: 0x2463dd58  addiu       $v1, $v1, -0x22A8
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958424));
    // 0x12ad54: 0x713b8  dsll        $v0, $a3, 14
    ctx->pc = 0x12ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 14);
    // 0x12ad58: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12ad58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12ad5c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12ad5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12ad60: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12ad64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12ad64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12ad68: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x12ad68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x12ad6c: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x12ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x12ad70: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12ad74: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12ad74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x12ad78: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x12ad78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x12ad7c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x12ad7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x12ad80: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x12ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12ad84: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x12ad84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x12ad88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12ad88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12ad8c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x12ad8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x12ad90: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12ad90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12ad94: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x12ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x12ad98: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12ad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ad9c: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x12ad9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x12ada0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12ada0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12ada4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12ada4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12ada8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12adac: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x12adacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12adb0: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x12adb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x12adb4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12adb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12adb8: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x12adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x12adbc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x12adc0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x12adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x12adc4: 0x3131823  subu        $v1, $t8, $s3
    ctx->pc = 0x12adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 19)));
    // 0x12adc8: 0xfc850040  sd          $a1, 0x40($a0)
    ctx->pc = 0x12adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 5));
    // 0x12adcc: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x12adccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12add0: 0x246501ff  addiu       $a1, $v1, 0x1FF
    ctx->pc = 0x12add0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x12add4: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x12add4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12add8: 0x240b0043  addiu       $t3, $zero, 0x43
    ctx->pc = 0x12add8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12addc: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x12addcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x12ade0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x12ade0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x12ade4: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12ade8: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x12ade8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x12adec: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x12adecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x12adf0: 0x35ad8080  ori         $t5, $t5, 0x8080
    ctx->pc = 0x12adf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32896);
    // 0x12adf4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x12adf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x12adf8: 0x35ad8080  ori         $t5, $t5, 0x8080
    ctx->pc = 0x12adf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32896);
    // 0x12adfc: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12ae00: 0x240f0015  addiu       $t7, $zero, 0x15
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12ae04: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x12ae04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12ae08: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ae0c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x12ae0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ae10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12ae10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12ae14: 0x325102a  slt         $v0, $t9, $a1
    ctx->pc = 0x12ae14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12ae18: 0xfc890038  sd          $t1, 0x38($a0)
    ctx->pc = 0x12ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 9));
    // 0x12ae1c: 0xfc8a0048  sd          $t2, 0x48($a0)
    ctx->pc = 0x12ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 10));
    // 0x12ae20: 0x246303fe  addiu       $v1, $v1, 0x3FE
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1022));
    // 0x12ae24: 0xfc8b0058  sd          $t3, 0x58($a0)
    ctx->pc = 0x12ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 11));
    // 0x12ae28: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x12ae28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x12ae2c: 0xfc860090  sd          $a2, 0x90($a0)
    ctx->pc = 0x12ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 6));
    // 0x12ae30: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x12ae30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x12ae34: 0xfc8c0068  sd          $t4, 0x68($a0)
    ctx->pc = 0x12ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 12));
    // 0x12ae38: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12ae38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12ae3c: 0xfc8d0070  sd          $t5, 0x70($a0)
    ctx->pc = 0x12ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 13));
    // 0x12ae40: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12ae40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12ae44: 0xfc940078  sd          $s4, 0x78($a0)
    ctx->pc = 0x12ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 20));
    // 0x12ae48: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12ae48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12ae4c: 0xfc8e0080  sd          $t6, 0x80($a0)
    ctx->pc = 0x12ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 14));
    // 0x12ae50: 0x2078025  or          $s0, $s0, $a3
    ctx->pc = 0x12ae50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x12ae54: 0xfc8f0088  sd          $t7, 0x88($a0)
    ctx->pc = 0x12ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 15));
    // 0x12ae58: 0x34a43  sra         $t1, $v1, 9
    ctx->pc = 0x12ae58u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 9));
    // 0x12ae5c: 0xfc920098  sd          $s2, 0x98($a0)
    ctx->pc = 0x12ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 18));
    // 0x12ae60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ae64: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12ae64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12ae68: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x12ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x12ae6c: 0x35238000  ori         $v1, $t1, 0x8000
    ctx->pc = 0x12ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x12ae70: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x12ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x12ae74: 0x3c0541ab  lui         $a1, 0x41AB
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16811 << 16));
    // 0x12ae78: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x12ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x12ae7c: 0x248700c0  addiu       $a3, $a0, 0xC0
    ctx->pc = 0x12ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x12ae80: 0xc6a0036c  lwc1        $f0, 0x36C($s5)
    ctx->pc = 0x12ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ae84: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x12ae84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x12ae88: 0x9d02f1a8  lwu         $v0, -0xE58($t0)
    ctx->pc = 0x12ae88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963624)));
    // 0x12ae8c: 0xc6a10368  lwc1        $f1, 0x368($s5)
    ctx->pc = 0x12ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ae90: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12ae90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12ae94: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae98: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x12ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x12ae9c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12ae9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12aea0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12aea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12aea4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12aea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12aea8: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x12aea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x12aeac: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x12aeb0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12aeb4: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12aeb8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12aeb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12aebc: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x12aebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x12aec0: 0xfc9000a0  sd          $s0, 0xA0($a0)
    ctx->pc = 0x12aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 16));
    // 0x12aec4: 0x248200b0  addiu       $v0, $a0, 0xB0
    ctx->pc = 0x12aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x12aec8: 0xfc8300a8  sd          $v1, 0xA8($a0)
    ctx->pc = 0x12aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 3));
    // 0x12aecc: 0x26680200  addiu       $t0, $s3, 0x200
    ctx->pc = 0x12aeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x12aed0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x12aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x12aed4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x12aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x12aed8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12aedc: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12AEDCu;
    {
        const bool branch_taken_0x12aedc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x12AEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEDCu;
            // 0x12aee0: 0xae27f168  sw          $a3, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aedc) {
            ctx->pc = 0x12AF6Cu;
            goto label_12af6c;
        }
    }
    ctx->pc = 0x12AEE4u;
    // 0x12aee4: 0x0  nop
    ctx->pc = 0x12aee4u;
    // NOP
label_12aee8:
    // 0x12aee8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12aeec: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x12aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12aef0: 0x25440008  addiu       $a0, $t2, 0x8
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x12aef4: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x12aef8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12aefc: 0x25670008  addiu       $a3, $t3, 0x8
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x12af00: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12af00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12af04: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12af08: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12af08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12af0c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12af10: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12af14: 0xac530010  sw          $s3, 0x10($v0)
    ctx->pc = 0x12af14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 19));
    // 0x12af18: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12af1c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12af20: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x12af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12af24: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x12af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x12af28: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x12af28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12af2c: 0xac790008  sw          $t9, 0x8($v1)
    ctx->pc = 0x12af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 25));
    // 0x12af30: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x12af34: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x12af34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x12af38: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x12af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12af3c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x12af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x12af40: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12af40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12af44: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12af44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12af48: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x12af48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x12af4c: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x12af4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x12af50: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12af50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12af54: 0x308102a  slt         $v0, $t8, $t0
    ctx->pc = 0x12af54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12af58: 0xae25f168  sw          $a1, -0xE98($s1)
    ctx->pc = 0x12af58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 5));
    // 0x12af5c: 0x302400b  movn        $t0, $t8, $v0
    ctx->pc = 0x12af5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 24));
    // 0x12af60: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x12af60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x12af64: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x12AF64u;
    {
        const bool branch_taken_0x12af64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF64u;
            // 0x12af68: 0xac790008  sw          $t9, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af64) {
            ctx->pc = 0x12AEE8u;
            runtime->cooperativeGuestYield();
            goto label_12aee8;
        }
    }
    ctx->pc = 0x12AF6Cu;
label_12af6c:
    // 0x12af6c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12AF6Cu;
    SET_GPR_U32(ctx, 31, 0x12AF74u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF74u; }
        if (ctx->pc != 0x12AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF74u; }
        if (ctx->pc != 0x12AF74u) { return; }
    }
    ctx->pc = 0x12AF74u;
    // 0x12af74: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12AF74u;
    SET_GPR_U32(ctx, 31, 0x12AF7Cu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF7Cu; }
        if (ctx->pc != 0x12AF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF7Cu; }
        if (ctx->pc != 0x12AF7Cu) { return; }
    }
    ctx->pc = 0x12AF7Cu;
    // 0x12af7c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12af80: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x12af80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x12af84: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12af88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12AF88u;
    {
        const bool branch_taken_0x12af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF88u;
            // 0x12af8c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af88) {
            ctx->pc = 0x12AFB8u;
            goto label_12afb8;
        }
    }
    ctx->pc = 0x12AF90u;
    // 0x12af90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12af90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12af94: 0x0  nop
    ctx->pc = 0x12af94u;
    // NOP
label_12af98:
    // 0x12af98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12af9c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12afa0: 0x0  nop
    ctx->pc = 0x12afa0u;
    // NOP
    // 0x12afa4: 0x0  nop
    ctx->pc = 0x12afa4u;
    // NOP
    // 0x12afa8: 0x0  nop
    ctx->pc = 0x12afa8u;
    // NOP
    // 0x12afac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12AFACu;
    {
        const bool branch_taken_0x12afac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12afac) {
            ctx->pc = 0x12AFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFACu;
            // 0x12afb0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AF98u;
            runtime->cooperativeGuestYield();
            goto label_12af98;
        }
    }
    ctx->pc = 0x12AFB4u;
    // 0x12afb4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_12afb8:
    // 0x12afb8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x12afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x12afbc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12afc0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12afc4: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x12afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x12afc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12afc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afcc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12afd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12AFD0u;
    {
        const bool branch_taken_0x12afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFD0u;
            // 0x12afd4: 0x8ee2ed60  lw          $v0, -0x12A0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afd0) {
            ctx->pc = 0x12B000u;
            goto label_12b000;
        }
    }
    ctx->pc = 0x12AFD8u;
    // 0x12afd8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12afdc: 0x0  nop
    ctx->pc = 0x12afdcu;
    // NOP
label_12afe0:
    // 0x12afe0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12afe4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12afe8: 0x0  nop
    ctx->pc = 0x12afe8u;
    // NOP
    // 0x12afec: 0x0  nop
    ctx->pc = 0x12afecu;
    // NOP
    // 0x12aff0: 0x0  nop
    ctx->pc = 0x12aff0u;
    // NOP
    // 0x12aff4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12AFF4u;
    {
        const bool branch_taken_0x12aff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aff4) {
            ctx->pc = 0x12AFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFF4u;
            // 0x12aff8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AFE0u;
            runtime->cooperativeGuestYield();
            goto label_12afe0;
        }
    }
    ctx->pc = 0x12AFFCu;
    // 0x12affc: 0x8ee2ed60  lw          $v0, -0x12A0($s7)
    ctx->pc = 0x12affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
label_12b000:
    // 0x12b000: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12b004: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x12b004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x12b008: 0x2471ed68  addiu       $s1, $v1, -0x1298
    ctx->pc = 0x12b008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962536));
    // 0x12b00c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b014: 0xaee5ed60  sw          $a1, -0x12A0($s7)
    ctx->pc = 0x12b014u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 5));
    // 0x12b018: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12b01c: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x12b01cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12b020: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b024: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B024u;
    {
        const bool branch_taken_0x12b024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B024u;
            // 0x12b028: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b024) {
            ctx->pc = 0x12B03Cu;
            goto label_12b03c;
        }
    }
    ctx->pc = 0x12B02Cu;
    // 0x12b02c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12b030: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12b034: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12B034u;
    SET_GPR_U32(ctx, 31, 0x12B03Cu);
    ctx->pc = 0x12B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B034u;
            // 0x12b038: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B03Cu; }
        if (ctx->pc != 0x12B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B03Cu; }
        if (ctx->pc != 0x12B03Cu) { return; }
    }
    ctx->pc = 0x12B03Cu;
label_12b03c:
    // 0x12b03c: 0x27c3bb98  addiu       $v1, $fp, -0x4468
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x12b040: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12b044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b048: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x12b048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x12b04c: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x12b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x12b050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12b054: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x12b054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x12b058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12b058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12b05c: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x12b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
label_12b060:
    // 0x12b060: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x12b064: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12b064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12b068: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x12b068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x12b06c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b070: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12b074: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12B074u;
    {
        const bool branch_taken_0x12b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B074u;
            // 0x12b078: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b074) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12B07Cu;
    // 0x12b07c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_12b080:
    // 0x12b080: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12b084: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12b088: 0x0  nop
    ctx->pc = 0x12b088u;
    // NOP
    // 0x12b08c: 0x0  nop
    ctx->pc = 0x12b08cu;
    // NOP
    // 0x12b090: 0x0  nop
    ctx->pc = 0x12b090u;
    // NOP
    // 0x12b094: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B094u;
    {
        const bool branch_taken_0x12b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b094) {
            ctx->pc = 0x12B098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B094u;
            // 0x12b098: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B080u;
            runtime->cooperativeGuestYield();
            goto label_12b080;
        }
    }
    ctx->pc = 0x12B09Cu;
    // 0x12b09c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x12b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_12b0a0:
    // 0x12b0a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12b0a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x12b0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b0a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12b0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12b0ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12b0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b0b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x12b0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b0b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12b0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b0b8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x12b0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b0bc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x12b0bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b0c0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x12b0c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0c4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x12b0c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12b0d0: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x12b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x12b0d4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x12b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x12b0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0D8u;
            // 0x12b0dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B0E0u;
    // 0x12b0e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12b0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0e4: 0x0  nop
    ctx->pc = 0x12b0e4u;
    // NOP
    // 0x12b0e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0ec: 0x0  nop
    ctx->pc = 0x12b0ecu;
    // NOP
    // 0x12b0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b0f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12b0f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12b0fc: 0x2442c478  addiu       $v0, $v0, -0x3B88
    ctx->pc = 0x12b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952056));
    // 0x12b100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b10c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x12b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x12b110: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x12b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12b114: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B114u;
    {
        const bool branch_taken_0x12b114 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B114u;
            // 0x12b118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b114) {
            ctx->pc = 0x12B124u;
            goto label_12b124;
        }
    }
    ctx->pc = 0x12B11Cu;
    // 0x12b11c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x12B11Cu;
    SET_GPR_U32(ctx, 31, 0x12B124u);
    ctx->pc = 0x12B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B11Cu;
            // 0x12b120: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B124u; }
        if (ctx->pc != 0x12B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B124u; }
        if (ctx->pc != 0x12B124u) { return; }
    }
    ctx->pc = 0x12B124u;
label_12b124:
    // 0x12b124: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12b124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12b128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b12c: 0x2442c9b8  addiu       $v0, $v0, -0x3648
    ctx->pc = 0x12b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953400));
    // 0x12b130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b134: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x12B134u;
    SET_GPR_U32(ctx, 31, 0x12B13Cu);
    ctx->pc = 0x12B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B134u;
            // 0x12b138: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (runtime->hasFunction(0x239280u)) {
        auto targetFn = runtime->lookupFunction(0x239280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B13Cu; }
        if (ctx->pc != 0x12B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239280_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B13Cu; }
        if (ctx->pc != 0x12B13Cu) { return; }
    }
    ctx->pc = 0x12B13Cu;
    // 0x12b13c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x12b13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12b140: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B140u;
    {
        const bool branch_taken_0x12b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b140) {
            ctx->pc = 0x12B144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B140u;
            // 0x12b144: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B154u;
            goto label_12b154;
        }
    }
    ctx->pc = 0x12B148u;
    // 0x12b148: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12B148u;
    SET_GPR_U32(ctx, 31, 0x12B150u);
    ctx->pc = 0x12B14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B148u;
            // 0x12b14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B150u; }
        if (ctx->pc != 0x12B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B150u; }
        if (ctx->pc != 0x12B150u) { return; }
    }
    ctx->pc = 0x12B150u;
    // 0x12b150: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12b150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b154:
    // 0x12b154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b15c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B15Cu;
            // 0x12b160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B164u;
    // 0x12b164: 0x0  nop
    ctx->pc = 0x12b164u;
    // NOP
    // 0x12b168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b16c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12b170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b17c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x12b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12b180: 0x4420049  bltzl       $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x12B180u;
    {
        const bool branch_taken_0x12b180 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12b180) {
            ctx->pc = 0x12B184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B180u;
            // 0x12b184: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B188u;
    // 0x12b188: 0xc04c090  jal         func_130240
    ctx->pc = 0x12B188u;
    SET_GPR_U32(ctx, 31, 0x12B190u);
    ctx->pc = 0x130240u;
    if (runtime->hasFunction(0x130240u)) {
        auto targetFn = runtime->lookupFunction(0x130240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B190u; }
        if (ctx->pc != 0x12B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_130240_0x1302b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B190u; }
        if (ctx->pc != 0x12B190u) { return; }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b194: 0x52200044  beql        $s1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x12B194u;
    {
        const bool branch_taken_0x12b194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b194) {
            ctx->pc = 0x12B198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B194u;
            // 0x12b198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B19Cu;
    // 0x12b19c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x12B19Cu;
    SET_GPR_U32(ctx, 31, 0x12B1A4u);
    ctx->pc = 0x12B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B19Cu;
            // 0x12b1a0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1A4u; }
        if (ctx->pc != 0x12B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1A4u; }
        if (ctx->pc != 0x12B1A4u) { return; }
    }
    ctx->pc = 0x12B1A4u;
    // 0x12b1a4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x12b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x12b1a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12b1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1ac: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x12b1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x12b1b0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x12b1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x12b1b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B1B4u;
    {
        const bool branch_taken_0x12b1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1B4u;
            // 0x12b1b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1b4) {
            ctx->pc = 0x12B214u;
            goto label_12b214;
        }
    }
    ctx->pc = 0x12B1BCu;
    // 0x12b1bc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_12b1c0:
    // 0x12b1c0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x12b1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12b1c4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x12b1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12b1c8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12b1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12b1cc: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12b1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12b1d0: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x12b1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x12b1d4: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x12b1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12b1d8: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x12b1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x12b1dc: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x12b1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x12b1e0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x12b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1e4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x12b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1e8: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x12b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1ec: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x12b1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1f0: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x12b1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1f4: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x12b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1f8: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x12b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b1fc: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x12b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b200: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12b204: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12B204u;
    {
        const bool branch_taken_0x12b204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B204u;
            // 0x12b208: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b204) {
            ctx->pc = 0x12B1C0u;
            runtime->cooperativeGuestYield();
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12B20Cu;
    // 0x12b20c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12B20Cu;
    {
        const bool branch_taken_0x12b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b20c) {
            ctx->pc = 0x12B244u;
            goto label_12b244;
        }
    }
    ctx->pc = 0x12B214u;
label_12b214:
    // 0x12b214: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x12b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_12b218:
    // 0x12b218: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b21c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x12b21cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12b220: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x12b220u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12b224: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x12b224u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12b228: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x12b228u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x12b22c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x12b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x12b230: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x12b230u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x12b234: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x12b234u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x12b238: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12b23c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12B23Cu;
    {
        const bool branch_taken_0x12b23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B23Cu;
            // 0x12b240: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b23c) {
            ctx->pc = 0x12B218u;
            runtime->cooperativeGuestYield();
            goto label_12b218;
        }
    }
    ctx->pc = 0x12B244u;
label_12b244:
    // 0x12b244: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x12b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12b248: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x12b248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12b24c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x12b24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12b250: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x12b250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12b254: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x12b254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12b258: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x12b258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12b25c: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x12b25cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12b260: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x12b260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b264: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x12b264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b268: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x12b268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b26c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x12b26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b270: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x12b270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b274: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x12b274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b278: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x12b278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x12b27c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x12b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x12b280: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12b284: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12b284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12b288: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x12b28c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12b290: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x12b290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
    // 0x12b294: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12b298: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x12b298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x12b29c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12b2a0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x12b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x12b2a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12b2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b2a8:
    // 0x12b2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2B0u;
            // 0x12b2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AAF8u: goto label_12aaf8;
            case 0x12AB08u: goto label_12ab08;
            case 0x12AB10u: goto label_12ab10;
            case 0x12AB14u: goto label_12ab14;
            case 0x12AB28u: goto label_12ab28;
            case 0x12AB38u: goto label_12ab38;
            case 0x12AB44u: goto label_12ab44;
            case 0x12AB80u: goto label_12ab80;
            case 0x12AC28u: goto label_12ac28;
            case 0x12AEE8u: goto label_12aee8;
            case 0x12AF6Cu: goto label_12af6c;
            case 0x12AF98u: goto label_12af98;
            case 0x12AFB8u: goto label_12afb8;
            case 0x12AFE0u: goto label_12afe0;
            case 0x12B000u: goto label_12b000;
            case 0x12B03Cu: goto label_12b03c;
            case 0x12B060u: goto label_12b060;
            case 0x12B080u: goto label_12b080;
            case 0x12B0A0u: goto label_12b0a0;
            case 0x12B124u: goto label_12b124;
            case 0x12B154u: goto label_12b154;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B214u: goto label_12b214;
            case 0x12B218u: goto label_12b218;
            case 0x12B244u: goto label_12b244;
            case 0x12B2A8u: goto label_12b2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B2B8u;
}

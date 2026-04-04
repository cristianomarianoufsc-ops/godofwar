#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EF60
// Address: 0x17ef60 - 0x17f028
void sub_0017EF60_0x17ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EF60_0x17ef60");
#endif

    ctx->pc = 0x17ef60u;

    // 0x17ef60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ef64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17ef68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ef6c: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x17ef6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x17ef70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ef70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ef78: 0x8d44c790  lw          $a0, -0x3870($t2)
    ctx->pc = 0x17ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294952848)));
    // 0x17ef7c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17ef80: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x17ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x17ef84: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x17ef84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef88: 0x24663638  addiu       $a2, $v1, 0x3638
    ctx->pc = 0x17ef88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13880));
    // 0x17ef8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17ef90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EF90u;
    {
        const bool branch_taken_0x17ef90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF90u;
            // 0x17ef94: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef90) {
            ctx->pc = 0x17EFACu;
            goto label_17efac;
        }
    }
    ctx->pc = 0x17EF98u;
    // 0x17ef98: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17ef9c: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x17EF9Cu;
    SET_GPR_U32(ctx, 31, 0x17EFA4u);
    ctx->pc = 0x17EFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF9Cu;
            // 0x17efa0: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFA4u; }
        if (ctx->pc != 0x17EFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFA4u; }
        if (ctx->pc != 0x17EFA4u) { return; }
    }
    ctx->pc = 0x17EFA4u;
    // 0x17efa4: 0xc0a0fa0  jal         func_283E80
    ctx->pc = 0x17EFA4u;
    SET_GPR_U32(ctx, 31, 0x17EFACu);
    ctx->pc = 0x17EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFA4u;
            // 0x17efa8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E80u;
    if (runtime->hasFunction(0x283E80u)) {
        auto targetFn = runtime->lookupFunction(0x283E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFACu; }
        if (ctx->pc != 0x17EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283E80_0x283e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFACu; }
        if (ctx->pc != 0x17EFACu) { return; }
    }
    ctx->pc = 0x17EFACu;
label_17efac:
    // 0x17efac: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x17efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x17efb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x17efb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17efb4: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x17efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x17efb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17efb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efbc: 0xae090014  sw          $t1, 0x14($s0)
    ctx->pc = 0x17efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 9));
    // 0x17efc0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x17efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17efc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17efc8: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x17efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17efcc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17efd0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x17efd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17efd4: 0xad48c790  sw          $t0, -0x3870($t2)
    ctx->pc = 0x17efd4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294952848), GPR_U32(ctx, 8));
    // 0x17efd8: 0x40f809  jalr        $v0
    ctx->pc = 0x17EFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17EFE0u);
        ctx->pc = 0x17EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFD8u;
            // 0x17efdc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17EFE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EFACu: goto label_17efac;
            case 0x17F010u: goto label_17f010;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17EFE0u; }
            if (ctx->pc != 0x17EFE0u) { return; }
        }
        }
    }
    ctx->pc = 0x17EFE0u;
    // 0x17efe0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17efe4: 0x3c03fedc  lui         $v1, 0xFEDC
    ctx->pc = 0x17efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65244 << 16));
    // 0x17efe8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x17efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x17efec: 0x3463ba98  ori         $v1, $v1, 0xBA98
    ctx->pc = 0x17efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47768);
    // 0x17eff0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17eff4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EFF4u;
    {
        const bool branch_taken_0x17eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17eff4) {
            ctx->pc = 0x17EFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFF4u;
            // 0x17eff8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F010u;
            goto label_17f010;
        }
    }
    ctx->pc = 0x17EFFCu;
    // 0x17effc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f000: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f004: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17f008: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x17f008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x17f00c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_17f010:
    // 0x17f010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17f010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f01c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F01Cu;
            // 0x17f020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EFACu: goto label_17efac;
            case 0x17F010u: goto label_17f010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F024u;
    // 0x17f024: 0x0  nop
    ctx->pc = 0x17f024u;
    // NOP
}

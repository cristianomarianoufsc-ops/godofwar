#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDB58
// Address: 0x1bdb58 - 0x1bdd20
void sub_001BDB58_0x1bdb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB58_0x1bdb58");
#endif

    ctx->pc = 0x1bdb58u;

    // 0x1bdb58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bdb5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bdb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bdb60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bdb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdb64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bdb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bdb68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bdb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bdb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdb70: 0xc05ea2e  jal         func_17A8B8
    ctx->pc = 0x1BDB70u;
    SET_GPR_U32(ctx, 31, 0x1BDB78u);
    ctx->pc = 0x1BDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB70u;
            // 0x1bdb74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8B8u;
    if (runtime->hasFunction(0x17A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB78u; }
        if (ctx->pc != 0x1BDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A8B8_0x17a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB78u; }
        if (ctx->pc != 0x1BDB78u) { return; }
    }
    ctx->pc = 0x1BDB78u;
    // 0x1bdb78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdb7c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bdb80: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bdb84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bdb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bdb88: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1bdb88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdb8c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1bdb90: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1bdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1bdb94: 0xc061c54  jal         func_187150
    ctx->pc = 0x1BDB94u;
    SET_GPR_U32(ctx, 31, 0x1BDB9Cu);
    ctx->pc = 0x1BDB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB94u;
            // 0x1bdb98: 0x24520038  addiu       $s2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187150u;
    if (runtime->hasFunction(0x187150u)) {
        auto targetFn = runtime->lookupFunction(0x187150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB9Cu; }
        if (ctx->pc != 0x1BDB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187150_0x187150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB9Cu; }
        if (ctx->pc != 0x1BDB9Cu) { return; }
    }
    ctx->pc = 0x1BDB9Cu;
    // 0x1bdb9c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x1bdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1bdba0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bdba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdba4: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1bdba4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1bdba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdbac: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x1bdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x1bdbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdbb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bdbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdbb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdbbc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bdbbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bdbc0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bdbc4: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDBCCu);
        ctx->pc = 0x1BDBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBC4u;
            // 0x1bdbc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDBCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDBE0u: goto label_1bdbe0;
            case 0x1BDC04u: goto label_1bdc04;
            case 0x1BDC88u: goto label_1bdc88;
            case 0x1BDCC8u: goto label_1bdcc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBCCu; }
            if (ctx->pc != 0x1BDBCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1BDBCCu;
    // 0x1bdbcc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1bdbd0: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x1bdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x1bdbd4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDBD4u;
    {
        const bool branch_taken_0x1bdbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbd4) {
            ctx->pc = 0x1BDBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBD4u;
            // 0x1bdbd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDBE0u;
            goto label_1bdbe0;
        }
    }
    ctx->pc = 0x1BDBDCu;
    // 0x1bdbdc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1bdbe0:
    // 0x1bdbe0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDBE0u;
    {
        const bool branch_taken_0x1bdbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBE0u;
            // 0x1bdbe4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbe0) {
            ctx->pc = 0x1BDC04u;
            goto label_1bdc04;
        }
    }
    ctx->pc = 0x1BDBE8u;
    // 0x1bdbe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbec: 0xc060aec  jal         func_182BB0
    ctx->pc = 0x1BDBECu;
    SET_GPR_U32(ctx, 31, 0x1BDBF4u);
    ctx->pc = 0x1BDBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBECu;
            // 0x1bdbf0: 0x8c441204  lw          $a0, 0x1204($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BB0u;
    if (runtime->hasFunction(0x182BB0u)) {
        auto targetFn = runtime->lookupFunction(0x182BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBF4u; }
        if (ctx->pc != 0x1BDBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BB0_0x182bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBF4u; }
        if (ctx->pc != 0x1BDBF4u) { return; }
    }
    ctx->pc = 0x1BDBF4u;
    // 0x1bdbf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDBF4u;
    {
        const bool branch_taken_0x1bdbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbf4) {
            ctx->pc = 0x1BDC04u;
            goto label_1bdc04;
        }
    }
    ctx->pc = 0x1BDBFCu;
    // 0x1bdbfc: 0xc08aeb8  jal         func_22BAE0
    ctx->pc = 0x1BDBFCu;
    SET_GPR_U32(ctx, 31, 0x1BDC04u);
    ctx->pc = 0x1BDC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBFCu;
            // 0x1bdc00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BAE0u;
    if (runtime->hasFunction(0x22BAE0u)) {
        auto targetFn = runtime->lookupFunction(0x22BAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC04u; }
        if (ctx->pc != 0x1BDC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BAE0_0x22bae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC04u; }
        if (ctx->pc != 0x1BDC04u) { return; }
    }
    ctx->pc = 0x1BDC04u;
label_1bdc04:
    // 0x1bdc04: 0xc06cc62  jal         func_1B3188
    ctx->pc = 0x1BDC04u;
    SET_GPR_U32(ctx, 31, 0x1BDC0Cu);
    ctx->pc = 0x1BDC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC04u;
            // 0x1bdc08: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3188u;
    if (runtime->hasFunction(0x1B3188u)) {
        auto targetFn = runtime->lookupFunction(0x1B3188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC0Cu; }
        if (ctx->pc != 0x1BDC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3188_0x1b3188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC0Cu; }
        if (ctx->pc != 0x1BDC0Cu) { return; }
    }
    ctx->pc = 0x1BDC0Cu;
    // 0x1bdc0c: 0xc05d656  jal         func_175958
    ctx->pc = 0x1BDC0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC14u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC14u; }
        if (ctx->pc != 0x1BDC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC14u; }
        if (ctx->pc != 0x1BDC14u) { return; }
    }
    ctx->pc = 0x1BDC14u;
    // 0x1bdc14: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1bdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1bdc18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc1c: 0x24715ab0  addiu       $s1, $v1, 0x5AB0
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
    // 0x1bdc20: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x1BDC20u;
    SET_GPR_U32(ctx, 31, 0x1BDC28u);
    ctx->pc = 0x1BDC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC20u;
            // 0x1bdc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC28u; }
        if (ctx->pc != 0x1BDC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC28u; }
        if (ctx->pc != 0x1BDC28u) { return; }
    }
    ctx->pc = 0x1BDC28u;
    // 0x1bdc28: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BDC28u;
    {
        const bool branch_taken_0x1bdc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC28u;
            // 0x1bdc2c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc28) {
            ctx->pc = 0x1BDCC8u;
            goto label_1bdcc8;
        }
    }
    ctx->pc = 0x1BDC30u;
    // 0x1bdc30: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bdc34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BDC34u;
    {
        const bool branch_taken_0x1bdc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc34) {
            ctx->pc = 0x1BDC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC34u;
            // 0x1bdc38: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDC88u;
            goto label_1bdc88;
        }
    }
    ctx->pc = 0x1BDC3Cu;
    // 0x1bdc3c: 0xc05d656  jal         func_175958
    ctx->pc = 0x1BDC3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC44u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC44u; }
        if (ctx->pc != 0x1BDC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC44u; }
        if (ctx->pc != 0x1BDC44u) { return; }
    }
    ctx->pc = 0x1BDC44u;
    // 0x1bdc44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc48: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x1BDC48u;
    SET_GPR_U32(ctx, 31, 0x1BDC50u);
    ctx->pc = 0x1BDC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC48u;
            // 0x1bdc4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC50u; }
        if (ctx->pc != 0x1BDC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC50u; }
        if (ctx->pc != 0x1BDC50u) { return; }
    }
    ctx->pc = 0x1BDC50u;
    // 0x1bdc50: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1bdc50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdc54: 0x2664e848  addiu       $a0, $s3, -0x17B8
    ctx->pc = 0x1bdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x1bdc58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bdc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdc64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdc68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdc6c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1bdc70: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1bdc74: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDC7Cu);
        ctx->pc = 0x1BDC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC74u;
            // 0x1bdc78: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDC7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDBE0u: goto label_1bdbe0;
            case 0x1BDC04u: goto label_1bdc04;
            case 0x1BDC88u: goto label_1bdc88;
            case 0x1BDCC8u: goto label_1bdcc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC7Cu; }
            if (ctx->pc != 0x1BDC7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BDC7Cu;
    // 0x1bdc7c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1bdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1bdc80: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bdc84: 0x0  nop
    ctx->pc = 0x1bdc84u;
    // NOP
label_1bdc88:
    // 0x1bdc88: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1bdc88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bdc8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bdc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bdc90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDC90u;
    {
        const bool branch_taken_0x1bdc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC90u;
            // 0x1bdc94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc90) {
            ctx->pc = 0x1BDCC8u;
            goto label_1bdcc8;
        }
    }
    ctx->pc = 0x1BDC98u;
    // 0x1bdc98: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bdc98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdc9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdca0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bdca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdcac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdcb0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdcb4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1bdcb8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bdcbc: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDCC4u);
        ctx->pc = 0x1BDCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCBCu;
            // 0x1bdcc0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDCC4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDBE0u: goto label_1bdbe0;
            case 0x1BDC04u: goto label_1bdc04;
            case 0x1BDC88u: goto label_1bdc88;
            case 0x1BDCC8u: goto label_1bdcc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCC4u; }
            if (ctx->pc != 0x1BDCC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDCC4u;
    // 0x1bdcc4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bdcc8:
    // 0x1bdcc8: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1bdccc: 0xc047ba2  jal         func_11EE88
    ctx->pc = 0x1BDCCCu;
    SET_GPR_U32(ctx, 31, 0x1BDCD4u);
    ctx->pc = 0x1BDCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCCCu;
            // 0x1bdcd0: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EE88u;
    if (runtime->hasFunction(0x11EE88u)) {
        auto targetFn = runtime->lookupFunction(0x11EE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCD4u; }
        if (ctx->pc != 0x1BDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ee88_0x11ef28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCD4u; }
        if (ctx->pc != 0x1BDCD4u) { return; }
    }
    ctx->pc = 0x1BDCD4u;
    // 0x1bdcd4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bdcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bdcd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcdc: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x1BDCDCu;
    SET_GPR_U32(ctx, 31, 0x1BDCE4u);
    ctx->pc = 0x1BDCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCDCu;
            // 0x1bdce0: 0x8c44cb94  lw          $a0, -0x346C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CE0u;
    if (runtime->hasFunction(0x1B7CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE4u; }
        if (ctx->pc != 0x1BDCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7CE0_0x1b7ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE4u; }
        if (ctx->pc != 0x1BDCE4u) { return; }
    }
    ctx->pc = 0x1BDCE4u;
    // 0x1bdce4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdce8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1bdcec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdcf0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bdcf4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bdcf8: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDD00u);
        ctx->pc = 0x1BDCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCF8u;
            // 0x1bdcfc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDD00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDBE0u: goto label_1bdbe0;
            case 0x1BDC04u: goto label_1bdc04;
            case 0x1BDC88u: goto label_1bdc88;
            case 0x1BDCC8u: goto label_1bdcc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD00u; }
            if (ctx->pc != 0x1BDD00u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDD00u;
    // 0x1bdd00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bdd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdd04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bdd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdd08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bdd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdd0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bdd0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd14: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD14u;
            // 0x1bdd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDBE0u: goto label_1bdbe0;
            case 0x1BDC04u: goto label_1bdc04;
            case 0x1BDC88u: goto label_1bdc88;
            case 0x1BDCC8u: goto label_1bdcc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDD1Cu;
    // 0x1bdd1c: 0x0  nop
    ctx->pc = 0x1bdd1cu;
    // NOP
}

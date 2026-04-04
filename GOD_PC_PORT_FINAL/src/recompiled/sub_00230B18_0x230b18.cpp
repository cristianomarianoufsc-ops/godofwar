#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230B18
// Address: 0x230b18 - 0x230d08
void sub_00230B18_0x230b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230B18_0x230b18");
#endif

    ctx->pc = 0x230b18u;

    // 0x230b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230b20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230b2c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x230b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x230b30: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x230B30u;
    {
        const bool branch_taken_0x230b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b30) {
            ctx->pc = 0x230B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230B30u;
            // 0x230b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230B40u;
            goto label_230b40;
        }
    }
    ctx->pc = 0x230B38u;
    // 0x230b38: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x230b3c: 0x0  nop
    ctx->pc = 0x230b3cu;
    // NOP
label_230b40:
    // 0x230b40: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x230B40u;
    {
        const bool branch_taken_0x230b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b40) {
            ctx->pc = 0x230B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230B40u;
            // 0x230b44: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230B80u;
            goto label_230b80;
        }
    }
    ctx->pc = 0x230B48u;
    // 0x230b48: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x230b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x230b4c: 0x0  nop
    ctx->pc = 0x230b4cu;
    // NOP
label_230b50:
    // 0x230b50: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x230b54: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x230b58: 0x8c637928  lw          $v1, 0x7928($v1)
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31016)));
    // 0x230b5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230b64: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x230B64u;
    SET_GPR_U32(ctx, 31, 0x230B6Cu);
    ctx->pc = 0x230B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230B64u;
            // 0x230b68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B6Cu; }
        if (ctx->pc != 0x230B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B6Cu; }
        if (ctx->pc != 0x230B6Cu) { return; }
    }
    ctx->pc = 0x230B6Cu;
    // 0x230b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b70: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x230B70u;
    {
        const bool branch_taken_0x230b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b70) {
            ctx->pc = 0x230B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230B70u;
            // 0x230b74: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230B50u;
            runtime->cooperativeGuestYield();
            goto label_230b50;
        }
    }
    ctx->pc = 0x230B78u;
    // 0x230b78: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x230b7c: 0x0  nop
    ctx->pc = 0x230b7cu;
    // NOP
label_230b80:
    // 0x230b80: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x230B80u;
    {
        const bool branch_taken_0x230b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B80u;
            // 0x230b84: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b80) {
            ctx->pc = 0x230BA8u;
            goto label_230ba8;
        }
    }
    ctx->pc = 0x230B88u;
    // 0x230b88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x230b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x230b8c: 0x8c427928  lw          $v0, 0x7928($v0)
    ctx->pc = 0x230b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31016)));
    // 0x230b90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230b98: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x230B98u;
    SET_GPR_U32(ctx, 31, 0x230BA0u);
    ctx->pc = 0x230B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230B98u;
            // 0x230b9c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BA0u; }
        if (ctx->pc != 0x230BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BA0u; }
        if (ctx->pc != 0x230BA0u) { return; }
    }
    ctx->pc = 0x230BA0u;
    // 0x230ba0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x230ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x230ba4: 0x0  nop
    ctx->pc = 0x230ba4u;
    // NOP
label_230ba8:
    // 0x230ba8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x230ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x230bac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x230BACu;
    {
        const bool branch_taken_0x230bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230BACu;
            // 0x230bb0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bac) {
            ctx->pc = 0x230BD0u;
            goto label_230bd0;
        }
    }
    ctx->pc = 0x230BB4u;
    // 0x230bb4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x230bb8: 0x8c427928  lw          $v0, 0x7928($v0)
    ctx->pc = 0x230bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31016)));
    // 0x230bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230bc4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x230BC4u;
    SET_GPR_U32(ctx, 31, 0x230BCCu);
    ctx->pc = 0x230BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230BC4u;
            // 0x230bc8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BCCu; }
        if (ctx->pc != 0x230BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BCCu; }
        if (ctx->pc != 0x230BCCu) { return; }
    }
    ctx->pc = 0x230BCCu;
    // 0x230bcc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x230bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_230bd0:
    // 0x230bd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x230BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230BDCu;
            // 0x230be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230BE4u;
    // 0x230be4: 0x0  nop
    ctx->pc = 0x230be4u;
    // NOP
    // 0x230be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230bec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230bfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c00: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230c04: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x230c08: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x230c0c: 0x40f809  jalr        $v0
    ctx->pc = 0x230C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230C14u);
        ctx->pc = 0x230C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C0Cu;
            // 0x230c10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230C14u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230C14u; }
            if (ctx->pc != 0x230C14u) { return; }
        }
        }
    }
    ctx->pc = 0x230C14u;
    // 0x230c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230C14u;
    {
        const bool branch_taken_0x230c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C14u;
            // 0x230c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c14) {
            ctx->pc = 0x230C30u;
            goto label_230c30;
        }
    }
    ctx->pc = 0x230C1Cu;
    // 0x230c1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230c20: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x230c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x230c24: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x230c28: 0x40f809  jalr        $v0
    ctx->pc = 0x230C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230C30u);
        ctx->pc = 0x230C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C28u;
            // 0x230c2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230C30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230C30u; }
            if (ctx->pc != 0x230C30u) { return; }
        }
        }
    }
    ctx->pc = 0x230C30u;
label_230c30:
    // 0x230c30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x230C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C3Cu;
            // 0x230c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230C44u;
    // 0x230c44: 0x0  nop
    ctx->pc = 0x230c44u;
    // NOP
    // 0x230c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230c4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230c5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c60: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230c64: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x230c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x230c68: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x230c6c: 0x40f809  jalr        $v0
    ctx->pc = 0x230C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230C74u);
        ctx->pc = 0x230C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C6Cu;
            // 0x230c70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230C74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230C74u; }
            if (ctx->pc != 0x230C74u) { return; }
        }
        }
    }
    ctx->pc = 0x230C74u;
    // 0x230c74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x230C74u;
    {
        const bool branch_taken_0x230c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C74u;
            // 0x230c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c74) {
            ctx->pc = 0x230CCCu;
            goto label_230ccc;
        }
    }
    ctx->pc = 0x230C7Cu;
    // 0x230c7c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x230c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x230c80: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x230c80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230c84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230c88: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x230c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x230c8c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x230c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x230c90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x230C90u;
    {
        const bool branch_taken_0x230c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C90u;
            // 0x230c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c90) {
            ctx->pc = 0x230CC0u;
            goto label_230cc0;
        }
    }
    ctx->pc = 0x230C98u;
    // 0x230c98: 0x3062fffa  andi        $v0, $v1, 0xFFFA
    ctx->pc = 0x230c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65530);
    // 0x230c9c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230ca0: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x230ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x230ca4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x230ca8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x230cac: 0x40f809  jalr        $v0
    ctx->pc = 0x230CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CB4u);
        ctx->pc = 0x230CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CACu;
            // 0x230cb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230CB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230CB4u; }
            if (ctx->pc != 0x230CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x230CB4u;
    // 0x230cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230CB4u;
    {
        const bool branch_taken_0x230cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CB4u;
            // 0x230cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cb4) {
            ctx->pc = 0x230CCCu;
            goto label_230ccc;
        }
    }
    ctx->pc = 0x230CBCu;
    // 0x230cbc: 0x0  nop
    ctx->pc = 0x230cbcu;
    // NOP
label_230cc0:
    // 0x230cc0: 0x3062fffa  andi        $v0, $v1, 0xFFFA
    ctx->pc = 0x230cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65530);
    // 0x230cc4: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x230cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x230cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230ccc:
    // 0x230ccc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x230CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CD8u;
            // 0x230cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230CE0u;
    // 0x230ce0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x230ce0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x230ce4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x230ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x230ce8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x230ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x230cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230cf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230cf8: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x230CF8u;
    {
        const bool branch_taken_0x230cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x230cf8) {
            ctx->pc = 0x230CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230CF8u;
            // 0x230cfc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230D00u;
            goto label_230d00;
        }
    }
    ctx->pc = 0x230D00u;
label_230d00:
    // 0x230d00: 0x3e00008  jr          $ra
    ctx->pc = 0x230D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B50u: goto label_230b50;
            case 0x230B80u: goto label_230b80;
            case 0x230BA8u: goto label_230ba8;
            case 0x230BD0u: goto label_230bd0;
            case 0x230C30u: goto label_230c30;
            case 0x230CC0u: goto label_230cc0;
            case 0x230CCCu: goto label_230ccc;
            case 0x230D00u: goto label_230d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230D08u;
}

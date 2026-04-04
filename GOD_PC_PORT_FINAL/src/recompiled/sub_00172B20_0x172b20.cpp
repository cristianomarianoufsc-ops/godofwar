#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172B20
// Address: 0x172b20 - 0x172cc8
void sub_00172B20_0x172b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172B20_0x172b20");
#endif

    ctx->pc = 0x172b20u;

    // 0x172b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172b24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b30: 0x920200c0  lbu         $v0, 0xC0($s0)
    ctx->pc = 0x172b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x172b34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172B34u;
    {
        const bool branch_taken_0x172b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B34u;
            // 0x172b38: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b34) {
            ctx->pc = 0x172B4Cu;
            goto label_172b4c;
        }
    }
    ctx->pc = 0x172B3Cu;
    // 0x172b3c: 0xc05c43a  jal         func_1710E8
    ctx->pc = 0x172B3Cu;
    SET_GPR_U32(ctx, 31, 0x172B44u);
    ctx->pc = 0x172B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172B3Cu;
            // 0x172b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710E8u;
    if (runtime->hasFunction(0x1710E8u)) {
        auto targetFn = runtime->lookupFunction(0x1710E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B44u; }
        if (ctx->pc != 0x172B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1710e8_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B44u; }
        if (ctx->pc != 0x172B44u) { return; }
    }
    ctx->pc = 0x172B44u;
    // 0x172b44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x172B44u;
    {
        const bool branch_taken_0x172b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B44u;
            // 0x172b48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b44) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B4Cu;
label_172b4c:
    // 0x172b4c: 0x8c43d8c0  lw          $v1, -0x2740($v0)
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957248)));
    // 0x172b50: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x172b54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x172b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x172b58: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172B58u;
    {
        const bool branch_taken_0x172b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x172B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B58u;
            // 0x172b5c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b58) {
            ctx->pc = 0x172B80u;
            goto label_172b80;
        }
    }
    ctx->pc = 0x172B60u;
label_172b60:
    // 0x172b60: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x172b64: 0xc05c43a  jal         func_1710E8
    ctx->pc = 0x172B64u;
    SET_GPR_U32(ctx, 31, 0x172B6Cu);
    ctx->pc = 0x172B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172B64u;
            // 0x172b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710E8u;
    if (runtime->hasFunction(0x1710E8u)) {
        auto targetFn = runtime->lookupFunction(0x1710E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B6Cu; }
        if (ctx->pc != 0x172B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1710e8_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B6Cu; }
        if (ctx->pc != 0x172B6Cu) { return; }
    }
    ctx->pc = 0x172B6Cu;
    // 0x172b6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x172b70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172b78: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172B78u;
    {
        const bool branch_taken_0x172b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x172B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B78u;
            // 0x172b7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b78) {
            ctx->pc = 0x172B60u;
            runtime->cooperativeGuestYield();
            goto label_172b60;
        }
    }
    ctx->pc = 0x172B80u;
label_172b80:
    // 0x172b80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172b84:
    // 0x172b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172b88: 0x3e00008  jr          $ra
    ctx->pc = 0x172B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B88u;
            // 0x172b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B60u: goto label_172b60;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172B90u;
    // 0x172b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172b94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x172b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172b9c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x172ba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172ba4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x172ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x172ba8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x172ba8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x172bac: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x172bb0: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x172bb4: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x172bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x172bb8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x172bbc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x172bc0: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x172bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x172bc4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x172bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x172bc8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x172bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x172bcc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x172bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x172bd0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x172bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x172bd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x172bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x172bd8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x172BD8u;
    SET_GPR_U32(ctx, 31, 0x172BE0u);
    ctx->pc = 0x172BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172BD8u;
            // 0x172bdc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BE0u; }
        if (ctx->pc != 0x172BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BE0u; }
        if (ctx->pc != 0x172BE0u) { return; }
    }
    ctx->pc = 0x172BE0u;
    // 0x172be0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172be8: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x172bec: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x172bf0: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x172bf4: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x172bf8: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x172bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x172bfc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x172bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x172c00: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x172c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x172c04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x172c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x172c08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c0c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x172c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x172c10: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x172c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x172c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c18: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x172c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x172c1c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x172c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x172c20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x172c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x172c24: 0xc08e222  jal         func_238888
    ctx->pc = 0x172C24u;
    SET_GPR_U32(ctx, 31, 0x172C2Cu);
    ctx->pc = 0x172C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C24u;
            // 0x172c28: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C2Cu; }
        if (ctx->pc != 0x172C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C2Cu; }
        if (ctx->pc != 0x172C2Cu) { return; }
    }
    ctx->pc = 0x172C2Cu;
    // 0x172c2c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x172c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c38: 0xc08e222  jal         func_238888
    ctx->pc = 0x172C38u;
    SET_GPR_U32(ctx, 31, 0x172C40u);
    ctx->pc = 0x172C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C38u;
            // 0x172c3c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C40u; }
        if (ctx->pc != 0x172C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C40u; }
        if (ctx->pc != 0x172C40u) { return; }
    }
    ctx->pc = 0x172C40u;
    // 0x172c40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x172c44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x172c48: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x172c48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x172c4c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x172c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x172c50: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x172c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x172c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x172c58: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x172c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172c5c: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x172c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x172c60: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x172c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x172c64: 0x2442e110  addiu       $v0, $v0, -0x1EF0
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
    // 0x172c68: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x172c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x172c6c: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x172c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x172c70: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x172c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x172c74: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x172c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x172c78: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x172c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x172c7c: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x172c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x172c80: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x172c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x172c84: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x172c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x172c88: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x172c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x172c8c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x172c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x172c90: 0xc08f3e4  jal         func_23CF90
    ctx->pc = 0x172C90u;
    SET_GPR_U32(ctx, 31, 0x172C98u);
    ctx->pc = 0x172C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C90u;
            // 0x172c94: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF90u;
    if (runtime->hasFunction(0x23CF90u)) {
        auto targetFn = runtime->lookupFunction(0x23CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C98u; }
        if (ctx->pc != 0x172C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf90_0x23cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C98u; }
        if (ctx->pc != 0x172C98u) { return; }
    }
    ctx->pc = 0x172C98u;
    // 0x172c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ca0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x172ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x172CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172CA4u;
            // 0x172ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B60u: goto label_172b60;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172CACu;
    // 0x172cac: 0x0  nop
    ctx->pc = 0x172cacu;
    // NOP
    // 0x172cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x172CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B60u: goto label_172b60;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172CB8u;
    // 0x172cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x172CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B60u: goto label_172b60;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172CC0u;
    // 0x172cc0: 0xacc000dc  sw          $zero, 0xDC($a2)
    ctx->pc = 0x172cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 0));
    // 0x172cc4: 0x0  nop
    ctx->pc = 0x172cc4u;
    // NOP
}

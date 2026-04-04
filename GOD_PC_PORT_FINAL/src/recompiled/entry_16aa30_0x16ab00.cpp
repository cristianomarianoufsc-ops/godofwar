#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16aa30
// Address: 0x16aa30 - 0x16ab00
void entry_16aa30_0x16ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16aa30_0x16ab00");
#endif

    ctx->pc = 0x16aa30u;

    // 0x16aa30: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16aa30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa34: 0x8d020814  lw          $v0, 0x814($t0)
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2068)));
    // 0x16aa38: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16AA38u;
    {
        const bool branch_taken_0x16aa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA38u;
            // 0x16aa3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa38) {
            ctx->pc = 0x16AAF4u;
            goto label_16aaf4;
        }
    }
    ctx->pc = 0x16AA40u;
    // 0x16aa40: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16aa44: 0x0  nop
    ctx->pc = 0x16aa44u;
    // NOP
label_16aa48:
    // 0x16aa48: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x16aa48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16aa4c: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x16aa50: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x16aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16aa54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16aa58: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16AA58u;
    {
        const bool branch_taken_0x16aa58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA58u;
            // 0x16aa5c: 0x3c023000  lui         $v0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa58) {
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AA60u;
    // 0x16aa60: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x16aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16aa64: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x16aa68: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x16aa6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16aa70: 0x8d67f168  lw          $a3, -0xE98($t3)
    ctx->pc = 0x16aa70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294963560)));
    // 0x16aa74: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x16aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x16aa78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16AA78u;
    {
        const bool branch_taken_0x16aa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA78u;
            // 0x16aa7c: 0x8c8a0008  lw          $t2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa78) {
            ctx->pc = 0x16AAA4u;
            goto label_16aaa4;
        }
    }
    ctx->pc = 0x16AA80u;
    // 0x16aa80: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x16aa84: 0x0  nop
    ctx->pc = 0x16aa84u;
    // NOP
label_16aa88:
    // 0x16aa88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16aa8c: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x16aa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x16aa90: 0x0  nop
    ctx->pc = 0x16aa90u;
    // NOP
    // 0x16aa94: 0x0  nop
    ctx->pc = 0x16aa94u;
    // NOP
    // 0x16aa98: 0x0  nop
    ctx->pc = 0x16aa98u;
    // NOP
    // 0x16aa9c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AA9Cu;
    {
        const bool branch_taken_0x16aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa9c) {
            ctx->pc = 0x16AAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA9Cu;
            // 0x16aaa0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AA88u;
            runtime->cooperativeGuestYield();
            goto label_16aa88;
        }
    }
    ctx->pc = 0x16AAA4u;
label_16aaa4:
    // 0x16aaa4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x16aaa8: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16aaac: 0xacea0004  sw          $t2, 0x4($a3)
    ctx->pc = 0x16aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x16aab0: 0x3c064a00  lui         $a2, 0x4A00
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18944 << 16));
    // 0x16aab4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x16aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x16aab8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16aabc: 0xad62f168  sw          $v0, -0xE98($t3)
    ctx->pc = 0x16aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294963560), GPR_U32(ctx, 2));
    // 0x16aac0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16aac4: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x16aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16aac8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16aacc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16aaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16aad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16aad4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16aad8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x16aad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x16aadc: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x16aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
label_16aae0:
    // 0x16aae0: 0x8d020814  lw          $v0, 0x814($t0)
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2068)));
    // 0x16aae4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x16aae8: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x16aae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16aaec: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x16AAECu;
    {
        const bool branch_taken_0x16aaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAECu;
            // 0x16aaf0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaec) {
            ctx->pc = 0x16AA48u;
            runtime->cooperativeGuestYield();
            goto label_16aa48;
        }
    }
    ctx->pc = 0x16AAF4u;
label_16aaf4:
    // 0x16aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AA48u: goto label_16aa48;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AAA4u: goto label_16aaa4;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AAF4u: goto label_16aaf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AAFCu;
    // 0x16aafc: 0x0  nop
    ctx->pc = 0x16aafcu;
    // NOP
}

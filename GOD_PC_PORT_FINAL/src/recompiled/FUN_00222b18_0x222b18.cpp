#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00222b18
// Address: 0x222b18 - 0x222c88
void FUN_00222b18_0x222b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00222b18_0x222b18");
#endif

    ctx->pc = 0x222b18u;

    // 0x222b18: 0x3c0a002c  lui         $t2, 0x2C
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)44 << 16));
    // 0x222b1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222b20: 0x25427790  addiu       $v0, $t2, 0x7790
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 30608));
    // 0x222b24: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x222b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x222b28: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x222B28u;
    {
        const bool branch_taken_0x222b28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B28u;
            // 0x222b2c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b28) {
            ctx->pc = 0x222B54u;
            goto label_222b54;
        }
    }
    ctx->pc = 0x222B30u;
    // 0x222b30: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x222b34: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x222B34u;
    {
        const bool branch_taken_0x222b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b34) {
            ctx->pc = 0x222B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222B34u;
            // 0x222b38: 0x8c850034  lw          $a1, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B58u;
            goto label_222b58;
        }
    }
    ctx->pc = 0x222B3Cu;
    // 0x222b3c: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_222b40:
    // 0x222b40: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B40u;
    {
        const bool branch_taken_0x222b40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b40) {
            ctx->pc = 0x222B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222B40u;
            // 0x222b44: 0x8c850034  lw          $a1, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B58u;
            goto label_222b58;
        }
    }
    ctx->pc = 0x222B48u;
    // 0x222b48: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x222b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x222b4c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x222B4Cu;
    {
        const bool branch_taken_0x222b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222b4c) {
            ctx->pc = 0x222B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222B4Cu;
            // 0x222b50: 0x8cc60018  lw          $a2, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B40u;
            runtime->cooperativeGuestYield();
            goto label_222b40;
        }
    }
    ctx->pc = 0x222B54u;
label_222b54:
    // 0x222b54: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_222b58:
    // 0x222b58: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x222b5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222b60: 0x8d23d2ac  lw          $v1, -0x2D54($t1)
    ctx->pc = 0x222b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294955692)));
    // 0x222b64: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x222b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x222b68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x222b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222b6c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x222b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x222b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222b74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222b78: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x222B78u;
    {
        const bool branch_taken_0x222b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x222B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B78u;
            // 0x222b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b78) {
            ctx->pc = 0x222B84u;
            goto label_222b84;
        }
    }
    ctx->pc = 0x222B80u;
    // 0x222b80: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x222b80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_222b84:
    // 0x222b84: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x222B84u;
    {
        const bool branch_taken_0x222b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B84u;
            // 0x222b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b84) {
            ctx->pc = 0x222C2Cu;
            goto label_222c2c;
        }
    }
    ctx->pc = 0x222B8Cu;
    // 0x222b8c: 0x10c8003c  beq         $a2, $t0, . + 4 + (0x3C << 2)
    ctx->pc = 0x222B8Cu;
    {
        const bool branch_taken_0x222b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x222B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B8Cu;
            // 0x222b90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b8c) {
            ctx->pc = 0x222C80u;
            goto label_222c80;
        }
    }
    ctx->pc = 0x222B94u;
    // 0x222b94: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x222B94u;
    {
        const bool branch_taken_0x222b94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B94u;
            // 0x222b98: 0x25427790  addiu       $v0, $t2, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 30608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b94) {
            ctx->pc = 0x222C30u;
            goto label_222c30;
        }
    }
    ctx->pc = 0x222B9Cu;
    // 0x222b9c: 0x8cc200f4  lw          $v0, 0xF4($a2)
    ctx->pc = 0x222b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x222ba0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x222ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x222ba4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x222BA4u;
    {
        const bool branch_taken_0x222ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BA4u;
            // 0x222ba8: 0x25427790  addiu       $v0, $t2, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 30608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ba4) {
            ctx->pc = 0x222C30u;
            goto label_222c30;
        }
    }
    ctx->pc = 0x222BACu;
    // 0x222bac: 0x8cc300fc  lw          $v1, 0xFC($a2)
    ctx->pc = 0x222bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x222bb0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x222BB0u;
    {
        const bool branch_taken_0x222bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BB0u;
            // 0x222bb4: 0x30820007  andi        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bb0) {
            ctx->pc = 0x222BF4u;
            goto label_222bf4;
        }
    }
    ctx->pc = 0x222BB8u;
    // 0x222bb8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x222bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x222bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222bc0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x222BC0u;
    {
        const bool branch_taken_0x222bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x222BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BC0u;
            // 0x222bc4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bc0) {
            ctx->pc = 0x222BF0u;
            goto label_222bf0;
        }
    }
    ctx->pc = 0x222BC8u;
label_222bc8:
    // 0x222bc8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x222bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x222bcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x222bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x222bd0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x222bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x222bd4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x222BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222BD4u;
            // 0x222bd8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222BF0u;
            goto label_222bf0;
        }
    }
    ctx->pc = 0x222BDCu;
    // 0x222bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222be0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x222be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222be4: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x222BE4u;
    {
        const bool branch_taken_0x222be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BE4u;
            // 0x222be8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222be4) {
            ctx->pc = 0x222BC8u;
            runtime->cooperativeGuestYield();
            goto label_222bc8;
        }
    }
    ctx->pc = 0x222BECu;
    // 0x222bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x222becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222bf0:
    // 0x222bf0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x222bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_222bf4:
    // 0x222bf4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x222BF4u;
    {
        const bool branch_taken_0x222bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BF4u;
            // 0x222bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bf4) {
            ctx->pc = 0x222C28u;
            goto label_222c28;
        }
    }
    ctx->pc = 0x222BFCu;
    // 0x222bfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x222bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222c00: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x222c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x222c04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x222c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222c08: 0x8d23d2ac  lw          $v1, -0x2D54($t1)
    ctx->pc = 0x222c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294955692)));
    // 0x222c0c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x222c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222c14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222c18: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222C18u;
    {
        const bool branch_taken_0x222c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x222C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C18u;
            // 0x222c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c18) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222C20u;
    // 0x222c20: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_222c24:
    // 0x222c24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x222c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_222c28:
    // 0x222c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x222c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222c2c:
    // 0x222c2c: 0x25427790  addiu       $v0, $t2, 0x7790
    ctx->pc = 0x222c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 30608));
label_222c30:
    // 0x222c30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222c34: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x222c38: 0x8c635e70  lw          $v1, 0x5E70($v1)
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24176)));
    // 0x222c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222c40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222c44: 0x2ce30001  sltiu       $v1, $a3, 0x1
    ctx->pc = 0x222c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x222c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c4c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222C4Cu;
    {
        const bool branch_taken_0x222c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C4Cu;
            // 0x222c50: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c4c) {
            ctx->pc = 0x222C58u;
            goto label_222c58;
        }
    }
    ctx->pc = 0x222C54u;
    // 0x222c54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222c58:
    // 0x222c58: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x222C58u;
    {
        const bool branch_taken_0x222c58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C58u;
            // 0x222c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c58) {
            ctx->pc = 0x222C64u;
            goto label_222c64;
        }
    }
    ctx->pc = 0x222C60u;
    // 0x222c60: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x222c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_222c64:
    // 0x222c64: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x222C64u;
    {
        const bool branch_taken_0x222c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222c64) {
            ctx->pc = 0x222C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222C64u;
            // 0x222c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222C80u;
            goto label_222c80;
        }
    }
    ctx->pc = 0x222C6Cu;
    // 0x222c6c: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x222C6Cu;
    {
        const bool branch_taken_0x222c6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x222c6c) {
            ctx->pc = 0x222C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222C6Cu;
            // 0x222c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222C80u;
            goto label_222c80;
        }
    }
    ctx->pc = 0x222C74u;
    // 0x222c74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222C74u;
    {
        const bool branch_taken_0x222c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C74u;
            // 0x222c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c74) {
            ctx->pc = 0x222C80u;
            goto label_222c80;
        }
    }
    ctx->pc = 0x222C7Cu;
    // 0x222c7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x222c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_222c80:
    // 0x222c80: 0x3e00008  jr          $ra
    ctx->pc = 0x222C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C80u;
            // 0x222c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222B40u: goto label_222b40;
            case 0x222B54u: goto label_222b54;
            case 0x222B58u: goto label_222b58;
            case 0x222B84u: goto label_222b84;
            case 0x222BC8u: goto label_222bc8;
            case 0x222BF0u: goto label_222bf0;
            case 0x222BF4u: goto label_222bf4;
            case 0x222C24u: goto label_222c24;
            case 0x222C28u: goto label_222c28;
            case 0x222C2Cu: goto label_222c2c;
            case 0x222C30u: goto label_222c30;
            case 0x222C58u: goto label_222c58;
            case 0x222C64u: goto label_222c64;
            case 0x222C80u: goto label_222c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222C88u;
}

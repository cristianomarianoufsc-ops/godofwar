#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159B28
// Address: 0x159b28 - 0x159d50
void sub_00159B28_0x159b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159B28_0x159b28");
#endif

    ctx->pc = 0x159b28u;

    // 0x159b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159b2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x159b30: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x159b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x159b34: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x159b34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159b38: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x159B38u;
    {
        const bool branch_taken_0x159b38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B38u;
            // 0x159b3c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b38) {
            ctx->pc = 0x159C44u;
            goto label_159c44;
        }
    }
    ctx->pc = 0x159B40u;
    // 0x159b40: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x159b44: 0x0  nop
    ctx->pc = 0x159b44u;
    // NOP
label_159b48:
    // 0x159b48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x159b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x159b4c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x159b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x159b50: 0x82c021  addu        $t8, $a0, $v0
    ctx->pc = 0x159b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x159b54: 0x97100002  lhu         $s0, 0x2($t8)
    ctx->pc = 0x159b54u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x159b58: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x159B58u;
    {
        const bool branch_taken_0x159b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B58u;
            // 0x159b5c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b58) {
            ctx->pc = 0x159C34u;
            goto label_159c34;
        }
    }
    ctx->pc = 0x159B60u;
    // 0x159b60: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x159b64: 0x0  nop
    ctx->pc = 0x159b64u;
    // NOP
label_159b68:
    // 0x159b68: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x159b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x159b6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x159b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159b70: 0x3026021  addu        $t4, $t8, $v0
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x159b74: 0x8d990004  lw          $t9, 0x4($t4)
    ctx->pc = 0x159b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x159b78: 0x1320002a  beqz        $t9, . + 4 + (0x2A << 2)
    ctx->pc = 0x159B78u;
    {
        const bool branch_taken_0x159b78 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B78u;
            // 0x159b7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b78) {
            ctx->pc = 0x159C24u;
            goto label_159c24;
        }
    }
    ctx->pc = 0x159B80u;
    // 0x159b80: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x159b84: 0x0  nop
    ctx->pc = 0x159b84u;
    // NOP
label_159b88:
    // 0x159b88: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x159b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x159b8c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x159b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x159b90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x159b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x159b94: 0x1823821  addu        $a3, $t4, $v0
    ctx->pc = 0x159b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x159b98: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x159b98u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159b9c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x159B9Cu;
    {
        const bool branch_taken_0x159b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x159BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B9Cu;
            // 0x159ba0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b9c) {
            ctx->pc = 0x159BB4u;
            goto label_159bb4;
        }
    }
    ctx->pc = 0x159BA4u;
    // 0x159ba4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159BA4u;
    {
        const bool branch_taken_0x159ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x159BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BA4u;
            // 0x159ba8: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba4) {
            ctx->pc = 0x159BB4u;
            goto label_159bb4;
        }
    }
    ctx->pc = 0x159BACu;
    // 0x159bac: 0x54a2001a  bnel        $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x159BACu;
    {
        const bool branch_taken_0x159bac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x159bac) {
            ctx->pc = 0x159BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BACu;
            // 0x159bb0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159C18u;
            goto label_159c18;
        }
    }
    ctx->pc = 0x159BB4u;
label_159bb4:
    // 0x159bb4: 0x90e30018  lbu         $v1, 0x18($a3)
    ctx->pc = 0x159bb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x159bb8: 0x24ea0020  addiu       $t2, $a3, 0x20
    ctx->pc = 0x159bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x159bbc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x159bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x159bc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bc4: 0x627018  mult        $t6, $v1, $v0
    ctx->pc = 0x159bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x159bc8: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x159BC8u;
    {
        const bool branch_taken_0x159bc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BC8u;
            // 0x159bcc: 0x8ce80004  lw          $t0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bc8) {
            ctx->pc = 0x159C14u;
            goto label_159c14;
        }
    }
    ctx->pc = 0x159BD0u;
label_159bd0:
    // 0x159bd0: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x159BD0u;
    {
        const bool branch_taken_0x159bd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BD0u;
            // 0x159bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd0) {
            ctx->pc = 0x159BFCu;
            goto label_159bfc;
        }
    }
    ctx->pc = 0x159BD8u;
    // 0x159bd8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x159bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bdc: 0x0  nop
    ctx->pc = 0x159bdcu;
    // NOP
label_159be0:
    // 0x159be0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x159be4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x159be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x159be8: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x159be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x159bec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x159becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x159bf0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x159bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x159bf4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x159BF4u;
    {
        const bool branch_taken_0x159bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BF4u;
            // 0x159bf8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bf4) {
            ctx->pc = 0x159BE0u;
            runtime->cooperativeGuestYield();
            goto label_159be0;
        }
    }
    ctx->pc = 0x159BFCu;
label_159bfc:
    // 0x159bfc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x159bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x159c00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x159c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x159c04: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x159c08: 0x12e102b  sltu        $v0, $t1, $t6
    ctx->pc = 0x159c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x159c0c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x159C0Cu;
    {
        const bool branch_taken_0x159c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159c0c) {
            ctx->pc = 0x159BD0u;
            runtime->cooperativeGuestYield();
            goto label_159bd0;
        }
    }
    ctx->pc = 0x159C14u;
label_159c14:
    // 0x159c14: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x159c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_159c18:
    // 0x159c18: 0x179102b  sltu        $v0, $t3, $t9
    ctx->pc = 0x159c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x159c1c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x159C1Cu;
    {
        const bool branch_taken_0x159c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C1Cu;
            // 0x159c20: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c1c) {
            ctx->pc = 0x159B88u;
            runtime->cooperativeGuestYield();
            goto label_159b88;
        }
    }
    ctx->pc = 0x159C24u;
label_159c24:
    // 0x159c24: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x159c28: 0x1b0102b  sltu        $v0, $t5, $s0
    ctx->pc = 0x159c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x159c2c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x159C2Cu;
    {
        const bool branch_taken_0x159c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C2Cu;
            // 0x159c30: 0xd1080  sll         $v0, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c2c) {
            ctx->pc = 0x159B68u;
            runtime->cooperativeGuestYield();
            goto label_159b68;
        }
    }
    ctx->pc = 0x159C34u;
label_159c34:
    // 0x159c34: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x159c34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x159c38: 0x1f1102b  sltu        $v0, $t7, $s1
    ctx->pc = 0x159c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159c3c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x159C3Cu;
    {
        const bool branch_taken_0x159c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C3Cu;
            // 0x159c40: 0xf1080  sll         $v0, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c3c) {
            ctx->pc = 0x159B48u;
            runtime->cooperativeGuestYield();
            goto label_159b48;
        }
    }
    ctx->pc = 0x159C44u;
label_159c44:
    // 0x159c44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159c48: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x159c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x159C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C4Cu;
            // 0x159c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159B48u: goto label_159b48;
            case 0x159B68u: goto label_159b68;
            case 0x159B88u: goto label_159b88;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BE0u: goto label_159be0;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C24u: goto label_159c24;
            case 0x159C34u: goto label_159c34;
            case 0x159C44u: goto label_159c44;
            case 0x159D38u: goto label_159d38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159C54u;
    // 0x159c54: 0x0  nop
    ctx->pc = 0x159c54u;
    // NOP
    // 0x159c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159c5c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x159c60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x159c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159c64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x159c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159c68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x159c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x159c74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x159c78: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x159c7c: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x159c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159c84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x159c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159c88: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x159c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 3));
    // 0x159c8c: 0xaca04994  sw          $zero, 0x4994($a1)
    ctx->pc = 0x159c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18836), GPR_U32(ctx, 0));
    // 0x159c90: 0xc0a51d8  jal         func_294760
    ctx->pc = 0x159C90u;
    SET_GPR_U32(ctx, 31, 0x159C98u);
    ctx->pc = 0x159C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C90u;
            // 0x159c94: 0xae324990  sw          $s2, 0x4990($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 18832), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294760u;
    if (runtime->hasFunction(0x294760u)) {
        auto targetFn = runtime->lookupFunction(0x294760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C98u; }
        if (ctx->pc != 0x159C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294760_0x294760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C98u; }
        if (ctx->pc != 0x159C98u) { return; }
    }
    ctx->pc = 0x159C98u;
    // 0x159c98: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x159C98u;
    SET_GPR_U32(ctx, 31, 0x159CA0u);
    ctx->pc = 0x159C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C98u;
            // 0x159c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CA0u; }
        if (ctx->pc != 0x159CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CA0u; }
        if (ctx->pc != 0x159CA0u) { return; }
    }
    ctx->pc = 0x159CA0u;
    // 0x159ca0: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x159ca4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x159ca8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x159cac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x159cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x159cb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x159cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x159cb4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x159cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159cc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x159cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x159cc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x159cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159cc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x159ccc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x159cd0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x159cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x159cd4: 0x40f809  jalr        $v0
    ctx->pc = 0x159CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159CDCu);
        ctx->pc = 0x159CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CD4u;
            // 0x159cd8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x159CDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159B48u: goto label_159b48;
            case 0x159B68u: goto label_159b68;
            case 0x159B88u: goto label_159b88;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BE0u: goto label_159be0;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C24u: goto label_159c24;
            case 0x159C34u: goto label_159c34;
            case 0x159C44u: goto label_159c44;
            case 0x159D38u: goto label_159d38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159CDCu; }
            if (ctx->pc != 0x159CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x159CDCu;
    // 0x159cdc: 0xc0a51be  jal         func_2946F8
    ctx->pc = 0x159CDCu;
    SET_GPR_U32(ctx, 31, 0x159CE4u);
    ctx->pc = 0x159CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159CDCu;
            // 0x159ce0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2946F8u;
    if (runtime->hasFunction(0x2946F8u)) {
        auto targetFn = runtime->lookupFunction(0x2946F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CE4u; }
        if (ctx->pc != 0x159CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002946F8_0x2946f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CE4u; }
        if (ctx->pc != 0x159CE4u) { return; }
    }
    ctx->pc = 0x159CE4u;
    // 0x159ce4: 0x8e244990  lw          $a0, 0x4990($s1)
    ctx->pc = 0x159ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18832)));
    // 0x159ce8: 0x10920013  beq         $a0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x159CE8u;
    {
        const bool branch_taken_0x159ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x159CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CE8u;
            // 0x159cec: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce8) {
            ctx->pc = 0x159D38u;
            goto label_159d38;
        }
    }
    ctx->pc = 0x159CF0u;
    // 0x159cf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x159cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x159cf4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x159cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x159cf8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x159cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x159cfc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x159cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x159d00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x159d04: 0x8e254990  lw          $a1, 0x4990($s1)
    ctx->pc = 0x159d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18832)));
    // 0x159d08: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x159d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x159d0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x159d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x159d10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x159d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x159d14: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x159d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x159d18: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x159d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x159d1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x159d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x159d20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x159d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x159d24: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x159d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x159d28: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x159d2c: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x159d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x159d30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x159d34: 0x0  nop
    ctx->pc = 0x159d34u;
    // NOP
label_159d38:
    // 0x159d38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x159d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159d3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159d40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x159d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d48: 0x3e00008  jr          $ra
    ctx->pc = 0x159D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D48u;
            // 0x159d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159B48u: goto label_159b48;
            case 0x159B68u: goto label_159b68;
            case 0x159B88u: goto label_159b88;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BE0u: goto label_159be0;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C24u: goto label_159c24;
            case 0x159C34u: goto label_159c34;
            case 0x159C44u: goto label_159c44;
            case 0x159D38u: goto label_159d38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159D50u;
}

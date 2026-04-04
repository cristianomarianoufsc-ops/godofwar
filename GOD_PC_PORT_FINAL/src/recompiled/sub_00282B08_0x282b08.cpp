#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282B08
// Address: 0x282b08 - 0x282ca0
void sub_00282B08_0x282b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282B08_0x282b08");
#endif

    ctx->pc = 0x282b08u;

    // 0x282b08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x282b0c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282b10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x282b14: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x282b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282b18: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x282b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x282b1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282b20: 0x24712748  addiu       $s1, $v1, 0x2748
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x282b24: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x282b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x282b28: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x282b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x282b2c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x282b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x282b30: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282b34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x282b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282b3c: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x282b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x282b40: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x282b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x282b44: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x282b44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b48: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282b4c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x282b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b50: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282B50u;
    SET_GPR_U32(ctx, 31, 0x282B58u);
    ctx->pc = 0x282B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282B50u;
            // 0x282b54: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B58u; }
        if (ctx->pc != 0x282B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B58u; }
        if (ctx->pc != 0x282B58u) { return; }
    }
    ctx->pc = 0x282B58u;
    // 0x282b58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282b5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282B5Cu;
    {
        const bool branch_taken_0x282b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B5Cu;
            // 0x282b60: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b5c) {
            ctx->pc = 0x282B6Cu;
            goto label_282b6c;
        }
    }
    ctx->pc = 0x282B64u;
    // 0x282b64: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x282B64u;
    {
        const bool branch_taken_0x282b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B64u;
            // 0x282b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b64) {
            ctx->pc = 0x282C70u;
            goto label_282c70;
        }
    }
    ctx->pc = 0x282B6Cu;
label_282b6c:
    // 0x282b6c: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282b70: 0x1925818  mult        $t3, $t4, $s2
    ctx->pc = 0x282b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x282b74: 0x2d622001  sltiu       $v0, $t3, 0x2001
    ctx->pc = 0x282b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x282b78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282B78u;
    {
        const bool branch_taken_0x282b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B78u;
            // 0x282b7c: 0x2303021  addu        $a2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b78) {
            ctx->pc = 0x282B94u;
            goto label_282b94;
        }
    }
    ctx->pc = 0x282B80u;
    // 0x282b80: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x282b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x282b84: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x282B84u;
    SET_GPR_U32(ctx, 31, 0x282B8Cu);
    ctx->pc = 0x282B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282B84u;
            // 0x282b88: 0x248452c0  addiu       $a0, $a0, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B8Cu; }
        if (ctx->pc != 0x282B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B8Cu; }
        if (ctx->pc != 0x282B8Cu) { return; }
    }
    ctx->pc = 0x282B8Cu;
    // 0x282b8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x282B8Cu;
    {
        const bool branch_taken_0x282b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B8Cu;
            // 0x282b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b8c) {
            ctx->pc = 0x282C70u;
            goto label_282c70;
        }
    }
    ctx->pc = 0x282B94u;
label_282b94:
    // 0x282b94: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x282b94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x282b98: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x282b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b9c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x282b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x282ba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba8: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x282ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x282bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bb0: 0x8c890020  lw          $t1, 0x20($a0)
    ctx->pc = 0x282bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x282bb4: 0x8caa001c  lw          $t2, 0x1C($a1)
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x282bb8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x282bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x282bbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x282bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bc0: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x282bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x282bc4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x282bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bc8: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x282bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282bcc: 0xae7627c0  sw          $s6, 0x27C0($s3)
    ctx->pc = 0x282bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10176), GPR_U32(ctx, 22));
    // 0x282bd0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x282bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x282bd4: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x282bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 12));
    // 0x282bd8: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x282bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x282bdc: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x282bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
    // 0x282be0: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x282be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x282be4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x282be4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282be8: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x282be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x282bec: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x282becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x282bf0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x282bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x282bf4: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x282bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x282bf8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x282bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x282bfc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x282BFCu;
    SET_GPR_U32(ctx, 31, 0x282C04u);
    ctx->pc = 0x282C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BFCu;
            // 0x282c00: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C04u; }
        if (ctx->pc != 0x282C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C04u; }
        if (ctx->pc != 0x282C04u) { return; }
    }
    ctx->pc = 0x282C04u;
    // 0x282c04: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x282c04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x282c08: 0x24022080  addiu       $v0, $zero, 0x2080
    ctx->pc = 0x282c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x282c0c: 0x26104840  addiu       $s0, $s0, 0x4840
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x282c10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x282c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c1c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282C1Cu;
    SET_GPR_U32(ctx, 31, 0x282C24u);
    ctx->pc = 0x282C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C1Cu;
            // 0x282c20: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C24u; }
        if (ctx->pc != 0x282C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C24u; }
        if (ctx->pc != 0x282C24u) { return; }
    }
    ctx->pc = 0x282C24u;
    // 0x282c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c28: 0xc0a5118  jal         func_294460
    ctx->pc = 0x282C28u;
    SET_GPR_U32(ctx, 31, 0x282C30u);
    ctx->pc = 0x282C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C28u;
            // 0x282c2c: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C30u; }
        if (ctx->pc != 0x282C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C30u; }
        if (ctx->pc != 0x282C30u) { return; }
    }
    ctx->pc = 0x282C30u;
    // 0x282c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282c34: 0xae223624  sw          $v0, 0x3624($s1)
    ctx->pc = 0x282c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13860), GPR_U32(ctx, 2));
    // 0x282c38: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x282c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x282c3c: 0x0  nop
    ctx->pc = 0x282c3cu;
    // NOP
label_282c40:
    // 0x282c40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c44: 0x8e253624  lw          $a1, 0x3624($s1)
    ctx->pc = 0x282c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13860)));
    // 0x282c48: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x282c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282c4c: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x282C4Cu;
    SET_GPR_U32(ctx, 31, 0x282C54u);
    ctx->pc = 0x282C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C4Cu;
            // 0x282c50: 0x26c82118  addiu       $t0, $s6, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C54u; }
        if (ctx->pc != 0x282C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C54u; }
        if (ctx->pc != 0x282C54u) { return; }
    }
    ctx->pc = 0x282C54u;
    // 0x282c54: 0x5455fffa  bnel        $v0, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x282C54u;
    {
        const bool branch_taken_0x282c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x282c54) {
            ctx->pc = 0x282C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282C54u;
            // 0x282c58: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282C40u;
            runtime->cooperativeGuestYield();
            goto label_282c40;
        }
    }
    ctx->pc = 0x282C5Cu;
    // 0x282c5c: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x282C5Cu;
    SET_GPR_U32(ctx, 31, 0x282C64u);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C64u; }
        if (ctx->pc != 0x282C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C64u; }
        if (ctx->pc != 0x282C64u) { return; }
    }
    ctx->pc = 0x282C64u;
    // 0x282c64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x282c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c6c: 0x243100b  movn        $v0, $s2, $v1
    ctx->pc = 0x282c6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_282c70:
    // 0x282c70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x282c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282c74: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x282c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282c78: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x282c78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282c7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282c80: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282c84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282c88: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282c8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282c90: 0x3e00008  jr          $ra
    ctx->pc = 0x282C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C90u;
            // 0x282c94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282B6Cu: goto label_282b6c;
            case 0x282B94u: goto label_282b94;
            case 0x282C40u: goto label_282c40;
            case 0x282C70u: goto label_282c70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282C98u;
    // 0x282c98: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x282c9c: 0x0  nop
    ctx->pc = 0x282c9cu;
    // NOP
}

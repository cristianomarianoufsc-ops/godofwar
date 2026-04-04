#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECC38
// Address: 0x1ecc38 - 0x1ece40
void sub_001ECC38_0x1ecc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECC38_0x1ecc38");
#endif

    ctx->pc = 0x1ecc38u;

label_1ecc38:
    // 0x1ecc38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ecc3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ecc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ecc40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ecc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ecc44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc48: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ecc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ecc4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ecc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ecc50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ecc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ecc54: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ecc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ecc58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecc5c: 0x9223035d  lbu         $v1, 0x35D($s1)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 861)));
    // 0x1ecc60: 0x2c620033  sltiu       $v0, $v1, 0x33
    ctx->pc = 0x1ecc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x1ecc64: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1ECC64u;
    {
        const bool branch_taken_0x1ecc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC64u;
            // 0x1ecc68: 0x7005a4a9  por         $s4, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc64) {
            ctx->pc = 0x1ECDA0u;
            goto label_1ecda0;
        }
    }
    ctx->pc = 0x1ECC6Cu;
    // 0x1ecc6c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1ECC6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC74u);
    ctx->pc = 0x1ECC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC6Cu;
            // 0x1ecc70: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC74u; }
        if (ctx->pc != 0x1ECC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC74u; }
        if (ctx->pc != 0x1ECC74u) { return; }
    }
    ctx->pc = 0x1ECC74u;
    // 0x1ecc74: 0x9450026e  lhu         $s0, 0x26E($v0)
    ctx->pc = 0x1ecc74u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 622)));
    // 0x1ecc78: 0x5200004b  beql        $s0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x1ECC78u;
    {
        const bool branch_taken_0x1ecc78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc78) {
            ctx->pc = 0x1ECC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC78u;
            // 0x1ecc7c: 0xa220035d  sb          $zero, 0x35D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 861), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECDA8u;
            goto label_1ecda8;
        }
    }
    ctx->pc = 0x1ECC80u;
    // 0x1ecc80: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1ECC80u;
    SET_GPR_U32(ctx, 31, 0x1ECC88u);
    ctx->pc = 0x1ECC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC80u;
            // 0x1ecc84: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC88u; }
        if (ctx->pc != 0x1ECC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC88u; }
        if (ctx->pc != 0x1ECC88u) { return; }
    }
    ctx->pc = 0x1ECC88u;
    // 0x1ecc88: 0x80420068  lb          $v0, 0x68($v0)
    ctx->pc = 0x1ecc88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1ecc8c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1ECC8Cu;
    {
        const bool branch_taken_0x1ecc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC8Cu;
            // 0x1ecc90: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc8c) {
            ctx->pc = 0x1ECD98u;
            goto label_1ecd98;
        }
    }
    ctx->pc = 0x1ECC94u;
    // 0x1ecc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc98: 0x8c441184  lw          $a0, 0x1184($v0)
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
    // 0x1ecc9c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1ECC9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECCA4u);
    ctx->pc = 0x1ECCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC9Cu;
            // 0x1ecca0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCA4u; }
        if (ctx->pc != 0x1ECCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCA4u; }
        if (ctx->pc != 0x1ECCA4u) { return; }
    }
    ctx->pc = 0x1ECCA4u;
    // 0x1ecca4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1ecca4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ecca8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ecca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eccac: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1eccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eccb0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1ECCB0u;
    SET_GPR_U32(ctx, 31, 0x1ECCB8u);
    ctx->pc = 0x1ECCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCB0u;
            // 0x1eccb4: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCB8u; }
        if (ctx->pc != 0x1ECCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCB8u; }
        if (ctx->pc != 0x1ECCB8u) { return; }
    }
    ctx->pc = 0x1ECCB8u;
    // 0x1eccb8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1eccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1eccbc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1ECCBCu;
    SET_GPR_U32(ctx, 31, 0x1ECCC4u);
    ctx->pc = 0x1ECCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCBCu;
            // 0x1eccc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCC4u; }
        if (ctx->pc != 0x1ECCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCC4u; }
        if (ctx->pc != 0x1ECCC4u) { return; }
    }
    ctx->pc = 0x1ECCC4u;
    // 0x1eccc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eccc8: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1ECCC8u;
    SET_GPR_U32(ctx, 31, 0x1ECCD0u);
    ctx->pc = 0x1ECCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCC8u;
            // 0x1ecccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCD0u; }
        if (ctx->pc != 0x1ECCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCD0u; }
        if (ctx->pc != 0x1ECCD0u) { return; }
    }
    ctx->pc = 0x1ECCD0u;
    // 0x1eccd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1eccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1eccd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eccd8: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x1eccd8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1eccdc: 0x1263002e  beq         $s3, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ECCDCu;
    {
        const bool branch_taken_0x1eccdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ECCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCDCu;
            // 0x1ecce0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccdc) {
            ctx->pc = 0x1ECD98u;
            goto label_1ecd98;
        }
    }
    ctx->pc = 0x1ECCE4u;
    // 0x1ecce4: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x1ecce4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1ecce8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ecce8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1eccec: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECCECu;
    {
        const bool branch_taken_0x1eccec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eccec) {
            ctx->pc = 0x1ECCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCECu;
            // 0x1eccf0: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECD00u;
            goto label_1ecd00;
        }
    }
    ctx->pc = 0x1ECCF4u;
    // 0x1eccf4: 0xc04da64  jal         func_136990
    ctx->pc = 0x1ECCF4u;
    SET_GPR_U32(ctx, 31, 0x1ECCFCu);
    ctx->pc = 0x1ECCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCF4u;
            // 0x1eccf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCFCu; }
        if (ctx->pc != 0x1ECCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCFCu; }
        if (ctx->pc != 0x1ECCFCu) { return; }
    }
    ctx->pc = 0x1ECCFCu;
    // 0x1eccfc: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1ecd00:
    // 0x1ecd00: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x1ecd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1ecd04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ecd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecd08: 0x78500030  lq          $s0, 0x30($v0)
    ctx->pc = 0x1ecd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ecd0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ecd10: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ecd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ecd14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ecd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ecd1c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ecd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ecd20: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ecd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ecd24: 0x40f809  jalr        $v0
    ctx->pc = 0x1ECD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECD2Cu);
        ctx->pc = 0x1ECD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD24u;
            // 0x1ecd28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ECD2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECC38u: goto label_1ecc38;
            case 0x1ECD00u: goto label_1ecd00;
            case 0x1ECD70u: goto label_1ecd70;
            case 0x1ECD98u: goto label_1ecd98;
            case 0x1ECDA0u: goto label_1ecda0;
            case 0x1ECDA8u: goto label_1ecda8;
            case 0x1ECDE4u: goto label_1ecde4;
            case 0x1ECDF8u: goto label_1ecdf8;
            case 0x1ECE34u: goto label_1ece34;
            case 0x1ECE38u: goto label_1ece38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD2Cu; }
            if (ctx->pc != 0x1ECD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ECD2Cu;
    // 0x1ecd2c: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x1ecd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ecd30: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ecd30u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ecd34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecd38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ecd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ecd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ecd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd40: 0x701434a9  por         $a2, $zero, $s4
    ctx->pc = 0x1ecd40u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1ecd44: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ecd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd48: 0xc088312  jal         func_220C48
    ctx->pc = 0x1ECD48u;
    SET_GPR_U32(ctx, 31, 0x1ECD50u);
    ctx->pc = 0x1ECD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD48u;
            // 0x1ecd4c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD50u; }
        if (ctx->pc != 0x1ECD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD50u; }
        if (ctx->pc != 0x1ECD50u) { return; }
    }
    ctx->pc = 0x1ECD50u;
    // 0x1ecd50: 0x8e4500fc  lw          $a1, 0xFC($s2)
    ctx->pc = 0x1ecd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1ecd54: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECD54u;
    {
        const bool branch_taken_0x1ecd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd54) {
            ctx->pc = 0x1ECD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD54u;
            // 0x1ecd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECD70u;
            goto label_1ecd70;
        }
    }
    ctx->pc = 0x1ECD5Cu;
    // 0x1ecd5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ecd60: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECD60u;
    {
        const bool branch_taken_0x1ecd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ECD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD60u;
            // 0x1ecd64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd60) {
            ctx->pc = 0x1ECD70u;
            goto label_1ecd70;
        }
    }
    ctx->pc = 0x1ECD68u;
    // 0x1ecd68: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ecd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ecd6c: 0x0  nop
    ctx->pc = 0x1ecd6cu;
    // NOP
label_1ecd70:
    // 0x1ecd70: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ecd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ecd74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ecd74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ecd78: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ecd78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ecd7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ecd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd80: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ecd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ecd84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ecd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd88: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1ecd88u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ecd8c: 0xc0883a2  jal         func_220E88
    ctx->pc = 0x1ECD8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD94u);
    ctx->pc = 0x1ECD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD8Cu;
            // 0x1ecd90: 0x70143ca9  por         $a3, $zero, $s4 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220E88u;
    if (runtime->hasFunction(0x220E88u)) {
        auto targetFn = runtime->lookupFunction(0x220E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD94u; }
        if (ctx->pc != 0x1ECD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220E88_0x220e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD94u; }
        if (ctx->pc != 0x1ECD94u) { return; }
    }
    ctx->pc = 0x1ECD94u;
    // 0x1ecd94: 0x0  nop
    ctx->pc = 0x1ecd94u;
    // NOP
label_1ecd98:
    // 0x1ecd98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECD98u;
    {
        const bool branch_taken_0x1ecd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD98u;
            // 0x1ecd9c: 0xa220035d  sb          $zero, 0x35D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 861), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd98) {
            ctx->pc = 0x1ECDA8u;
            goto label_1ecda8;
        }
    }
    ctx->pc = 0x1ECDA0u;
label_1ecda0:
    // 0x1ecda0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecda4: 0xa222035d  sb          $v0, 0x35D($s1)
    ctx->pc = 0x1ecda4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 861), (uint8_t)GPR_U32(ctx, 2));
label_1ecda8:
    // 0x1ecda8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ecda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecdac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ecdacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecdb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ecdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecdb8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ecdb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecdbc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDC4u;
            // 0x1ecdc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECC38u: goto label_1ecc38;
            case 0x1ECD00u: goto label_1ecd00;
            case 0x1ECD70u: goto label_1ecd70;
            case 0x1ECD98u: goto label_1ecd98;
            case 0x1ECDA0u: goto label_1ecda0;
            case 0x1ECDA8u: goto label_1ecda8;
            case 0x1ECDE4u: goto label_1ecde4;
            case 0x1ECDF8u: goto label_1ecdf8;
            case 0x1ECE34u: goto label_1ece34;
            case 0x1ECE38u: goto label_1ece38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECDCCu;
    // 0x1ecdcc: 0x0  nop
    ctx->pc = 0x1ecdccu;
    // NOP
    // 0x1ecdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecdd4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECDD4u;
    {
        const bool branch_taken_0x1ecdd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDD4u;
            // 0x1ecdd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdd4) {
            ctx->pc = 0x1ECDE4u;
            goto label_1ecde4;
        }
    }
    ctx->pc = 0x1ECDDCu;
    // 0x1ecddc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECDDCu;
    {
        const bool branch_taken_0x1ecddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDDCu;
            // 0x1ecde0: 0xc480017c  lwc1        $f0, 0x17C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecddc) {
            ctx->pc = 0x1ECDF8u;
            goto label_1ecdf8;
        }
    }
    ctx->pc = 0x1ECDE4u;
label_1ecde4:
    // 0x1ecde4: 0xc481017c  lwc1        $f1, 0x17C($a0)
    ctx->pc = 0x1ecde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecde8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ecde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdec: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x1ecdecu;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1ecdf0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1ecdf0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1ecdf4: 0x0  nop
    ctx->pc = 0x1ecdf4u;
    // NOP
label_1ecdf8:
    // 0x1ecdf8: 0xe4800280  swc1        $f0, 0x280($a0)
    ctx->pc = 0x1ecdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x1ecdfc: 0xc4800280  lwc1        $f0, 0x280($a0)
    ctx->pc = 0x1ecdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ece00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ece00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ece04: 0xac860284  sw          $a2, 0x284($a0)
    ctx->pc = 0x1ece04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 6));
    // 0x1ece08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ece08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ece0c: 0x0  nop
    ctx->pc = 0x1ece0cu;
    // NOP
    // 0x1ece10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECE10u;
    {
        const bool branch_taken_0x1ece10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ECE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE10u;
            // 0x1ece14: 0x7c850270  sq          $a1, 0x270($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 624), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece10) {
            ctx->pc = 0x1ECE34u;
            goto label_1ece34;
        }
    }
    ctx->pc = 0x1ECE18u;
    // 0x1ece18: 0xc4800178  lwc1        $f0, 0x178($a0)
    ctx->pc = 0x1ece18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ece1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ece1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ece20: 0x0  nop
    ctx->pc = 0x1ece20u;
    // NOP
    // 0x1ece24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECE24u;
    {
        const bool branch_taken_0x1ece24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ECE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE24u;
            // 0x1ece28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece24) {
            ctx->pc = 0x1ECE38u;
            goto label_1ece38;
        }
    }
    ctx->pc = 0x1ECE2Cu;
    // 0x1ece2c: 0xc07b30e  jal         func_1ECC38
    ctx->pc = 0x1ECE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ECE34u);
    ctx->pc = 0x1ECC38u;
    runtime->cooperativeGuestYield();
    goto label_1ecc38;
    ctx->pc = 0x1ECE34u;
label_1ece34:
    // 0x1ece34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ece34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ece38:
    // 0x1ece38: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE38u;
            // 0x1ece3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECC38u: goto label_1ecc38;
            case 0x1ECD00u: goto label_1ecd00;
            case 0x1ECD70u: goto label_1ecd70;
            case 0x1ECD98u: goto label_1ecd98;
            case 0x1ECDA0u: goto label_1ecda0;
            case 0x1ECDA8u: goto label_1ecda8;
            case 0x1ECDE4u: goto label_1ecde4;
            case 0x1ECDF8u: goto label_1ecdf8;
            case 0x1ECE34u: goto label_1ece34;
            case 0x1ECE38u: goto label_1ece38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECE40u;
}

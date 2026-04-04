#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BBF0
// Address: 0x18bbf0 - 0x18bdc0
void sub_0018BBF0_0x18bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BBF0_0x18bbf0");
#endif

    ctx->pc = 0x18bbf0u;

    // 0x18bbf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bbf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18bbf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18bbfc: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
    // 0x18bc00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18bc04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18bc0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18bc0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bc18: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x18bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x18bc1c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x18bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x18bc20: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x18bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x18bc24: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x18bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x18bc28: 0xae080020  sw          $t0, 0x20($s0)
    ctx->pc = 0x18bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 8));
    // 0x18bc2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18bc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18bc34: 0x0  nop
    ctx->pc = 0x18bc34u;
    // NOP
label_18bc38:
    // 0x18bc38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18bc3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bc40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18bc44: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18bc48: 0x0  nop
    ctx->pc = 0x18bc48u;
    // NOP
    // 0x18bc4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18BC4Cu;
    {
        const bool branch_taken_0x18bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC4Cu;
            // 0x18bc50: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc4c) {
            ctx->pc = 0x18BC38u;
            runtime->cooperativeGuestYield();
            goto label_18bc38;
        }
    }
    ctx->pc = 0x18BC54u;
    // 0x18bc54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18bc58: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x18BC58u;
    {
        const bool branch_taken_0x18bc58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC58u;
            // 0x18bc5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc58) {
            ctx->pc = 0x18BCE8u;
            goto label_18bce8;
        }
    }
    ctx->pc = 0x18BC60u;
    // 0x18bc60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18bc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc64: 0x0  nop
    ctx->pc = 0x18bc64u;
    // NOP
label_18bc68:
    // 0x18bc68: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x18bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18bc6c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x18bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18bc70: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18BC70u;
    SET_GPR_U32(ctx, 31, 0x18BC78u);
    ctx->pc = 0x18BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC70u;
            // 0x18bc74: 0x442018  mult        $a0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC78u; }
        if (ctx->pc != 0x18BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC78u; }
        if (ctx->pc != 0x18BC78u) { return; }
    }
    ctx->pc = 0x18BC78u;
    // 0x18bc78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc7c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18BC7Cu;
    SET_GPR_U32(ctx, 31, 0x18BC84u);
    ctx->pc = 0x18BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC7Cu;
            // 0x18bc80: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC84u; }
        if (ctx->pc != 0x18BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC84u; }
        if (ctx->pc != 0x18BC84u) { return; }
    }
    ctx->pc = 0x18BC84u;
    // 0x18bc84: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x18bc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18bc88: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18bc8c: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x18bc90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc94: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x18BC94u;
    {
        const bool branch_taken_0x18bc94 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC94u;
            // 0x18bc98: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc94) {
            ctx->pc = 0x18BCD4u;
            goto label_18bcd4;
        }
    }
    ctx->pc = 0x18BC9Cu;
    // 0x18bc9c: 0x0  nop
    ctx->pc = 0x18bc9cu;
    // NOP
label_18bca0:
    // 0x18bca0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18bca4: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x18bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x18bca8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x18bca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18bcac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bcb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18bcb4: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x18bcb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18bcb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18bcbc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18bcc0: 0xa4600018  sh          $zero, 0x18($v1)
    ctx->pc = 0x18bcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x18bcc4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x18bcc8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x18bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x18bccc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18BCCCu;
    {
        const bool branch_taken_0x18bccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCCCu;
            // 0x18bcd0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bccc) {
            ctx->pc = 0x18BCA0u;
            runtime->cooperativeGuestYield();
            goto label_18bca0;
        }
    }
    ctx->pc = 0x18BCD4u;
label_18bcd4:
    // 0x18bcd4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18bcd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bcdc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x18bcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bce0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18BCE0u;
    {
        const bool branch_taken_0x18bce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCE0u;
            // 0x18bce4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bce0) {
            ctx->pc = 0x18BC68u;
            runtime->cooperativeGuestYield();
            goto label_18bc68;
        }
    }
    ctx->pc = 0x18BCE8u;
label_18bce8:
    // 0x18bce8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x18bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x18bcec: 0xc0a2644  jal         func_289910
    ctx->pc = 0x18BCECu;
    SET_GPR_U32(ctx, 31, 0x18BCF4u);
    ctx->pc = 0x18BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCECu;
            // 0x18bcf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCF4u; }
        if (ctx->pc != 0x18BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCF4u; }
        if (ctx->pc != 0x18BCF4u) { return; }
    }
    ctx->pc = 0x18BCF4u;
    // 0x18bcf4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18bcf8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18BCF8u;
    {
        const bool branch_taken_0x18bcf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCF8u;
            // 0x18bcfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcf8) {
            ctx->pc = 0x18BD58u;
            goto label_18bd58;
        }
    }
    ctx->pc = 0x18BD00u;
    // 0x18bd00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18bd04: 0x0  nop
    ctx->pc = 0x18bd04u;
    // NOP
label_18bd08:
    // 0x18bd08: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18bd0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18bd10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18bd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd14: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18BD14u;
    {
        const bool branch_taken_0x18bd14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD14u;
            // 0x18bd18: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd14) {
            ctx->pc = 0x18BD44u;
            goto label_18bd44;
        }
    }
    ctx->pc = 0x18BD1Cu;
    // 0x18bd1c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_18bd20:
    // 0x18bd20: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x18bd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18bd24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bd28: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x18bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18bd2c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x18bd30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18bd34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x18bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18bd38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x18bd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bd3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18BD3Cu;
    {
        const bool branch_taken_0x18bd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD3Cu;
            // 0x18bd40: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd3c) {
            ctx->pc = 0x18BD20u;
            runtime->cooperativeGuestYield();
            goto label_18bd20;
        }
    }
    ctx->pc = 0x18BD44u;
label_18bd44:
    // 0x18bd44: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18bd48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18bd4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18bd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bd50: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18BD50u;
    {
        const bool branch_taken_0x18bd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD50u;
            // 0x18bd54: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd50) {
            ctx->pc = 0x18BD08u;
            runtime->cooperativeGuestYield();
            goto label_18bd08;
        }
    }
    ctx->pc = 0x18BD58u;
label_18bd58:
    // 0x18bd58: 0xc0630fa  jal         func_18C3E8
    ctx->pc = 0x18BD58u;
    SET_GPR_U32(ctx, 31, 0x18BD60u);
    ctx->pc = 0x18BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD58u;
            // 0x18bd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C3E8u;
    if (runtime->hasFunction(0x18C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x18C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD60u; }
        if (ctx->pc != 0x18BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C3E8_0x18c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD60u; }
        if (ctx->pc != 0x18BD60u) { return; }
    }
    ctx->pc = 0x18BD60u;
    // 0x18bd60: 0xc063010  jal         func_18C040
    ctx->pc = 0x18BD60u;
    SET_GPR_U32(ctx, 31, 0x18BD68u);
    ctx->pc = 0x18BD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD60u;
            // 0x18bd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C040u;
    if (runtime->hasFunction(0x18C040u)) {
        auto targetFn = runtime->lookupFunction(0x18C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD68u; }
        if (ctx->pc != 0x18BD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C040_0x18c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD68u; }
        if (ctx->pc != 0x18BD68u) { return; }
    }
    ctx->pc = 0x18BD68u;
    // 0x18bd68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18bd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18bd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bd70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18bd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bd74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bd78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18bd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD80u;
            // 0x18bd84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BC38u: goto label_18bc38;
            case 0x18BC68u: goto label_18bc68;
            case 0x18BCA0u: goto label_18bca0;
            case 0x18BCD4u: goto label_18bcd4;
            case 0x18BCE8u: goto label_18bce8;
            case 0x18BD08u: goto label_18bd08;
            case 0x18BD20u: goto label_18bd20;
            case 0x18BD44u: goto label_18bd44;
            case 0x18BD58u: goto label_18bd58;
            case 0x18BDB0u: goto label_18bdb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BD88u;
    // 0x18bd88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18bd8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18bd8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BD90u;
    {
        const bool branch_taken_0x18bd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD90u;
            // 0x18bd94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd90) {
            ctx->pc = 0x18BDB0u;
            goto label_18bdb0;
        }
    }
    ctx->pc = 0x18BD98u;
    // 0x18bd98: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x18bd9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bda0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18bda4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18bda8: 0x40f809  jalr        $v0
    ctx->pc = 0x18BDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BDB0u);
        ctx->pc = 0x18BDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDA8u;
            // 0x18bdac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BDB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BC38u: goto label_18bc38;
            case 0x18BC68u: goto label_18bc68;
            case 0x18BCA0u: goto label_18bca0;
            case 0x18BCD4u: goto label_18bcd4;
            case 0x18BCE8u: goto label_18bce8;
            case 0x18BD08u: goto label_18bd08;
            case 0x18BD20u: goto label_18bd20;
            case 0x18BD44u: goto label_18bd44;
            case 0x18BD58u: goto label_18bd58;
            case 0x18BDB0u: goto label_18bdb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BDB0u; }
            if (ctx->pc != 0x18BDB0u) { return; }
        }
        }
    }
    ctx->pc = 0x18BDB0u;
label_18bdb0:
    // 0x18bdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDB4u;
            // 0x18bdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BC38u: goto label_18bc38;
            case 0x18BC68u: goto label_18bc68;
            case 0x18BCA0u: goto label_18bca0;
            case 0x18BCD4u: goto label_18bcd4;
            case 0x18BCE8u: goto label_18bce8;
            case 0x18BD08u: goto label_18bd08;
            case 0x18BD20u: goto label_18bd20;
            case 0x18BD44u: goto label_18bd44;
            case 0x18BD58u: goto label_18bd58;
            case 0x18BDB0u: goto label_18bdb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BDBCu;
    // 0x18bdbc: 0x0  nop
    ctx->pc = 0x18bdbcu;
    // NOP
}

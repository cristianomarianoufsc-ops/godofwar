#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BACC8
// Address: 0x1bacc8 - 0x1baf58
void sub_001BACC8_0x1bacc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BACC8_0x1bacc8");
#endif

    ctx->pc = 0x1bacc8u;

    // 0x1bacc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bacc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1baccc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bacd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bacd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bacd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bacd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bacdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bacdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bace0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bace4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bace8:
    // 0x1bace8: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1bace8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1bacec: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bacf0: 0x26705280  addiu       $s0, $s3, 0x5280
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21120));
    // 0x1bacf4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1BACF4u;
    SET_GPR_U32(ctx, 31, 0x1BACFCu);
    ctx->pc = 0x1BACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACF4u;
            // 0x1bacf8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACFCu; }
        if (ctx->pc != 0x1BACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACFCu; }
        if (ctx->pc != 0x1BACFCu) { return; }
    }
    ctx->pc = 0x1BACFCu;
    // 0x1bacfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bad00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bad00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad04: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bad04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1bad08:
    // 0x1bad08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bad0c: 0x26625280  addiu       $v0, $s3, 0x5280
    ctx->pc = 0x1bad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21120));
    // 0x1bad10: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1bad10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bad14: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1bad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bad18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bad1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bad20: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x1bad20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bad24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bad28: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bad28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bad30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bad34: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BAD34u;
    {
        const bool branch_taken_0x1bad34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD34u;
            // 0x1bad38: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad34) {
            ctx->pc = 0x1BAD08u;
            runtime->cooperativeGuestYield();
            goto label_1bad08;
        }
    }
    ctx->pc = 0x1BAD3Cu;
    // 0x1bad3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bad40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1bad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1bad44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bad44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bad48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bad48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bad4c: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1bad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x1bad50: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bad54: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bad54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bad58: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1bad58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bad5c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bad60: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1BAD60u;
    {
        const bool branch_taken_0x1bad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD60u;
            // 0x1bad64: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad60) {
            ctx->pc = 0x1BACE8u;
            runtime->cooperativeGuestYield();
            goto label_1bace8;
        }
    }
    ctx->pc = 0x1BAD68u;
    // 0x1bad68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bad6c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1BAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD74u);
    ctx->pc = 0x1BAD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD6Cu;
            // 0x1bad70: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD74u; }
        if (ctx->pc != 0x1BAD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD74u; }
        if (ctx->pc != 0x1BAD74u) { return; }
    }
    ctx->pc = 0x1BAD74u;
    // 0x1bad74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bad74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bad7c: 0xae025a2c  sw          $v0, 0x5A2C($s0)
    ctx->pc = 0x1bad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23084), GPR_U32(ctx, 2));
    // 0x1bad80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1bad80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1bad84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bad84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bad88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bad88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bad8c: 0x0  nop
    ctx->pc = 0x1bad8cu;
    // NOP
label_1bad90:
    // 0x1bad90: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bad94: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1bad94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bad98: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1bad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1bad9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1bad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bada0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bada0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bada4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1BADA4u;
    SET_GPR_U32(ctx, 31, 0x1BADACu);
    ctx->pc = 0x1BADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADA4u;
            // 0x1bada8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADACu; }
        if (ctx->pc != 0x1BADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADACu; }
        if (ctx->pc != 0x1BADACu) { return; }
    }
    ctx->pc = 0x1BADACu;
    // 0x1badac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1badacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1badb0: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x1badb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1badb4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1badb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1badb8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1badb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1badbc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BADBCu;
    {
        const bool branch_taken_0x1badbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADBCu;
            // 0x1badc0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badbc) {
            ctx->pc = 0x1BAD90u;
            runtime->cooperativeGuestYield();
            goto label_1bad90;
        }
    }
    ctx->pc = 0x1BADC4u;
    // 0x1badc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1badc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1badc8:
    // 0x1badc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1badc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1badcc: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1badccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1badd0: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x1badd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x1badd4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1badd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1badd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1baddc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1BADDCu;
    SET_GPR_U32(ctx, 31, 0x1BADE4u);
    ctx->pc = 0x1BADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADDCu;
            // 0x1bade0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADE4u; }
        if (ctx->pc != 0x1BADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADE4u; }
        if (ctx->pc != 0x1BADE4u) { return; }
    }
    ctx->pc = 0x1BADE4u;
    // 0x1bade4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bade8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bade8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1badec: 0x2a240006  slti        $a0, $s1, 0x6
    ctx->pc = 0x1badecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1badf0: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1badf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1badf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1badf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1badf8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1badf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1badfc: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BADFCu;
    {
        const bool branch_taken_0x1badfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADFCu;
            // 0x1bae00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badfc) {
            ctx->pc = 0x1BADC8u;
            runtime->cooperativeGuestYield();
            goto label_1badc8;
        }
    }
    ctx->pc = 0x1BAE04u;
    // 0x1bae04: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bae08: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bae08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bae0c: 0x8e2af198  lw          $t2, -0xE68($s1)
    ctx->pc = 0x1bae0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963608)));
    // 0x1bae10: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1bae14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bae18: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1bae18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1bae1c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1bae1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1bae20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bae24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bae2c: 0x8e045a28  lw          $a0, 0x5A28($s0)
    ctx->pc = 0x1bae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bae30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1bae30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1bae34: 0xace35a58  sw          $v1, 0x5A58($a3)
    ctx->pc = 0x1bae34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23128), GPR_U32(ctx, 3));
    // 0x1bae38: 0x24a559b0  addiu       $a1, $a1, 0x59B0
    ctx->pc = 0x1bae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    // 0x1bae3c: 0xac4ac80c  sw          $t2, -0x37F4($v0)
    ctx->pc = 0x1bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952972), GPR_U32(ctx, 10));
    // 0x1bae40: 0x34c60210  ori         $a2, $a2, 0x210
    ctx->pc = 0x1bae40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)528);
    // 0x1bae44: 0xad20cc40  sw          $zero, -0x33C0($t1)
    ctx->pc = 0x1bae44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954048), GPR_U32(ctx, 0));
    // 0x1bae48: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BAE48u;
    SET_GPR_U32(ctx, 31, 0x1BAE50u);
    ctx->pc = 0x1BAE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE48u;
            // 0x1bae4c: 0xad13c808  sw          $s3, -0x37F8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294952968), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE50u; }
        if (ctx->pc != 0x1BAE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE50u; }
        if (ctx->pc != 0x1BAE50u) { return; }
    }
    ctx->pc = 0x1BAE50u;
    // 0x1bae50: 0x8e025a28  lw          $v0, 0x5A28($s0)
    ctx->pc = 0x1bae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bae54: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1bae54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1bae58: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BAE58u;
    SET_GPR_U32(ctx, 31, 0x1BAE60u);
    ctx->pc = 0x1BAE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE58u;
            // 0x1bae5c: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE60u; }
        if (ctx->pc != 0x1BAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE60u; }
        if (ctx->pc != 0x1BAE60u) { return; }
    }
    ctx->pc = 0x1BAE60u;
    // 0x1bae60: 0xc05ea2e  jal         func_17A8B8
    ctx->pc = 0x1BAE60u;
    SET_GPR_U32(ctx, 31, 0x1BAE68u);
    ctx->pc = 0x17A8B8u;
    if (runtime->hasFunction(0x17A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE68u; }
        if (ctx->pc != 0x1BAE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A8B8_0x17a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE68u; }
        if (ctx->pc != 0x1BAE68u) { return; }
    }
    ctx->pc = 0x1BAE68u;
    // 0x1bae68: 0x8e025a28  lw          $v0, 0x5A28($s0)
    ctx->pc = 0x1bae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bae6c: 0x8e24f198  lw          $a0, -0xE68($s1)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963608)));
    // 0x1bae70: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1bae74: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1BAE74u;
    SET_GPR_U32(ctx, 31, 0x1BAE7Cu);
    ctx->pc = 0x1BAE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE74u;
            // 0x1bae78: 0xae42cc58  sw          $v0, -0x33A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294954072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE7Cu; }
        if (ctx->pc != 0x1BAE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE7Cu; }
        if (ctx->pc != 0x1BAE7Cu) { return; }
    }
    ctx->pc = 0x1BAE7Cu;
    // 0x1bae7c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1BAE7Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE84u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE84u; }
        if (ctx->pc != 0x1BAE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE84u; }
        if (ctx->pc != 0x1BAE84u) { return; }
    }
    ctx->pc = 0x1BAE84u;
    // 0x1bae84: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bae84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1bae88: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1bae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bae8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae90: 0xc04f78a  jal         func_13DE28
    ctx->pc = 0x1BAE90u;
    SET_GPR_U32(ctx, 31, 0x1BAE98u);
    ctx->pc = 0x1BAE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE90u;
            // 0x1bae94: 0x34a50300  ori         $a1, $a1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DE28u;
    if (runtime->hasFunction(0x13DE28u)) {
        auto targetFn = runtime->lookupFunction(0x13DE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE98u; }
        if (ctx->pc != 0x1BAE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE28_0x13de28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE98u; }
        if (ctx->pc != 0x1BAE98u) { return; }
    }
    ctx->pc = 0x1BAE98u;
    // 0x1bae98: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1bae98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1bae9c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1baea0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1baea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1baea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1baea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baea8: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x1baea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x1baeac: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x1BAEACu;
    SET_GPR_U32(ctx, 31, 0x1BAEB4u);
    ctx->pc = 0x1BAEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEACu;
            // 0x1baeb0: 0x34a50300  ori         $a1, $a1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEB4u; }
        if (ctx->pc != 0x1BAEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEB4u; }
        if (ctx->pc != 0x1BAEB4u) { return; }
    }
    ctx->pc = 0x1BAEB4u;
    // 0x1baeb4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baeb8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1BAEB8u;
    SET_GPR_U32(ctx, 31, 0x1BAEC0u);
    ctx->pc = 0x1BAEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEB8u;
            // 0x1baebc: 0xac62cc6c  sw          $v0, -0x3394($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEC0u; }
        if (ctx->pc != 0x1BAEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEC0u; }
        if (ctx->pc != 0x1BAEC0u) { return; }
    }
    ctx->pc = 0x1BAEC0u;
    // 0x1baec0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1baec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1baec4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1baec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1baec8: 0x248459c0  addiu       $a0, $a0, 0x59C0
    ctx->pc = 0x1baec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22976));
    // 0x1baecc: 0x24c659d0  addiu       $a2, $a2, 0x59D0
    ctx->pc = 0x1baeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22992));
    // 0x1baed0: 0xc06eafa  jal         func_1BABE8
    ctx->pc = 0x1BAED0u;
    SET_GPR_U32(ctx, 31, 0x1BAED8u);
    ctx->pc = 0x1BAED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAED0u;
            // 0x1baed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BABE8u;
    if (runtime->hasFunction(0x1BABE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BABE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAED8u; }
        if (ctx->pc != 0x1BAED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1babe8_0x1bac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAED8u; }
        if (ctx->pc != 0x1BAED8u) { return; }
    }
    ctx->pc = 0x1BAED8u;
    // 0x1baed8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baedc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1baedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1baee0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1baee4: 0x248459d8  addiu       $a0, $a0, 0x59D8
    ctx->pc = 0x1baee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23000));
    // 0x1baee8: 0x24c659e8  addiu       $a2, $a2, 0x59E8
    ctx->pc = 0x1baee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23016));
    // 0x1baeec: 0xac62cc70  sw          $v0, -0x3390($v1)
    ctx->pc = 0x1baeecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954096), GPR_U32(ctx, 2));
    // 0x1baef0: 0xc06eafa  jal         func_1BABE8
    ctx->pc = 0x1BAEF0u;
    SET_GPR_U32(ctx, 31, 0x1BAEF8u);
    ctx->pc = 0x1BAEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEF0u;
            // 0x1baef4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BABE8u;
    if (runtime->hasFunction(0x1BABE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BABE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEF8u; }
        if (ctx->pc != 0x1BAEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1babe8_0x1bac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEF8u; }
        if (ctx->pc != 0x1BAEF8u) { return; }
    }
    ctx->pc = 0x1BAEF8u;
    // 0x1baef8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baefc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1baefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1baf00: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1baf00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1baf04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1baf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baf08: 0x24c65a08  addiu       $a2, $a2, 0x5A08
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23048));
    // 0x1baf0c: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x1baf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    // 0x1baf10: 0xc06eafa  jal         func_1BABE8
    ctx->pc = 0x1BAF10u;
    SET_GPR_U32(ctx, 31, 0x1BAF18u);
    ctx->pc = 0x1BAF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF10u;
            // 0x1baf14: 0xac62cc74  sw          $v0, -0x338C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BABE8u;
    if (runtime->hasFunction(0x1BABE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BABE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF18u; }
        if (ctx->pc != 0x1BAF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1babe8_0x1bac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF18u; }
        if (ctx->pc != 0x1BAF18u) { return; }
    }
    ctx->pc = 0x1BAF18u;
    // 0x1baf18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1baf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1baf1c: 0xc08917e  jal         func_2245F8
    ctx->pc = 0x1BAF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF24u);
    ctx->pc = 0x1BAF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF1Cu;
            // 0x1baf20: 0xac625a5c  sw          $v0, 0x5A5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245F8u;
    if (runtime->hasFunction(0x2245F8u)) {
        auto targetFn = runtime->lookupFunction(0x2245F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF24u; }
        if (ctx->pc != 0x1BAF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245F8_0x2245f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF24u; }
        if (ctx->pc != 0x1BAF24u) { return; }
    }
    ctx->pc = 0x1BAF24u;
    // 0x1baf24: 0xc0797e2  jal         func_1E5F88
    ctx->pc = 0x1BAF24u;
    SET_GPR_U32(ctx, 31, 0x1BAF2Cu);
    ctx->pc = 0x1E5F88u;
    if (runtime->hasFunction(0x1E5F88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF2Cu; }
        if (ctx->pc != 0x1BAF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5F88_0x1e5f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF2Cu; }
        if (ctx->pc != 0x1BAF2Cu) { return; }
    }
    ctx->pc = 0x1BAF2Cu;
    // 0x1baf2c: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1BAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF34u);
    ctx->pc = 0x1BAF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF2Cu;
            // 0x1baf30: 0x8e44cc58  lw          $a0, -0x33A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF34u; }
        if (ctx->pc != 0x1BAF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF34u; }
        if (ctx->pc != 0x1BAF34u) { return; }
    }
    ctx->pc = 0x1BAF34u;
    // 0x1baf34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1baf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1baf38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1baf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1baf3c: 0xac535a60  sw          $s3, 0x5A60($v0)
    ctx->pc = 0x1baf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23136), GPR_U32(ctx, 19));
    // 0x1baf40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1baf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1baf44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1baf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baf48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1baf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF50u;
            // 0x1baf54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BACE8u: goto label_1bace8;
            case 0x1BAD08u: goto label_1bad08;
            case 0x1BAD90u: goto label_1bad90;
            case 0x1BADC8u: goto label_1badc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BAF58u;
}

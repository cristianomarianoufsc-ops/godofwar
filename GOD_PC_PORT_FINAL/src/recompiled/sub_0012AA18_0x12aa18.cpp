#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012AA18
// Address: 0x12aa18 - 0x12aad0
void sub_0012AA18_0x12aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AA18_0x12aa18");
#endif

    ctx->pc = 0x12aa18u;

    // 0x12aa18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12aa1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12aa20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12aa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12aa24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12aa2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x12aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x12aa34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12aa34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12aa3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12aa40: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12AA40u;
    SET_GPR_U32(ctx, 31, 0x12AA48u);
    ctx->pc = 0x12AA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA40u;
            // 0x12aa44: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA48u; }
        if (ctx->pc != 0x12AA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA48u; }
        if (ctx->pc != 0x12AA48u) { return; }
    }
    ctx->pc = 0x12AA48u;
    // 0x12aa48: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12aa4c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12aa50: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12AA50u;
    SET_GPR_U32(ctx, 31, 0x12AA58u);
    ctx->pc = 0x12AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA50u;
            // 0x12aa54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA58u; }
        if (ctx->pc != 0x12AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA58u; }
        if (ctx->pc != 0x12AA58u) { return; }
    }
    ctx->pc = 0x12AA58u;
    // 0x12aa58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12aa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa5c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x12aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x12aa60: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x12aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x12aa64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12aa68: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x12aa6c: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x12aa70: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x12aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x12aa74: 0x2632001c  addiu       $s2, $s1, 0x1C
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x12aa78: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x12aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x12aa7c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x12AA7Cu;
    SET_GPR_U32(ctx, 31, 0x12AA84u);
    ctx->pc = 0x12AA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA7Cu;
            // 0x12aa80: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA84u; }
        if (ctx->pc != 0x12AA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA84u; }
        if (ctx->pc != 0x12AA84u) { return; }
    }
    ctx->pc = 0x12AA84u;
    // 0x12aa84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12aa84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12aa8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12aa90: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x12aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x12aa94: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12aa98: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x12aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x12aa9c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x12aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x12aaa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12aaa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aaa4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x12aaa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12aaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12aaac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12aaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12aab0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12aab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aab4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12aab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aab8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x12aab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aac0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x12aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x12aac4: 0x3e00008  jr          $ra
    ctx->pc = 0x12AAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAC4u;
            // 0x12aac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AACCu;
    // 0x12aacc: 0x0  nop
    ctx->pc = 0x12aaccu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BC58
// Address: 0x14bc58 - 0x14c048
void sub_0014BC58_0x14bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC58_0x14bc58");
#endif

    ctx->pc = 0x14bc58u;

    // 0x14bc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14bc5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14bc60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14bc64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14bc6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14bc6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bc74: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x14bc74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bc78: 0x24e30060  addiu       $v1, $a3, 0x60
    ctx->pc = 0x14bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x14bc7c: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x14bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x14bc80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bc84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bc88: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bc8c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bc90: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14bc94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bc98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bc9c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x14bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14bca0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14bca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bca4: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x14bca4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x14bca8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14bcac: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x14bcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14bcb4: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x14bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x14bcb8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x14bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bcbc: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x14bcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x14bcc0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x14bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14bcc4: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x14bcc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x14bcc8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14bccc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x14bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x14bcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcd4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x14bcd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x14bcd8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14bcdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bce0: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x14bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x14bce4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14bce8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BCE8u;
    {
        const bool branch_taken_0x14bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCE8u;
            // 0x14bcec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bce8) {
            ctx->pc = 0x14BD20u;
            goto label_14bd20;
        }
    }
    ctx->pc = 0x14BCF0u;
    // 0x14bcf0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x14bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x14bcf4: 0x0  nop
    ctx->pc = 0x14bcf4u;
    // NOP
label_14bcf8:
    // 0x14bcf8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14bcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bd04: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14BD04u;
    SET_GPR_U32(ctx, 31, 0x14BD0Cu);
    ctx->pc = 0x14BD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD04u;
            // 0x14bd08: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD0Cu; }
        if (ctx->pc != 0x14BD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b680_0x14b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD0Cu; }
        if (ctx->pc != 0x14BD0Cu) { return; }
    }
    ctx->pc = 0x14BD0Cu;
    // 0x14bd0c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x14bd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bd10: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x14bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x14bd14: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bd18: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14BD18u;
    {
        const bool branch_taken_0x14bd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd18) {
            ctx->pc = 0x14BD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD18u;
            // 0x14bd1c: 0x8ce20018  lw          $v0, 0x18($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BCF8u;
            runtime->cooperativeGuestYield();
            goto label_14bcf8;
        }
    }
    ctx->pc = 0x14BD20u;
label_14bd20:
    // 0x14bd20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bd24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bd28: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bd2c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bd30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bd34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bd38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bd3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bd40: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14bd44: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14bd48: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x14bd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14bd4c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x14bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14bd50: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x14bd50u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14bd54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14bd58: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x14bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x14bd5c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x14BD5Cu;
    {
        const bool branch_taken_0x14bd5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD5Cu;
            // 0x14bd60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd5c) {
            ctx->pc = 0x14BD94u;
            goto label_14bd94;
        }
    }
    ctx->pc = 0x14BD64u;
    // 0x14bd64: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x14bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_14bd68:
    // 0x14bd68: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14bd6c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bd78: 0xc052db2  jal         func_14B6C8
    ctx->pc = 0x14BD78u;
    SET_GPR_U32(ctx, 31, 0x14BD80u);
    ctx->pc = 0x14BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD78u;
            // 0x14bd7c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B6C8u;
    if (runtime->hasFunction(0x14B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x14B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD80u; }
        if (ctx->pc != 0x14BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B6C8_0x14b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD80u; }
        if (ctx->pc != 0x14BD80u) { return; }
    }
    ctx->pc = 0x14BD80u;
    // 0x14bd80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bd84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14bd88: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bd8c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14BD8Cu;
    {
        const bool branch_taken_0x14bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD8Cu;
            // 0x14bd90: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd8c) {
            ctx->pc = 0x14BD68u;
            runtime->cooperativeGuestYield();
            goto label_14bd68;
        }
    }
    ctx->pc = 0x14BD94u;
label_14bd94:
    // 0x14bd94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bd98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bd9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bda0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bda4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bda8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bdac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bdb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bdb4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x14bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14bdb8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14bdbc: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x14bdbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14bdc0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x14bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14bdc4: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x14bdc4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14bdc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14bdcc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x14bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x14bdd0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14BDD0u;
    {
        const bool branch_taken_0x14bdd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDD0u;
            // 0x14bdd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdd0) {
            ctx->pc = 0x14BE0Cu;
            goto label_14be0c;
        }
    }
    ctx->pc = 0x14BDD8u;
    // 0x14bdd8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x14bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14bddc: 0x0  nop
    ctx->pc = 0x14bddcu;
    // NOP
label_14bde0:
    // 0x14bde0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14bde4: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bdf0: 0xc052e24  jal         func_14B890
    ctx->pc = 0x14BDF0u;
    SET_GPR_U32(ctx, 31, 0x14BDF8u);
    ctx->pc = 0x14BDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDF0u;
            // 0x14bdf4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B890u;
    if (runtime->hasFunction(0x14B890u)) {
        auto targetFn = runtime->lookupFunction(0x14B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDF8u; }
        if (ctx->pc != 0x14BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b890_0x14b8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDF8u; }
        if (ctx->pc != 0x14BDF8u) { return; }
    }
    ctx->pc = 0x14BDF8u;
    // 0x14bdf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bdfc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14be00: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14be00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14be04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14BE04u;
    {
        const bool branch_taken_0x14be04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE04u;
            // 0x14be08: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be04) {
            ctx->pc = 0x14BDE0u;
            runtime->cooperativeGuestYield();
            goto label_14bde0;
        }
    }
    ctx->pc = 0x14BE0Cu;
label_14be0c:
    // 0x14be0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14be10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14be14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14be18: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x14be18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14be1c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14be1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14be20: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14be24: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14be24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14be28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14be2c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x14be2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14be30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14be30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be34: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x14be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x14be38: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x14be38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x14be3c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14be40: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x14be40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14be48: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x14be48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x14be4c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x14be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14be50: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x14be50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x14be54: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14be58: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x14be58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x14be5c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14be60: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x14be64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14be68: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x14be68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14be6c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x14be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14be70: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x14be70u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14be74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14be74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14be78: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x14be78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
    // 0x14be7c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BE7Cu;
    {
        const bool branch_taken_0x14be7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE7Cu;
            // 0x14be80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be7c) {
            ctx->pc = 0x14BEB4u;
            goto label_14beb4;
        }
    }
    ctx->pc = 0x14BE84u;
    // 0x14be84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14be88:
    // 0x14be88: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x14be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x14be8c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14be8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14be90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14be94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14be98: 0xc052ed6  jal         func_14BB58
    ctx->pc = 0x14BE98u;
    SET_GPR_U32(ctx, 31, 0x14BEA0u);
    ctx->pc = 0x14BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE98u;
            // 0x14be9c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BB58u;
    if (runtime->hasFunction(0x14BB58u)) {
        auto targetFn = runtime->lookupFunction(0x14BB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEA0u; }
        if (ctx->pc != 0x14BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BB58_0x14bb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEA0u; }
        if (ctx->pc != 0x14BEA0u) { return; }
    }
    ctx->pc = 0x14BEA0u;
    // 0x14bea0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x14bea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bea4: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x14bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x14bea8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14beac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14BEACu;
    {
        const bool branch_taken_0x14beac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEACu;
            // 0x14beb0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14beac) {
            ctx->pc = 0x14BE88u;
            runtime->cooperativeGuestYield();
            goto label_14be88;
        }
    }
    ctx->pc = 0x14BEB4u;
label_14beb4:
    // 0x14beb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14beb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bebc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bec0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bec4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bec8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14becc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bed0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bed4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14bed8: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x14bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14bedc: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x14bedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14bee0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x14bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14bee4: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x14bee4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14bee8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14beec: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x14beecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x14bef0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14BEF0u;
    {
        const bool branch_taken_0x14bef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEF0u;
            // 0x14bef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bef0) {
            ctx->pc = 0x14BF2Cu;
            goto label_14bf2c;
        }
    }
    ctx->pc = 0x14BEF8u;
    // 0x14bef8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14befc: 0x0  nop
    ctx->pc = 0x14befcu;
    // NOP
label_14bf00:
    // 0x14bf00: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14bf04: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bf08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bf10: 0xc052e7e  jal         func_14B9F8
    ctx->pc = 0x14BF10u;
    SET_GPR_U32(ctx, 31, 0x14BF18u);
    ctx->pc = 0x14BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF10u;
            // 0x14bf14: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B9F8u;
    if (runtime->hasFunction(0x14B9F8u)) {
        auto targetFn = runtime->lookupFunction(0x14B9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF18u; }
        if (ctx->pc != 0x14BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B9F8_0x14b9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF18u; }
        if (ctx->pc != 0x14BF18u) { return; }
    }
    ctx->pc = 0x14BF18u;
    // 0x14bf18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bf1c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14bf20: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bf20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bf24: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14BF24u;
    {
        const bool branch_taken_0x14bf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bf24) {
            ctx->pc = 0x14BF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF24u;
            // 0x14bf28: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BF00u;
            runtime->cooperativeGuestYield();
            goto label_14bf00;
        }
    }
    ctx->pc = 0x14BF2Cu;
label_14bf2c:
    // 0x14bf2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bf30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bf34: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bf38: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bf3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bf40: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bf44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bf48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bf4c: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x14bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x14bf50: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x14bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x14bf54: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14bf58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14bf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf5c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14bf60:
    // 0x14bf60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bf64: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bf64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bf68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf6c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x14bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x14bf70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bf74: 0xc052e7e  jal         func_14B9F8
    ctx->pc = 0x14BF74u;
    SET_GPR_U32(ctx, 31, 0x14BF7Cu);
    ctx->pc = 0x14BF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF74u;
            // 0x14bf78: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B9F8u;
    if (runtime->hasFunction(0x14B9F8u)) {
        auto targetFn = runtime->lookupFunction(0x14B9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF7Cu; }
        if (ctx->pc != 0x14BF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B9F8_0x14b9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF7Cu; }
        if (ctx->pc != 0x14BF7Cu) { return; }
    }
    ctx->pc = 0x14BF7Cu;
    // 0x14bf7c: 0x1200fff8  beqz        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14BF7Cu;
    {
        const bool branch_taken_0x14bf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF7Cu;
            // 0x14bf80: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf7c) {
            ctx->pc = 0x14BF60u;
            runtime->cooperativeGuestYield();
            goto label_14bf60;
        }
    }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bf88: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bf8c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x14bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bf90: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x14bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14bf94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bf98: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x14bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14bf9c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bfa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bfa4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x14bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bfa8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14bfac: 0x94a20048  lhu         $v0, 0x48($a1)
    ctx->pc = 0x14bfacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x14bfb0: 0x600013  mtlo        $v1
    ctx->pc = 0x14bfb0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x14bfb4: 0x70480000  madd        $zero, $v0, $t0
    ctx->pc = 0x14bfb4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x14bfb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfbc: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x14bfbcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14bfc0: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x14bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    // 0x14bfc4: 0x1812  mflo        $v1
    ctx->pc = 0x14bfc4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x14bfc8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x14bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14bfcc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bfd0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x14bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14bfd4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bfd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bfdc: 0x94a40050  lhu         $a0, 0x50($a1)
    ctx->pc = 0x14bfdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x14bfe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14bfe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfe4: 0x44400b  movn        $t0, $v0, $a0
    ctx->pc = 0x14bfe4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x14bfe8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14bfe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfec: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x14bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bff0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14bff4: 0xaca40054  sw          $a0, 0x54($a1)
    ctx->pc = 0x14bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 4));
    // 0x14bff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bffc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c000: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x14c000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x14c004: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x14c004u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14c008: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x14c008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x14c00c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14c010: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14c010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14c014: 0x94a30058  lhu         $v1, 0x58($a1)
    ctx->pc = 0x14c014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x14c018: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x14c018u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x14c01c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14c01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c020: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x14c020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
    // 0x14c024: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14c024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14c034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14c038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C03Cu;
            // 0x14c040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BCF8u: goto label_14bcf8;
            case 0x14BD20u: goto label_14bd20;
            case 0x14BD68u: goto label_14bd68;
            case 0x14BD94u: goto label_14bd94;
            case 0x14BDE0u: goto label_14bde0;
            case 0x14BE0Cu: goto label_14be0c;
            case 0x14BE88u: goto label_14be88;
            case 0x14BEB4u: goto label_14beb4;
            case 0x14BF00u: goto label_14bf00;
            case 0x14BF2Cu: goto label_14bf2c;
            case 0x14BF60u: goto label_14bf60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C044u;
    // 0x14c044: 0x0  nop
    ctx->pc = 0x14c044u;
    // NOP
}

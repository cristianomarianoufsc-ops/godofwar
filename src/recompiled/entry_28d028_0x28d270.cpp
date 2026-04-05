#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28d028
// Address: 0x28d028 - 0x28d270
void entry_28d028_0x28d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28d028_0x28d270");
#endif

    ctx->pc = 0x28d028u;

label_28d028:
    // 0x28d028: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28d02c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x28d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x28d030: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x28d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x28d034: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x28d034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x28d038: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x28d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x28d03c: 0x3c17002c  lui         $s7, 0x2C
    ctx->pc = 0x28d03cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)44 << 16));
    // 0x28d040: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x28d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x28d044: 0x26e55a19  addiu       $a1, $s7, 0x5A19
    ctx->pc = 0x28d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23065));
    // 0x28d048: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x28d04c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d050: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x28d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x28d054: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28d054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d058: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x28d05c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d060: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x28d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x28d064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28d068: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28d068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28d06c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x28d06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28d070: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d074: 0x0  nop
    ctx->pc = 0x28d074u;
    // NOP
label_28d078:
    // 0x28d078: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x28d078u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d07c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x28d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x28d080: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28d080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d084: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x28d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28d088: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D088u;
    {
        const bool branch_taken_0x28d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D088u;
            // 0x28d08c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d088) {
            ctx->pc = 0x28D078u;
            runtime->cooperativeGuestYield();
            goto label_28d078;
        }
    }
    ctx->pc = 0x28D090u;
    // 0x28d090: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28d094: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D094u;
    {
        const bool branch_taken_0x28d094 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D094u;
            // 0x28d098: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d094) {
            ctx->pc = 0x28D0ACu;
            goto label_28d0ac;
        }
    }
    ctx->pc = 0x28D09Cu;
    // 0x28d09c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D0A4u;
    {
        const bool branch_taken_0x28d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0A4u;
            // 0x28d0a8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0a4) {
            ctx->pc = 0x28D0B8u;
            goto label_28d0b8;
        }
    }
    ctx->pc = 0x28D0ACu;
label_28d0ac:
    // 0x28d0ac: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D0ACu;
    {
        const bool branch_taken_0x28d0ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d0ac) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D0B4u;
    // 0x28d0b4: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x28d0b4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_28d0b8:
    // 0x28d0b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28d0bc:
    // 0x28d0bc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D0BCu;
    {
        const bool branch_taken_0x28d0bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0BCu;
            // 0x28d0c0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0bc) {
            ctx->pc = 0x28D0CCu;
            goto label_28d0cc;
        }
    }
    ctx->pc = 0x28D0C4u;
    // 0x28d0c4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28D0C4u;
    {
        const bool branch_taken_0x28d0c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d0c4) {
            ctx->pc = 0x28D0F8u;
            goto label_28d0f8;
        }
    }
    ctx->pc = 0x28D0CCu;
label_28d0cc:
    // 0x28d0cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x28d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28d0d0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D0D0u;
    {
        const bool branch_taken_0x28d0d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0D0u;
            // 0x28d0d4: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0d0) {
            ctx->pc = 0x28D0F8u;
            goto label_28d0f8;
        }
    }
    ctx->pc = 0x28D0D8u;
    // 0x28d0d8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d0dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D0DCu;
    {
        const bool branch_taken_0x28d0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0DCu;
            // 0x28d0e0: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0dc) {
            ctx->pc = 0x28D0ECu;
            goto label_28d0ec;
        }
    }
    ctx->pc = 0x28D0E4u;
    // 0x28d0e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D0E4u;
    {
        const bool branch_taken_0x28d0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d0e4) {
            ctx->pc = 0x28D0F8u;
            goto label_28d0f8;
        }
    }
    ctx->pc = 0x28D0ECu;
label_28d0ec:
    // 0x28d0ec: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x28d0f0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d0f4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x28d0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_28d0f8:
    // 0x28d0f8: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D0F8u;
    {
        const bool branch_taken_0x28d0f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0F8u;
            // 0x28d0fc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0f8) {
            ctx->pc = 0x28D114u;
            goto label_28d114;
        }
    }
    ctx->pc = 0x28D100u;
    // 0x28d100: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28d104: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28d108: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x28d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x28d10c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x28d10cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x28d110: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28d110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28d114:
    // 0x28d114: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d11c: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x28D11Cu;
    SET_GPR_U32(ctx, 31, 0x28D124u);
    ctx->pc = 0x28D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D11Cu;
            // 0x28d120: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D124u; }
        if (ctx->pc != 0x28D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D124u; }
        if (ctx->pc != 0x28D124u) { return; }
    }
    ctx->pc = 0x28D124u;
    // 0x28d124: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d128: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28d128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d12c: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x28D12Cu;
    SET_GPR_U32(ctx, 31, 0x28D134u);
    ctx->pc = 0x28D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D12Cu;
            // 0x28d130: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D134u; }
        if (ctx->pc != 0x28D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D134u; }
        if (ctx->pc != 0x28D134u) { return; }
    }
    ctx->pc = 0x28D134u;
    // 0x28d134: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x28d134u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28d138: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x28d138u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x28d13c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28D13Cu;
    {
        const bool branch_taken_0x28d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D13Cu;
            // 0x28d140: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d13c) {
            ctx->pc = 0x28D194u;
            goto label_28d194;
        }
    }
    ctx->pc = 0x28D144u;
    // 0x28d144: 0x0  nop
    ctx->pc = 0x28d144u;
    // NOP
label_28d148:
    // 0x28d148: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x28d148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x28d14c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28D14Cu;
    {
        const bool branch_taken_0x28d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d14c) {
            ctx->pc = 0x28D1CCu;
            goto label_28d1cc;
        }
    }
    ctx->pc = 0x28D154u;
    // 0x28d154: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D154u;
    {
        const bool branch_taken_0x28d154 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x28D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D154u;
            // 0x28d158: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d154) {
            ctx->pc = 0x28D178u;
            goto label_28d178;
        }
    }
    ctx->pc = 0x28D15Cu;
    // 0x28d15c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28D15Cu;
    {
        const bool branch_taken_0x28d15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d15c) {
            ctx->pc = 0x28D160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D15Cu;
            // 0x28d160: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D18Cu;
            goto label_28d18c;
        }
    }
    ctx->pc = 0x28D164u;
    // 0x28d164: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D164u;
    {
        const bool branch_taken_0x28d164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x28D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D164u;
            // 0x28d168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d164) {
            ctx->pc = 0x28D180u;
            goto label_28d180;
        }
    }
    ctx->pc = 0x28D16Cu;
    // 0x28d16c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x28d16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28d170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D170u;
    {
        const bool branch_taken_0x28d170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d170) {
            ctx->pc = 0x28D180u;
            goto label_28d180;
        }
    }
    ctx->pc = 0x28D178u;
label_28d178:
    // 0x28d178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D178u;
    {
        const bool branch_taken_0x28d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D178u;
            // 0x28d17c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d178) {
            ctx->pc = 0x28D18Cu;
            goto label_28d18c;
        }
    }
    ctx->pc = 0x28D180u;
label_28d180:
    // 0x28d180: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x28D180u;
    SET_GPR_U32(ctx, 31, 0x28D188u);
    ctx->pc = 0x28D184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D180u;
            // 0x28d184: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D188u; }
        if (ctx->pc != 0x28D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D188u; }
        if (ctx->pc != 0x28D188u) { return; }
    }
    ctx->pc = 0x28D188u;
    // 0x28d188: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x28d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_28d18c:
    // 0x28d18c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x28d18cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d190: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28d194:
    // 0x28d194: 0x26e25a19  addiu       $v0, $s7, 0x5A19
    ctx->pc = 0x28d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 23065));
    // 0x28d198: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28d19c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x28d19cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d1a0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x28d1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x28d1a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D1A4u;
    {
        const bool branch_taken_0x28d1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1A4u;
            // 0x28d1a8: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1a4) {
            ctx->pc = 0x28D1B4u;
            goto label_28d1b4;
        }
    }
    ctx->pc = 0x28D1ACu;
    // 0x28d1ac: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x28D1ACu;
    {
        const bool branch_taken_0x28d1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1ACu;
            // 0x28d1b0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1ac) {
            ctx->pc = 0x28D148u;
            runtime->cooperativeGuestYield();
            goto label_28d148;
        }
    }
    ctx->pc = 0x28D1B4u;
label_28d1b4:
    // 0x28d1b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D1B4u;
    {
        const bool branch_taken_0x28d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1B4u;
            // 0x28d1b8: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1b4) {
            ctx->pc = 0x28D1CCu;
            goto label_28d1cc;
        }
    }
    ctx->pc = 0x28D1BCu;
    // 0x28d1bc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x28d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x28d1c0: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x28d1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x28d1c4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x28D1C4u;
    {
        const bool branch_taken_0x28d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1C4u;
            // 0x28d1c8: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1c4) {
            ctx->pc = 0x28D148u;
            runtime->cooperativeGuestYield();
            goto label_28d148;
        }
    }
    ctx->pc = 0x28D1CCu;
label_28d1cc:
    // 0x28d1cc: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D1CCu;
    {
        const bool branch_taken_0x28d1cc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x28D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1CCu;
            // 0x28d1d0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1cc) {
            ctx->pc = 0x28D1E8u;
            goto label_28d1e8;
        }
    }
    ctx->pc = 0x28D1D4u;
    // 0x28d1d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d1d8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x28d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x28d1dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28D1E0u;
    {
        const bool branch_taken_0x28d1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1E0u;
            // 0x28d1e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1e0) {
            ctx->pc = 0x28D1F0u;
            goto label_28d1f0;
        }
    }
    ctx->pc = 0x28D1E8u;
label_28d1e8:
    // 0x28d1e8: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x28d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x28d1ec: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x28d1ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_28d1f0:
    // 0x28d1f0: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D1F0u;
    {
        const bool branch_taken_0x28d1f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1F0u;
            // 0x28d1f4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1f0) {
            ctx->pc = 0x28D204u;
            goto label_28d204;
        }
    }
    ctx->pc = 0x28D1F8u;
    // 0x28d1f8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x28d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x28d1fc: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x28d1fcu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x28d200: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x28d200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_28d204:
    // 0x28d204: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28d204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28d208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28d208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d20c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x28d20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28d210: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28d210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28d214: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x28d214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d218: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28d218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d21c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d21cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d220: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x28d220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d224: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x28d224u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d228: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x28d228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d22c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d230: 0x3e00008  jr          $ra
    ctx->pc = 0x28D230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D230u;
            // 0x28d234: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D028u: goto label_28d028;
            case 0x28D078u: goto label_28d078;
            case 0x28D0ACu: goto label_28d0ac;
            case 0x28D0B8u: goto label_28d0b8;
            case 0x28D0BCu: goto label_28d0bc;
            case 0x28D0CCu: goto label_28d0cc;
            case 0x28D0ECu: goto label_28d0ec;
            case 0x28D0F8u: goto label_28d0f8;
            case 0x28D114u: goto label_28d114;
            case 0x28D148u: goto label_28d148;
            case 0x28D178u: goto label_28d178;
            case 0x28D180u: goto label_28d180;
            case 0x28D18Cu: goto label_28d18c;
            case 0x28D194u: goto label_28d194;
            case 0x28D1B4u: goto label_28d1b4;
            case 0x28D1CCu: goto label_28d1cc;
            case 0x28D1E8u: goto label_28d1e8;
            case 0x28D1F0u: goto label_28d1f0;
            case 0x28D204u: goto label_28d204;
            case 0x28D260u: goto label_28d260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D238u;
    // 0x28d238: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x28d238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d23c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28d240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28d244: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28d244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d248: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28d248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d24c: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x28d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28d250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d254: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x28d254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d258: 0xc0a340a  jal         func_28D028
    ctx->pc = 0x28D258u;
    SET_GPR_U32(ctx, 31, 0x28D260u);
    ctx->pc = 0x28D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D258u;
            // 0x28d25c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D028u;
    runtime->cooperativeGuestYield();
    goto label_28d028;
    ctx->pc = 0x28D260u;
label_28d260:
    // 0x28d260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d264: 0x3e00008  jr          $ra
    ctx->pc = 0x28D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D264u;
            // 0x28d268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D028u: goto label_28d028;
            case 0x28D078u: goto label_28d078;
            case 0x28D0ACu: goto label_28d0ac;
            case 0x28D0B8u: goto label_28d0b8;
            case 0x28D0BCu: goto label_28d0bc;
            case 0x28D0CCu: goto label_28d0cc;
            case 0x28D0ECu: goto label_28d0ec;
            case 0x28D0F8u: goto label_28d0f8;
            case 0x28D114u: goto label_28d114;
            case 0x28D148u: goto label_28d148;
            case 0x28D178u: goto label_28d178;
            case 0x28D180u: goto label_28d180;
            case 0x28D18Cu: goto label_28d18c;
            case 0x28D194u: goto label_28d194;
            case 0x28D1B4u: goto label_28d1b4;
            case 0x28D1CCu: goto label_28d1cc;
            case 0x28D1E8u: goto label_28d1e8;
            case 0x28D1F0u: goto label_28d1f0;
            case 0x28D204u: goto label_28d204;
            case 0x28D260u: goto label_28d260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D26Cu;
    // 0x28d26c: 0x0  nop
    ctx->pc = 0x28d26cu;
    // NOP
}

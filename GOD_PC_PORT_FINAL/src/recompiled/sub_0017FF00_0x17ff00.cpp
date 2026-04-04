#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FF00
// Address: 0x17ff00 - 0x180090
void sub_0017FF00_0x17ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FF00_0x17ff00");
#endif

    ctx->pc = 0x17ff00u;

    // 0x17ff00: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x17ff04: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x17ff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x17ff08: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x17ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x17ff0c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17ff10: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x17ff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x17ff14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ff14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff18: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x17ff18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17ff1c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x17ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x17ff20: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x17ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x17ff24: 0x27b20001  addiu       $s2, $sp, 0x1
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x17ff28: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x17ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x17ff2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x17ff2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff30: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17ff34: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x17ff34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff38: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x17ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x17ff3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff40: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x17ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x17ff44: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x17ff44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff48: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x17ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x17ff4c: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x17ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x17ff50: 0xc060342  jal         func_180D08
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF50u;
            // 0x17ff54: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    }
    ctx->pc = 0x17FF58u;
    // 0x17ff58: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17ff5c: 0xc060336  jal         func_180CD8
    ctx->pc = 0x17FF5Cu;
    SET_GPR_U32(ctx, 31, 0x17FF64u);
    ctx->pc = 0x17FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF5Cu;
            // 0x17ff60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD8u;
    if (runtime->hasFunction(0x180CD8u)) {
        auto targetFn = runtime->lookupFunction(0x180CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF64u; }
        if (ctx->pc != 0x17FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD8_0x180cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF64u; }
        if (ctx->pc != 0x17FF64u) { return; }
    }
    ctx->pc = 0x17FF64u;
    // 0x17ff64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ff64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff68: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17FF68u;
    SET_GPR_U32(ctx, 31, 0x17FF70u);
    ctx->pc = 0x17FF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF68u;
            // 0x17ff6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF70u; }
        if (ctx->pc != 0x17FF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF70u; }
        if (ctx->pc != 0x17FF70u) { return; }
    }
    ctx->pc = 0x17FF70u;
    // 0x17ff70: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17ff74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff78: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x17FF78u;
    SET_GPR_U32(ctx, 31, 0x17FF80u);
    ctx->pc = 0x17FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF78u;
            // 0x17ff7c: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF80u; }
        if (ctx->pc != 0x17FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF80u; }
        if (ctx->pc != 0x17FF80u) { return; }
    }
    ctx->pc = 0x17FF80u;
    // 0x17ff80: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x17ff80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x17ff84: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x17FF84u;
    {
        const bool branch_taken_0x17ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF84u;
            // 0x17ff88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff84) {
            ctx->pc = 0x180064u;
            goto label_180064;
        }
    }
    ctx->pc = 0x17FF8Cu;
    // 0x17ff8c: 0x0  nop
    ctx->pc = 0x17ff8cu;
    // NOP
label_17ff90:
    // 0x17ff90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FF90u;
    {
        const bool branch_taken_0x17ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF90u;
            // 0x17ff94: 0x82430000  lb          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff90) {
            ctx->pc = 0x17FF9Cu;
            goto label_17ff9c;
        }
    }
    ctx->pc = 0x17FF98u;
label_17ff98:
    // 0x17ff98: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_17ff9c:
    // 0x17ff9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FF9Cu;
    {
        const bool branch_taken_0x17ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF9Cu;
            // 0x17ffa0: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff9c) {
            ctx->pc = 0x17FFB8u;
            goto label_17ffb8;
        }
    }
    ctx->pc = 0x17FFA4u;
    // 0x17ffa4: 0x5462fffc  bnel        $v1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17FFA4u;
    {
        const bool branch_taken_0x17ffa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ffa4) {
            ctx->pc = 0x17FFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFA4u;
            // 0x17ffa8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FF98u;
            runtime->cooperativeGuestYield();
            goto label_17ff98;
        }
    }
    ctx->pc = 0x17FFACu;
    // 0x17ffac: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17ffb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17FFB0u;
    {
        const bool branch_taken_0x17ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ffb0) {
            ctx->pc = 0x17FFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFB0u;
            // 0x17ffb4: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FFB8u;
            goto label_17ffb8;
        }
    }
    ctx->pc = 0x17FFB8u;
label_17ffb8:
    // 0x17ffb8: 0x8fb00104  lw          $s0, 0x104($sp)
    ctx->pc = 0x17ffb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x17ffbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ffc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17ffc4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17ffc8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17ffcc: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FFCCu;
    {
        const bool branch_taken_0x17ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFCCu;
            // 0x17ffd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffcc) {
            ctx->pc = 0x180048u;
            goto label_180048;
        }
    }
    ctx->pc = 0x17FFD4u;
    // 0x17ffd4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17ffd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffdc: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x17ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x17ffe0: 0xc0a28ce  jal         func_28A338
    ctx->pc = 0x17FFE0u;
    SET_GPR_U32(ctx, 31, 0x17FFE8u);
    ctx->pc = 0x17FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFE0u;
            // 0x17ffe4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A338u;
    if (runtime->hasFunction(0x28A338u)) {
        auto targetFn = runtime->lookupFunction(0x28A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFE8u; }
        if (ctx->pc != 0x17FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A338_0x28a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFE8u; }
        if (ctx->pc != 0x17FFE8u) { return; }
    }
    ctx->pc = 0x17FFE8u;
    // 0x17ffe8: 0x97a50110  lhu         $a1, 0x110($sp)
    ctx->pc = 0x17ffe8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17ffec: 0xc06042e  jal         func_1810B8
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x17FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFECu;
            // 0x17fff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810B8u;
    if (runtime->hasFunction(0x1810B8u)) {
        auto targetFn = runtime->lookupFunction(0x1810B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFF4u; }
        if (ctx->pc != 0x17FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810B8_0x1810b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFF4u; }
        if (ctx->pc != 0x17FFF4u) { return; }
    }
    ctx->pc = 0x17FFF4u;
    // 0x17fff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FFF4u;
    {
        const bool branch_taken_0x17fff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFF4u;
            // 0x17fff8: 0x97a50110  lhu         $a1, 0x110($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff4) {
            ctx->pc = 0x18000Cu;
            goto label_18000c;
        }
    }
    ctx->pc = 0x17FFFCu;
    // 0x17fffc: 0xc060438  jal         func_1810E0
    ctx->pc = 0x17FFFCu;
    SET_GPR_U32(ctx, 31, 0x180004u);
    ctx->pc = 0x180000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFFCu;
            // 0x180000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810E0u;
    if (runtime->hasFunction(0x1810E0u)) {
        auto targetFn = runtime->lookupFunction(0x1810E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180004u; }
        if (ctx->pc != 0x180004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810E0_0x1810e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180004u; }
        if (ctx->pc != 0x180004u) { return; }
    }
    ctx->pc = 0x180004u;
    // 0x180004: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x180004u;
    {
        const bool branch_taken_0x180004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180004u;
            // 0x180008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180004) {
            ctx->pc = 0x180064u;
            goto label_180064;
        }
    }
    ctx->pc = 0x18000Cu;
label_18000c:
    // 0x18000c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x180010: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x180010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x180014: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x180014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x180018: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x180018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18001c: 0x40f809  jalr        $v0
    ctx->pc = 0x18001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180024u);
        ctx->pc = 0x180020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18001Cu;
            // 0x180020: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180024u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FF90u: goto label_17ff90;
            case 0x17FF98u: goto label_17ff98;
            case 0x17FF9Cu: goto label_17ff9c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x18000Cu: goto label_18000c;
            case 0x180048u: goto label_180048;
            case 0x180064u: goto label_180064;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180024u; }
            if (ctx->pc != 0x180024u) { return; }
        }
        }
    }
    ctx->pc = 0x180024u;
    // 0x180024: 0xc060274  jal         func_1809D0
    ctx->pc = 0x180024u;
    SET_GPR_U32(ctx, 31, 0x18002Cu);
    ctx->pc = 0x180028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180024u;
            // 0x180028: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1809D0u;
    if (runtime->hasFunction(0x1809D0u)) {
        auto targetFn = runtime->lookupFunction(0x1809D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18002Cu; }
        if (ctx->pc != 0x18002Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D0_0x1809d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18002Cu; }
        if (ctx->pc != 0x18002Cu) { return; }
    }
    ctx->pc = 0x18002Cu;
    // 0x18002c: 0x97a50110  lhu         $a1, 0x110($sp)
    ctx->pc = 0x18002cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x180030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180034: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180038: 0xc06044c  jal         func_181130
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 31, 0x180040u);
    ctx->pc = 0x18003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180038u;
            // 0x18003c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181130u;
    if (runtime->hasFunction(0x181130u)) {
        auto targetFn = runtime->lookupFunction(0x181130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180040u; }
        if (ctx->pc != 0x180040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181130_0x181130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180040u; }
        if (ctx->pc != 0x180040u) { return; }
    }
    ctx->pc = 0x180040u;
    // 0x180040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180044: 0x0  nop
    ctx->pc = 0x180044u;
    // NOP
label_180048:
    // 0x180048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x180048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18004c: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x18004Cu;
    SET_GPR_U32(ctx, 31, 0x180054u);
    ctx->pc = 0x180050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18004Cu;
            // 0x180050: 0x26720001  addiu       $s2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180054u; }
        if (ctx->pc != 0x180054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180054u; }
        if (ctx->pc != 0x180054u) { return; }
    }
    ctx->pc = 0x180054u;
    // 0x180054: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x180058: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x180058u;
    {
        const bool branch_taken_0x180058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180058u;
            // 0x18005c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180058) {
            ctx->pc = 0x17FF90u;
            runtime->cooperativeGuestYield();
            goto label_17ff90;
        }
    }
    ctx->pc = 0x180060u;
    // 0x180060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180064:
    // 0x180064: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x180064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x180068: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x180068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x18006c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x18006cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x180070: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x180070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x180074: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x180074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x180078: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x180078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18007c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x18007cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x180080: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x180080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x180084: 0x3e00008  jr          $ra
    ctx->pc = 0x180084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180084u;
            // 0x180088: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FF90u: goto label_17ff90;
            case 0x17FF98u: goto label_17ff98;
            case 0x17FF9Cu: goto label_17ff9c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x18000Cu: goto label_18000c;
            case 0x180048u: goto label_180048;
            case 0x180064u: goto label_180064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18008Cu;
    // 0x18008c: 0x0  nop
    ctx->pc = 0x18008cu;
    // NOP
}

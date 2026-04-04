#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244960
// Address: 0x244960 - 0x244ae0
void sub_00244960_0x244960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244960_0x244960");
#endif

    ctx->pc = 0x244960u;

    // 0x244960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x244964: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x244964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x244968: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x244968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x24496c: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x24496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x244970: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x244970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x244974: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x244974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x244978: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x244978u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24497c: 0xe7ae003c  swc1        $f14, 0x3C($sp)
    ctx->pc = 0x24497cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x244980: 0xe7b00040  swc1        $f16, 0x40($sp)
    ctx->pc = 0x244980u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x244984: 0xe7b20044  swc1        $f18, 0x44($sp)
    ctx->pc = 0x244984u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x244988: 0x3e00008  jr          $ra
    ctx->pc = 0x244988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244988u;
            // 0x24498c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2449F0u: goto label_2449f0;
            case 0x2449F8u: goto label_2449f8;
            case 0x244A0Cu: goto label_244a0c;
            case 0x244A20u: goto label_244a20;
            case 0x244A4Cu: goto label_244a4c;
            case 0x244A70u: goto label_244a70;
            case 0x244A78u: goto label_244a78;
            case 0x244A8Cu: goto label_244a8c;
            case 0x244AA0u: goto label_244aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244990u;
    // 0x244990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x244994: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x244994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x244998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x244998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24499c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24499cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2449a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2449a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2449a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2449a8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2449ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2449acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2449b0: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x2449b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2449b4: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x2449b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2449b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2449b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2449bc: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2449bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2449c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2449c4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2449C4u;
    {
        const bool branch_taken_0x2449c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2449c4) {
            ctx->pc = 0x244A4Cu;
            goto label_244a4c;
        }
    }
    ctx->pc = 0x2449CCu;
    // 0x2449cc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2449CCu;
    SET_GPR_U32(ctx, 31, 0x2449D4u);
    ctx->pc = 0x2449D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2449CCu;
            // 0x2449d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449D4u; }
        if (ctx->pc != 0x2449D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449D4u; }
        if (ctx->pc != 0x2449D4u) { return; }
    }
    ctx->pc = 0x2449D4u;
    // 0x2449d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2449d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449d8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2449D8u;
    {
        const bool branch_taken_0x2449d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2449d8) {
            ctx->pc = 0x2449F8u;
            goto label_2449f8;
        }
    }
    ctx->pc = 0x2449E0u;
    // 0x2449e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2449e4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2449E4u;
    {
        const bool branch_taken_0x2449e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2449E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2449E4u;
            // 0x2449e8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449e4) {
            ctx->pc = 0x2449F0u;
            goto label_2449f0;
        }
    }
    ctx->pc = 0x2449ECu;
    // 0x2449ec: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_2449f0:
    // 0x2449f0: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x2449F0u;
    SET_GPR_U32(ctx, 31, 0x2449F8u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449F8u; }
        if (ctx->pc != 0x2449F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449F8u; }
        if (ctx->pc != 0x2449F8u) { return; }
    }
    ctx->pc = 0x2449F8u;
label_2449f8:
    // 0x2449f8: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2449F8u;
    {
        const bool branch_taken_0x2449f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2449f8) {
            ctx->pc = 0x2449FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2449F8u;
            // 0x2449fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244A0Cu;
            goto label_244a0c;
        }
    }
    ctx->pc = 0x244A00u;
    // 0x244a00: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x244A00u;
    SET_GPR_U32(ctx, 31, 0x244A08u);
    ctx->pc = 0x244A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A00u;
            // 0x244a04: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A08u; }
        if (ctx->pc != 0x244A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A08u; }
        if (ctx->pc != 0x244A08u) { return; }
    }
    ctx->pc = 0x244A08u;
    // 0x244a08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244a0c:
    // 0x244a0c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244A0Cu;
    {
        const bool branch_taken_0x244a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a0c) {
            ctx->pc = 0x244A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244A0Cu;
            // 0x244a10: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244A20u;
            goto label_244a20;
        }
    }
    ctx->pc = 0x244A14u;
    // 0x244a14: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x244A14u;
    SET_GPR_U32(ctx, 31, 0x244A1Cu);
    ctx->pc = 0x244A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A14u;
            // 0x244a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A1Cu; }
        if (ctx->pc != 0x244A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A1Cu; }
        if (ctx->pc != 0x244A1Cu) { return; }
    }
    ctx->pc = 0x244A1Cu;
    // 0x244a1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244a20:
    // 0x244a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x244a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x244a28: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x244A28u;
    SET_GPR_U32(ctx, 31, 0x244A30u);
    ctx->pc = 0x244A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A28u;
            // 0x244a2c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A30u; }
        if (ctx->pc != 0x244A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A30u; }
        if (ctx->pc != 0x244A30u) { return; }
    }
    ctx->pc = 0x244A30u;
    // 0x244a30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x244a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x244a34: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x244A34u;
    {
        const bool branch_taken_0x244a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a34) {
            ctx->pc = 0x244A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244A34u;
            // 0x244a38: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244AA0u;
            goto label_244aa0;
        }
    }
    ctx->pc = 0x244A3Cu;
    // 0x244a3c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x244A3Cu;
    SET_GPR_U32(ctx, 31, 0x244A44u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A44u; }
        if (ctx->pc != 0x244A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A44u; }
        if (ctx->pc != 0x244A44u) { return; }
    }
    ctx->pc = 0x244A44u;
    // 0x244a44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x244A44u;
    {
        const bool branch_taken_0x244a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244A44u;
            // 0x244a48: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a44) {
            ctx->pc = 0x244AA0u;
            goto label_244aa0;
        }
    }
    ctx->pc = 0x244A4Cu;
label_244a4c:
    // 0x244a4c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244A4Cu;
    SET_GPR_U32(ctx, 31, 0x244A54u);
    ctx->pc = 0x244A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A4Cu;
            // 0x244a50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A54u; }
        if (ctx->pc != 0x244A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A54u; }
        if (ctx->pc != 0x244A54u) { return; }
    }
    ctx->pc = 0x244A54u;
    // 0x244a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a58: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x244A58u;
    {
        const bool branch_taken_0x244a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a58) {
            ctx->pc = 0x244A78u;
            goto label_244a78;
        }
    }
    ctx->pc = 0x244A60u;
    // 0x244a60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x244a64: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244A64u;
    {
        const bool branch_taken_0x244a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244A64u;
            // 0x244a68: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a64) {
            ctx->pc = 0x244A70u;
            goto label_244a70;
        }
    }
    ctx->pc = 0x244A6Cu;
    // 0x244a6c: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x244a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_244a70:
    // 0x244a70: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x244A70u;
    SET_GPR_U32(ctx, 31, 0x244A78u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A78u; }
        if (ctx->pc != 0x244A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A78u; }
        if (ctx->pc != 0x244A78u) { return; }
    }
    ctx->pc = 0x244A78u;
label_244a78:
    // 0x244a78: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244A78u;
    {
        const bool branch_taken_0x244a78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a78) {
            ctx->pc = 0x244A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244A78u;
            // 0x244a7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244A8Cu;
            goto label_244a8c;
        }
    }
    ctx->pc = 0x244A80u;
    // 0x244a80: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x244A80u;
    SET_GPR_U32(ctx, 31, 0x244A88u);
    ctx->pc = 0x244A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A80u;
            // 0x244a84: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A88u; }
        if (ctx->pc != 0x244A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A88u; }
        if (ctx->pc != 0x244A88u) { return; }
    }
    ctx->pc = 0x244A88u;
    // 0x244a88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244a8c:
    // 0x244a8c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244A8Cu;
    {
        const bool branch_taken_0x244a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a8c) {
            ctx->pc = 0x244A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244A8Cu;
            // 0x244a90: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244AA0u;
            goto label_244aa0;
        }
    }
    ctx->pc = 0x244A94u;
    // 0x244a94: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x244A94u;
    SET_GPR_U32(ctx, 31, 0x244A9Cu);
    ctx->pc = 0x244A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244A94u;
            // 0x244a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A9Cu; }
        if (ctx->pc != 0x244A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244A9Cu; }
        if (ctx->pc != 0x244A9Cu) { return; }
    }
    ctx->pc = 0x244A9Cu;
    // 0x244a9c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x244a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_244aa0:
    // 0x244aa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x244aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244aa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x244aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244aa8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x244aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x244AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244AB0u;
            // 0x244ab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2449F0u: goto label_2449f0;
            case 0x2449F8u: goto label_2449f8;
            case 0x244A0Cu: goto label_244a0c;
            case 0x244A20u: goto label_244a20;
            case 0x244A4Cu: goto label_244a4c;
            case 0x244A70u: goto label_244a70;
            case 0x244A78u: goto label_244a78;
            case 0x244A8Cu: goto label_244a8c;
            case 0x244AA0u: goto label_244aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244AB8u;
    // 0x244ab8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244abc: 0x0  nop
    ctx->pc = 0x244abcu;
    // NOP
    // 0x244ac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244ac4: 0x0  nop
    ctx->pc = 0x244ac4u;
    // NOP
    // 0x244ac8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244acc: 0x0  nop
    ctx->pc = 0x244accu;
    // NOP
    // 0x244ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244ad4: 0x0  nop
    ctx->pc = 0x244ad4u;
    // NOP
    // 0x244ad8: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x244adc: 0x0  nop
    ctx->pc = 0x244adcu;
    // NOP
}

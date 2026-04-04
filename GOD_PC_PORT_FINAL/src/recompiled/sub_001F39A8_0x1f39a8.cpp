#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F39A8
// Address: 0x1f39a8 - 0x1f3a80
void sub_001F39A8_0x1f39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F39A8_0x1f39a8");
#endif

    ctx->pc = 0x1f39a8u;

    // 0x1f39a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f39a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f39ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f39acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f39b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f39b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f39b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f39bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f39bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f39c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f39c4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F39C4u;
    {
        const bool branch_taken_0x1f39c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39C4u;
            // 0x1f39c8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39c4) {
            ctx->pc = 0x1F3A68u;
            goto label_1f3a68;
        }
    }
    ctx->pc = 0x1F39CCu;
    // 0x1f39cc: 0x8e510104  lw          $s1, 0x104($s2)
    ctx->pc = 0x1f39ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1f39d0: 0x52200026  beql        $s1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F39D0u;
    {
        const bool branch_taken_0x1f39d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39d0) {
            ctx->pc = 0x1F39D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39D0u;
            // 0x1f39d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3A6Cu;
            goto label_1f3a6c;
        }
    }
    ctx->pc = 0x1F39D8u;
    // 0x1f39d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f39d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f39dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f39dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39e0: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F39E0u;
    SET_GPR_U32(ctx, 31, 0x1F39E8u);
    ctx->pc = 0x1F39E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39E0u;
            // 0x1f39e4: 0x24847308  addiu       $a0, $a0, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39E8u; }
        if (ctx->pc != 0x1F39E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39E8u; }
        if (ctx->pc != 0x1F39E8u) { return; }
    }
    ctx->pc = 0x1F39E8u;
    // 0x1f39e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f39e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39ec: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F39ECu;
    SET_GPR_U32(ctx, 31, 0x1F39F4u);
    ctx->pc = 0x1F39F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39ECu;
            // 0x1f39f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39F4u; }
        if (ctx->pc != 0x1F39F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39F4u; }
        if (ctx->pc != 0x1F39F4u) { return; }
    }
    ctx->pc = 0x1F39F4u;
    // 0x1f39f4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f39f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f39f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39fc: 0x24847318  addiu       $a0, $a0, 0x7318
    ctx->pc = 0x1f39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29464));
    // 0x1f3a00: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F3A00u;
    SET_GPR_U32(ctx, 31, 0x1F3A08u);
    ctx->pc = 0x1F3A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A00u;
            // 0x1f3a04: 0xa602001c  sh          $v0, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A08u; }
        if (ctx->pc != 0x1F3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A08u; }
        if (ctx->pc != 0x1F3A08u) { return; }
    }
    ctx->pc = 0x1F3A08u;
    // 0x1f3a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a0c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A14u);
    ctx->pc = 0x1F3A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A0Cu;
            // 0x1f3a10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A14u; }
        if (ctx->pc != 0x1F3A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A14u; }
        if (ctx->pc != 0x1F3A14u) { return; }
    }
    ctx->pc = 0x1F3A14u;
    // 0x1f3a14: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f3a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a1c: 0x24847320  addiu       $a0, $a0, 0x7320
    ctx->pc = 0x1f3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29472));
    // 0x1f3a20: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F3A20u;
    SET_GPR_U32(ctx, 31, 0x1F3A28u);
    ctx->pc = 0x1F3A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A20u;
            // 0x1f3a24: 0xa602001e  sh          $v0, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A28u; }
        if (ctx->pc != 0x1F3A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A28u; }
        if (ctx->pc != 0x1F3A28u) { return; }
    }
    ctx->pc = 0x1F3A28u;
    // 0x1f3a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a2c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A34u);
    ctx->pc = 0x1F3A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A2Cu;
            // 0x1f3a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A34u; }
        if (ctx->pc != 0x1F3A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A34u; }
        if (ctx->pc != 0x1F3A34u) { return; }
    }
    ctx->pc = 0x1F3A34u;
    // 0x1f3a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3a3c: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x1f3a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f3a40: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3A40u;
    {
        const bool branch_taken_0x1f3a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F3A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A40u;
            // 0x1f3a44: 0xa6040020  sh          $a0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a40) {
            ctx->pc = 0x1F3A68u;
            goto label_1f3a68;
        }
    }
    ctx->pc = 0x1F3A48u;
    // 0x1f3a48: 0x8602001e  lh          $v0, 0x1E($s0)
    ctx->pc = 0x1f3a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1f3a4c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3A4Cu;
    {
        const bool branch_taken_0x1f3a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3a4c) {
            ctx->pc = 0x1F3A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A4Cu;
            // 0x1f3a50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3A6Cu;
            goto label_1f3a6c;
        }
    }
    ctx->pc = 0x1F3A54u;
    // 0x1f3a54: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1f3a58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f3a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f3a5c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3A5Cu;
    {
        const bool branch_taken_0x1f3a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f3a5c) {
            ctx->pc = 0x1F3A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A5Cu;
            // 0x1f3a60: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3A68u;
            goto label_1f3a68;
        }
    }
    ctx->pc = 0x1F3A64u;
    // 0x1f3a64: 0x0  nop
    ctx->pc = 0x1f3a64u;
    // NOP
label_1f3a68:
    // 0x1f3a68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f3a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3a6c:
    // 0x1f3a6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3a70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f3a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A78u;
            // 0x1f3a7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3A68u: goto label_1f3a68;
            case 0x1F3A6Cu: goto label_1f3a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3A80u;
}

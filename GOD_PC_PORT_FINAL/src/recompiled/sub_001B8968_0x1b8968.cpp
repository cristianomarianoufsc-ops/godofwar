#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8968
// Address: 0x1b8968 - 0x1b8a48
void sub_001B8968_0x1b8968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8968_0x1b8968");
#endif

    ctx->pc = 0x1b8968u;

    // 0x1b8968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b896c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b897c: 0x8e221530  lw          $v0, 0x1530($s1)
    ctx->pc = 0x1b897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5424)));
    // 0x1b8980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8980u;
    {
        const bool branch_taken_0x1b8980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8980u;
            // 0x1b8984: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8980) {
            ctx->pc = 0x1B8998u;
            goto label_1b8998;
        }
    }
    ctx->pc = 0x1B8988u;
    // 0x1b8988: 0xae201530  sw          $zero, 0x1530($s1)
    ctx->pc = 0x1b8988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5424), GPR_U32(ctx, 0));
    // 0x1b898c: 0xae200228  sw          $zero, 0x228($s1)
    ctx->pc = 0x1b898cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
    // 0x1b8990: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8990u;
    SET_GPR_U32(ctx, 31, 0x1B8998u);
    ctx->pc = 0x1B8994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8990u;
            // 0x1b8994: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8998u; }
        if (ctx->pc != 0x1B8998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8998u; }
        if (ctx->pc != 0x1B8998u) { return; }
    }
    ctx->pc = 0x1B8998u;
label_1b8998:
    // 0x1b8998: 0x8e251528  lw          $a1, 0x1528($s1)
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5416)));
    // 0x1b899c: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B899Cu;
    {
        const bool branch_taken_0x1b899c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b899c) {
            ctx->pc = 0x1B89A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B899Cu;
            // 0x1b89a0: 0x8e22152c  lw          $v0, 0x152C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8A00u;
            goto label_1b8a00;
        }
    }
    ctx->pc = 0x1B89A4u;
    // 0x1b89a4: 0xc621153c  lwc1        $f1, 0x153C($s1)
    ctx->pc = 0x1b89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b89a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b89a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b89ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b89acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b89b0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B89B0u;
    {
        const bool branch_taken_0x1b89b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b89b0) {
            ctx->pc = 0x1B89ECu;
            goto label_1b89ec;
        }
    }
    ctx->pc = 0x1B89B8u;
    // 0x1b89b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B89B8u;
    {
        const bool branch_taken_0x1b89b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89B8u;
            // 0x1b89bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89b8) {
            ctx->pc = 0x1B89E0u;
            goto label_1b89e0;
        }
    }
    ctx->pc = 0x1B89C0u;
    // 0x1b89c0: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x1b89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1b89c4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b89c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b89c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b89ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b89d4: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1B89D4u;
    SET_GPR_U32(ctx, 31, 0x1B89DCu);
    ctx->pc = 0x1B89D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89D4u;
            // 0x1b89d8: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89DCu; }
        if (ctx->pc != 0x1B89DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89DCu; }
        if (ctx->pc != 0x1B89DCu) { return; }
    }
    ctx->pc = 0x1B89DCu;
    // 0x1b89dc: 0x0  nop
    ctx->pc = 0x1b89dcu;
    // NOP
label_1b89e0:
    // 0x1b89e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b89e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89e4: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B89E4u;
    SET_GPR_U32(ctx, 31, 0x1B89ECu);
    ctx->pc = 0x1B89E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89E4u;
            // 0x1b89e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89ECu; }
        if (ctx->pc != 0x1B89ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89ECu; }
        if (ctx->pc != 0x1B89ECu) { return; }
    }
    ctx->pc = 0x1B89ECu;
label_1b89ec:
    // 0x1b89ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b89ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b89f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b89f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89f4: 0xc06e37c  jal         func_1B8DF0
    ctx->pc = 0x1B89F4u;
    SET_GPR_U32(ctx, 31, 0x1B89FCu);
    ctx->pc = 0x1B89F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89F4u;
            // 0x1b89f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DF0u;
    if (runtime->hasFunction(0x1B8DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89FCu; }
        if (ctx->pc != 0x1B89FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DF0_0x1b8df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89FCu; }
        if (ctx->pc != 0x1B89FCu) { return; }
    }
    ctx->pc = 0x1B89FCu;
    // 0x1b89fc: 0x8e22152c  lw          $v0, 0x152C($s1)
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5420)));
label_1b8a00:
    // 0x1b8a00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8A00u;
    {
        const bool branch_taken_0x1b8a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A00u;
            // 0x1b8a04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a00) {
            ctx->pc = 0x1B8A20u;
            goto label_1b8a20;
        }
    }
    ctx->pc = 0x1B8A08u;
    // 0x1b8a08: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x1b8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x1b8a0c: 0xae300278  sw          $s0, 0x278($s1)
    ctx->pc = 0x1b8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 16));
    // 0x1b8a10: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8A10u;
    SET_GPR_U32(ctx, 31, 0x1B8A18u);
    ctx->pc = 0x1B8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A10u;
            // 0x1b8a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    }
    ctx->pc = 0x1B8A18u;
    // 0x1b8a18: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x1b8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x1b8a1c: 0xae20152c  sw          $zero, 0x152C($s1)
    ctx->pc = 0x1b8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5420), GPR_U32(ctx, 0));
label_1b8a20:
    // 0x1b8a20: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B8A20u;
    SET_GPR_U32(ctx, 31, 0x1B8A28u);
    ctx->pc = 0x1B8A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A20u;
            // 0x1b8a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A28u; }
        if (ctx->pc != 0x1B8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A28u; }
        if (ctx->pc != 0x1B8A28u) { return; }
    }
    ctx->pc = 0x1B8A28u;
    // 0x1b8a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8a2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8a30: 0xae2201bc  sw          $v0, 0x1BC($s1)
    ctx->pc = 0x1b8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
    // 0x1b8a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A3Cu;
            // 0x1b8a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8998u: goto label_1b8998;
            case 0x1B89E0u: goto label_1b89e0;
            case 0x1B89ECu: goto label_1b89ec;
            case 0x1B8A00u: goto label_1b8a00;
            case 0x1B8A20u: goto label_1b8a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8A44u;
    // 0x1b8a44: 0x0  nop
    ctx->pc = 0x1b8a44u;
    // NOP
}

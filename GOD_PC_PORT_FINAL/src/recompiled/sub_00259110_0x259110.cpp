#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259110
// Address: 0x259110 - 0x259220
void sub_00259110_0x259110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259110_0x259110");
#endif

    ctx->pc = 0x259110u;

    // 0x259110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x259114: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x259114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x259118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25911c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25911cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259120: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x259120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x259124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259128: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x259128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x25912c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25912Cu;
    {
        const bool branch_taken_0x25912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25912Cu;
            // 0x259130: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25912c) {
            ctx->pc = 0x259148u;
            goto label_259148;
        }
    }
    ctx->pc = 0x259134u;
    // 0x259134: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x259134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x259138: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259138u;
    {
        const bool branch_taken_0x259138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259138) {
            ctx->pc = 0x25913Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259138u;
            // 0x25913c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25914Cu;
            goto label_25914c;
        }
    }
    ctx->pc = 0x259140u;
    // 0x259140: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x259140u;
    SET_GPR_U32(ctx, 31, 0x259148u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259148u; }
        if (ctx->pc != 0x259148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259148u; }
        if (ctx->pc != 0x259148u) { return; }
    }
    ctx->pc = 0x259148u;
label_259148:
    // 0x259148: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x259148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25914c:
    // 0x25914c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x25914cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x259150: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x259150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x259154: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x259154u;
    {
        const bool branch_taken_0x259154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x259158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259154u;
            // 0x259158: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259154) {
            ctx->pc = 0x259184u;
            goto label_259184;
        }
    }
    ctx->pc = 0x25915Cu;
    // 0x25915c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x25915cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_259160:
    // 0x259160: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259164: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x259168: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x259168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25916c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x25916Cu;
    SET_GPR_U32(ctx, 31, 0x259174u);
    ctx->pc = 0x259170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25916Cu;
            // 0x259170: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259174u; }
        if (ctx->pc != 0x259174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259174u; }
        if (ctx->pc != 0x259174u) { return; }
    }
    ctx->pc = 0x259174u;
    // 0x259174: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x259174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x259178: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x259178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25917c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25917Cu;
    {
        const bool branch_taken_0x25917c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25917Cu;
            // 0x259180: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25917c) {
            ctx->pc = 0x259160u;
            runtime->cooperativeGuestYield();
            goto label_259160;
        }
    }
    ctx->pc = 0x259184u;
label_259184:
    // 0x259184: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x259184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x259188: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x259188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x25918c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25918Cu;
    {
        const bool branch_taken_0x25918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25918Cu;
            // 0x259190: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25918c) {
            ctx->pc = 0x2591A4u;
            goto label_2591a4;
        }
    }
    ctx->pc = 0x259194u;
    // 0x259194: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x259194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x259198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25919c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x25919Cu;
    SET_GPR_U32(ctx, 31, 0x2591A4u);
    ctx->pc = 0x2591A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25919Cu;
            // 0x2591a0: 0x8c444f44  lw          $a0, 0x4F44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591A4u; }
        if (ctx->pc != 0x2591A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591A4u; }
        if (ctx->pc != 0x2591A4u) { return; }
    }
    ctx->pc = 0x2591A4u;
label_2591a4:
    // 0x2591a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2591a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2591a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2591a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2591ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2591acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2591b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2591b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2591B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2591B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2591B4u;
            // 0x2591b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2591BCu;
    // 0x2591bc: 0x0  nop
    ctx->pc = 0x2591bcu;
    // NOP
    // 0x2591c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2591C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2591C8u;
    // 0x2591c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2591C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2591D0u;
    // 0x2591d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2591d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2591d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2591d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2591d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2591D8u;
    SET_GPR_U32(ctx, 31, 0x2591E0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591E0u; }
        if (ctx->pc != 0x2591E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591E0u; }
        if (ctx->pc != 0x2591E0u) { return; }
    }
    ctx->pc = 0x2591E0u;
    // 0x2591e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2591e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2591e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2591e8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2591E8u;
    SET_GPR_U32(ctx, 31, 0x2591F0u);
    ctx->pc = 0x2591ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591E8u;
            // 0x2591ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591F0u; }
        if (ctx->pc != 0x2591F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591F0u; }
        if (ctx->pc != 0x2591F0u) { return; }
    }
    ctx->pc = 0x2591F0u;
    // 0x2591f0: 0xc098cbc  jal         func_2632F0
    ctx->pc = 0x2591F0u;
    SET_GPR_U32(ctx, 31, 0x2591F8u);
    ctx->pc = 0x2591F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591F0u;
            // 0x2591f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2632F0u;
    if (runtime->hasFunction(0x2632F0u)) {
        auto targetFn = runtime->lookupFunction(0x2632F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591F8u; }
        if (ctx->pc != 0x2591F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002632F0_0x2632f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591F8u; }
        if (ctx->pc != 0x2591F8u) { return; }
    }
    ctx->pc = 0x2591F8u;
    // 0x2591f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2591f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2591FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2591FCu;
            // 0x259200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259204u;
    // 0x259204: 0x0  nop
    ctx->pc = 0x259204u;
    // NOP
    // 0x259208: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x259208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x25920c: 0x3e00008  jr          $ra
    ctx->pc = 0x25920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25920Cu;
            // 0x259210: 0x24421378  addiu       $v0, $v0, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259214u;
    // 0x259214: 0x0  nop
    ctx->pc = 0x259214u;
    // NOP
    // 0x259218: 0x3e00008  jr          $ra
    ctx->pc = 0x259218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259218u;
            // 0x25921c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259160u: goto label_259160;
            case 0x259184u: goto label_259184;
            case 0x2591A4u: goto label_2591a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259220u;
}

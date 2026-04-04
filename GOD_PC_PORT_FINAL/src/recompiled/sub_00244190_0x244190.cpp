#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244190
// Address: 0x244190 - 0x244270
void sub_00244190_0x244190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244190_0x244190");
#endif

    ctx->pc = 0x244190u;

    // 0x244190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244194: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x244194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x244198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24419c: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x24419Cu;
    SET_GPR_U32(ctx, 31, 0x2441A4u);
    ctx->pc = 0x2441A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24419Cu;
            // 0x2441a0: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441A4u; }
        if (ctx->pc != 0x2441A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441A4u; }
        if (ctx->pc != 0x2441A4u) { return; }
    }
    ctx->pc = 0x2441A4u;
    // 0x2441a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2441a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2441a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2441A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2441ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441A8u;
            // 0x2441ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2441E4u: goto label_2441e4;
            case 0x244200u: goto label_244200;
            case 0x24425Cu: goto label_24425c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2441B0u;
    // 0x2441b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2441b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2441b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2441b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2441bc: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x2441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x2441c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2441c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2441c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2441c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2441c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2441c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2441cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2441ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2441d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2441d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2441d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2441D4u;
    {
        const bool branch_taken_0x2441d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441D4u;
            // 0x2441d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441d4) {
            ctx->pc = 0x2441E4u;
            goto label_2441e4;
        }
    }
    ctx->pc = 0x2441DCu;
    // 0x2441dc: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x2441DCu;
    SET_GPR_U32(ctx, 31, 0x2441E4u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441E4u; }
        if (ctx->pc != 0x2441E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441E4u; }
        if (ctx->pc != 0x2441E4u) { return; }
    }
    ctx->pc = 0x2441E4u;
label_2441e4:
    // 0x2441e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2441e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2441e8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2441e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2441ec: 0x24421f98  addiu       $v0, $v0, 0x1F98
    ctx->pc = 0x2441ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8088));
    // 0x2441f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2441F0u;
    {
        const bool branch_taken_0x2441f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441F0u;
            // 0x2441f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441f0) {
            ctx->pc = 0x244200u;
            goto label_244200;
        }
    }
    ctx->pc = 0x2441F8u;
    // 0x2441f8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2441F8u;
    SET_GPR_U32(ctx, 31, 0x244200u);
    ctx->pc = 0x2441FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2441F8u;
            // 0x2441fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244200u; }
        if (ctx->pc != 0x244200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244200u; }
        if (ctx->pc != 0x244200u) { return; }
    }
    ctx->pc = 0x244200u;
label_244200:
    // 0x244200: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24420c: 0x3e00008  jr          $ra
    ctx->pc = 0x24420Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24420Cu;
            // 0x244210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2441E4u: goto label_2441e4;
            case 0x244200u: goto label_244200;
            case 0x24425Cu: goto label_24425c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244214u;
    // 0x244214: 0x0  nop
    ctx->pc = 0x244214u;
    // NOP
    // 0x244218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24421c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244220: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244224: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x244224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
    // 0x244228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24422c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24422cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244238: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x244238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x24423c: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x24423Cu;
    SET_GPR_U32(ctx, 31, 0x244244u);
    ctx->pc = 0x244240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24423Cu;
            // 0x244240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244244u; }
        if (ctx->pc != 0x244244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244244u; }
        if (ctx->pc != 0x244244u) { return; }
    }
    ctx->pc = 0x244244u;
    // 0x244244: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x244244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x244248: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244248u;
    {
        const bool branch_taken_0x244248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244248u;
            // 0x24424c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244248) {
            ctx->pc = 0x24425Cu;
            goto label_24425c;
        }
    }
    ctx->pc = 0x244250u;
    // 0x244250: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x244250u;
    SET_GPR_U32(ctx, 31, 0x244258u);
    ctx->pc = 0x244254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244250u;
            // 0x244254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (runtime->hasFunction(0x1FF380u)) {
        auto targetFn = runtime->lookupFunction(0x1FF380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244258u; }
        if (ctx->pc != 0x244258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ff380_0x1ff3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244258u; }
        if (ctx->pc != 0x244258u) { return; }
    }
    ctx->pc = 0x244258u;
    // 0x244258: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24425c:
    // 0x24425c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24425cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244264: 0x3e00008  jr          $ra
    ctx->pc = 0x244264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244264u;
            // 0x244268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2441E4u: goto label_2441e4;
            case 0x244200u: goto label_244200;
            case 0x24425Cu: goto label_24425c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24426Cu;
    // 0x24426c: 0x0  nop
    ctx->pc = 0x24426cu;
    // NOP
}

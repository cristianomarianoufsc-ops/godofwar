#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111440
// Address: 0x111440 - 0x111510
void sub_00111440_0x111440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111440_0x111440");
#endif

    ctx->pc = 0x111440u;

    // 0x111440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111444: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x111444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x111448: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x111448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11144c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11144cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x111450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111454: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x111454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x111458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11145c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x11145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111464: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x111464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111468: 0xc045b42  jal         func_116D08
    ctx->pc = 0x111468u;
    SET_GPR_U32(ctx, 31, 0x111470u);
    ctx->pc = 0x11146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111468u;
            // 0x11146c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116D08u;
    if (runtime->hasFunction(0x116D08u)) {
        auto targetFn = runtime->lookupFunction(0x116D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111470u; }
        if (ctx->pc != 0x111470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116D08_0x116d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111470u; }
        if (ctx->pc != 0x111470u) { return; }
    }
    ctx->pc = 0x111470u;
    // 0x111470: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x111470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x111474: 0x9624005c  lhu         $a0, 0x5C($s1)
    ctx->pc = 0x111474u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x111478: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x111478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x11147c: 0xae7001f0  sw          $s0, 0x1F0($s3)
    ctx->pc = 0x11147cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 16));
    // 0x111480: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x111480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
    // 0x111484: 0xae640068  sw          $a0, 0x68($s3)
    ctx->pc = 0x111484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 4));
    // 0x111488: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x111488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x11148c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x11148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x111490: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x111490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    // 0x111494: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x111498: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x111498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11149c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x11149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1114a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1114A0u;
    {
        const bool branch_taken_0x1114a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114A0u;
            // 0x1114a4: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114a0) {
            ctx->pc = 0x1114B8u;
            goto label_1114b8;
        }
    }
    ctx->pc = 0x1114A8u;
    // 0x1114a8: 0xae72005c  sw          $s2, 0x5C($s3)
    ctx->pc = 0x1114a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 18));
    // 0x1114ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1114ACu;
    {
        const bool branch_taken_0x1114ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114ACu;
            // 0x1114b0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ac) {
            ctx->pc = 0x1114BCu;
            goto label_1114bc;
        }
    }
    ctx->pc = 0x1114B4u;
    // 0x1114b4: 0x0  nop
    ctx->pc = 0x1114b4u;
    // NOP
label_1114b8:
    // 0x1114b8: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x1114b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_1114bc:
    // 0x1114bc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1114bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1114c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1114C0u;
    {
        const bool branch_taken_0x1114c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114C0u;
            // 0x1114c4: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114c0) {
            ctx->pc = 0x1114D4u;
            goto label_1114d4;
        }
    }
    ctx->pc = 0x1114C8u;
    // 0x1114c8: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x1114c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
    // 0x1114cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1114CCu;
    {
        const bool branch_taken_0x1114cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114CCu;
            // 0x1114d0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114cc) {
            ctx->pc = 0x1114D8u;
            goto label_1114d8;
        }
    }
    ctx->pc = 0x1114D4u;
label_1114d4:
    // 0x1114d4: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1114d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_1114d8:
    // 0x1114d8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1114d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1114dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1114DCu;
    {
        const bool branch_taken_0x1114dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1114dc) {
            ctx->pc = 0x1114E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1114DCu;
            // 0x1114e0: 0xae600064  sw          $zero, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1114E8u;
            goto label_1114e8;
        }
    }
    ctx->pc = 0x1114E4u;
    // 0x1114e4: 0xae720064  sw          $s2, 0x64($s3)
    ctx->pc = 0x1114e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 18));
label_1114e8:
    // 0x1114e8: 0xc044544  jal         func_111510
    ctx->pc = 0x1114E8u;
    SET_GPR_U32(ctx, 31, 0x1114F0u);
    ctx->pc = 0x1114ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1114E8u;
            // 0x1114ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111510u;
    if (runtime->hasFunction(0x111510u)) {
        auto targetFn = runtime->lookupFunction(0x111510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114F0u; }
        if (ctx->pc != 0x1114F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111510_0x111510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114F0u; }
        if (ctx->pc != 0x1114F0u) { return; }
    }
    ctx->pc = 0x1114F0u;
    // 0x1114f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1114f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1114f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1114f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1114fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1114fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111500: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x111500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111508: 0x3e00008  jr          $ra
    ctx->pc = 0x111508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111508u;
            // 0x11150c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1114B8u: goto label_1114b8;
            case 0x1114BCu: goto label_1114bc;
            case 0x1114D4u: goto label_1114d4;
            case 0x1114D8u: goto label_1114d8;
            case 0x1114E8u: goto label_1114e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111510u;
}

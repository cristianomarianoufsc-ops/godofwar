#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B160
// Address: 0x14b160 - 0x14b2d0
void sub_0014B160_0x14b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B160_0x14b160");
#endif

    ctx->pc = 0x14b160u;

    // 0x14b160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b164: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x14b168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14b16c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x14b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x14b170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b17c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14b17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b180: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x14b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x14b184: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x14b188: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x14b188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b18c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b190: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14b190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14b194: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x14b198: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14b19c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b1a0: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x14b1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x14b1a4: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x14b1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x14b1a8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x14b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x14b1ac: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x14b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x14b1b0: 0xc08e222  jal         func_238888
    ctx->pc = 0x14B1B0u;
    SET_GPR_U32(ctx, 31, 0x14B1B8u);
    ctx->pc = 0x14B1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1B0u;
            // 0x14b1b4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1B8u; }
        if (ctx->pc != 0x14B1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1B8u; }
        if (ctx->pc != 0x14B1B8u) { return; }
    }
    ctx->pc = 0x14B1B8u;
    // 0x14b1b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c4: 0xc08e222  jal         func_238888
    ctx->pc = 0x14B1C4u;
    SET_GPR_U32(ctx, 31, 0x14B1CCu);
    ctx->pc = 0x14B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1C4u;
            // 0x14b1c8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1CCu; }
        if (ctx->pc != 0x14B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1CCu; }
        if (ctx->pc != 0x14B1CCu) { return; }
    }
    ctx->pc = 0x14B1CCu;
    // 0x14b1cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b1d0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x14b1d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14b1d8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x14b1dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14b1e0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x14b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x14b1e4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x14b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x14b1e8: 0x2484f5d0  addiu       $a0, $a0, -0xA30
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    // 0x14b1ec: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x14b1ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14b1f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1f4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14b1f8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x14b1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x14b1fc: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x14b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x14b200: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x14b200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x14b204: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x14b204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b208: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x14b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14b20c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x14b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x14b210: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x14b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x14b214: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x14b214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x14b218: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x14b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14b21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b220: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x14b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x14b224: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14b224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b22c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B22Cu;
            // 0x14b230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B2C0u: goto label_14b2c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B234u;
    // 0x14b234: 0x0  nop
    ctx->pc = 0x14b234u;
    // NOP
    // 0x14b238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b23c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14b240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b244: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14b244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b248: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x14b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
    // 0x14b24c: 0xc08ec9e  jal         func_23B278
    ctx->pc = 0x14B24Cu;
    SET_GPR_U32(ctx, 31, 0x14B254u);
    ctx->pc = 0x14B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B24Cu;
            // 0x14b250: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B278u;
    if (runtime->hasFunction(0x23B278u)) {
        auto targetFn = runtime->lookupFunction(0x23B278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B254u; }
        if (ctx->pc != 0x14B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B278_0x23b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B254u; }
        if (ctx->pc != 0x14B254u) { return; }
    }
    ctx->pc = 0x14B254u;
    // 0x14b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b258: 0x3e00008  jr          $ra
    ctx->pc = 0x14B258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B258u;
            // 0x14b25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B2C0u: goto label_14b2c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B260u;
    // 0x14b260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b264: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x14b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x14b268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b26c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b270: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x14B270u;
    SET_GPR_U32(ctx, 31, 0x14B278u);
    ctx->pc = 0x14B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B270u;
            // 0x14b274: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B278u; }
        if (ctx->pc != 0x14B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B278u; }
        if (ctx->pc != 0x14B278u) { return; }
    }
    ctx->pc = 0x14B278u;
    // 0x14b278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b27c: 0xc052b8c  jal         func_14AE30
    ctx->pc = 0x14B27Cu;
    SET_GPR_U32(ctx, 31, 0x14B284u);
    ctx->pc = 0x14B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B27Cu;
            // 0x14b280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AE30u;
    if (runtime->hasFunction(0x14AE30u)) {
        auto targetFn = runtime->lookupFunction(0x14AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B284u; }
        if (ctx->pc != 0x14B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AE30_0x14ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B284u; }
        if (ctx->pc != 0x14B284u) { return; }
    }
    ctx->pc = 0x14B284u;
    // 0x14b284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b28c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B28Cu;
            // 0x14b290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B2C0u: goto label_14b2c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B294u;
    // 0x14b294: 0x0  nop
    ctx->pc = 0x14b294u;
    // NOP
    // 0x14b298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b29c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14b29cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B2A0u;
    {
        const bool branch_taken_0x14b2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2A0u;
            // 0x14b2a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2a0) {
            ctx->pc = 0x14B2C0u;
            goto label_14b2c0;
        }
    }
    ctx->pc = 0x14B2A8u;
    // 0x14b2a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14b2ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b2b0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x14b2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b2b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b2b8: 0x40f809  jalr        $v0
    ctx->pc = 0x14B2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B2C0u);
        ctx->pc = 0x14B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2B8u;
            // 0x14b2bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14B2C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B2C0u: goto label_14b2c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14B2C0u; }
            if (ctx->pc != 0x14B2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x14B2C0u;
label_14b2c0:
    // 0x14b2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2C4u;
            // 0x14b2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B2C0u: goto label_14b2c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B2CCu;
    // 0x14b2cc: 0x0  nop
    ctx->pc = 0x14b2ccu;
    // NOP
}

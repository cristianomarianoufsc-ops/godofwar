#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D1D0
// Address: 0x11d1d0 - 0x11d560
void sub_0011D1D0_0x11d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D1D0_0x11d1d0");
#endif

    ctx->pc = 0x11d1d0u;

    // 0x11d1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d1d4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11d1d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11d1dc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11d1e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d1e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d1ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11d1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1f0: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11d1f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11d1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d1f8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d1fc: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11d200: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11d200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11d204: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d208: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11d208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11d20c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11d210: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x11d210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11d214: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x11d214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11d218: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x11d218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x11d21c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x11d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x11d220: 0xc08e222  jal         func_238888
    ctx->pc = 0x11D220u;
    SET_GPR_U32(ctx, 31, 0x11D228u);
    ctx->pc = 0x11D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D220u;
            // 0x11d224: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D228u; }
        if (ctx->pc != 0x11D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D228u; }
        if (ctx->pc != 0x11D228u) { return; }
    }
    ctx->pc = 0x11D228u;
    // 0x11d228: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11d22c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d234: 0xc08e222  jal         func_238888
    ctx->pc = 0x11D234u;
    SET_GPR_U32(ctx, 31, 0x11D23Cu);
    ctx->pc = 0x11D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D234u;
            // 0x11d238: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D23Cu; }
        if (ctx->pc != 0x11D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D23Cu; }
        if (ctx->pc != 0x11D23Cu) { return; }
    }
    ctx->pc = 0x11D23Cu;
    // 0x11d23c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d240: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x11d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x11d244: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11d248: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x11d248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x11d24c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d250: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x11d250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x11d254: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x11d254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x11d258: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11d258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11d25c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x11d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x11d260: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x11d260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x11d264: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11d268: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x11d268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x11d26c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x11d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x11d270: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x11D270u;
    SET_GPR_U32(ctx, 31, 0x11D278u);
    ctx->pc = 0x11D274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D270u;
            // 0x11d274: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D278u; }
        if (ctx->pc != 0x11D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D278u; }
        if (ctx->pc != 0x11D278u) { return; }
    }
    ctx->pc = 0x11D278u;
    // 0x11d278: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x11d278u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d27c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d280: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11d284: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x11d284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d288: 0x2463df70  addiu       $v1, $v1, -0x2090
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958960));
    // 0x11d28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d290: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x11d290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x11d294: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11d294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d298: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x11d298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x11d29c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x11d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x11d2a0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x11d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x11d2a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11d2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2B0u;
            // 0x11d2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D2B8u;
    // 0x11d2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d2bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11d2c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11d2c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11d2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x11d2d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d2d4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x11d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11d2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d2dc: 0x24a51408  addiu       $a1, $a1, 0x1408
    ctx->pc = 0x11d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5128));
    // 0x11d2e0: 0xc0a2480  jal         func_289200
    ctx->pc = 0x11D2E0u;
    SET_GPR_U32(ctx, 31, 0x11D2E8u);
    ctx->pc = 0x11D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2E0u;
            // 0x11d2e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D2E8u; }
        if (ctx->pc != 0x11D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D2E8u; }
        if (ctx->pc != 0x11D2E8u) { return; }
    }
    ctx->pc = 0x11D2E8u;
    // 0x11d2e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D2E8u;
    {
        const bool branch_taken_0x11d2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2E8u;
            // 0x11d2ec: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2e8) {
            ctx->pc = 0x11D31Cu;
            goto label_11d31c;
        }
    }
    ctx->pc = 0x11D2F0u;
    // 0x11d2f0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11D2F0u;
    SET_GPR_U32(ctx, 31, 0x11D2F8u);
    ctx->pc = 0x11D2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2F0u;
            // 0x11d2f4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D2F8u; }
        if (ctx->pc != 0x11D2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D2F8u; }
        if (ctx->pc != 0x11D2F8u) { return; }
    }
    ctx->pc = 0x11D2F8u;
    // 0x11d2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x11d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11d300: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x11D300u;
    SET_GPR_U32(ctx, 31, 0x11D308u);
    ctx->pc = 0x11D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D300u;
            // 0x11d304: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D308u; }
        if (ctx->pc != 0x11D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D308u; }
        if (ctx->pc != 0x11D308u) { return; }
    }
    ctx->pc = 0x11D308u;
    // 0x11d308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d30c: 0xc04e37a  jal         func_138DE8
    ctx->pc = 0x11D30Cu;
    SET_GPR_U32(ctx, 31, 0x11D314u);
    ctx->pc = 0x11D310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D30Cu;
            // 0x11d310: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138DE8u;
    if (runtime->hasFunction(0x138DE8u)) {
        auto targetFn = runtime->lookupFunction(0x138DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D314u; }
        if (ctx->pc != 0x11D314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138DE8_0x138de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D314u; }
        if (ctx->pc != 0x11D314u) { return; }
    }
    ctx->pc = 0x11D314u;
    // 0x11d314: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x11D314u;
    {
        const bool branch_taken_0x11d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D314u;
            // 0x11d318: 0xae02bd34  sw          $v0, -0x42CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d314) {
            ctx->pc = 0x11D480u;
            goto label_11d480;
        }
    }
    ctx->pc = 0x11D31Cu;
label_11d31c:
    // 0x11d31c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x11d320: 0x24a51418  addiu       $a1, $a1, 0x1418
    ctx->pc = 0x11d320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5144));
    // 0x11d324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d328: 0xc0a2480  jal         func_289200
    ctx->pc = 0x11D328u;
    SET_GPR_U32(ctx, 31, 0x11D330u);
    ctx->pc = 0x11D32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D328u;
            // 0x11d32c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D330u; }
        if (ctx->pc != 0x11D330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D330u; }
        if (ctx->pc != 0x11D330u) { return; }
    }
    ctx->pc = 0x11D330u;
    // 0x11d330: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D330u;
    {
        const bool branch_taken_0x11d330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D330u;
            // 0x11d334: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d330) {
            ctx->pc = 0x11D358u;
            goto label_11d358;
        }
    }
    ctx->pc = 0x11D338u;
    // 0x11d338: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x11d33c: 0x8c44bd34  lw          $a0, -0x42CC($v0)
    ctx->pc = 0x11d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950196)));
    // 0x11d340: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x11D340u;
    {
        const bool branch_taken_0x11d340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D340u;
            // 0x11d344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d340) {
            ctx->pc = 0x11D480u;
            goto label_11d480;
        }
    }
    ctx->pc = 0x11D348u;
    // 0x11d348: 0xc04e3de  jal         func_138F78
    ctx->pc = 0x11D348u;
    SET_GPR_U32(ctx, 31, 0x11D350u);
    ctx->pc = 0x11D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D348u;
            // 0x11d34c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138F78u;
    if (runtime->hasFunction(0x138F78u)) {
        auto targetFn = runtime->lookupFunction(0x138F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D350u; }
        if (ctx->pc != 0x11D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138F78_0x138f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D350u; }
        if (ctx->pc != 0x11D350u) { return; }
    }
    ctx->pc = 0x11D350u;
    // 0x11d350: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x11D350u;
    {
        const bool branch_taken_0x11d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D350u;
            // 0x11d354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d350) {
            ctx->pc = 0x11D480u;
            goto label_11d480;
        }
    }
    ctx->pc = 0x11D358u;
label_11d358:
    // 0x11d358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d35c: 0x24a51428  addiu       $a1, $a1, 0x1428
    ctx->pc = 0x11d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5160));
    // 0x11d360: 0xc0a2480  jal         func_289200
    ctx->pc = 0x11D360u;
    SET_GPR_U32(ctx, 31, 0x11D368u);
    ctx->pc = 0x11D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D360u;
            // 0x11d364: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D368u; }
        if (ctx->pc != 0x11D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D368u; }
        if (ctx->pc != 0x11D368u) { return; }
    }
    ctx->pc = 0x11D368u;
    // 0x11d368: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x11D368u;
    {
        const bool branch_taken_0x11d368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D368u;
            // 0x11d36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d368) {
            ctx->pc = 0x11D47Cu;
            goto label_11d47c;
        }
    }
    ctx->pc = 0x11D370u;
    // 0x11d370: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11D370u;
    SET_GPR_U32(ctx, 31, 0x11D378u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D378u; }
        if (ctx->pc != 0x11D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D378u; }
        if (ctx->pc != 0x11D378u) { return; }
    }
    ctx->pc = 0x11D378u;
    // 0x11d378: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x11d378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11d37c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d380: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x11D380u;
    SET_GPR_U32(ctx, 31, 0x11D388u);
    ctx->pc = 0x11D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D380u;
            // 0x11d384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D388u; }
        if (ctx->pc != 0x11D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D388u; }
        if (ctx->pc != 0x11D388u) { return; }
    }
    ctx->pc = 0x11D388u;
    // 0x11d388: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x11d388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d390: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11d394: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d398: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x11d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x11d39c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11d3a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11d3a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11d3a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11d3ac: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x11d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11d3b0: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x11d3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x11d3b4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x11d3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d3b8: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x11d3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x11d3bc: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x11D3BCu;
    SET_GPR_U32(ctx, 31, 0x11D3C4u);
    ctx->pc = 0x11D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3BCu;
            // 0x11d3c0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D3C4u; }
        if (ctx->pc != 0x11D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D3C4u; }
        if (ctx->pc != 0x11D3C4u) { return; }
    }
    ctx->pc = 0x11D3C4u;
    // 0x11d3c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x11d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x11d3c8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x11d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x11d3cc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x11d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x11d3d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11d3d4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11d3d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11d3dc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11d3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11d3e0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11d3e4: 0x40f809  jalr        $v0
    ctx->pc = 0x11D3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D3ECu);
        ctx->pc = 0x11D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3E4u;
            // 0x11d3e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D3ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D3ECu; }
            if (ctx->pc != 0x11D3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x11D3ECu;
    // 0x11d3ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x11d3f0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x11d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x11d3f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d3f8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x11d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x11d3fc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x11d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x11d400: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x11d400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x11d404: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x11d404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x11d408: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x11d408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x11d40c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x11d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x11d410: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x11d410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x11d414: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x11d414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x11d418: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x11d418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x11d41c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11D41Cu;
    SET_GPR_U32(ctx, 31, 0x11D424u);
    ctx->pc = 0x11D420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D41Cu;
            // 0x11d420: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D424u; }
        if (ctx->pc != 0x11D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D424u; }
        if (ctx->pc != 0x11D424u) { return; }
    }
    ctx->pc = 0x11D424u;
    // 0x11d424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d428: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x11d428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x11d42c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x11D42Cu;
    SET_GPR_U32(ctx, 31, 0x11D434u);
    ctx->pc = 0x11D430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D42Cu;
            // 0x11d430: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D434u; }
        if (ctx->pc != 0x11D434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D434u; }
        if (ctx->pc != 0x11D434u) { return; }
    }
    ctx->pc = 0x11D434u;
    // 0x11d434: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x11d434u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x11d438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d43c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d444: 0xc05ac8c  jal         func_16B230
    ctx->pc = 0x11D444u;
    SET_GPR_U32(ctx, 31, 0x11D44Cu);
    ctx->pc = 0x11D448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D444u;
            // 0x11d448: 0x30e72000  andi        $a3, $a3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B230u;
    if (runtime->hasFunction(0x16B230u)) {
        auto targetFn = runtime->lookupFunction(0x16B230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D44Cu; }
        if (ctx->pc != 0x11D44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16b230_0x16b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D44Cu; }
        if (ctx->pc != 0x11D44Cu) { return; }
    }
    ctx->pc = 0x11D44Cu;
    // 0x11d44c: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x11d44cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x11d450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d454: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x11d458: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D458u;
    {
        const bool branch_taken_0x11d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d458) {
            ctx->pc = 0x11D45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D458u;
            // 0x11d45c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D470u;
            goto label_11d470;
        }
    }
    ctx->pc = 0x11D460u;
    // 0x11d460: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x11d460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x11d464: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x11d464u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d468: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d46c: 0x0  nop
    ctx->pc = 0x11d46cu;
    // NOP
label_11d470:
    // 0x11d470: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x11d470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x11d474: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x11d474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d478: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11d478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d47c:
    // 0x11d47c: 0x0  nop
    ctx->pc = 0x11d47cu;
    // NOP
label_11d480:
    // 0x11d480: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d484: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d488: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11d488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d490: 0x3e00008  jr          $ra
    ctx->pc = 0x11D490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D490u;
            // 0x11d494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D498u;
    // 0x11d498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d49c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d4a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11d4a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D4A8u;
    {
        const bool branch_taken_0x11d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4A8u;
            // 0x11d4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4a8) {
            ctx->pc = 0x11D4B8u;
            goto label_11d4b8;
        }
    }
    ctx->pc = 0x11D4B0u;
    // 0x11d4b0: 0xc04e39e  jal         func_138E78
    ctx->pc = 0x11D4B0u;
    SET_GPR_U32(ctx, 31, 0x11D4B8u);
    ctx->pc = 0x138E78u;
    if (runtime->hasFunction(0x138E78u)) {
        auto targetFn = runtime->lookupFunction(0x138E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D4B8u; }
        if (ctx->pc != 0x11D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138e78_0x138f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D4B8u; }
        if (ctx->pc != 0x11D4B8u) { return; }
    }
    ctx->pc = 0x11D4B8u;
label_11d4b8:
    // 0x11d4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4BCu;
            // 0x11d4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D4C4u;
    // 0x11d4c4: 0x0  nop
    ctx->pc = 0x11d4c4u;
    // NOP
    // 0x11d4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11d4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d4d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x11d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11d4dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D4DCu;
    {
        const bool branch_taken_0x11d4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4DCu;
            // 0x11d4e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4dc) {
            ctx->pc = 0x11D4F8u;
            goto label_11d4f8;
        }
    }
    ctx->pc = 0x11D4E4u;
    // 0x11d4e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11d4e8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x11d4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d4ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11d4f0: 0x40f809  jalr        $v0
    ctx->pc = 0x11D4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D4F8u);
        ctx->pc = 0x11D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4F0u;
            // 0x11d4f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D4F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D4F8u; }
            if (ctx->pc != 0x11D4F8u) { return; }
        }
        }
    }
    ctx->pc = 0x11D4F8u;
label_11d4f8:
    // 0x11d4f8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x11d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11d4fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4FCu;
    {
        const bool branch_taken_0x11d4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d4fc) {
            ctx->pc = 0x11D500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4FCu;
            // 0x11d500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D510u;
            goto label_11d510;
        }
    }
    ctx->pc = 0x11D504u;
    // 0x11d504: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x11D504u;
    SET_GPR_U32(ctx, 31, 0x11D50Cu);
    ctx->pc = 0x11D508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D504u;
            // 0x11d508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D50Cu; }
        if (ctx->pc != 0x11D50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D50Cu; }
        if (ctx->pc != 0x11D50Cu) { return; }
    }
    ctx->pc = 0x11D50Cu;
    // 0x11d50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d510:
    // 0x11d510: 0xc08e218  jal         func_238860
    ctx->pc = 0x11D510u;
    SET_GPR_U32(ctx, 31, 0x11D518u);
    ctx->pc = 0x11D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D510u;
            // 0x11d514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D518u; }
        if (ctx->pc != 0x11D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D518u; }
        if (ctx->pc != 0x11D518u) { return; }
    }
    ctx->pc = 0x11D518u;
    // 0x11d518: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x11D518u;
    SET_GPR_U32(ctx, 31, 0x11D520u);
    ctx->pc = 0x11D51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D518u;
            // 0x11d51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D520u; }
        if (ctx->pc != 0x11D520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D520u; }
        if (ctx->pc != 0x11D520u) { return; }
    }
    ctx->pc = 0x11D520u;
    // 0x11d520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11d520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d528: 0x3e00008  jr          $ra
    ctx->pc = 0x11D528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D528u;
            // 0x11d52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D530u;
    // 0x11d530: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11d530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x11d534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d538: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x11d538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x11d53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d540: 0x3e00008  jr          $ra
    ctx->pc = 0x11D540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D540u;
            // 0x11d544: 0xac641058  sw          $a0, 0x1058($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D548u;
    // 0x11d548: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x11d54c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d550: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x11d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x11d554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d558: 0x3e00008  jr          $ra
    ctx->pc = 0x11D558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D558u;
            // 0x11d55c: 0xac641058  sw          $a0, 0x1058($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D358u: goto label_11d358;
            case 0x11D470u: goto label_11d470;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D510u: goto label_11d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D560u;
}

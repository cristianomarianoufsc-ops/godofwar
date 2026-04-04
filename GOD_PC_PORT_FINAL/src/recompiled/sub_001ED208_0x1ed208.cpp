#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED208
// Address: 0x1ed208 - 0x1ed390
void sub_001ED208_0x1ed208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED208_0x1ed208");
#endif

    ctx->pc = 0x1ed208u;

    // 0x1ed208: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ed20c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ed20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ed210: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ed210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ed214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed218: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ed218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ed21c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ed21cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed220: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ed220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ed224: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ed228: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ed228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ed22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed230: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ed234: 0xc05a3e6  jal         func_168F98
    ctx->pc = 0x1ED234u;
    SET_GPR_U32(ctx, 31, 0x1ED23Cu);
    ctx->pc = 0x1ED238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED234u;
            // 0x1ed238: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168F98u;
    if (runtime->hasFunction(0x168F98u)) {
        auto targetFn = runtime->lookupFunction(0x168F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED23Cu; }
        if (ctx->pc != 0x1ED23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F98_0x168f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED23Cu; }
        if (ctx->pc != 0x1ED23Cu) { return; }
    }
    ctx->pc = 0x1ED23Cu;
    // 0x1ed23c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed240: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ed240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed244: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ed244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ed248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ed248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed24c: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x1ED24Cu;
    SET_GPR_U32(ctx, 31, 0x1ED254u);
    ctx->pc = 0x1ED250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED24Cu;
            // 0x1ed250: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED254u; }
        if (ctx->pc != 0x1ED254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED254u; }
        if (ctx->pc != 0x1ED254u) { return; }
    }
    ctx->pc = 0x1ED254u;
    // 0x1ed254: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed258: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ed258u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed25c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed260: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ed264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed268: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed26c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed270: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed274: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ed274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ed278: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ed27c: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED284u);
        ctx->pc = 0x1ED280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED27Cu;
            // 0x1ed280: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED284u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED2A0u: goto label_1ed2a0;
            case 0x1ED2B0u: goto label_1ed2b0;
            case 0x1ED300u: goto label_1ed300;
            case 0x1ED350u: goto label_1ed350;
            case 0x1ED368u: goto label_1ed368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED284u; }
            if (ctx->pc != 0x1ED284u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED284u;
    // 0x1ed284: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed288: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED288u;
    {
        const bool branch_taken_0x1ed288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED288u;
            // 0x1ed28c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed288) {
            ctx->pc = 0x1ED2A0u;
            goto label_1ed2a0;
        }
    }
    ctx->pc = 0x1ED290u;
    // 0x1ed290: 0xc04fad2  jal         func_13EB48
    ctx->pc = 0x1ED290u;
    SET_GPR_U32(ctx, 31, 0x1ED298u);
    ctx->pc = 0x1ED294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED290u;
            // 0x1ed294: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EB48u;
    if (runtime->hasFunction(0x13EB48u)) {
        auto targetFn = runtime->lookupFunction(0x13EB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED298u; }
        if (ctx->pc != 0x1ED298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EB48_0x13eb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED298u; }
        if (ctx->pc != 0x1ED298u) { return; }
    }
    ctx->pc = 0x1ED298u;
    // 0x1ed298: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1ed298u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1ed29c: 0x0  nop
    ctx->pc = 0x1ed29cu;
    // NOP
label_1ed2a0:
    // 0x1ed2a0: 0x8e82e248  lw          $v0, -0x1DB8($s4)
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959688)));
    // 0x1ed2a4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ED2A4u;
    {
        const bool branch_taken_0x1ed2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2A4u;
            // 0x1ed2a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2a4) {
            ctx->pc = 0x1ED350u;
            goto label_1ed350;
        }
    }
    ctx->pc = 0x1ED2ACu;
    // 0x1ed2ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1ed2b0:
    // 0x1ed2b0: 0x24426268  addiu       $v0, $v0, 0x6268
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25192));
    // 0x1ed2b4: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x1ed2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ed2b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ed2bc: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ed2c0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1ed2c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed2c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ed2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ed2c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED2C8u;
    {
        const bool branch_taken_0x1ed2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2C8u;
            // 0x1ed2cc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2c8) {
            ctx->pc = 0x1ED300u;
            goto label_1ed300;
        }
    }
    ctx->pc = 0x1ED2D0u;
    // 0x1ed2d0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ed2d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed2d4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ed2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ed2d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed2dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed2e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed2e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed2ec: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ed2f0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ed2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ed2f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED2FCu);
        ctx->pc = 0x1ED2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2F4u;
            // 0x1ed2f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED2FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED2A0u: goto label_1ed2a0;
            case 0x1ED2B0u: goto label_1ed2b0;
            case 0x1ED300u: goto label_1ed300;
            case 0x1ED350u: goto label_1ed350;
            case 0x1ED368u: goto label_1ed368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2FCu; }
            if (ctx->pc != 0x1ED2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1ED2FCu;
    // 0x1ed2fc: 0x0  nop
    ctx->pc = 0x1ed2fcu;
    // NOP
label_1ed300:
    // 0x1ed300: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ed300u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed304: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed308: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ed308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ed30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed318: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed31c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ed320: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed324: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1ed324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1ed328: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1ed328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1ed32c: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED334u);
        ctx->pc = 0x1ED330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED32Cu;
            // 0x1ed330: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED334u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED2A0u: goto label_1ed2a0;
            case 0x1ED2B0u: goto label_1ed2b0;
            case 0x1ED300u: goto label_1ed300;
            case 0x1ED350u: goto label_1ed350;
            case 0x1ED368u: goto label_1ed368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED334u; }
            if (ctx->pc != 0x1ED334u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED334u;
    // 0x1ed334: 0x2682e248  addiu       $v0, $s4, -0x1DB8
    ctx->pc = 0x1ed334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959688));
    // 0x1ed338: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ed338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1ed33c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ed33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ed340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ed340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed344: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1ED344u;
    {
        const bool branch_taken_0x1ed344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED344u;
            // 0x1ed348: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed344) {
            ctx->pc = 0x1ED2B0u;
            runtime->cooperativeGuestYield();
            goto label_1ed2b0;
        }
    }
    ctx->pc = 0x1ED34Cu;
    // 0x1ed34c: 0x0  nop
    ctx->pc = 0x1ed34cu;
    // NOP
label_1ed350:
    // 0x1ed350: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed354: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x1ed354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1ed358: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED358u;
    {
        const bool branch_taken_0x1ed358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED358u;
            // 0x1ed35c: 0xac40e2a4  sw          $zero, -0x1D5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed358) {
            ctx->pc = 0x1ED368u;
            goto label_1ed368;
        }
    }
    ctx->pc = 0x1ED360u;
    // 0x1ed360: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1ED360u;
    SET_GPR_U32(ctx, 31, 0x1ED368u);
    ctx->pc = 0x1ED364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED360u;
            // 0x1ed364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED368u; }
        if (ctx->pc != 0x1ED368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED368u; }
        if (ctx->pc != 0x1ED368u) { return; }
    }
    ctx->pc = 0x1ED368u;
label_1ed368:
    // 0x1ed368: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ed368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed36c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ed36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed370: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ed370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed378: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ed378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed37c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ed37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed384: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED384u;
            // 0x1ed388: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED2A0u: goto label_1ed2a0;
            case 0x1ED2B0u: goto label_1ed2b0;
            case 0x1ED300u: goto label_1ed300;
            case 0x1ED350u: goto label_1ed350;
            case 0x1ED368u: goto label_1ed368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED38Cu;
    // 0x1ed38c: 0x0  nop
    ctx->pc = 0x1ed38cu;
    // NOP
}

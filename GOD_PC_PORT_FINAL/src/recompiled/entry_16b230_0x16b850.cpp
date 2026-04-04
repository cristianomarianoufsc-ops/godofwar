#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16b230
// Address: 0x16b230 - 0x16b850
void entry_16b230_0x16b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16b230_0x16b850");
#endif

    ctx->pc = 0x16b230u;

    // 0x16b230: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x16b234: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x16b234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x16b238: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x16b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x16b23c: 0x2442db90  addiu       $v0, $v0, -0x2470
    ctx->pc = 0x16b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957968));
    // 0x16b240: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x16b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x16b244: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16b244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b248: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x16b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x16b24c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x16b24cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b250: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x16b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x16b254: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16b254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b258: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x16b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x16b25c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x16b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x16b260: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x16b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x16b264: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x16b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x16b268: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x16b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x16b26c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x16b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x16b270: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B270u;
    {
        const bool branch_taken_0x16b270 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B270u;
            // 0x16b274: 0xaeb70000  sw          $s7, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b270) {
            ctx->pc = 0x16B280u;
            goto label_16b280;
        }
    }
    ctx->pc = 0x16B278u;
    // 0x16b278: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B278u;
            // 0x16b27c: 0xaeb60008  sw          $s6, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B2ACu;
            goto label_16b2ac;
        }
    }
    ctx->pc = 0x16B280u;
label_16b280:
    // 0x16b280: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16B280u;
    SET_GPR_U32(ctx, 31, 0x16B288u);
    ctx->pc = 0x16B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B280u;
            // 0x16b284: 0x8ed0000c  lw          $s0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B288u; }
        if (ctx->pc != 0x16B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B288u; }
        if (ctx->pc != 0x16B288u) { return; }
    }
    ctx->pc = 0x16B288u;
    // 0x16b288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b290: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16B290u;
    SET_GPR_U32(ctx, 31, 0x16B298u);
    ctx->pc = 0x16B294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B290u;
            // 0x16b294: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B298u; }
        if (ctx->pc != 0x16B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B298u; }
        if (ctx->pc != 0x16B298u) { return; }
    }
    ctx->pc = 0x16B298u;
    // 0x16b298: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x16b298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x16b29c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x16b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x16b2a4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x16B2A4u;
    SET_GPR_U32(ctx, 31, 0x16B2ACu);
    ctx->pc = 0x16B2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2A4u;
            // 0x16b2a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2ACu; }
        if (ctx->pc != 0x16B2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2ACu; }
        if (ctx->pc != 0x16B2ACu) { return; }
    }
    ctx->pc = 0x16B2ACu;
label_16b2ac:
    // 0x16b2ac: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x16b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x16b2b0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x16b2b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2b4: 0x8c4a0064  lw          $t2, 0x64($v0)
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x16b2b8: 0x8c4b0068  lw          $t3, 0x68($v0)
    ctx->pc = 0x16b2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x16b2bc: 0x8c4c006c  lw          $t4, 0x6C($v0)
    ctx->pc = 0x16b2bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x16b2c0: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x16b2c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16b2c4: 0x8c490070  lw          $t1, 0x70($v0)
    ctx->pc = 0x16b2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16b2c8: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x16b2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16b2cc: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x16b2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16b2d0: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x16b2d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x16b2d4: 0x8c470078  lw          $a3, 0x78($v0)
    ctx->pc = 0x16b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x16b2d8: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16b2dc: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x16b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x16b2e0: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x16b2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16b2e4: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x16b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16b2e8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16b2ec: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16b2f0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x16b2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b2f4: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x16b2f8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x16b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b2fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b300: 0x944d005c  lhu         $t5, 0x5C($v0)
    ctx->pc = 0x16b300u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x16b304: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b308: 0xaeaa000c  sw          $t2, 0xC($s5)
    ctx->pc = 0x16b308u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 10));
    // 0x16b30c: 0xaeab0010  sw          $t3, 0x10($s5)
    ctx->pc = 0x16b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 11));
    // 0x16b310: 0xaeac0014  sw          $t4, 0x14($s5)
    ctx->pc = 0x16b310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 12));
    // 0x16b314: 0xaea90018  sw          $t1, 0x18($s5)
    ctx->pc = 0x16b314u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 9));
    // 0x16b318: 0xaea8001c  sw          $t0, 0x1C($s5)
    ctx->pc = 0x16b318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 8));
    // 0x16b31c: 0xaea70020  sw          $a3, 0x20($s5)
    ctx->pc = 0x16b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 7));
    // 0x16b320: 0xaea60024  sw          $a2, 0x24($s5)
    ctx->pc = 0x16b320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 6));
    // 0x16b324: 0xaea40028  sw          $a0, 0x28($s5)
    ctx->pc = 0x16b324u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 4));
    // 0x16b328: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x16b328u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
    // 0x16b32c: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x16B32Cu;
    {
        const bool branch_taken_0x16b32c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B32Cu;
            // 0x16b330: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b32c) {
            ctx->pc = 0x16B358u;
            goto label_16b358;
        }
    }
    ctx->pc = 0x16B334u;
    // 0x16b334: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x16b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_16b338:
    // 0x16b338: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x16b338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x16b33c: 0x9442005c  lhu         $v0, 0x5C($v0)
    ctx->pc = 0x16b33cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x16b340: 0x1c2102a  slt         $v0, $t6, $v0
    ctx->pc = 0x16b340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b344: 0x0  nop
    ctx->pc = 0x16b344u;
    // NOP
    // 0x16b348: 0x0  nop
    ctx->pc = 0x16b348u;
    // NOP
    // 0x16b34c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B34Cu;
    {
        const bool branch_taken_0x16b34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b34c) {
            ctx->pc = 0x16B350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B34Cu;
            // 0x16b350: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B338u;
            runtime->cooperativeGuestYield();
            goto label_16b338;
        }
    }
    ctx->pc = 0x16B354u;
    // 0x16b354: 0x0  nop
    ctx->pc = 0x16b354u;
    // NOP
label_16b358:
    // 0x16b358: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x16b35c: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x16b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x16b360: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x16b364: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x16b364u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x16b368: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x16b36c: 0xc047aa6  jal         func_11EA98
    ctx->pc = 0x16B36Cu;
    SET_GPR_U32(ctx, 31, 0x16B374u);
    ctx->pc = 0x16B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B36Cu;
            // 0x16b370: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA98u;
    if (runtime->hasFunction(0x11EA98u)) {
        auto targetFn = runtime->lookupFunction(0x11EA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B374u; }
        if (ctx->pc != 0x16B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ea98_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B374u; }
        if (ctx->pc != 0x16B374u) { return; }
    }
    ctx->pc = 0x16B374u;
    // 0x16b374: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x16b378: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x16b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x16b37c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16b380: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x16b380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x16b384: 0x24a51398  addiu       $a1, $a1, 0x1398
    ctx->pc = 0x16b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5016));
    // 0x16b388: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x16b388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x16b38c: 0x8e02bcf8  lw          $v0, -0x4308($s0)
    ctx->pc = 0x16b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x16b390: 0xac43106c  sw          $v1, 0x106C($v0)
    ctx->pc = 0x16b390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4204), GPR_U32(ctx, 3));
    // 0x16b394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b398: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x16B398u;
    SET_GPR_U32(ctx, 31, 0x16B3A0u);
    ctx->pc = 0x16B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B398u;
            // 0x16b39c: 0xac461070  sw          $a2, 0x1070($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A0u; }
        if (ctx->pc != 0x16B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A0u; }
        if (ctx->pc != 0x16B3A0u) { return; }
    }
    ctx->pc = 0x16B3A0u;
    // 0x16b3a0: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x16b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x16b3a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16b3a8: 0x24a513a8  addiu       $a1, $a1, 0x13A8
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5032));
    // 0x16b3ac: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x16B3ACu;
    SET_GPR_U32(ctx, 31, 0x16B3B4u);
    ctx->pc = 0x16B3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3ACu;
            // 0x16b3b0: 0xae22bcfc  sw          $v0, -0x4304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3B4u; }
        if (ctx->pc != 0x16B3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3B4u; }
        if (ctx->pc != 0x16B3B4u) { return; }
    }
    ctx->pc = 0x16B3B4u;
    // 0x16b3b4: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x16b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x16b3b8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16b3bc: 0x24a513b8  addiu       $a1, $a1, 0x13B8
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5048));
    // 0x16b3c0: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x16B3C0u;
    SET_GPR_U32(ctx, 31, 0x16B3C8u);
    ctx->pc = 0x16B3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3C0u;
            // 0x16b3c4: 0xae42bd00  sw          $v0, -0x4300($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3C8u; }
        if (ctx->pc != 0x16B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3C8u; }
        if (ctx->pc != 0x16B3C8u) { return; }
    }
    ctx->pc = 0x16B3C8u;
    // 0x16b3c8: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x16b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x16b3cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16b3d0: 0xae62bd04  sw          $v0, -0x42FC($s3)
    ctx->pc = 0x16b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950148), GPR_U32(ctx, 2));
    // 0x16b3d4: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x16B3D4u;
    SET_GPR_U32(ctx, 31, 0x16B3DCu);
    ctx->pc = 0x16B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3D4u;
            // 0x16b3d8: 0x24a513c8  addiu       $a1, $a1, 0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3DCu; }
        if (ctx->pc != 0x16B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3DCu; }
        if (ctx->pc != 0x16B3DCu) { return; }
    }
    ctx->pc = 0x16B3DCu;
    // 0x16b3dc: 0xae82bd08  sw          $v0, -0x42F8($s4)
    ctx->pc = 0x16b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950152), GPR_U32(ctx, 2));
    // 0x16b3e0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x16b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x16b3e4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16b3e8: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16b3ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B3ECu;
    {
        const bool branch_taken_0x16b3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3ec) {
            ctx->pc = 0x16B3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3ECu;
            // 0x16b3f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B3F4u;
            goto label_16b3f4;
        }
    }
    ctx->pc = 0x16B3F4u;
label_16b3f4:
    // 0x16b3f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x16b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b3f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16b3f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b3fc: 0x1012  mflo        $v0
    ctx->pc = 0x16b3fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16b400: 0xa6a20042  sh          $v0, 0x42($s5)
    ctx->pc = 0x16b400u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b404: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b408: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16b408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b40c: 0x0  nop
    ctx->pc = 0x16b40cu;
    // NOP
label_16b410:
    // 0x16b410: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x16b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16b414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b418: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x16b418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x16b41c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x16b41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x16b420: 0x0  nop
    ctx->pc = 0x16b420u;
    // NOP
    // 0x16b424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B424u;
    {
        const bool branch_taken_0x16b424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B424u;
            // 0x16b428: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b424) {
            ctx->pc = 0x16B410u;
            runtime->cooperativeGuestYield();
            goto label_16b410;
        }
    }
    ctx->pc = 0x16B42Cu;
    // 0x16b42c: 0xfea00150  sd          $zero, 0x150($s5)
    ctx->pc = 0x16b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 336), GPR_U64(ctx, 0));
    // 0x16b430: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16b434: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x16b434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x16b438: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16b43c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x16b43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x16b440: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x16b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16b444: 0x40f809  jalr        $v0
    ctx->pc = 0x16B444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16B44Cu);
        ctx->pc = 0x16B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B444u;
            // 0x16b448: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B44Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B280u: goto label_16b280;
            case 0x16B2ACu: goto label_16b2ac;
            case 0x16B338u: goto label_16b338;
            case 0x16B358u: goto label_16b358;
            case 0x16B3F4u: goto label_16b3f4;
            case 0x16B410u: goto label_16b410;
            case 0x16B47Cu: goto label_16b47c;
            case 0x16B488u: goto label_16b488;
            case 0x16B490u: goto label_16b490;
            case 0x16B4D8u: goto label_16b4d8;
            case 0x16B4FCu: goto label_16b4fc;
            case 0x16B500u: goto label_16b500;
            case 0x16B504u: goto label_16b504;
            case 0x16B548u: goto label_16b548;
            case 0x16B680u: goto label_16b680;
            case 0x16B6B8u: goto label_16b6b8;
            case 0x16B820u: goto label_16b820;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B44Cu; }
            if (ctx->pc != 0x16B44Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16B44Cu;
    // 0x16b44c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x16b450: 0xac57019c  sw          $s7, 0x19C($v0)
    ctx->pc = 0x16b450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 23));
    // 0x16b454: 0x94a30050  lhu         $v1, 0x50($a1)
    ctx->pc = 0x16b454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x16b458: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B458u;
    {
        const bool branch_taken_0x16b458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B458u;
            // 0x16b45c: 0xaea20158  sw          $v0, 0x158($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b458) {
            ctx->pc = 0x16B488u;
            goto label_16b488;
        }
    }
    ctx->pc = 0x16B460u;
    // 0x16b460: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x16b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x16b464: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x16b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x16b468: 0x94a20050  lhu         $v0, 0x50($a1)
    ctx->pc = 0x16b468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x16b46c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b470: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x16b470u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x16b474: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B474u;
    {
        const bool branch_taken_0x16b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b474) {
            ctx->pc = 0x16B478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B474u;
            // 0x16b478: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B47Cu;
            goto label_16b47c;
        }
    }
    ctx->pc = 0x16B47Cu;
label_16b47c:
    // 0x16b47c: 0x1812  mflo        $v1
    ctx->pc = 0x16b47cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x16b480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B480u;
    {
        const bool branch_taken_0x16b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B480u;
            // 0x16b484: 0xaea3003c  sw          $v1, 0x3C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b480) {
            ctx->pc = 0x16B490u;
            goto label_16b490;
        }
    }
    ctx->pc = 0x16B488u;
label_16b488:
    // 0x16b488: 0x94a2004c  lhu         $v0, 0x4C($a1)
    ctx->pc = 0x16b488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x16b48c: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x16b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
label_16b490:
    // 0x16b490: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x16b494: 0x94430054  lhu         $v1, 0x54($v0)
    ctx->pc = 0x16b494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16b498: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16b498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b49c: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x16b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x16b4a0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x16b4a4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B4A4u;
    {
        const bool branch_taken_0x16b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4A4u;
            // 0x16b4a8: 0xaea30038  sw          $v1, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4a4) {
            ctx->pc = 0x16B4FCu;
            goto label_16b4fc;
        }
    }
    ctx->pc = 0x16B4ACu;
    // 0x16b4ac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16B4ACu;
    SET_GPR_U32(ctx, 31, 0x16B4B4u);
    ctx->pc = 0x16B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4ACu;
            // 0x16b4b0: 0x38140  sll         $s0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4B4u; }
        if (ctx->pc != 0x16B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4B4u; }
        if (ctx->pc != 0x16B4B4u) { return; }
    }
    ctx->pc = 0x16B4B4u;
    // 0x16b4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4bc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16B4BCu;
    SET_GPR_U32(ctx, 31, 0x16B4C4u);
    ctx->pc = 0x16B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4BCu;
            // 0x16b4c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4C4u; }
        if (ctx->pc != 0x16B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4C4u; }
        if (ctx->pc != 0x16B4C4u) { return; }
    }
    ctx->pc = 0x16B4C4u;
    // 0x16b4c4: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x16b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x16b4c8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x16B4C8u;
    {
        const bool branch_taken_0x16b4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4C8u;
            // 0x16b4cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c8) {
            ctx->pc = 0x16B500u;
            goto label_16b500;
        }
    }
    ctx->pc = 0x16B4D0u;
    // 0x16b4d0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x16b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x16b4d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b4d8:
    // 0x16b4d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b4dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16b4e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x16b4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16b4e4: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x16b4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16b4e8: 0x0  nop
    ctx->pc = 0x16b4e8u;
    // NOP
    // 0x16b4ec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B4ECu;
    {
        const bool branch_taken_0x16b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4ec) {
            ctx->pc = 0x16B4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4ECu;
            // 0x16b4f0: 0x8ea20034  lw          $v0, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B4D8u;
            runtime->cooperativeGuestYield();
            goto label_16b4d8;
        }
    }
    ctx->pc = 0x16B4F4u;
    // 0x16b4f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4F4u;
    {
        const bool branch_taken_0x16b4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4F4u;
            // 0x16b4f8: 0xa6a00040  sh          $zero, 0x40($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4f4) {
            ctx->pc = 0x16B504u;
            goto label_16b504;
        }
    }
    ctx->pc = 0x16B4FCu;
label_16b4fc:
    // 0x16b4fc: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x16b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
label_16b500:
    // 0x16b500: 0xa6a00040  sh          $zero, 0x40($s5)
    ctx->pc = 0x16b500u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 0));
label_16b504:
    // 0x16b504: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x16b504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
    // 0x16b508: 0x96c20046  lhu         $v0, 0x46($s6)
    ctx->pc = 0x16b508u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x16b50c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x16B50Cu;
    {
        const bool branch_taken_0x16b50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B50Cu;
            // 0x16b510: 0xaea00044  sw          $zero, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b50c) {
            ctx->pc = 0x16B680u;
            goto label_16b680;
        }
    }
    ctx->pc = 0x16B514u;
    // 0x16b514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b518: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16B518u;
    SET_GPR_U32(ctx, 31, 0x16B520u);
    ctx->pc = 0x16B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B518u;
            // 0x16b51c: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B520u; }
        if (ctx->pc != 0x16B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B520u; }
        if (ctx->pc != 0x16B520u) { return; }
    }
    ctx->pc = 0x16B520u;
    // 0x16b520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b528: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16B528u;
    SET_GPR_U32(ctx, 31, 0x16B530u);
    ctx->pc = 0x16B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B528u;
            // 0x16b52c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B530u; }
        if (ctx->pc != 0x16B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B530u; }
        if (ctx->pc != 0x16B530u) { return; }
    }
    ctx->pc = 0x16B530u;
    // 0x16b530: 0x96c30046  lhu         $v1, 0x46($s6)
    ctx->pc = 0x16b530u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x16b534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16b534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b538: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x16B538u;
    {
        const bool branch_taken_0x16b538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B538u;
            // 0x16b53c: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b538) {
            ctx->pc = 0x16B680u;
            goto label_16b680;
        }
    }
    ctx->pc = 0x16B540u;
    // 0x16b540: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b544: 0x0  nop
    ctx->pc = 0x16b544u;
    // NOP
label_16b548:
    // 0x16b548: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x16b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x16b54c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x16b54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b550: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16b554: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16b558: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b55c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x16b55cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16b560: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x16b560u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16b564: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x16b564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b568: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x16b568u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16b56c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b570: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b574: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x16b574u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b578: 0x716c2b89  pcpyld      $a1, $t3, $t4
    ctx->pc = 0x16b578u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x16b57c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b580: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16b580u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16b584: 0x71621389  pcpyld      $v0, $t3, $v0
    ctx->pc = 0x16b584u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16b588: 0x674018  mult        $t0, $v1, $a3
    ctx->pc = 0x16b588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x16b58c: 0x70455cc8  ppacw       $t3, $v0, $a1
    ctx->pc = 0x16b58cu;
    SET_GPR_VEC(ctx, 11, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x16b590: 0x48ab2800  qmtc2.ni    $t3, $vf5
    ctx->pc = 0x16b590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x16b594: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x16b594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b598: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x16b598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x16b59c: 0x8c6c0004  lw          $t4, 0x4($v1)
    ctx->pc = 0x16b59cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16b5a0: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16b5a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16b5a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b5a8: 0x71822b89  pcpyld      $a1, $t4, $v0
    ctx->pc = 0x16b5a8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 2)));
    // 0x16b5ac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16b5b0: 0x71631389  pcpyld      $v0, $t3, $v1
    ctx->pc = 0x16b5b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x16b5b4: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x16b5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16b5b8: 0x70453cc8  ppacw       $a3, $v0, $a1
    ctx->pc = 0x16b5b8u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x16b5bc: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x16b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x16b5c0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x16b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16b5c4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x16b5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16b5c8: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x16b5cc: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b5d0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x16b5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x16b5d4: 0x710b1b89  pcpyld      $v1, $t0, $t3
    ctx->pc = 0x16b5d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x16b5d8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x16b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16b5dc: 0x71841389  pcpyld      $v0, $t4, $a0
    ctx->pc = 0x16b5dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 4)));
    // 0x16b5e0: 0x4be508ac  vsub.xyzw   $vf2, $vf1, $vf5
    ctx->pc = 0x16b5e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b5e4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x16b5e4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16b5e8: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x16b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x16b5ec: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x16b5ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16b5f0: 0x4be5186c  vsub.xyzw   $vf1, $vf3, $vf5
    ctx->pc = 0x16b5f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b5f4: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x16b5f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x16b5f8: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x16b5f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16b5fc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16b5fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b600: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x16b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b604: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x16b604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16b608: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16b608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b60c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16b60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b610: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x16b610u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x16b614: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x16b614u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x16b618: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b618u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b61c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x16b61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16b620: 0x4a0002ff  vnop
    ctx->pc = 0x16b620u;
    // NOP operation, no action needed for VU0
    // 0x16b624: 0x4a0002ff  vnop
    ctx->pc = 0x16b624u;
    // NOP operation, no action needed for VU0
    // 0x16b628: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x16b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16b62c: 0x4be520aa  vmul.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x16b62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b630: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16b630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b634: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16b634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b638: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x16b638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16b63c: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x16b63cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b640: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x16b640u;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x16b644: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x16b644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b648: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x16b64c: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x16b650: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x16b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b654: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x16b654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16b658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b65c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b660: 0x96c20046  lhu         $v0, 0x46($s6)
    ctx->pc = 0x16b660u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x16b664: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x16b664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b668: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x16B668u;
    {
        const bool branch_taken_0x16b668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B668u;
            // 0x16b66c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b668) {
            ctx->pc = 0x16B548u;
            runtime->cooperativeGuestYield();
            goto label_16b548;
        }
    }
    ctx->pc = 0x16B670u;
    // 0x16b670: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16b674: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x16b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b678: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x16b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x16b67c: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x16b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_16b680:
    // 0x16b680: 0x96c20048  lhu         $v0, 0x48($s6)
    ctx->pc = 0x16b680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x16b684: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x16B684u;
    {
        const bool branch_taken_0x16b684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B684u;
            // 0x16b688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b684) {
            ctx->pc = 0x16B820u;
            goto label_16b820;
        }
    }
    ctx->pc = 0x16B68Cu;
    // 0x16b68c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16B68Cu;
    SET_GPR_U32(ctx, 31, 0x16B694u);
    ctx->pc = 0x16B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B68Cu;
            // 0x16b690: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B694u; }
        if (ctx->pc != 0x16B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B694u; }
        if (ctx->pc != 0x16B694u) { return; }
    }
    ctx->pc = 0x16B694u;
    // 0x16b694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b69c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16B69Cu;
    SET_GPR_U32(ctx, 31, 0x16B6A4u);
    ctx->pc = 0x16B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B69Cu;
            // 0x16b6a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6A4u; }
        if (ctx->pc != 0x16B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6A4u; }
        if (ctx->pc != 0x16B6A4u) { return; }
    }
    ctx->pc = 0x16B6A4u;
    // 0x16b6a4: 0x96c30048  lhu         $v1, 0x48($s6)
    ctx->pc = 0x16b6a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x16b6a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16b6a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6ac: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x16B6ACu;
    {
        const bool branch_taken_0x16b6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6ACu;
            // 0x16b6b0: 0xaea20048  sw          $v0, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6ac) {
            ctx->pc = 0x16B820u;
            goto label_16b820;
        }
    }
    ctx->pc = 0x16B6B4u;
    // 0x16b6b4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16b6b8:
    // 0x16b6b8: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x16b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x16b6bc: 0x1471018  mult        $v0, $t2, $a3
    ctx->pc = 0x16b6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b6c0: 0x8ead002c  lw          $t5, 0x2C($s5)
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16b6c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b6c8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x16b6c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16b6cc: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x16b6ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x16b6d0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x16b6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b6d4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x16b6d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16b6d8: 0x94840008  lhu         $a0, 0x8($a0)
    ctx->pc = 0x16b6d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16b6dc: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x16b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x16b6e0: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b6e4: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x16b6e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6e8: 0x716c3389  pcpyld      $a2, $t3, $t4
    ctx->pc = 0x16b6e8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x16b6ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b6f0: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16b6f4: 0x71621389  pcpyld      $v0, $t3, $v0
    ctx->pc = 0x16b6f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16b6f8: 0x674018  mult        $t0, $v1, $a3
    ctx->pc = 0x16b6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x16b6fc: 0x70465cc8  ppacw       $t3, $v0, $a2
    ctx->pc = 0x16b6fcu;
    SET_GPR_VEC(ctx, 11, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x16b700: 0x48ab2800  qmtc2.ni    $t3, $vf5
    ctx->pc = 0x16b700u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x16b704: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x16b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b708: 0x10d1821  addu        $v1, $t0, $t5
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x16b70c: 0x8c6c0004  lw          $t4, 0x4($v1)
    ctx->pc = 0x16b70cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16b710: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16b714: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b718: 0x71823389  pcpyld      $a2, $t4, $v0
    ctx->pc = 0x16b718u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 2)));
    // 0x16b71c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16b720: 0x71631389  pcpyld      $v0, $t3, $v1
    ctx->pc = 0x16b720u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x16b724: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x16b724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16b728: 0x70464cc8  ppacw       $t1, $v0, $a2
    ctx->pc = 0x16b728u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x16b72c: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x16b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x16b730: 0x6d2021  addu        $a0, $v1, $t5
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x16b734: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16b738: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x16b738u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b73c: 0x716c1b89  pcpyld      $v1, $t3, $t4
    ctx->pc = 0x16b73cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x16b740: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16b744: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16b744u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16b748: 0x71641389  pcpyld      $v0, $t3, $a0
    ctx->pc = 0x16b748u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 4)));
    // 0x16b74c: 0xa72018  mult        $a0, $a1, $a3
    ctx->pc = 0x16b74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16b750: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x16b750u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16b754: 0x7fa700f0  sq          $a3, 0xF0($sp)
    ctx->pc = 0x16b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 7));
    // 0x16b758: 0x8d2821  addu        $a1, $a0, $t5
    ctx->pc = 0x16b758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x16b75c: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x16b75cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16b760: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x16b760u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x16b764: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x16b764u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b768: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x16b768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x16b76c: 0x710b1b89  pcpyld      $v1, $t0, $t3
    ctx->pc = 0x16b76cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x16b770: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16b774: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x16b774u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x16b778: 0x4be508ac  vsub.xyzw   $vf2, $vf1, $vf5
    ctx->pc = 0x16b778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b77c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x16b77cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16b780: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x16b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x16b784: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x16b784u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16b788: 0x48a92000  qmtc2.ni    $t1, $vf4
    ctx->pc = 0x16b788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x16b78c: 0x4be4186c  vsub.xyzw   $vf1, $vf3, $vf4
    ctx->pc = 0x16b78cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b790: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x16b790u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x16b794: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x16b794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16b798: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16b798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b79c: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x16b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b7a0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x16b7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16b7a4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16b7a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b7a8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16b7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b7ac: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x16b7acu;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x16b7b0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x16b7b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x16b7b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b7b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b7b8: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x16b7b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16b7bc: 0x4a0002ff  vnop
    ctx->pc = 0x16b7bcu;
    // NOP operation, no action needed for VU0
    // 0x16b7c0: 0x4a0002ff  vnop
    ctx->pc = 0x16b7c0u;
    // NOP operation, no action needed for VU0
    // 0x16b7c4: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x16b7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16b7c8: 0x4be520aa  vmul.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x16b7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b7cc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16b7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b7d0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16b7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b7d4: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x16b7d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16b7d8: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x16b7d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16b7dc: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x16b7dcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x16b7e0: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x16b7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16b7e4: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x16b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x16b7e8: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x16b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x16b7ec: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x16b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b7f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x16b7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16b7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b7f8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16b7fc: 0x96c20048  lhu         $v0, 0x48($s6)
    ctx->pc = 0x16b7fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x16b800: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x16b800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b804: 0x5440ffac  bnel        $v0, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x16B804u;
    {
        const bool branch_taken_0x16b804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b804) {
            ctx->pc = 0x16B808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B804u;
            // 0x16b808: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B6B8u;
            runtime->cooperativeGuestYield();
            goto label_16b6b8;
        }
    }
    ctx->pc = 0x16B80Cu;
    // 0x16b80c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x16b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16b810: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x16b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b814: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x16b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x16b818: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x16b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x16b81c: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x16b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
label_16b820:
    // 0x16b820: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x16b820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b824: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x16b824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x16b828: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x16b828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x16b82c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x16b82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b830: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x16b830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x16b834: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x16b834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16b838: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x16b838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16b83c: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x16b83cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16b840: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x16b840u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16b844: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x16b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16b848: 0x3e00008  jr          $ra
    ctx->pc = 0x16B848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B848u;
            // 0x16b84c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B280u: goto label_16b280;
            case 0x16B2ACu: goto label_16b2ac;
            case 0x16B338u: goto label_16b338;
            case 0x16B358u: goto label_16b358;
            case 0x16B3F4u: goto label_16b3f4;
            case 0x16B410u: goto label_16b410;
            case 0x16B47Cu: goto label_16b47c;
            case 0x16B488u: goto label_16b488;
            case 0x16B490u: goto label_16b490;
            case 0x16B4D8u: goto label_16b4d8;
            case 0x16B4FCu: goto label_16b4fc;
            case 0x16B500u: goto label_16b500;
            case 0x16B504u: goto label_16b504;
            case 0x16B548u: goto label_16b548;
            case 0x16B680u: goto label_16b680;
            case 0x16B6B8u: goto label_16b6b8;
            case 0x16B820u: goto label_16b820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B850u;
}

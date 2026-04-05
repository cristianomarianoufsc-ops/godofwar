#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A278
// Address: 0x15a278 - 0x15a3c8
void sub_0015A278_0x15a278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A278_0x15a278");
#endif

    ctx->pc = 0x15a278u;

label_15a278:
    // 0x15a278: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x15a27c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x15a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x15a280: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x15a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x15a284: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a288: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x15a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x15a28c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x15a28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a290: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x15a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x15a294: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15a294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a298: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x15a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x15a29c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15a29cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x15a2a4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x15a2a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2a8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x15a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x15a2ac: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15a2acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2b0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x15a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x15a2b4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15a2b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2b8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x15a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x15a2bc: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x15a2c0: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A2C0u;
    {
        const bool branch_taken_0x15a2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2C0u;
            // 0x15a2c4: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2c0) {
            ctx->pc = 0x15A2ECu;
            goto label_15a2ec;
        }
    }
    ctx->pc = 0x15A2C8u;
    // 0x15a2c8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a2cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15a2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2d0: 0x2271018  mult        $v0, $s1, $a3
    ctx->pc = 0x15a2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15a2d4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15a2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2d8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x15a2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2dc: 0xc056754  jal         func_159D50
    ctx->pc = 0x15A2DCu;
    SET_GPR_U32(ctx, 31, 0x15A2E4u);
    ctx->pc = 0x15A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2DCu;
            // 0x15a2e0: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159D50u;
    if (runtime->hasFunction(0x159D50u)) {
        auto targetFn = runtime->lookupFunction(0x159D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2E4u; }
        if (ctx->pc != 0x15A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159d50_0x159db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2E4u; }
        if (ctx->pc != 0x15A2E4u) { return; }
    }
    ctx->pc = 0x15A2E4u;
    // 0x15a2e4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15A2E4u;
    {
        const bool branch_taken_0x15a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2E4u;
            // 0x15a2e8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2e4) {
            ctx->pc = 0x15A398u;
            goto label_15a398;
        }
    }
    ctx->pc = 0x15A2ECu;
label_15a2ec:
    // 0x15a2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15a2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2f8: 0xc0567c2  jal         func_159F08
    ctx->pc = 0x15A2F8u;
    SET_GPR_U32(ctx, 31, 0x15A300u);
    ctx->pc = 0x15A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2F8u;
            // 0x15a2fc: 0x179040  sll         $s2, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159F08u;
    if (runtime->hasFunction(0x159F08u)) {
        auto targetFn = runtime->lookupFunction(0x159F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A300u; }
        if (ctx->pc != 0x15A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159f08_0x15a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A300u; }
        if (ctx->pc != 0x15A300u) { return; }
    }
    ctx->pc = 0x15A300u;
    // 0x15a300: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x15a300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x15a304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15a308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15a30c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15a30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a310: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x15a314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15a318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a31c: 0xc056858  jal         func_15A160
    ctx->pc = 0x15A31Cu;
    SET_GPR_U32(ctx, 31, 0x15A324u);
    ctx->pc = 0x15A320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A31Cu;
            // 0x15a320: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A160u;
    if (runtime->hasFunction(0x15A160u)) {
        auto targetFn = runtime->lookupFunction(0x15A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A324u; }
        if (ctx->pc != 0x15A324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A160_0x15a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A324u; }
        if (ctx->pc != 0x15A324u) { return; }
    }
    ctx->pc = 0x15A324u;
    // 0x15a324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15a324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a328: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15a328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a32c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x15a32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a330: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a334: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15a334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a338: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15a338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a33c: 0xc05689e  jal         func_15A278
    ctx->pc = 0x15A33Cu;
    SET_GPR_U32(ctx, 31, 0x15A344u);
    ctx->pc = 0x15A340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A33Cu;
            // 0x15a340: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A278u;
    runtime->cooperativeGuestYield();
    goto label_15a278;
    ctx->pc = 0x15A344u;
label_15a344:
    // 0x15a344: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x15a344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a348: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x15a348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a34c: 0x36470001  ori         $a3, $s2, 0x1
    ctx->pc = 0x15a34cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x15a350: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a354: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15a354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a35c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15a35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a360: 0xc05689e  jal         func_15A278
    ctx->pc = 0x15A360u;
    SET_GPR_U32(ctx, 31, 0x15A368u);
    ctx->pc = 0x15A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A360u;
            // 0x15a364: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A278u;
    runtime->cooperativeGuestYield();
    goto label_15a278;
    ctx->pc = 0x15A368u;
label_15a368:
    // 0x15a368: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x15a368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15a36c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15a36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a374: 0xc05676e  jal         func_159DB8
    ctx->pc = 0x15A374u;
    SET_GPR_U32(ctx, 31, 0x15A37Cu);
    ctx->pc = 0x15A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A374u;
            // 0x15a378: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159DB8u;
    if (runtime->hasFunction(0x159DB8u)) {
        auto targetFn = runtime->lookupFunction(0x159DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A37Cu; }
        if (ctx->pc != 0x15A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159db8_0x159f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A37Cu; }
        if (ctx->pc != 0x15A37Cu) { return; }
    }
    ctx->pc = 0x15A37Cu;
    // 0x15a37c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a380: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15a380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a384: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15a384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a388: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x15a388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a38c: 0xc056754  jal         func_159D50
    ctx->pc = 0x15A38Cu;
    SET_GPR_U32(ctx, 31, 0x15A394u);
    ctx->pc = 0x15A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A38Cu;
            // 0x15a390: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159D50u;
    if (runtime->hasFunction(0x159D50u)) {
        auto targetFn = runtime->lookupFunction(0x159D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A394u; }
        if (ctx->pc != 0x15A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159d50_0x159db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A394u; }
        if (ctx->pc != 0x15A394u) { return; }
    }
    ctx->pc = 0x15A394u;
    // 0x15a394: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x15a394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15a398:
    // 0x15a398: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x15a398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15a39c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x15a39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15a3a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x15a3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15a3a4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x15a3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15a3a8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x15a3a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a3ac: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x15a3acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15a3b0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x15a3b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15a3b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15a3b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a3b8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x15a3b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a3bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3C0u;
            // 0x15a3c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A278u: goto label_15a278;
            case 0x15A2ECu: goto label_15a2ec;
            case 0x15A344u: goto label_15a344;
            case 0x15A368u: goto label_15a368;
            case 0x15A398u: goto label_15a398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A3C8u;
}

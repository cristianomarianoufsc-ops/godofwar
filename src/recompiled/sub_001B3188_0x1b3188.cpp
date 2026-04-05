#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3188
// Address: 0x1b3188 - 0x1b32f0
void sub_001B3188_0x1b3188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3188_0x1b3188");
#endif

    ctx->pc = 0x1b3188u;

    // 0x1b3188: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b3188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b318c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1b318cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1b3190: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b3190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b3194: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b3194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b3198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b319c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1b319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1b31a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b31a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31a4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1b31a8: 0x24b52668  addiu       $s5, $a1, 0x2668
    ctx->pc = 0x1b31a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 9832));
    // 0x1b31ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b31acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1b31b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b31b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b31b4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1b31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1b31b8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1b31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1b31bc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1b31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1b31c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B31C0u;
    {
        const bool branch_taken_0x1b31c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31C0u;
            // 0x1b31c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31c0) {
            ctx->pc = 0x1B31E0u;
            goto label_1b31e0;
        }
    }
    ctx->pc = 0x1B31C8u;
label_1b31c8:
    // 0x1b31c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1b31c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b31cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B31CCu;
    {
        const bool branch_taken_0x1b31cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31CCu;
            // 0x1b31d0: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31cc) {
            ctx->pc = 0x1B31F4u;
            goto label_1b31f4;
        }
    }
    ctx->pc = 0x1B31D4u;
    // 0x1b31d4: 0x24a32668  addiu       $v1, $a1, 0x2668
    ctx->pc = 0x1b31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 9832));
    // 0x1b31d8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1b31d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b31dc: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1b31dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b31e0:
    // 0x1b31e0: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x1b31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1b31e4: 0x50540037  beql        $v0, $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B31E4u;
    {
        const bool branch_taken_0x1b31e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1b31e4) {
            ctx->pc = 0x1B31E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31E4u;
            // 0x1b31e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B32C4u;
            goto label_1b32c4;
        }
    }
    ctx->pc = 0x1B31ECu;
    // 0x1b31ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B31ECu;
    {
        const bool branch_taken_0x1b31ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31ECu;
            // 0x1b31f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31ec) {
            ctx->pc = 0x1B31C8u;
            runtime->cooperativeGuestYield();
            goto label_1b31c8;
        }
    }
    ctx->pc = 0x1B31F4u;
label_1b31f4:
    // 0x1b31f4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1b31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1b31f8: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1b31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1b31fc: 0x24774838  addiu       $s7, $v1, 0x4838
    ctx->pc = 0x1b31fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 18488));
    // 0x1b3200: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b3200u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3204: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1b3204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1b3208: 0x24510038  addiu       $s1, $v0, 0x38
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1b320c: 0x247e4840  addiu       $fp, $v1, 0x4840
    ctx->pc = 0x1b320cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 18496));
    // 0x1b3210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3214: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b3218:
    // 0x1b3218: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x1b3218u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b321c: 0x245352a8  addiu       $s3, $v0, 0x52A8
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21160));
    // 0x1b3220: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1b3224: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1b3224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3228: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B3228u;
    {
        const bool branch_taken_0x1b3228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B322Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3228u;
            // 0x1b322c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3228) {
            ctx->pc = 0x1B3274u;
            goto label_1b3274;
        }
    }
    ctx->pc = 0x1B3230u;
    // 0x1b3230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3234: 0x8c62cb88  lw          $v0, -0x3478($v1)
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953864)));
    // 0x1b3238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b323c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1B323Cu;
    SET_GPR_U32(ctx, 31, 0x1B3244u);
    ctx->pc = 0x1B3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B323Cu;
            // 0x1b3240: 0xac62cb88  sw          $v0, -0x3478($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3244u; }
        if (ctx->pc != 0x1B3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3244u; }
        if (ctx->pc != 0x1B3244u) { return; }
    }
    ctx->pc = 0x1B3244u;
    // 0x1b3244: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3244u;
    {
        const bool branch_taken_0x1b3244 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B3248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3244u;
            // 0x1b3248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3244) {
            ctx->pc = 0x1B32A8u;
            goto label_1b32a8;
        }
    }
    ctx->pc = 0x1B324Cu;
    // 0x1b324c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B324Cu;
    SET_GPR_U32(ctx, 31, 0x1B3254u);
    ctx->pc = 0x1B3250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B324Cu;
            // 0x1b3250: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3254u; }
        if (ctx->pc != 0x1B3254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3254u; }
        if (ctx->pc != 0x1B3254u) { return; }
    }
    ctx->pc = 0x1B3254u;
    // 0x1b3254: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3254u;
    {
        const bool branch_taken_0x1b3254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3254u;
            // 0x1b3258: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3254) {
            ctx->pc = 0x1B32A8u;
            goto label_1b32a8;
        }
    }
    ctx->pc = 0x1B325Cu;
    // 0x1b325c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3260: 0x24845298  addiu       $a0, $a0, 0x5298
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21144));
    // 0x1b3264: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B3264u;
    SET_GPR_U32(ctx, 31, 0x1B326Cu);
    ctx->pc = 0x1B3268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3264u;
            // 0x1b3268: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B326Cu; }
        if (ctx->pc != 0x1B326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B326Cu; }
        if (ctx->pc != 0x1B326Cu) { return; }
    }
    ctx->pc = 0x1B326Cu;
    // 0x1b326c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B326Cu;
    {
        const bool branch_taken_0x1b326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B326Cu;
            // 0x1b3270: 0x2c560001  sltiu       $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b326c) {
            ctx->pc = 0x1B32A8u;
            goto label_1b32a8;
        }
    }
    ctx->pc = 0x1B3274u;
label_1b3274:
    // 0x1b3274: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1B3274u;
    SET_GPR_U32(ctx, 31, 0x1B327Cu);
    ctx->pc = 0x1B3278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3274u;
            // 0x1b3278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B327Cu; }
        if (ctx->pc != 0x1B327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B327Cu; }
        if (ctx->pc != 0x1B327Cu) { return; }
    }
    ctx->pc = 0x1B327Cu;
    // 0x1b327c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B327Cu;
    {
        const bool branch_taken_0x1b327c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b327c) {
            ctx->pc = 0x1B3280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B327Cu;
            // 0x1b3280: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B329Cu;
            goto label_1b329c;
        }
    }
    ctx->pc = 0x1B3284u;
    // 0x1b3284: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x1b3284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1b3288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b328c: 0xc06cfbe  jal         func_1B3EF8
    ctx->pc = 0x1B328Cu;
    SET_GPR_U32(ctx, 31, 0x1B3294u);
    ctx->pc = 0x1B3290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B328Cu;
            // 0x1b3290: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EF8u;
    if (runtime->hasFunction(0x1B3EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3294u; }
        if (ctx->pc != 0x1B3294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3EF8_0x1b3ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3294u; }
        if (ctx->pc != 0x1B3294u) { return; }
    }
    ctx->pc = 0x1B3294u;
    // 0x1b3294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3294u;
    {
        const bool branch_taken_0x1b3294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3294u;
            // 0x1b3298: 0xaeb40068  sw          $s4, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3294) {
            ctx->pc = 0x1B32B0u;
            goto label_1b32b0;
        }
    }
    ctx->pc = 0x1B329Cu;
label_1b329c:
    // 0x1b329c: 0x2a020078  slti        $v0, $s0, 0x78
    ctx->pc = 0x1b329cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1b32a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1B32A0u;
    {
        const bool branch_taken_0x1b32a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B32A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32A0u;
            // 0x1b32a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a0) {
            ctx->pc = 0x1B3218u;
            runtime->cooperativeGuestYield();
            goto label_1b3218;
        }
    }
    ctx->pc = 0x1B32A8u;
label_1b32a8:
    // 0x1b32a8: 0xaeb40068  sw          $s4, 0x68($s5)
    ctx->pc = 0x1b32a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 20));
    // 0x1b32ac: 0x0  nop
    ctx->pc = 0x1b32acu;
    // NOP
label_1b32b0:
    // 0x1b32b0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B32B0u;
    {
        const bool branch_taken_0x1b32b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32B0u;
            // 0x1b32b4: 0xa6b00060  sh          $s0, 0x60($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32b0) {
            ctx->pc = 0x1B32C0u;
            goto label_1b32c0;
        }
    }
    ctx->pc = 0x1B32B8u;
    // 0x1b32b8: 0xc06ccbc  jal         func_1B32F0
    ctx->pc = 0x1B32B8u;
    SET_GPR_U32(ctx, 31, 0x1B32C0u);
    ctx->pc = 0x1B32F0u;
    if (runtime->hasFunction(0x1B32F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32C0u; }
        if (ctx->pc != 0x1B32C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B32F0_0x1b32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32C0u; }
        if (ctx->pc != 0x1B32C0u) { return; }
    }
    ctx->pc = 0x1B32C0u;
label_1b32c0:
    // 0x1b32c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b32c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b32c4:
    // 0x1b32c4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b32c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b32c8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b32c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b32cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b32ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b32d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b32d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b32d4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1b32d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b32d8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1b32d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b32dc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1b32dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b32e0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1b32e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b32e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b32e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b32e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B32E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32E8u;
            // 0x1b32ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B31C8u: goto label_1b31c8;
            case 0x1B31E0u: goto label_1b31e0;
            case 0x1B31F4u: goto label_1b31f4;
            case 0x1B3218u: goto label_1b3218;
            case 0x1B3274u: goto label_1b3274;
            case 0x1B329Cu: goto label_1b329c;
            case 0x1B32A8u: goto label_1b32a8;
            case 0x1B32B0u: goto label_1b32b0;
            case 0x1B32C0u: goto label_1b32c0;
            case 0x1B32C4u: goto label_1b32c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B32F0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146208
// Address: 0x146208 - 0x146d98
void sub_00146208_0x146208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146208_0x146208");
#endif

    ctx->pc = 0x146208u;

    // 0x146208: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x146208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x14620c: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x14620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x146210: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x146210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x146214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146218: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x146218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x14621c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14621cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146220: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x146220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x146224: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x146224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x146228: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x146228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x14622c: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x14622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x146230: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x146230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x146234: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x146234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
    // 0x146238: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x146238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x14623c: 0xc0587bc  jal         func_161EF0
    ctx->pc = 0x14623Cu;
    SET_GPR_U32(ctx, 31, 0x146244u);
    ctx->pc = 0x146240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14623Cu;
            // 0x146240: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161EF0u;
    if (runtime->hasFunction(0x161EF0u)) {
        auto targetFn = runtime->lookupFunction(0x161EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146244u; }
        if (ctx->pc != 0x146244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161EF0_0x161ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146244u; }
        if (ctx->pc != 0x146244u) { return; }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x146248: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x146248u;
    SET_GPR_U32(ctx, 31, 0x146250u);
    ctx->pc = 0x14624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146248u;
            // 0x14624c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146250u; }
        if (ctx->pc != 0x146250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146250u; }
        if (ctx->pc != 0x146250u) { return; }
    }
    ctx->pc = 0x146250u;
    // 0x146250: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x146250u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x146254: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x146254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146258: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x146258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x14625c: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x14625cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x146260: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x146260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x146264: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x146264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x146268: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14626c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x14626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x146270: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146274: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x146274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x146278: 0xae02f168  sw          $v0, -0xE98($s0)
    ctx->pc = 0x146278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
    // 0x14627c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146280: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x146280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x146284: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x146284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x146288: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x146288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x14628c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x14628Cu;
    SET_GPR_U32(ctx, 31, 0x146294u);
    ctx->pc = 0x146290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14628Cu;
            // 0x146290: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146294u; }
        if (ctx->pc != 0x146294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146294u; }
        if (ctx->pc != 0x146294u) { return; }
    }
    ctx->pc = 0x146294u;
    // 0x146294: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x146294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146298: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14629c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1462a0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1462a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1462a4: 0xac821010  sw          $v0, 0x1010($a0)
    ctx->pc = 0x1462a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4112), GPR_U32(ctx, 2));
    // 0x1462a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1462ac: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1462acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1462b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1462b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1462b4: 0xacc31014  sw          $v1, 0x1014($a2)
    ctx->pc = 0x1462b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4116), GPR_U32(ctx, 3));
    // 0x1462b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1462b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1462bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1462bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1462c0: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x1462c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1462c4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1462c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1462c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1462cc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1462ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1462d0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1462d4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1462d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1462d8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1462d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1462dc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1462dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1462e0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1462e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1462e4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1462e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1462e8: 0x9c43f19c  lwu         $v1, -0xE64($v0)
    ctx->pc = 0x1462e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963612)));
    // 0x1462ec: 0x9c82f1a0  lwu         $v0, -0xE60($a0)
    ctx->pc = 0x1462ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963616)));
    // 0x1462f0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1462f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1462f4: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1462f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1462f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1462fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1462fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x146300: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x146304: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x146304u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x146308: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x146308u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x14630c: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x14630cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x146310: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x146310u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x146314: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x146314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x146318: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x146318u;
    SET_GPR_U32(ctx, 31, 0x146320u);
    ctx->pc = 0x14631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146318u;
            // 0x14631c: 0xae03f168  sw          $v1, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146320u; }
        if (ctx->pc != 0x146320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146320u; }
        if (ctx->pc != 0x146320u) { return; }
    }
    ctx->pc = 0x146320u;
    // 0x146320: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x146320u;
    SET_GPR_U32(ctx, 31, 0x146328u);
    ctx->pc = 0x146324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146320u;
            // 0x146324: 0x1290c0  sll         $s2, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146328u; }
        if (ctx->pc != 0x146328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146328u; }
        if (ctx->pc != 0x146328u) { return; }
    }
    ctx->pc = 0x146328u;
    // 0x146328: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x146328u;
    SET_GPR_U32(ctx, 31, 0x146330u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146330u; }
        if (ctx->pc != 0x146330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146330u; }
        if (ctx->pc != 0x146330u) { return; }
    }
    ctx->pc = 0x146330u;
    // 0x146330: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x146334: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x146334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x146338: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x146338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14633c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x146340: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x146344: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x146344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x146348: 0x8e550024  lw          $s5, 0x24($s2)
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14634c: 0x12a0025f  beqz        $s5, . + 4 + (0x25F << 2)
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x146350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14634Cu;
            // 0x146350: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14634c) {
            ctx->pc = 0x146CCCu;
            goto label_146ccc;
        }
    }
    ctx->pc = 0x146354u;
    // 0x146354: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_146358:
    // 0x146358: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x146358u;
    {
        const bool branch_taken_0x146358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146358) {
            ctx->pc = 0x14635Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146358u;
            // 0x14635c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1463BCu;
            goto label_1463bc;
        }
    }
    ctx->pc = 0x146360u;
    // 0x146360: 0x6aa7000f  ldl         $a3, 0xF($s5)
    ctx->pc = 0x146360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x146364: 0x6ea70008  ldr         $a3, 0x8($s5)
    ctx->pc = 0x146364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x146368: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x146368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14636c: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x14636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146370: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x146370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x146374: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x146374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x146378: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x146378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14637c: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x14637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146380: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146384: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146388: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146388u;
    {
        const bool branch_taken_0x146388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146388u;
            // 0x14638c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146388) {
            ctx->pc = 0x1463B4u;
            goto label_1463b4;
        }
    }
    ctx->pc = 0x146390u;
    // 0x146390: 0x87a40012  lh          $a0, 0x12($sp)
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x146394: 0x54830249  bnel        $a0, $v1, . + 4 + (0x249 << 2)
    ctx->pc = 0x146394u;
    {
        const bool branch_taken_0x146394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x146394) {
            ctx->pc = 0x146398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146394u;
            // 0x146398: 0xafa500d0  sw          $a1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146CBCu;
            goto label_146cbc;
        }
    }
    ctx->pc = 0x14639Cu;
    // 0x14639c: 0x87a20014  lh          $v0, 0x14($sp)
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1463a0: 0x54440246  bnel        $v0, $a0, . + 4 + (0x246 << 2)
    ctx->pc = 0x1463A0u;
    {
        const bool branch_taken_0x1463a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1463a0) {
            ctx->pc = 0x1463A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1463A0u;
            // 0x1463a4: 0xafa500d0  sw          $a1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146CBCu;
            goto label_146cbc;
        }
    }
    ctx->pc = 0x1463A8u;
    // 0x1463a8: 0x87a20016  lh          $v0, 0x16($sp)
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x1463ac: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x1463acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
    // 0x1463b0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1463b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1463b4:
    // 0x1463b4: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x1463B4u;
    {
        const bool branch_taken_0x1463b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1463B4u;
            // 0x1463b8: 0xafa500d0  sw          $a1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463b4) {
            ctx->pc = 0x146CBCu;
            goto label_146cbc;
        }
    }
    ctx->pc = 0x1463BCu;
label_1463bc:
    // 0x1463bc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1463c0: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1463c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x1463c4: 0x8c420ce4  lw          $v0, 0xCE4($v0)
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3300)));
    // 0x1463c8: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1463cc: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1463d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1463d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1463d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1463d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1463d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1463dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463e0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1463e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1463ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463f0: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1463f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1463f4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1463f8: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x1463f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x1463fc: 0x10a0022f  beqz        $a1, . + 4 + (0x22F << 2)
    ctx->pc = 0x1463FCu;
    {
        const bool branch_taken_0x1463fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1463FCu;
            // 0x146400: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463fc) {
            ctx->pc = 0x146CBCu;
            goto label_146cbc;
        }
    }
    ctx->pc = 0x146404u;
    // 0x146404: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x146404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_146408:
    // 0x146408: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14640c: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x14640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x146410: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x146414: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x146418: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x146418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14641c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146420: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x146420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x146424: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146428: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x14642c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x14642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x146430: 0x102b021  addu        $s6, $t0, $v0
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x146434: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x146438: 0x12600080  beqz        $s3, . + 4 + (0x80 << 2)
    ctx->pc = 0x146438u;
    {
        const bool branch_taken_0x146438 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146438u;
            // 0x14643c: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146438) {
            ctx->pc = 0x14663Cu;
            goto label_14663c;
        }
    }
    ctx->pc = 0x146440u;
    // 0x146440: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x146440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146444: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x146444u;
    {
        const bool branch_taken_0x146444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146444u;
            // 0x146448: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146444) {
            ctx->pc = 0x14645Cu;
            goto label_14645c;
        }
    }
    ctx->pc = 0x14644Cu;
    // 0x14644c: 0xafb20110  sw          $s2, 0x110($sp)
    ctx->pc = 0x14644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
    // 0x146450: 0xafb20100  sw          $s2, 0x100($sp)
    ctx->pc = 0x146450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 18));
    // 0x146454: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x146454u;
    {
        const bool branch_taken_0x146454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146454u;
            // 0x146458: 0xafb200f0  sw          $s2, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146454) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x14645Cu;
label_14645c:
    // 0x14645c: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146460: 0x87a30012  lh          $v1, 0x12($sp)
    ctx->pc = 0x146460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x146464: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x146464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x146468: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x146468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14646c: 0x87a40014  lh          $a0, 0x14($sp)
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x146470: 0x87a20016  lh          $v0, 0x16($sp)
    ctx->pc = 0x146470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x146474: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x146474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146478: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x146478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14647c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x14647cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x146480: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x146480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x146484: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x146488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14648c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14648cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x146490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x146494: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x146494u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x146498: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x146498u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14649c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14649cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1464a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1464a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1464a4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1464a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1464a8: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x1464a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1464ac: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1464acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1464b0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1464b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1464b4: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x1464b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1464b8: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x1464b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x1464bc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1464bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1464c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1464c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1464c4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1464c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1464c8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1464c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1464cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1464ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1464d0: 0x4be1106b  vmax.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1464d0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1464d4: 0x4be00093  vmaxw.xyzw  $vf2, $vf0, $vf0w
    ctx->pc = 0x1464d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1464d8: 0x4be2086f  vmini.xyzw  $vf1, $vf1, $vf2
    ctx->pc = 0x1464d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1464dc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1464dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1464e0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1464e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1464e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1464e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1464e8: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1464e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1464ec: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1464ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1464f0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1464f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1464f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1464f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1464f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1464f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1464fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1464fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x146500: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x146500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x146504: 0x0  nop
    ctx->pc = 0x146504u;
    // NOP
    // 0x146508: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x146508u;
    {
        const bool branch_taken_0x146508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146508u;
            // 0x14650c: 0x48231000  qmfc2.ni    $v1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146508) {
            ctx->pc = 0x146520u;
            goto label_146520;
        }
    }
    ctx->pc = 0x146510u;
    // 0x146510: 0xc059ade  jal         func_166B78
    ctx->pc = 0x146510u;
    SET_GPR_U32(ctx, 31, 0x146518u);
    ctx->pc = 0x146514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146510u;
            // 0x146514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146518u; }
        if (ctx->pc != 0x146518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146518u; }
        if (ctx->pc != 0x146518u) { return; }
    }
    ctx->pc = 0x146518u;
    // 0x146518: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x146518u;
    {
        const bool branch_taken_0x146518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146518u;
            // 0x14651c: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146518) {
            ctx->pc = 0x146CA4u;
            goto label_146ca4;
        }
    }
    ctx->pc = 0x146520u;
label_146520:
    // 0x146520: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x146520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x146524: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x146524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14652c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14652cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x146530: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x146530u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x146534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x146538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14653c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14653cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x146540: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x146540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146544: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x146544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x146548: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x146548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14654c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x14654cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x146550: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x146550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x146554: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x146554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
label_146558:
    // 0x146558: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x146558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14655c: 0x1267002a  beq         $s3, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x14655Cu;
    {
        const bool branch_taken_0x14655c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        ctx->pc = 0x146560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14655Cu;
            // 0x146560: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14655c) {
            ctx->pc = 0x146608u;
            goto label_146608;
        }
    }
    ctx->pc = 0x146564u;
    // 0x146564: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x146564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x146568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x146568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14656c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x146570: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x146574: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x146574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x146578: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x146578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x14657c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14657cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x146580: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x146580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x146584: 0x3c074400  lui         $a3, 0x4400
    ctx->pc = 0x146584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17408 << 16));
    // 0x146588: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x146588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14658c: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x14658cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x146590: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x146590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146594: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x146594u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x146598: 0xdfa30048  ld          $v1, 0x48($sp)
    ctx->pc = 0x146598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14659c: 0x3c06fffe  lui         $a2, 0xFFFE
    ctx->pc = 0x14659cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65534 << 16));
    // 0x1465a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1465a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1465a4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1465a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1465a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1465a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465ac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1465acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1465b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1465b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1465b4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1465b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1465b8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1465b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1465bc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1465bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1465c0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1465c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1465c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1465c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1465c8: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x1465c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x1465cc: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1465ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1465d0: 0xc059b16  jal         func_166C58
    ctx->pc = 0x1465D0u;
    SET_GPR_U32(ctx, 31, 0x1465D8u);
    ctx->pc = 0x1465D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465D0u;
            // 0x1465d4: 0xafa800b0  sw          $t0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465D8u; }
        if (ctx->pc != 0x1465D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465D8u; }
        if (ctx->pc != 0x1465D8u) { return; }
    }
    ctx->pc = 0x1465D8u;
    // 0x1465d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1465d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1465dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465e0: 0xc059d28  jal         func_1674A0
    ctx->pc = 0x1465E0u;
    SET_GPR_U32(ctx, 31, 0x1465E8u);
    ctx->pc = 0x1465E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465E0u;
            // 0x1465e4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1674A0u;
    if (runtime->hasFunction(0x1674A0u)) {
        auto targetFn = runtime->lookupFunction(0x1674A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465E8u; }
        if (ctx->pc != 0x1465E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001674A0_0x1674a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465E8u; }
        if (ctx->pc != 0x1465E8u) { return; }
    }
    ctx->pc = 0x1465E8u;
    // 0x1465e8: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x1465e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x1465ec: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1465ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1465f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1465f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1465f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1465f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1465f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1465f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1465fc: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x1465fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x146600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146600u;
    {
        const bool branch_taken_0x146600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146600u;
            // 0x146604: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146600) {
            ctx->pc = 0x146614u;
            goto label_146614;
        }
    }
    ctx->pc = 0x146608u;
label_146608:
    // 0x146608: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x146608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14660c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14660cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x146610: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x146610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_146614:
    // 0x146614: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x146618: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x146618u;
    {
        const bool branch_taken_0x146618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146618) {
            ctx->pc = 0x14661Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146618u;
            // 0x14661c: 0xafb300b4  sw          $s3, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14662Cu;
            goto label_14662c;
        }
    }
    ctx->pc = 0x146620u;
    // 0x146620: 0xc059ade  jal         func_166B78
    ctx->pc = 0x146620u;
    SET_GPR_U32(ctx, 31, 0x146628u);
    ctx->pc = 0x146624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146620u;
            // 0x146624: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146628u; }
        if (ctx->pc != 0x146628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146628u; }
        if (ctx->pc != 0x146628u) { return; }
    }
    ctx->pc = 0x146628u;
    // 0x146628: 0xafb300b4  sw          $s3, 0xB4($sp)
    ctx->pc = 0x146628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 19));
label_14662c:
    // 0x14662c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146630: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x146630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x146634: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x146634u;
    {
        const bool branch_taken_0x146634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146634u;
            // 0x146638: 0xafb300b8  sw          $s3, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146634) {
            ctx->pc = 0x1467F4u;
            goto label_1467f4;
        }
    }
    ctx->pc = 0x14663Cu;
label_14663c:
    // 0x14663c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x14663cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146640: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x146640u;
    {
        const bool branch_taken_0x146640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146640u;
            // 0x146644: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146640) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146648u;
    // 0x146648: 0x69602  srl         $s2, $a2, 24
    ctx->pc = 0x146648u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x14664c: 0x12400194  beqz        $s2, . + 4 + (0x194 << 2)
    ctx->pc = 0x14664Cu;
    {
        const bool branch_taken_0x14664c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14664Cu;
            // 0x146650: 0x61c02  srl         $v1, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14664c) {
            ctx->pc = 0x146CA0u;
            goto label_146ca0;
        }
    }
    ctx->pc = 0x146654u;
    // 0x146654: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x146654u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x146658: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x146658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14665c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14665cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146660: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x146660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x146664: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x146664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x146668: 0x29042  srl         $s2, $v0, 1
    ctx->pc = 0x146668u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14666c: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x14666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x146670: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x146670u;
    {
        const bool branch_taken_0x146670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146670u;
            // 0x146674: 0xafa40100  sw          $a0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146670) {
            ctx->pc = 0x1467F0u;
            goto label_1467f0;
        }
    }
    ctx->pc = 0x146678u;
label_146678:
    // 0x146678: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x146678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x14667c: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x14667cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x146680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x146680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x146684: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x146684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146688: 0x62e02  srl         $a1, $a2, 24
    ctx->pc = 0x146688u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x14668c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x14668cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x146690: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x146690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146698: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x146698u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14669c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x14669cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1466a0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1466a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1466a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1466a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1466a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1466a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1466ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1466acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1466b0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1466b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1466b4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1466b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1466b8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1466b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1466bc: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x1466bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1466c0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1466c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1466c4: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1466c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1466c8: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x1466c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1466cc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1466ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1466d0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1466d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1466d4: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x1466d4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1466d8: 0x87a50012  lh          $a1, 0x12($sp)
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1466dc: 0x87a20014  lh          $v0, 0x14($sp)
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1466e0: 0x87a30016  lh          $v1, 0x16($sp)
    ctx->pc = 0x1466e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x1466e4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1466e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1466e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1466e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1466ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1466ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1466f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1466f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1466f4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1466f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1466f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1466f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1466fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1466fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x146700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x146704: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x146704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x146708: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x146708u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x14670c: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x14670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x146710: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x146710u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x146714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146718: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x146718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14671c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x14671cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146720: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x146720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x146724: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x146724u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x146728: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x146728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14672c: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x14672cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x146730: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x146730u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x146734: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x146734u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x146738: 0x3c053b80  lui         $a1, 0x3B80
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15232 << 16));
    // 0x14673c: 0x34a58081  ori         $a1, $a1, 0x8081
    ctx->pc = 0x14673cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32897);
    // 0x146740: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x146740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x146744: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x146744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x146748: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x146748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14674c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x14674cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x146750: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x146750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146754: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x146754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146758: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x146758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14675c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x14675cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146760: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x146760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146764: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x146764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146768: 0x4be2086b  vmax.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x146768u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14676c: 0x4be00093  vmaxw.xyzw  $vf2, $vf0, $vf0w
    ctx->pc = 0x14676cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146770: 0x4be208af  vmini.xyzw  $vf2, $vf1, $vf2
    ctx->pc = 0x146770u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146774: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x146774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146778: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14677c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x14677cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x146780: 0x4a211058  vmulx.w     $vf1, $vf2, $vf1x
    ctx->pc = 0x146780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146784: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x146784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146788: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x146788u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14678c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14678cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146790: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x146790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x146794: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x146794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x146798: 0x0  nop
    ctx->pc = 0x146798u;
    // NOP
    // 0x14679c: 0x12400141  beqz        $s2, . + 4 + (0x141 << 2)
    ctx->pc = 0x14679Cu;
    {
        const bool branch_taken_0x14679c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1467A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14679Cu;
            // 0x1467a0: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14679c) {
            ctx->pc = 0x146CA4u;
            goto label_146ca4;
        }
    }
    ctx->pc = 0x1467A4u;
    // 0x1467a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1467a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1467a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1467ac: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1467acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1467b0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1467b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1467b4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1467b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1467b8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1467b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1467bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1467bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1467c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1467c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1467c4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1467c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1467c8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1467c8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1467cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1467ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1467d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1467d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1467d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1467d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1467d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1467d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1467dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1467dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1467e0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1467e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1467e4: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1467e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1467e8: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x1467e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x1467ec: 0x0  nop
    ctx->pc = 0x1467ecu;
    // NOP
label_1467f0:
    // 0x1467f0: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x1467f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
label_1467f4:
    // 0x1467f4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1467f8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1467fc: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x146800: 0x24c61080  addiu       $a2, $a2, 0x1080
    ctx->pc = 0x146800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4224));
    // 0x146804: 0x92c80018  lbu         $t0, 0x18($s6)
    ctx->pc = 0x146804u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x146808: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x146808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14680c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14680cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146810: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x146810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x146814: 0x3a420080  xori        $v0, $s2, 0x80
    ctx->pc = 0x146814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)128);
    // 0x146818: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14681c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x14681cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x146820: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x146824: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x146824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146828: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14682c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x146830: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x146834: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x146834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x146838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14683c: 0x8d021088  lw          $v0, 0x1088($t0)
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4232)));
    // 0x146840: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146844: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x146844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146848: 0xad021088  sw          $v0, 0x1088($t0)
    ctx->pc = 0x146848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4232), GPR_U32(ctx, 2));
    // 0x14684c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x146850: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x146850u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146854: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x146854u;
    SET_GPR_U32(ctx, 31, 0x14685Cu);
    ctx->pc = 0x146858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146854u;
            // 0x146858: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14685Cu; }
        if (ctx->pc != 0x14685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14685Cu; }
        if (ctx->pc != 0x14685Cu) { return; }
    }
    ctx->pc = 0x14685Cu;
    // 0x14685c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x14685Cu;
    SET_GPR_U32(ctx, 31, 0x146864u);
    ctx->pc = 0x146860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14685Cu;
            // 0x146860: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146864u; }
        if (ctx->pc != 0x146864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146864u; }
        if (ctx->pc != 0x146864u) { return; }
    }
    ctx->pc = 0x146864u;
    // 0x146864: 0x8e83f168  lw          $v1, -0xE98($s4)
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x146868: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x146868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x14686c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x14686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x146870: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x146870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146874: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x146874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x146878: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x14687c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146880: 0x8e82f168  lw          $v0, -0xE98($s4)
    ctx->pc = 0x146880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x146884: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146888: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x146888u;
    SET_GPR_U32(ctx, 31, 0x146890u);
    ctx->pc = 0x14688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146888u;
            // 0x14688c: 0xae82f168  sw          $v0, -0xE98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146890u; }
        if (ctx->pc != 0x146890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146890u; }
        if (ctx->pc != 0x146890u) { return; }
    }
    ctx->pc = 0x146890u;
    // 0x146890: 0x8e83f168  lw          $v1, -0xE98($s4)
    ctx->pc = 0x146890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x146894: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146898: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14689c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x14689cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1468a0: 0xac821010  sw          $v0, 0x1010($a0)
    ctx->pc = 0x1468a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4112), GPR_U32(ctx, 2));
    // 0x1468a4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1468a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1468a8: 0xacc31014  sw          $v1, 0x1014($a2)
    ctx->pc = 0x1468a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4116), GPR_U32(ctx, 3));
    // 0x1468ac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1468acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1468b0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1468b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1468b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1468b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1468b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1468bc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1468bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1468c0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1468c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1468c4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1468c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1468c8: 0x8e85f168  lw          $a1, -0xE98($s4)
    ctx->pc = 0x1468c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x1468cc: 0x8c510cec  lw          $s1, 0xCEC($v0)
    ctx->pc = 0x1468ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3308)));
    // 0x1468d0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1468d4: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x1468d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1468d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1468d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468dc: 0x10f1000a  beq         $a3, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1468DCu;
    {
        const bool branch_taken_0x1468dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x1468E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468DCu;
            // 0x1468e0: 0xae82f168  sw          $v0, -0xE98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468dc) {
            ctx->pc = 0x146908u;
            goto label_146908;
        }
    }
    ctx->pc = 0x1468E4u;
    // 0x1468e4: 0xde220058  ld          $v0, 0x58($s1)
    ctx->pc = 0x1468e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1468e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1468ec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1468f0: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1468f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1468f4: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x1468f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x1468f8: 0xde220050  ld          $v0, 0x50($s1)
    ctx->pc = 0x1468f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1468fc: 0xfd040018  sd          $a0, 0x18($t0)
    ctx->pc = 0x1468fcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 4));
    // 0x146900: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x146900u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x146904: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_146908:
    // 0x146908: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x146908u;
    {
        const bool branch_taken_0x146908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146908u;
            // 0x14690c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146908) {
            ctx->pc = 0x146A04u;
            goto label_146a04;
        }
    }
    ctx->pc = 0x146910u;
    // 0x146910: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x146910u;
    {
        const bool branch_taken_0x146910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146910u;
            // 0x146914: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146910) {
            ctx->pc = 0x14696Cu;
            goto label_14696c;
        }
    }
    ctx->pc = 0x146918u;
    // 0x146918: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x146918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14691c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x146920: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x146920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146924: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x146924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146928: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x14692c: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x14692cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x146930: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x146930u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x146934: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x146934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x146938: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x146938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14693c: 0xfd050018  sd          $a1, 0x18($t0)
    ctx->pc = 0x14693cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 5));
    // 0x146940: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x146940u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x146944: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x146944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x146948: 0xfd060028  sd          $a2, 0x28($t0)
    ctx->pc = 0x146948u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 6));
    // 0x14694c: 0xfd020020  sd          $v0, 0x20($t0)
    ctx->pc = 0x14694cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 2));
    // 0x146950: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x146950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x146954: 0xfd070038  sd          $a3, 0x38($t0)
    ctx->pc = 0x146954u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 7));
    // 0x146958: 0xfd020030  sd          $v0, 0x30($t0)
    ctx->pc = 0x146958u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 2));
    // 0x14695c: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x14695cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x146960: 0xfd040048  sd          $a0, 0x48($t0)
    ctx->pc = 0x146960u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 72), GPR_U64(ctx, 4));
    // 0x146964: 0xfd020040  sd          $v0, 0x40($t0)
    ctx->pc = 0x146964u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 2));
    // 0x146968: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x146968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_14696c:
    // 0x14696c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14696Cu;
    {
        const bool branch_taken_0x14696c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14696Cu;
            // 0x146970: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14696c) {
            ctx->pc = 0x146980u;
            goto label_146980;
        }
    }
    ctx->pc = 0x146974u;
    // 0x146974: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x146974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x146978: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x146978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14697c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x14697cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_146980:
    // 0x146980: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x146984: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146988: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x146988u;
    {
        const bool branch_taken_0x146988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146988u;
            // 0x14698c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146988) {
            ctx->pc = 0x1469C8u;
            goto label_1469c8;
        }
    }
    ctx->pc = 0x146990u;
    // 0x146990: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x146994: 0x2167a  dsrl        $v0, $v0, 25
    ctx->pc = 0x146994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 25);
    // 0x146998: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x146998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x14699c: 0x3484360b  ori         $a0, $a0, 0x360B
    ctx->pc = 0x14699cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13835);
    // 0x1469a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1469a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1469a4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1469a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1469a8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1469ac: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x1469acu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x1469b0: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x1469b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x1469b4: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x1469b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1469b8: 0xfd050018  sd          $a1, 0x18($t0)
    ctx->pc = 0x1469b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 5));
    // 0x1469bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1469BCu;
    {
        const bool branch_taken_0x1469bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469BCu;
            // 0x1469c0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469bc) {
            ctx->pc = 0x1469F8u;
            goto label_1469f8;
        }
    }
    ctx->pc = 0x1469C4u;
    // 0x1469c4: 0x0  nop
    ctx->pc = 0x1469c4u;
    // NOP
label_1469c8:
    // 0x1469c8: 0x16f20005  bne         $s7, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1469C8u;
    {
        const bool branch_taken_0x1469c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 18));
        ctx->pc = 0x1469CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469C8u;
            // 0x1469cc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469c8) {
            ctx->pc = 0x1469E0u;
            goto label_1469e0;
        }
    }
    ctx->pc = 0x1469D0u;
    // 0x1469d0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1469d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1469d4: 0x10b00009  beq         $a1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1469D4u;
    {
        const bool branch_taken_0x1469d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1469D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469D4u;
            // 0x1469d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469d4) {
            ctx->pc = 0x1469FCu;
            goto label_1469fc;
        }
    }
    ctx->pc = 0x1469DCu;
    // 0x1469dc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1469e0:
    // 0x1469e0: 0x2167a  dsrl        $v0, $v0, 25
    ctx->pc = 0x1469e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 25);
    // 0x1469e4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1469e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1469e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1469ec: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x1469ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x1469f0: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x1469f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x1469f4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1469f8:
    // 0x1469f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1469f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1469fc:
    // 0x1469fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1469FCu;
    {
        const bool branch_taken_0x1469fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469FCu;
            // 0x146a00: 0xafa600c4  sw          $a2, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469fc) {
            ctx->pc = 0x146A80u;
            goto label_146a80;
        }
    }
    ctx->pc = 0x146A04u;
label_146a04:
    // 0x146a04: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x146a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x146a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146a0c: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x146A0Cu;
    {
        const bool branch_taken_0x146a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x146A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A0Cu;
            // 0x146a10: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a0c) {
            ctx->pc = 0x146A48u;
            goto label_146a48;
        }
    }
    ctx->pc = 0x146A14u;
    // 0x146a14: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x146a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x146a18: 0x2167a  dsrl        $v0, $v0, 25
    ctx->pc = 0x146a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 25);
    // 0x146a1c: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x146a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x146a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x146a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x146a24: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x146a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x146a28: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x146a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x146a2c: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x146a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x146a30: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x146a30u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x146a34: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x146a34u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x146a38: 0xfd050018  sd          $a1, 0x18($t0)
    ctx->pc = 0x146a38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 5));
    // 0x146a3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x146A3Cu;
    {
        const bool branch_taken_0x146a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A3Cu;
            // 0x146a40: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a3c) {
            ctx->pc = 0x146A78u;
            goto label_146a78;
        }
    }
    ctx->pc = 0x146A44u;
    // 0x146a44: 0x0  nop
    ctx->pc = 0x146a44u;
    // NOP
label_146a48:
    // 0x146a48: 0x16f20005  bne         $s7, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x146A48u;
    {
        const bool branch_taken_0x146a48 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 18));
        ctx->pc = 0x146A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A48u;
            // 0x146a4c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a48) {
            ctx->pc = 0x146A60u;
            goto label_146a60;
        }
    }
    ctx->pc = 0x146A50u;
    // 0x146a50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x146a54: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146A54u;
    {
        const bool branch_taken_0x146a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x146A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A54u;
            // 0x146a58: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a54) {
            ctx->pc = 0x146A78u;
            goto label_146a78;
        }
    }
    ctx->pc = 0x146A5Cu;
    // 0x146a5c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_146a60:
    // 0x146a60: 0x2167a  dsrl        $v0, $v0, 25
    ctx->pc = 0x146a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 25);
    // 0x146a64: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x146a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x146a68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x146a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x146a6c: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x146a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x146a70: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x146a70u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x146a74: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_146a78:
    // 0x146a78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146a7c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x146a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_146a80:
    // 0x146a80: 0x12f20012  beq         $s7, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x146A80u;
    {
        const bool branch_taken_0x146a80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 18));
        ctx->pc = 0x146A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A80u;
            // 0x146a84: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a80) {
            ctx->pc = 0x146ACCu;
            goto label_146acc;
        }
    }
    ctx->pc = 0x146A88u;
    // 0x146a88: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x146a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x146a8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x146a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x146a90: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x146a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146a94: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x146a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x146a98: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x146a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x146a9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x146a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x146aa0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x146aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x146aa4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x146aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x146aa8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x146aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x146aac: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x146aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x146ab0: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x146ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x146ab4: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x146ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x146ab8: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x146ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x146abc: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x146abcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x146ac0: 0xfd050018  sd          $a1, 0x18($t0)
    ctx->pc = 0x146ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 5));
    // 0x146ac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146AC4u;
    {
        const bool branch_taken_0x146ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AC4u;
            // 0x146ac8: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ac4) {
            ctx->pc = 0x146AF8u;
            goto label_146af8;
        }
    }
    ctx->pc = 0x146ACCu;
label_146acc:
    // 0x146acc: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x146ad0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x146ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146ad4: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x146AD4u;
    {
        const bool branch_taken_0x146ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x146AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AD4u;
            // 0x146ad8: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ad4) {
            ctx->pc = 0x146AF8u;
            goto label_146af8;
        }
    }
    ctx->pc = 0x146ADCu;
    // 0x146adc: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x146adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x146ae0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x146ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x146ae4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x146ae8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x146ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x146aec: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x146aecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x146af0: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x146af0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x146af4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_146af8:
    // 0x146af8: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x146afc: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x146afcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b00: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x146b04: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x146b08: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x146b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x146b0c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x146b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x146b10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x146b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x146b14: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x146b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x146b18: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x146b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x146b1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146b20: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x146b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x146b24: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x146b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x146b28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x146b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x146b2c: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x146b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x146b30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146b34: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x146b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x146b38: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x146b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x146b3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146b40: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x146b40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x146b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146b48: 0xafb000c8  sw          $s0, 0xC8($sp)
    ctx->pc = 0x146b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 16));
    // 0x146b4c: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x146b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x146b50: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146b54: 0xafb100cc  sw          $s1, 0xCC($sp)
    ctx->pc = 0x146b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 17));
    // 0x146b58: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x146b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x146b5c: 0xae88f168  sw          $t0, -0xE98($s4)
    ctx->pc = 0x146b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294963560), GPR_U32(ctx, 8));
    // 0x146b60: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x146B60u;
    SET_GPR_U32(ctx, 31, 0x146B68u);
    ctx->pc = 0x146B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146B60u;
            // 0x146b64: 0xafa600c0  sw          $a2, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B68u; }
        if (ctx->pc != 0x146B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B68u; }
        if (ctx->pc != 0x146B68u) { return; }
    }
    ctx->pc = 0x146B68u;
    // 0x146b68: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x146B68u;
    SET_GPR_U32(ctx, 31, 0x146B70u);
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B70u; }
        if (ctx->pc != 0x146B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B70u; }
        if (ctx->pc != 0x146B70u) { return; }
    }
    ctx->pc = 0x146B70u;
    // 0x146b70: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x146B70u;
    SET_GPR_U32(ctx, 31, 0x146B78u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B78u; }
        if (ctx->pc != 0x146B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B78u; }
        if (ctx->pc != 0x146B78u) { return; }
    }
    ctx->pc = 0x146B78u;
    // 0x146b78: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x146b78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x146b7c: 0x8ce21088  lw          $v0, 0x1088($a3)
    ctx->pc = 0x146b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4232)));
    // 0x146b80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146b84: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x146b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x146b88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146b8c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146B8Cu;
    {
        const bool branch_taken_0x146b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x146B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B8Cu;
            // 0x146b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b8c) {
            ctx->pc = 0x146BB8u;
            goto label_146bb8;
        }
    }
    ctx->pc = 0x146B94u;
    // 0x146b94: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x146b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x146b98: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x146b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b9c: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x146B9Cu;
    SET_GPR_U32(ctx, 31, 0x146BA4u);
    ctx->pc = 0x146BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146B9Cu;
            // 0x146ba0: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BA4u; }
        if (ctx->pc != 0x146BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BA4u; }
        if (ctx->pc != 0x146BA4u) { return; }
    }
    ctx->pc = 0x146BA4u;
    // 0x146ba4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x146ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x146ba8: 0x8d021088  lw          $v0, 0x1088($t0)
    ctx->pc = 0x146ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4232)));
    // 0x146bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146bb0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x146bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x146bb4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x146bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_146bb8:
    // 0x146bb8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146bbc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x146bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x146bc0: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x146bc4: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x146bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x146bc8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x146bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x146bcc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x146bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x146bd0: 0x8c64c29c  lw          $a0, -0x3D64($v1)
    ctx->pc = 0x146bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951580)));
    // 0x146bd4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x146bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x146bd8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x146bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x146bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146be0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146be4: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x146be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146be8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x146be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x146bec: 0xc05aa38  jal         func_16A8E0
    ctx->pc = 0x146BECu;
    SET_GPR_U32(ctx, 31, 0x146BF4u);
    ctx->pc = 0x146BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146BECu;
            // 0x146bf0: 0x30e60020  andi        $a2, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8E0u;
    if (runtime->hasFunction(0x16A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BF4u; }
        if (ctx->pc != 0x146BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a8e0_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BF4u; }
        if (ctx->pc != 0x146BF4u) { return; }
    }
    ctx->pc = 0x146BF4u;
    // 0x146bf4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x146bf8: 0x8c631048  lw          $v1, 0x1048($v1)
    ctx->pc = 0x146bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4168)));
    // 0x146bfc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x146bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x146c00: 0x2485fff0  addiu       $a1, $a0, -0x10
    ctx->pc = 0x146c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x146c04: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146c08: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x146c08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146c0c: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x146c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x146c10: 0xac83fff0  sw          $v1, -0x10($a0)
    ctx->pc = 0x146c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U32(ctx, 3));
    // 0x146c14: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x146c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x146c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c1c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x146c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x146c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c24: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x146C24u;
    SET_GPR_U32(ctx, 31, 0x146C2Cu);
    ctx->pc = 0x146C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C24u;
            // 0x146c28: 0x24070045  addiu       $a3, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C2Cu; }
        if (ctx->pc != 0x146C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C2Cu; }
        if (ctx->pc != 0x146C2Cu) { return; }
    }
    ctx->pc = 0x146C2Cu;
    // 0x146c2c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x146c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x146c30: 0x26c50020  addiu       $a1, $s6, 0x20
    ctx->pc = 0x146c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x146c34: 0xc04fd64  jal         func_13F590
    ctx->pc = 0x146C34u;
    SET_GPR_U32(ctx, 31, 0x146C3Cu);
    ctx->pc = 0x146C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C34u;
            // 0x146c38: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F590u;
    if (runtime->hasFunction(0x13F590u)) {
        auto targetFn = runtime->lookupFunction(0x13F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C3Cu; }
        if (ctx->pc != 0x146C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f590_0x13f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C3Cu; }
        if (ctx->pc != 0x146C3Cu) { return; }
    }
    ctx->pc = 0x146C3Cu;
    // 0x146c3c: 0x2611c2d0  addiu       $s1, $s0, -0x3D30
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951632));
    // 0x146c40: 0x8e02c2d0  lw          $v0, -0x3D30($s0)
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951632)));
    // 0x146c44: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x146c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x146c48: 0x8e84f168  lw          $a0, -0xE98($s4)
    ctx->pc = 0x146c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x146c4c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x146c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x146c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146c54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x146c58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x146c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x146c60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146c64: 0x8e82f168  lw          $v0, -0xE98($s4)
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963560)));
    // 0x146c68: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x146c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x146c6c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x146c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x146c70: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x146C70u;
    SET_GPR_U32(ctx, 31, 0x146C78u);
    ctx->pc = 0x146C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C70u;
            // 0x146c74: 0xae83f168  sw          $v1, -0xE98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C78u; }
        if (ctx->pc != 0x146C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C78u; }
        if (ctx->pc != 0x146C78u) { return; }
    }
    ctx->pc = 0x146C78u;
    // 0x146c78: 0x96c3001a  lhu         $v1, 0x1A($s6)
    ctx->pc = 0x146c78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 26)));
    // 0x146c7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146C7Cu;
    {
        const bool branch_taken_0x146c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C7Cu;
            // 0x146c80: 0x8e02c2d0  lw          $v0, -0x3D30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c7c) {
            ctx->pc = 0x146CA0u;
            goto label_146ca0;
        }
    }
    ctx->pc = 0x146C84u;
    // 0x146c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146c8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146c90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x146c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x146c94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146c98: 0xae02c2d0  sw          $v0, -0x3D30($s0)
    ctx->pc = 0x146c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951632), GPR_U32(ctx, 2));
    // 0x146c9c: 0x0  nop
    ctx->pc = 0x146c9cu;
    // NOP
label_146ca0:
    // 0x146ca0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x146ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_146ca4:
    // 0x146ca4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x146ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x146ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146cac: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x146cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x146cb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x146cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x146cb4: 0x1440fdd4  bnez        $v0, . + 4 + (-0x22C << 2)
    ctx->pc = 0x146CB4u;
    {
        const bool branch_taken_0x146cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CB4u;
            // 0x146cb8: 0x8fa700d4  lw          $a3, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cb4) {
            ctx->pc = 0x146408u;
            runtime->cooperativeGuestYield();
            goto label_146408;
        }
    }
    ctx->pc = 0x146CBCu;
label_146cbc:
    // 0x146cbc: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x146cbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x146cc0: 0x56a0fda5  bnel        $s5, $zero, . + 4 + (-0x25B << 2)
    ctx->pc = 0x146CC0u;
    {
        const bool branch_taken_0x146cc0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x146cc0) {
            ctx->pc = 0x146CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146CC0u;
            // 0x146cc4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146358u;
            runtime->cooperativeGuestYield();
            goto label_146358;
        }
    }
    ctx->pc = 0x146CC8u;
    // 0x146cc8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_146ccc:
    // 0x146ccc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x146CCCu;
    {
        const bool branch_taken_0x146ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ccc) {
            ctx->pc = 0x146CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146CCCu;
            // 0x146cd0: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146CE0u;
            goto label_146ce0;
        }
    }
    ctx->pc = 0x146CD4u;
    // 0x146cd4: 0xc059ade  jal         func_166B78
    ctx->pc = 0x146CD4u;
    SET_GPR_U32(ctx, 31, 0x146CDCu);
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CDCu; }
        if (ctx->pc != 0x146CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CDCu; }
        if (ctx->pc != 0x146CDCu) { return; }
    }
    ctx->pc = 0x146CDCu;
    // 0x146cdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x146cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_146ce0:
    // 0x146ce0: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x146CE0u;
    SET_GPR_U32(ctx, 31, 0x146CE8u);
    ctx->pc = 0x146CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146CE0u;
            // 0x146ce4: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CE8u; }
        if (ctx->pc != 0x146CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CE8u; }
        if (ctx->pc != 0x146CE8u) { return; }
    }
    ctx->pc = 0x146CE8u;
    // 0x146ce8: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x146ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x146cec: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146cf0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x146cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x146cf4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x146cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146cf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x146cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146cfc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x146CFCu;
    SET_GPR_U32(ctx, 31, 0x146D04u);
    ctx->pc = 0x146D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146CFCu;
            // 0x146d00: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D04u; }
        if (ctx->pc != 0x146D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D04u; }
        if (ctx->pc != 0x146D04u) { return; }
    }
    ctx->pc = 0x146D04u;
    // 0x146d04: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x146d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146d08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x146d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146d0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x146d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x146d10: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x146d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x146d14: 0xac441010  sw          $a0, 0x1010($v0)
    ctx->pc = 0x146d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 4));
    // 0x146d18: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x146d1c: 0xaca31014  sw          $v1, 0x1014($a1)
    ctx->pc = 0x146d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 3));
    // 0x146d20: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x146d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146d24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x146d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146d28: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x146d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x146d2c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x146d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x146d30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146d34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x146d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x146d38: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146d3c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x146d40: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x146d44: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x146d44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x146d48: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x146d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x146d4c: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x146D4Cu;
    SET_GPR_U32(ctx, 31, 0x146D54u);
    ctx->pc = 0x146D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D4Cu;
            // 0x146d50: 0xfc460018  sd          $a2, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D54u; }
        if (ctx->pc != 0x146D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D54u; }
        if (ctx->pc != 0x146D54u) { return; }
    }
    ctx->pc = 0x146D54u;
    // 0x146d54: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x146D54u;
    SET_GPR_U32(ctx, 31, 0x146D5Cu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D5Cu; }
        if (ctx->pc != 0x146D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D5Cu; }
        if (ctx->pc != 0x146D5Cu) { return; }
    }
    ctx->pc = 0x146D5Cu;
    // 0x146d5c: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x146D5Cu;
    SET_GPR_U32(ctx, 31, 0x146D64u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D64u; }
        if (ctx->pc != 0x146D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D64u; }
        if (ctx->pc != 0x146D64u) { return; }
    }
    ctx->pc = 0x146D64u;
    // 0x146d64: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x146d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x146d68: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x146d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x146d6c: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x146d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x146d70: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x146d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x146d74: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x146d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x146d78: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x146d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x146d7c: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x146d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x146d80: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x146d80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x146d84: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x146d84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146d88: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x146d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x146D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D8Cu;
            // 0x146d90: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146358u: goto label_146358;
            case 0x1463B4u: goto label_1463b4;
            case 0x1463BCu: goto label_1463bc;
            case 0x146408u: goto label_146408;
            case 0x14645Cu: goto label_14645c;
            case 0x146520u: goto label_146520;
            case 0x146558u: goto label_146558;
            case 0x146608u: goto label_146608;
            case 0x146614u: goto label_146614;
            case 0x14662Cu: goto label_14662c;
            case 0x14663Cu: goto label_14663c;
            case 0x146678u: goto label_146678;
            case 0x1467F0u: goto label_1467f0;
            case 0x1467F4u: goto label_1467f4;
            case 0x146908u: goto label_146908;
            case 0x14696Cu: goto label_14696c;
            case 0x146980u: goto label_146980;
            case 0x1469C8u: goto label_1469c8;
            case 0x1469E0u: goto label_1469e0;
            case 0x1469F8u: goto label_1469f8;
            case 0x1469FCu: goto label_1469fc;
            case 0x146A04u: goto label_146a04;
            case 0x146A48u: goto label_146a48;
            case 0x146A60u: goto label_146a60;
            case 0x146A78u: goto label_146a78;
            case 0x146A80u: goto label_146a80;
            case 0x146ACCu: goto label_146acc;
            case 0x146AF8u: goto label_146af8;
            case 0x146BB8u: goto label_146bb8;
            case 0x146CA0u: goto label_146ca0;
            case 0x146CA4u: goto label_146ca4;
            case 0x146CBCu: goto label_146cbc;
            case 0x146CCCu: goto label_146ccc;
            case 0x146CE0u: goto label_146ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146D94u;
    // 0x146d94: 0x0  nop
    ctx->pc = 0x146d94u;
    // NOP
}

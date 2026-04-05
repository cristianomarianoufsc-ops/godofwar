#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F458
// Address: 0x19f458 - 0x19f690
void sub_0019F458_0x19f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F458_0x19f458");
#endif

    ctx->pc = 0x19f458u;

    // 0x19f458: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19f45c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x19f460: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19f464: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19f464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19f468: 0x24533db0  addiu       $s3, $v0, 0x3DB0
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15792));
    // 0x19f46c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19f470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f474: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19f478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f47c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x19F47Cu;
    SET_GPR_U32(ctx, 31, 0x19F484u);
    ctx->pc = 0x19F480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F47Cu;
            // 0x19f480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F484u; }
        if (ctx->pc != 0x19F484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F484u; }
        if (ctx->pc != 0x19F484u) { return; }
    }
    ctx->pc = 0x19F484u;
    // 0x19f484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f488:
    // 0x19f488: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x19F488u;
    SET_GPR_U32(ctx, 31, 0x19F490u);
    ctx->pc = 0x19F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F488u;
            // 0x19f48c: 0x2411002c  addiu       $s1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F490u; }
        if (ctx->pc != 0x19F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F490u; }
        if (ctx->pc != 0x19F490u) { return; }
    }
    ctx->pc = 0x19F490u;
    // 0x19f490: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f498: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f49c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F49Cu;
    SET_GPR_U32(ctx, 31, 0x19F4A4u);
    ctx->pc = 0x19F4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F49Cu;
            // 0x19f4a0: 0x24a53dc8  addiu       $a1, $a1, 0x3DC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4A4u; }
        if (ctx->pc != 0x19F4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4A4u; }
        if (ctx->pc != 0x19F4A4u) { return; }
    }
    ctx->pc = 0x19F4A4u;
    // 0x19f4a4: 0x2513018  mult        $a2, $s2, $s1
    ctx->pc = 0x19f4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x19f4a8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19f4ac: 0x2610e440  addiu       $s0, $s0, -0x1BC0
    ctx->pc = 0x19f4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960192));
    // 0x19f4b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4b8: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x19F4B8u;
    SET_GPR_U32(ctx, 31, 0x19F4C0u);
    ctx->pc = 0x19F4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4B8u;
            // 0x19f4bc: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4C0u; }
        if (ctx->pc != 0x19F4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4C0u; }
        if (ctx->pc != 0x19F4C0u) { return; }
    }
    ctx->pc = 0x19F4C0u;
    // 0x19f4c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f4c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4cc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F4CCu;
    SET_GPR_U32(ctx, 31, 0x19F4D4u);
    ctx->pc = 0x19F4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4CCu;
            // 0x19f4d0: 0x24a534a8  addiu       $a1, $a1, 0x34A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4D4u; }
        if (ctx->pc != 0x19F4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4D4u; }
        if (ctx->pc != 0x19F4D4u) { return; }
    }
    ctx->pc = 0x19F4D4u;
    // 0x19f4d4: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x19f4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19f4d8: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19f4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F4E4u;
    SET_GPR_U32(ctx, 31, 0x19F4ECu);
    ctx->pc = 0x19F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4E4u;
            // 0x19f4e8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4ECu; }
        if (ctx->pc != 0x19F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4ECu; }
        if (ctx->pc != 0x19F4ECu) { return; }
    }
    ctx->pc = 0x19F4ECu;
    // 0x19f4ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f4f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4f8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F4F8u;
    SET_GPR_U32(ctx, 31, 0x19F500u);
    ctx->pc = 0x19F4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4F8u;
            // 0x19f4fc: 0x24a53de0  addiu       $a1, $a1, 0x3DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F500u; }
        if (ctx->pc != 0x19F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F500u; }
        if (ctx->pc != 0x19F500u) { return; }
    }
    ctx->pc = 0x19F500u;
    // 0x19f500: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x19f500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19f504: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19f508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f50c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f510: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F510u;
    SET_GPR_U32(ctx, 31, 0x19F518u);
    ctx->pc = 0x19F514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F510u;
            // 0x19f514: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F518u; }
        if (ctx->pc != 0x19F518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F518u; }
        if (ctx->pc != 0x19F518u) { return; }
    }
    ctx->pc = 0x19F518u;
    // 0x19f518: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f51c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f520: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f524: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F524u;
    SET_GPR_U32(ctx, 31, 0x19F52Cu);
    ctx->pc = 0x19F528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F524u;
            // 0x19f528: 0x24a53df8  addiu       $a1, $a1, 0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F52Cu; }
        if (ctx->pc != 0x19F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F52Cu; }
        if (ctx->pc != 0x19F52Cu) { return; }
    }
    ctx->pc = 0x19F52Cu;
    // 0x19f52c: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x19f52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19f530: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x19f534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f53c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F53Cu;
    SET_GPR_U32(ctx, 31, 0x19F544u);
    ctx->pc = 0x19F540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F53Cu;
            // 0x19f540: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F544u; }
        if (ctx->pc != 0x19F544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F544u; }
        if (ctx->pc != 0x19F544u) { return; }
    }
    ctx->pc = 0x19F544u;
    // 0x19f544: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f54c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f550: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F550u;
    SET_GPR_U32(ctx, 31, 0x19F558u);
    ctx->pc = 0x19F554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F550u;
            // 0x19f554: 0x24a53e10  addiu       $a1, $a1, 0x3E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F558u; }
        if (ctx->pc != 0x19F558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F558u; }
        if (ctx->pc != 0x19F558u) { return; }
    }
    ctx->pc = 0x19F558u;
    // 0x19f558: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x19f558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x19f55c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x19f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19f560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f568: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x19F568u;
    SET_GPR_U32(ctx, 31, 0x19F570u);
    ctx->pc = 0x19F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F568u;
            // 0x19f56c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F570u; }
        if (ctx->pc != 0x19F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F570u; }
        if (ctx->pc != 0x19F570u) { return; }
    }
    ctx->pc = 0x19F570u;
    // 0x19f570: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f578: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f57c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F57Cu;
    SET_GPR_U32(ctx, 31, 0x19F584u);
    ctx->pc = 0x19F580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F57Cu;
            // 0x19f580: 0x24a53e28  addiu       $a1, $a1, 0x3E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F584u; }
        if (ctx->pc != 0x19F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F584u; }
        if (ctx->pc != 0x19F584u) { return; }
    }
    ctx->pc = 0x19F584u;
    // 0x19f584: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x19f584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19f588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f58c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19f58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19f590: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x19F590u;
    SET_GPR_U32(ctx, 31, 0x19F598u);
    ctx->pc = 0x19F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F590u;
            // 0x19f594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F598u; }
        if (ctx->pc != 0x19F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F598u; }
        if (ctx->pc != 0x19F598u) { return; }
    }
    ctx->pc = 0x19F598u;
    // 0x19f598: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f59c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5a4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F5A4u;
    SET_GPR_U32(ctx, 31, 0x19F5ACu);
    ctx->pc = 0x19F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5A4u;
            // 0x19f5a8: 0x24a53e48  addiu       $a1, $a1, 0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5ACu; }
        if (ctx->pc != 0x19F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5ACu; }
        if (ctx->pc != 0x19F5ACu) { return; }
    }
    ctx->pc = 0x19F5ACu;
    // 0x19f5ac: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x19f5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x19f5b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19f5b8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F5B8u;
    SET_GPR_U32(ctx, 31, 0x19F5C0u);
    ctx->pc = 0x19F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5B8u;
            // 0x19f5bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5C0u; }
        if (ctx->pc != 0x19F5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5C0u; }
        if (ctx->pc != 0x19F5C0u) { return; }
    }
    ctx->pc = 0x19F5C0u;
    // 0x19f5c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f5c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5cc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F5CCu;
    SET_GPR_U32(ctx, 31, 0x19F5D4u);
    ctx->pc = 0x19F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5CCu;
            // 0x19f5d0: 0x24a53e60  addiu       $a1, $a1, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5D4u; }
        if (ctx->pc != 0x19F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5D4u; }
        if (ctx->pc != 0x19F5D4u) { return; }
    }
    ctx->pc = 0x19F5D4u;
    // 0x19f5d4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x19f5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x19f5d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5dc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19f5e0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F5E0u;
    SET_GPR_U32(ctx, 31, 0x19F5E8u);
    ctx->pc = 0x19F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5E0u;
            // 0x19f5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5E8u; }
        if (ctx->pc != 0x19F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5E8u; }
        if (ctx->pc != 0x19F5E8u) { return; }
    }
    ctx->pc = 0x19F5E8u;
    // 0x19f5e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f5ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5f4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F5F4u;
    SET_GPR_U32(ctx, 31, 0x19F5FCu);
    ctx->pc = 0x19F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5F4u;
            // 0x19f5f8: 0x24a53e80  addiu       $a1, $a1, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5FCu; }
        if (ctx->pc != 0x19F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5FCu; }
        if (ctx->pc != 0x19F5FCu) { return; }
    }
    ctx->pc = 0x19F5FCu;
    // 0x19f5fc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19f600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f604: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19f604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19f608: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x19F608u;
    SET_GPR_U32(ctx, 31, 0x19F610u);
    ctx->pc = 0x19F60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F608u;
            // 0x19f60c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F610u; }
        if (ctx->pc != 0x19F610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F610u; }
        if (ctx->pc != 0x19F610u) { return; }
    }
    ctx->pc = 0x19F610u;
    // 0x19f610: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f618: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f61c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F61Cu;
    SET_GPR_U32(ctx, 31, 0x19F624u);
    ctx->pc = 0x19F620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F61Cu;
            // 0x19f620: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F624u; }
        if (ctx->pc != 0x19F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F624u; }
        if (ctx->pc != 0x19F624u) { return; }
    }
    ctx->pc = 0x19F624u;
    // 0x19f624: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19f628: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f62c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19f630: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F630u;
    SET_GPR_U32(ctx, 31, 0x19F638u);
    ctx->pc = 0x19F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F630u;
            // 0x19f634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F638u; }
        if (ctx->pc != 0x19F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F638u; }
        if (ctx->pc != 0x19F638u) { return; }
    }
    ctx->pc = 0x19F638u;
    // 0x19f638: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f640: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f644: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19F644u;
    SET_GPR_U32(ctx, 31, 0x19F64Cu);
    ctx->pc = 0x19F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F644u;
            // 0x19f648: 0x24a53eb8  addiu       $a1, $a1, 0x3EB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F64Cu; }
        if (ctx->pc != 0x19F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F64Cu; }
        if (ctx->pc != 0x19F64Cu) { return; }
    }
    ctx->pc = 0x19F64Cu;
    // 0x19f64c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19f650: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x19f650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x19f654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f658: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x19f65c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19F65Cu;
    SET_GPR_U32(ctx, 31, 0x19F664u);
    ctx->pc = 0x19F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F65Cu;
            // 0x19f660: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F664u; }
        if (ctx->pc != 0x19F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F664u; }
        if (ctx->pc != 0x19F664u) { return; }
    }
    ctx->pc = 0x19F664u;
    // 0x19f664: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19f668: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x19F668u;
    {
        const bool branch_taken_0x19f668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F668u;
            // 0x19f66c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f668) {
            ctx->pc = 0x19F488u;
            runtime->cooperativeGuestYield();
            goto label_19f488;
        }
    }
    ctx->pc = 0x19F670u;
    // 0x19f670: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19f670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f674: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19f674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f678: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19f678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f67c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19f67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f684: 0x3e00008  jr          $ra
    ctx->pc = 0x19F684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F684u;
            // 0x19f688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F488u: goto label_19f488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F68Cu;
    // 0x19f68c: 0x0  nop
    ctx->pc = 0x19f68cu;
    // NOP
}

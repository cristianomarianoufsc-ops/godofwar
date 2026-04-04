#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5428
// Address: 0x1d5428 - 0x1d5548
void sub_001D5428_0x1d5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5428_0x1d5428");
#endif

    ctx->pc = 0x1d5428u;

    // 0x1d5428: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d5428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d542c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5430: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d5430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1d5434: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1d5438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d543c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1d5440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5444: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d5444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1d5448: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d544c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d5450: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d5454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d5454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d5458: 0xa62203a4  sh          $v0, 0x3A4($s1)
    ctx->pc = 0x1d5458u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 932), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d545c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d5460:
    // 0x1d5460: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5464: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1d5464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5468: 0x26350354  addiu       $s5, $s1, 0x354
    ctx->pc = 0x1d5468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 852));
    // 0x1d546c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d5470: 0x26320356  addiu       $s2, $s1, 0x356
    ctx->pc = 0x1d5470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 854));
    // 0x1d5474: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d5478: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d547c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1d547cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5480: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x1d5480u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d5484: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5488: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x1d5488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d548c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D548Cu;
            // 0x1d5490: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D5460u;
            runtime->cooperativeGuestYield();
            goto label_1d5460;
        }
    }
    ctx->pc = 0x1D5494u;
    // 0x1d5494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5498: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1D5498u;
    SET_GPR_U32(ctx, 31, 0x1D54A0u);
    ctx->pc = 0x1D549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5498u;
            // 0x1d549c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54A0u; }
        if (ctx->pc != 0x1D54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54A0u; }
        if (ctx->pc != 0x1D54A0u) { return; }
    }
    ctx->pc = 0x1D54A0u;
    // 0x1d54a0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d54a8: 0x262603a4  addiu       $a2, $s1, 0x3A4
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 932));
    // 0x1d54ac: 0x24a56948  addiu       $a1, $a1, 0x6948
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26952));
    // 0x1d54b0: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1D54B0u;
    SET_GPR_U32(ctx, 31, 0x1D54B8u);
    ctx->pc = 0x1D54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54B0u;
            // 0x1d54b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54B8u; }
        if (ctx->pc != 0x1D54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54B8u; }
        if (ctx->pc != 0x1D54B8u) { return; }
    }
    ctx->pc = 0x1D54B8u;
    // 0x1d54b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d54b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54bc: 0x0  nop
    ctx->pc = 0x1d54bcu;
    // NOP
label_1d54c0:
    // 0x1d54c0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D54C0u;
    SET_GPR_U32(ctx, 31, 0x1D54C8u);
    ctx->pc = 0x1D54C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54C0u;
            // 0x1d54c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54C8u; }
        if (ctx->pc != 0x1D54C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54C8u; }
        if (ctx->pc != 0x1D54C8u) { return; }
    }
    ctx->pc = 0x1D54C8u;
    // 0x1d54c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d54cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d54d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54d4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D54D4u;
    SET_GPR_U32(ctx, 31, 0x1D54DCu);
    ctx->pc = 0x1D54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54D4u;
            // 0x1d54d8: 0x24a56958  addiu       $a1, $a1, 0x6958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54DCu; }
        if (ctx->pc != 0x1D54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54DCu; }
        if (ctx->pc != 0x1D54DCu) { return; }
    }
    ctx->pc = 0x1D54DCu;
    // 0x1d54dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d54dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d54e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54e8: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1D54E8u;
    SET_GPR_U32(ctx, 31, 0x1D54F0u);
    ctx->pc = 0x1D54ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54E8u;
            // 0x1d54ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54F0u; }
        if (ctx->pc != 0x1D54F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54F0u; }
        if (ctx->pc != 0x1D54F0u) { return; }
    }
    ctx->pc = 0x1D54F0u;
    // 0x1d54f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d54f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d54f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54fc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D54FCu;
    SET_GPR_U32(ctx, 31, 0x1D5504u);
    ctx->pc = 0x1D5500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54FCu;
            // 0x1d5500: 0x24a56970  addiu       $a1, $a1, 0x6970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5504u; }
        if (ctx->pc != 0x1D5504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5504u; }
        if (ctx->pc != 0x1D5504u) { return; }
    }
    ctx->pc = 0x1D5504u;
    // 0x1d5504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5508: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d5508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d550c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5510: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d5510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5514: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1D5514u;
    SET_GPR_U32(ctx, 31, 0x1D551Cu);
    ctx->pc = 0x1D5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5514u;
            // 0x1d5518: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D551Cu; }
        if (ctx->pc != 0x1D551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D551Cu; }
        if (ctx->pc != 0x1D551Cu) { return; }
    }
    ctx->pc = 0x1D551Cu;
    // 0x1d551c: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x1d551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d5520: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D5520u;
    {
        const bool branch_taken_0x1d5520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5520u;
            // 0x1d5524: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5520) {
            ctx->pc = 0x1D54C0u;
            runtime->cooperativeGuestYield();
            goto label_1d54c0;
        }
    }
    ctx->pc = 0x1D5528u;
    // 0x1d5528: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d552c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d552cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5530: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d5530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5534: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d5534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5538: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d553c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5540: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5540u;
            // 0x1d5544: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5460u: goto label_1d5460;
            case 0x1D54C0u: goto label_1d54c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5548u;
}

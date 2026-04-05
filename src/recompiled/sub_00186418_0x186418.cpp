#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186418
// Address: 0x186418 - 0x1865a8
void sub_00186418_0x186418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186418_0x186418");
#endif

    ctx->pc = 0x186418u;

    // 0x186418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18641c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x186420: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x186420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x186424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186428: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x186428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18642c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x186430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x186430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x186434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186438: 0xc04f824  jal         func_13E090
    ctx->pc = 0x186438u;
    SET_GPR_U32(ctx, 31, 0x186440u);
    ctx->pc = 0x18643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186438u;
            // 0x18643c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186440u; }
        if (ctx->pc != 0x186440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186440u; }
        if (ctx->pc != 0x186440u) { return; }
    }
    ctx->pc = 0x186440u;
    // 0x186440: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x186440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186444: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x186448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18644c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18644Cu;
            // 0x186450: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18644c) {
            ctx->pc = 0x186478u;
            goto label_186478;
        }
    }
    ctx->pc = 0x186454u;
    // 0x186454: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186458: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x18645c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18645Cu;
    SET_GPR_U32(ctx, 31, 0x186464u);
    ctx->pc = 0x186460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18645Cu;
            // 0x186460: 0x8c4400d8  lw          $a0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186464u; }
        if (ctx->pc != 0x186464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186464u; }
        if (ctx->pc != 0x186464u) { return; }
    }
    ctx->pc = 0x186464u;
    // 0x186464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186468: 0xc04f824  jal         func_13E090
    ctx->pc = 0x186468u;
    SET_GPR_U32(ctx, 31, 0x186470u);
    ctx->pc = 0x18646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186468u;
            // 0x18646c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    }
    ctx->pc = 0x186470u;
    // 0x186470: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x186470u;
    {
        const bool branch_taken_0x186470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186470u;
            // 0x186474: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186470) {
            ctx->pc = 0x186510u;
            goto label_186510;
        }
    }
    ctx->pc = 0x186478u;
label_186478:
    // 0x186478: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x186478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x18647c: 0x8c72c80c  lw          $s2, -0x37F4($v1)
    ctx->pc = 0x18647cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952972)));
    // 0x186480: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x186480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x186484: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x186488: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x186488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18648c: 0xc04f856  jal         func_13E158
    ctx->pc = 0x18648Cu;
    SET_GPR_U32(ctx, 31, 0x186494u);
    ctx->pc = 0x186490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18648Cu;
            // 0x186490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    }
    ctx->pc = 0x186494u;
    // 0x186494: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186498: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x186498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x18649c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18649Cu;
    SET_GPR_U32(ctx, 31, 0x1864A4u);
    ctx->pc = 0x1864A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18649Cu;
            // 0x1864a0: 0x8c4400d8  lw          $a0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864A4u; }
        if (ctx->pc != 0x1864A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864A4u; }
        if (ctx->pc != 0x1864A4u) { return; }
    }
    ctx->pc = 0x1864A4u;
    // 0x1864a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1864a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864ac: 0xc04f87e  jal         func_13E1F8
    ctx->pc = 0x1864ACu;
    SET_GPR_U32(ctx, 31, 0x1864B4u);
    ctx->pc = 0x1864B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864ACu;
            // 0x1864b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1F8u;
    if (runtime->hasFunction(0x13E1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13E1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864B4u; }
        if (ctx->pc != 0x1864B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1f8_0x13e2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864B4u; }
        if (ctx->pc != 0x1864B4u) { return; }
    }
    ctx->pc = 0x1864B4u;
    // 0x1864b4: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x1864b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1864b8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1864b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1864bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1864c0: 0x8c42c808  lw          $v0, -0x37F8($v0)
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952968)));
    // 0x1864c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1864C4u;
    {
        const bool branch_taken_0x1864c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864C4u;
            // 0x1864c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864c4) {
            ctx->pc = 0x1864E0u;
            goto label_1864e0;
        }
    }
    ctx->pc = 0x1864CCu;
    // 0x1864cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1864ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864d0: 0xc04f78a  jal         func_13DE28
    ctx->pc = 0x1864D0u;
    SET_GPR_U32(ctx, 31, 0x1864D8u);
    ctx->pc = 0x1864D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864D0u;
            // 0x1864d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DE28u;
    if (runtime->hasFunction(0x13DE28u)) {
        auto targetFn = runtime->lookupFunction(0x13DE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864D8u; }
        if (ctx->pc != 0x1864D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE28_0x13de28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864D8u; }
        if (ctx->pc != 0x1864D8u) { return; }
    }
    ctx->pc = 0x1864D8u;
    // 0x1864d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1864D8u;
    {
        const bool branch_taken_0x1864d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1864d8) {
            ctx->pc = 0x1864ECu;
            goto label_1864ec;
        }
    }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1864e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864e4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1864E4u;
    SET_GPR_U32(ctx, 31, 0x1864ECu);
    ctx->pc = 0x1864E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864E4u;
            // 0x1864e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864ECu; }
        if (ctx->pc != 0x1864ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864ECu; }
        if (ctx->pc != 0x1864ECu) { return; }
    }
    ctx->pc = 0x1864ECu;
label_1864ec:
    // 0x1864ec: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1864ECu;
    SET_GPR_U32(ctx, 31, 0x1864F4u);
    ctx->pc = 0x1864F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864ECu;
            // 0x1864f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F4u; }
        if (ctx->pc != 0x1864F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F4u; }
        if (ctx->pc != 0x1864F4u) { return; }
    }
    ctx->pc = 0x1864F4u;
    // 0x1864f4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1864f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1864f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1864f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1864fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186500: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x186500u;
    SET_GPR_U32(ctx, 31, 0x186508u);
    ctx->pc = 0x186504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186500u;
            // 0x186504: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186508u; }
        if (ctx->pc != 0x186508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186508u; }
        if (ctx->pc != 0x186508u) { return; }
    }
    ctx->pc = 0x186508u;
    // 0x186508: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x186508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x18650c: 0x0  nop
    ctx->pc = 0x18650cu;
    // NOP
label_186510:
    // 0x186510: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x186514: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x186514u;
    SET_GPR_U32(ctx, 31, 0x18651Cu);
    ctx->pc = 0x186518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186514u;
            // 0x186518: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18651Cu; }
        if (ctx->pc != 0x18651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18651Cu; }
        if (ctx->pc != 0x18651Cu) { return; }
    }
    ctx->pc = 0x18651Cu;
    // 0x18651c: 0xc08e476  jal         func_2391D8
    ctx->pc = 0x18651Cu;
    SET_GPR_U32(ctx, 31, 0x186524u);
    ctx->pc = 0x186520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18651Cu;
            // 0x186520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2391D8u;
    if (runtime->hasFunction(0x2391D8u)) {
        auto targetFn = runtime->lookupFunction(0x2391D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186524u; }
        if (ctx->pc != 0x186524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2391d8_0x2391e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186524u; }
        if (ctx->pc != 0x186524u) { return; }
    }
    ctx->pc = 0x186524u;
    // 0x186524: 0x8e03c78c  lw          $v1, -0x3874($s0)
    ctx->pc = 0x186524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952844)));
    // 0x186528: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x186528u;
    {
        const bool branch_taken_0x186528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186528u;
            // 0x18652c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186528) {
            ctx->pc = 0x18653Cu;
            goto label_18653c;
        }
    }
    ctx->pc = 0x186530u;
    // 0x186530: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x186530u;
    SET_GPR_U32(ctx, 31, 0x186538u);
    ctx->pc = 0x186534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186530u;
            // 0x186534: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186538u; }
        if (ctx->pc != 0x186538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186538u; }
        if (ctx->pc != 0x186538u) { return; }
    }
    ctx->pc = 0x186538u;
    // 0x186538: 0xae02c78c  sw          $v0, -0x3874($s0)
    ctx->pc = 0x186538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952844), GPR_U32(ctx, 2));
label_18653c:
    // 0x18653c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18653Cu;
    SET_GPR_U32(ctx, 31, 0x186544u);
    ctx->pc = 0x186540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18653Cu;
            // 0x186540: 0x8e04c78c  lw          $a0, -0x3874($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186544u; }
        if (ctx->pc != 0x186544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186544u; }
        if (ctx->pc != 0x186544u) { return; }
    }
    ctx->pc = 0x186544u;
    // 0x186544: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x186544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x186548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x186548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18654c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x18654cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x186550: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x186550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x186554: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x186554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x186558: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x186558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x18655c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x18655cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x186560: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186564: 0x8c50e8b4  lw          $s0, -0x174C($v0)
    ctx->pc = 0x186564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x186568: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x186568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18656c: 0xc05e358  jal         func_178D60
    ctx->pc = 0x18656Cu;
    SET_GPR_U32(ctx, 31, 0x186574u);
    ctx->pc = 0x186570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18656Cu;
            // 0x186570: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186574u; }
        if (ctx->pc != 0x186574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D60_0x178d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186574u; }
        if (ctx->pc != 0x186574u) { return; }
    }
    ctx->pc = 0x186574u;
    // 0x186574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x186574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186578: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x186578u;
    SET_GPR_U32(ctx, 31, 0x186580u);
    ctx->pc = 0x18657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186578u;
            // 0x18657c: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186580u; }
        if (ctx->pc != 0x186580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186580u; }
        if (ctx->pc != 0x186580u) { return; }
    }
    ctx->pc = 0x186580u;
    // 0x186580: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x186580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186584: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x186584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186588: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x186588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18658c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18658cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186590: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x186590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186594: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x186594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18659c: 0x3e00008  jr          $ra
    ctx->pc = 0x18659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1865A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18659Cu;
            // 0x1865a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186478u: goto label_186478;
            case 0x1864E0u: goto label_1864e0;
            case 0x1864ECu: goto label_1864ec;
            case 0x186510u: goto label_186510;
            case 0x18653Cu: goto label_18653c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1865A4u;
    // 0x1865a4: 0x0  nop
    ctx->pc = 0x1865a4u;
    // NOP
}

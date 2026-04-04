#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F058
// Address: 0x27f058 - 0x27f490
void sub_0027F058_0x27f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F058_0x27f058");
#endif

    ctx->pc = 0x27f058u;

    // 0x27f058: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
    // 0x27f05c: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x27f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27f060: 0xffb50500  sd          $s5, 0x500($sp)
    ctx->pc = 0x27f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 21));
    // 0x27f064: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27f068: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27f068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f06c: 0xffb70520  sd          $s7, 0x520($sp)
    ctx->pc = 0x27f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 23));
    // 0x27f070: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x27f070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27f074: 0xffb104c0  sd          $s1, 0x4C0($sp)
    ctx->pc = 0x27f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 17));
    // 0x27f078: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27f07c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27f07cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f080: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x27f084: 0xffb004b0  sd          $s0, 0x4B0($sp)
    ctx->pc = 0x27f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 16));
    // 0x27f088: 0xafa704a4  sw          $a3, 0x4A4($sp)
    ctx->pc = 0x27f088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 7));
    // 0x27f08c: 0xafa804a8  sw          $t0, 0x4A8($sp)
    ctx->pc = 0x27f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 8));
    // 0x27f090: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x27f090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f094: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27f094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f098: 0xffbf0540  sd          $ra, 0x540($sp)
    ctx->pc = 0x27f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1344), GPR_U64(ctx, 31));
    // 0x27f09c: 0xffbe0530  sd          $fp, 0x530($sp)
    ctx->pc = 0x27f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 30));
    // 0x27f0a0: 0xffb60510  sd          $s6, 0x510($sp)
    ctx->pc = 0x27f0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 22));
    // 0x27f0a4: 0xffb404f0  sd          $s4, 0x4F0($sp)
    ctx->pc = 0x27f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 20));
    // 0x27f0a8: 0xffb304e0  sd          $s3, 0x4E0($sp)
    ctx->pc = 0x27f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 19));
    // 0x27f0ac: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x27F0ACu;
    SET_GPR_U32(ctx, 31, 0x27F0B4u);
    ctx->pc = 0x27F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0ACu;
            // 0x27f0b0: 0xffb204d0  sd          $s2, 0x4D0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0B4u; }
        if (ctx->pc != 0x27F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0B4u; }
        if (ctx->pc != 0x27F0B4u) { return; }
    }
    ctx->pc = 0x27F0B4u;
    // 0x27f0b4: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x27F0B4u;
    {
        const bool branch_taken_0x27f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0B4u;
            // 0x27f0b8: 0xdfbf0540  ld          $ra, 0x540($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0b4) {
            ctx->pc = 0x27F464u;
            goto label_27f464;
        }
    }
    ctx->pc = 0x27F0BCu;
    // 0x27f0bc: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x27f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x27f0c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0c8: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x27F0C8u;
    SET_GPR_U32(ctx, 31, 0x27F0D0u);
    ctx->pc = 0x27F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0C8u;
            // 0x27f0cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0D0u; }
        if (ctx->pc != 0x27F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0D0u; }
        if (ctx->pc != 0x27F0D0u) { return; }
    }
    ctx->pc = 0x27F0D0u;
    // 0x27f0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0d4: 0x148000e2  bnez        $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x27F0D4u;
    {
        const bool branch_taken_0x27f0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0D4u;
            // 0x27f0d8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0d4) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F0DCu;
    // 0x27f0dc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x27f0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f0e0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27F0E0u;
    SET_GPR_U32(ctx, 31, 0x27F0E8u);
    ctx->pc = 0x27F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0E0u;
            // 0x27f0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0E8u; }
        if (ctx->pc != 0x27F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0E8u; }
        if (ctx->pc != 0x27F0E8u) { return; }
    }
    ctx->pc = 0x27F0E8u;
    // 0x27f0e8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x27f0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27f0ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F0ECu;
    {
        const bool branch_taken_0x27f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0ECu;
            // 0x27f0f0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0ec) {
            ctx->pc = 0x27F108u;
            goto label_27f108;
        }
    }
    ctx->pc = 0x27F0F4u;
    // 0x27f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0f8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27F0F8u;
    SET_GPR_U32(ctx, 31, 0x27F100u);
    ctx->pc = 0x27F0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0F8u;
            // 0x27f0fc: 0x24a55220  addiu       $a1, $a1, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F100u; }
        if (ctx->pc != 0x27F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F100u; }
        if (ctx->pc != 0x27F100u) { return; }
    }
    ctx->pc = 0x27F100u;
    // 0x27f100: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F100u;
    {
        const bool branch_taken_0x27f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f100) {
            ctx->pc = 0x27F104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F100u;
            // 0x27f104: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27F114u;
            goto label_27f114;
        }
    }
    ctx->pc = 0x27F108u;
label_27f108:
    // 0x27f108: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f10c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x27F10Cu;
    {
        const bool branch_taken_0x27f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F10Cu;
            // 0x27f110: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f10c) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F114u;
label_27f114:
    // 0x27f114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f118: 0x24505238  addiu       $s0, $v0, 0x5238
    ctx->pc = 0x27f118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21048));
    // 0x27f11c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27F11Cu;
    SET_GPR_U32(ctx, 31, 0x27F124u);
    ctx->pc = 0x27F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F11Cu;
            // 0x27f120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F124u; }
        if (ctx->pc != 0x27F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F124u; }
        if (ctx->pc != 0x27F124u) { return; }
    }
    ctx->pc = 0x27F124u;
    // 0x27f124: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27F124u;
    {
        const bool branch_taken_0x27f124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F124u;
            // 0x27f128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f124) {
            ctx->pc = 0x27F1DCu;
            goto label_27f1dc;
        }
    }
    ctx->pc = 0x27F12Cu;
    // 0x27f12c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f130: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x27f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x27f134: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27F134u;
    {
        const bool branch_taken_0x27f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F134u;
            // 0x27f138: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f134) {
            ctx->pc = 0x27F19Cu;
            goto label_27f19c;
        }
    }
    ctx->pc = 0x27F13Cu;
    // 0x27f13c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_27f140:
    // 0x27f140: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x27f140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27f144: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x27f144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27f148: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x27f148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27f14c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x27f14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27f150: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27f150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f154: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27f154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f158: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27f158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f15c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27f15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f160: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x27f160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f164: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x27f164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f168: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x27f168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f16c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x27f16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f170: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x27f170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f174: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x27f174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f178: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x27f178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f17c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x27f17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f180: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f184: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f188: 0x0  nop
    ctx->pc = 0x27f188u;
    // NOP
    // 0x27f18c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F18Cu;
    {
        const bool branch_taken_0x27f18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f18c) {
            ctx->pc = 0x27F140u;
            runtime->cooperativeGuestYield();
            goto label_27f140;
        }
    }
    ctx->pc = 0x27F194u;
    // 0x27f194: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x27F194u;
    {
        const bool branch_taken_0x27f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f194) {
            ctx->pc = 0x27F390u;
            goto label_27f390;
        }
    }
    ctx->pc = 0x27F19Cu;
label_27f19c:
    // 0x27f19c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x27f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_27f1a0:
    // 0x27f1a0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x27f1a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f1a4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x27f1a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f1a8: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x27f1a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f1ac: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x27f1acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f1b0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x27f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x27f1b4: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x27f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x27f1b8: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x27f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x27f1bc: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x27f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x27f1c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f1c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f1c8: 0x0  nop
    ctx->pc = 0x27f1c8u;
    // NOP
    // 0x27f1cc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F1CCu;
    {
        const bool branch_taken_0x27f1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f1cc) {
            ctx->pc = 0x27F1A0u;
            runtime->cooperativeGuestYield();
            goto label_27f1a0;
        }
    }
    ctx->pc = 0x27F1D4u;
    // 0x27f1d4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F390u;
            goto label_27f390;
        }
    }
    ctx->pc = 0x27F1DCu;
label_27f1dc:
    // 0x27f1dc: 0xc09f4b2  jal         func_27D2C8
    ctx->pc = 0x27F1DCu;
    SET_GPR_U32(ctx, 31, 0x27F1E4u);
    ctx->pc = 0x27F1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1DCu;
            // 0x27f1e0: 0x27a40421  addiu       $a0, $sp, 0x421 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1057));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D2C8u;
    if (runtime->hasFunction(0x27D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1E4u; }
        if (ctx->pc != 0x27F1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D2C8_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1E4u; }
        if (ctx->pc != 0x27F1E4u) { return; }
    }
    ctx->pc = 0x27F1E4u;
    // 0x27f1e4: 0x3c138101  lui         $s3, 0x8101
    ctx->pc = 0x27f1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33025 << 16));
    // 0x27f1e8: 0x27a304a0  addiu       $v1, $sp, 0x4A0
    ctx->pc = 0x27f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x27f1ec: 0x3c148101  lui         $s4, 0x8101
    ctx->pc = 0x27f1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33025 << 16));
    // 0x27f1f0: 0xafa304ac  sw          $v1, 0x4AC($sp)
    ctx->pc = 0x27f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 3));
    // 0x27f1f4: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x27f1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x27f1f8: 0x27b20400  addiu       $s2, $sp, 0x400
    ctx->pc = 0x27f1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x27f1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f200: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x27f200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f204: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x27f204u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x27f208: 0x36949fff  ori         $s4, $s4, 0x9FFF
    ctx->pc = 0x27f208u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)40959);
    // 0x27f20c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f210:
    // 0x27f210: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27F210u;
    SET_GPR_U32(ctx, 31, 0x27F218u);
    ctx->pc = 0x27F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F210u;
            // 0x27f214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F218u; }
        if (ctx->pc != 0x27F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F218u; }
        if (ctx->pc != 0x27F218u) { return; }
    }
    ctx->pc = 0x27F218u;
    // 0x27f218: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x27f218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x27f21c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f220: 0xc09f4b2  jal         func_27D2C8
    ctx->pc = 0x27F220u;
    SET_GPR_U32(ctx, 31, 0x27F228u);
    ctx->pc = 0x27F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F220u;
            // 0x27f224: 0x24c55238  addiu       $a1, $a2, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 21048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D2C8u;
    if (runtime->hasFunction(0x27D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F228u; }
        if (ctx->pc != 0x27F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D2C8_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F228u; }
        if (ctx->pc != 0x27F228u) { return; }
    }
    ctx->pc = 0x27F228u;
    // 0x27f228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f22c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x27f22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f230: 0x2d1f00a  movz        $fp, $s6, $s1
    ctx->pc = 0x27f230u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 22));
    // 0x27f234: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x27f234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f23c:
    // 0x27f23c: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x27f23cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f240: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x27f240u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27f244: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x27f244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27f248: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x27f248u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27f24c: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x27f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x27f250: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x27f250u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x27f254: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x27f254u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x27f258: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x27f258u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x27f25c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x27f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x27f260: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f264: 0x0  nop
    ctx->pc = 0x27f264u;
    // NOP
    // 0x27f268: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F268u;
    {
        const bool branch_taken_0x27f268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x27f268) {
            ctx->pc = 0x27F23Cu;
            runtime->cooperativeGuestYield();
            goto label_27f23c;
        }
    }
    ctx->pc = 0x27F270u;
    // 0x27f270: 0x8fa80210  lw          $t0, 0x210($sp)
    ctx->pc = 0x27f270u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27f274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f278: 0x8fa90204  lw          $t1, 0x204($sp)
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x27f27c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f280: 0x8fa604ac  lw          $a2, 0x4AC($sp)
    ctx->pc = 0x27f280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x27f284: 0xc09fb78  jal         func_27EDE0
    ctx->pc = 0x27F284u;
    SET_GPR_U32(ctx, 31, 0x27F28Cu);
    ctx->pc = 0x27F288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F284u;
            // 0x27f288: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EDE0u;
    if (runtime->hasFunction(0x27EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x27EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F28Cu; }
        if (ctx->pc != 0x27F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027EDE0_0x27ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F28Cu; }
        if (ctx->pc != 0x27F28Cu) { return; }
    }
    ctx->pc = 0x27F28Cu;
    // 0x27f28c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x27f28cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f290: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x27f290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x27f294: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x27F294u;
    {
        const bool branch_taken_0x27f294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F294u;
            // 0x27f298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f294) {
            ctx->pc = 0x27F458u;
            goto label_27f458;
        }
    }
    ctx->pc = 0x27F29Cu;
    // 0x27f29c: 0x13d60007  beq         $fp, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F29Cu;
    {
        const bool branch_taken_0x27f29c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 22));
        if (branch_taken_0x27f29c) {
            ctx->pc = 0x27F2BCu;
            goto label_27f2bc;
        }
    }
    ctx->pc = 0x27F2A4u;
    // 0x27f2a4: 0x1080ffda  beqz        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x27F2A4u;
    {
        const bool branch_taken_0x27f2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2A4u;
            // 0x27f2a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2a4) {
            ctx->pc = 0x27F210u;
            runtime->cooperativeGuestYield();
            goto label_27f210;
        }
    }
    ctx->pc = 0x27F2ACu;
    // 0x27f2ac: 0x931826  xor         $v1, $a0, $s3
    ctx->pc = 0x27f2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 19));
    // 0x27f2b0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27f2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2b4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x27F2B4u;
    {
        const bool branch_taken_0x27f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2B4u;
            // 0x27f2b8: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2b4) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F2BCu;
label_27f2bc:
    // 0x27f2bc: 0x14800037  bnez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27F2BCu;
    {
        const bool branch_taken_0x27f2bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f2bc) {
            ctx->pc = 0x27F39Cu;
            goto label_27f39c;
        }
    }
    ctx->pc = 0x27F2C4u;
    // 0x27f2c4: 0x12e0002a  beqz        $s7, . + 4 + (0x2A << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2C4u;
            // 0x27f2c8: 0x8fa304a8  lw          $v1, 0x4A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F370u;
            goto label_27f370;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27f2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2d0: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x27f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x27f2d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F2D4u;
    {
        const bool branch_taken_0x27f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2D4u;
            // 0x27f2d8: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2d4) {
            ctx->pc = 0x27F338u;
            goto label_27f338;
        }
    }
    ctx->pc = 0x27F2DCu;
label_27f2dc:
    // 0x27f2dc: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x27f2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f2e0: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x27f2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f2e4: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x27f2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f2e8: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x27f2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f2ec: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x27f2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27f2f0: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x27f2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27f2f4: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x27f2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27f2f8: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x27f2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27f2fc: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x27f2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f300: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x27f300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f304: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x27f304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f308: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x27f308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f30c: 0xb0c20017  sdl         $v0, 0x17($a2)
    ctx->pc = 0x27f30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f310: 0xb4c20010  sdr         $v0, 0x10($a2)
    ctx->pc = 0x27f310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f314: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x27f314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f318: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x27f318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f31c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f320: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f324: 0x0  nop
    ctx->pc = 0x27f324u;
    // NOP
    // 0x27f328: 0x1470ffec  bne         $v1, $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F328u;
    {
        const bool branch_taken_0x27f328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x27f328) {
            ctx->pc = 0x27F2DCu;
            runtime->cooperativeGuestYield();
            goto label_27f2dc;
        }
    }
    ctx->pc = 0x27F330u;
    // 0x27f330: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F330u;
    {
        const bool branch_taken_0x27f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F330u;
            // 0x27f334: 0x8fa304a8  lw          $v1, 0x4A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f330) {
            ctx->pc = 0x27F370u;
            goto label_27f370;
        }
    }
    ctx->pc = 0x27F338u;
label_27f338:
    // 0x27f338: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x27f338u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f33c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x27f33cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f340: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x27f340u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f344: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x27f344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f348: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x27f348u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x27f34c: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x27f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x27f350: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x27f350u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x27f354: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x27f354u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x27f358: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f35c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f360: 0x0  nop
    ctx->pc = 0x27f360u;
    // NOP
    // 0x27f364: 0x1470fff4  bne         $v1, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F364u;
    {
        const bool branch_taken_0x27f364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x27f364) {
            ctx->pc = 0x27F338u;
            runtime->cooperativeGuestYield();
            goto label_27f338;
        }
    }
    ctx->pc = 0x27F36Cu;
    // 0x27f36c: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x27f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_27f370:
    // 0x27f370: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F370u;
    {
        const bool branch_taken_0x27f370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F370u;
            // 0x27f374: 0x8fa204a0  lw          $v0, 0x4A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f370) {
            ctx->pc = 0x27F37Cu;
            goto label_27f37c;
        }
    }
    ctx->pc = 0x27F378u;
    // 0x27f378: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27f378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_27f37c:
    // 0x27f37c: 0x8fa404a4  lw          $a0, 0x4A4($sp)
    ctx->pc = 0x27f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x27f380: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F380u;
    {
        const bool branch_taken_0x27f380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f380) {
            ctx->pc = 0x27F390u;
            goto label_27f390;
        }
    }
    ctx->pc = 0x27F388u;
    // 0x27f388: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x27f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27f38c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27f390:
    // 0x27f390: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f394: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x27F394u;
    {
        const bool branch_taken_0x27f394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F394u;
            // 0x27f398: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f394) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F39Cu;
label_27f39c:
    // 0x27f39c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f3a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27f3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27f3a4: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27F3A4u;
    {
        const bool branch_taken_0x27f3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3A4u;
            // 0x27f3a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3a4) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F3ACu;
    // 0x27f3ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27f3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b0: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x27f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x27f3b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F3B4u;
    {
        const bool branch_taken_0x27f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3B4u;
            // 0x27f3b8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3b4) {
            ctx->pc = 0x27F418u;
            goto label_27f418;
        }
    }
    ctx->pc = 0x27F3BCu;
label_27f3bc:
    // 0x27f3bc: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27f3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27f3c0: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27f3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27f3c4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x27f3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f3c8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x27f3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f3cc: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x27f3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f3d0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x27f3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f3d4: 0x6862001f  ldl         $v0, 0x1F($v1)
    ctx->pc = 0x27f3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27f3d8: 0x6c620018  ldr         $v0, 0x18($v1)
    ctx->pc = 0x27f3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27f3dc: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x27f3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3e0: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x27f3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3e4: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x27f3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3e8: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x27f3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3ec: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x27f3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3f0: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x27f3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3f4: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x27f3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3f8: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x27f3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f3fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f400: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f404: 0x0  nop
    ctx->pc = 0x27f404u;
    // NOP
    // 0x27f408: 0x1472ffec  bne         $v1, $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F408u;
    {
        const bool branch_taken_0x27f408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x27f408) {
            ctx->pc = 0x27F3BCu;
            runtime->cooperativeGuestYield();
            goto label_27f3bc;
        }
    }
    ctx->pc = 0x27F410u;
    // 0x27f410: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27F410u;
    {
        const bool branch_taken_0x27f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f410) {
            ctx->pc = 0x27F44Cu;
            goto label_27f44c;
        }
    }
    ctx->pc = 0x27F418u;
label_27f418:
    // 0x27f418: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x27f418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f41c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x27f41cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f420: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x27f420u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f424: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x27f424u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f428: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x27f428u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x27f42c: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x27f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x27f430: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x27f430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x27f434: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x27f434u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x27f438: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f43c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27f43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27f440: 0x0  nop
    ctx->pc = 0x27f440u;
    // NOP
    // 0x27f444: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F444u;
    {
        const bool branch_taken_0x27f444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x27f444) {
            ctx->pc = 0x27F418u;
            runtime->cooperativeGuestYield();
            goto label_27f418;
        }
    }
    ctx->pc = 0x27F44Cu;
label_27f44c:
    // 0x27f44c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F450u;
    {
        const bool branch_taken_0x27f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F450u;
            // 0x27f454: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f450) {
            ctx->pc = 0x27F460u;
            goto label_27f460;
        }
    }
    ctx->pc = 0x27F458u;
label_27f458:
    // 0x27f458: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f45c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x27f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_27f460:
    // 0x27f460: 0xdfbf0540  ld          $ra, 0x540($sp)
    ctx->pc = 0x27f460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1344)));
label_27f464:
    // 0x27f464: 0xdfbe0530  ld          $fp, 0x530($sp)
    ctx->pc = 0x27f464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x27f468: 0xdfb70520  ld          $s7, 0x520($sp)
    ctx->pc = 0x27f468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x27f46c: 0xdfb60510  ld          $s6, 0x510($sp)
    ctx->pc = 0x27f46cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x27f470: 0xdfb50500  ld          $s5, 0x500($sp)
    ctx->pc = 0x27f470u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x27f474: 0xdfb404f0  ld          $s4, 0x4F0($sp)
    ctx->pc = 0x27f474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x27f478: 0xdfb304e0  ld          $s3, 0x4E0($sp)
    ctx->pc = 0x27f478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x27f47c: 0xdfb204d0  ld          $s2, 0x4D0($sp)
    ctx->pc = 0x27f47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x27f480: 0xdfb104c0  ld          $s1, 0x4C0($sp)
    ctx->pc = 0x27f480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x27f484: 0xdfb004b0  ld          $s0, 0x4B0($sp)
    ctx->pc = 0x27f484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x27f488: 0x3e00008  jr          $ra
    ctx->pc = 0x27F488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F488u;
            // 0x27f48c: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F108u: goto label_27f108;
            case 0x27F114u: goto label_27f114;
            case 0x27F140u: goto label_27f140;
            case 0x27F19Cu: goto label_27f19c;
            case 0x27F1A0u: goto label_27f1a0;
            case 0x27F1DCu: goto label_27f1dc;
            case 0x27F210u: goto label_27f210;
            case 0x27F23Cu: goto label_27f23c;
            case 0x27F2BCu: goto label_27f2bc;
            case 0x27F2DCu: goto label_27f2dc;
            case 0x27F338u: goto label_27f338;
            case 0x27F370u: goto label_27f370;
            case 0x27F37Cu: goto label_27f37c;
            case 0x27F390u: goto label_27f390;
            case 0x27F39Cu: goto label_27f39c;
            case 0x27F3BCu: goto label_27f3bc;
            case 0x27F418u: goto label_27f418;
            case 0x27F44Cu: goto label_27f44c;
            case 0x27F458u: goto label_27f458;
            case 0x27F460u: goto label_27f460;
            case 0x27F464u: goto label_27f464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F490u;
}

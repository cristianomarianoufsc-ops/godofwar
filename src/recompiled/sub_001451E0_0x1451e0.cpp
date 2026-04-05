#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001451E0
// Address: 0x1451e0 - 0x1452f0
void sub_001451E0_0x1451e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451E0_0x1451e0");
#endif

    ctx->pc = 0x1451e0u;

    // 0x1451e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1451e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1451e4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1451e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1451e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1451ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1451ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1451f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1451f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1451f8: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1451f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1451fc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1451FCu;
    {
        const bool branch_taken_0x1451fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451FCu;
            // 0x145200: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451fc) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145204u;
    // 0x145204: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x145208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14520c: 0x244218b0  addiu       $v0, $v0, 0x18B0
    ctx->pc = 0x14520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6320));
    // 0x145210: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x145210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145214: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145218: 0x400008  jr          $v0
    ctx->pc = 0x145218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145220u: goto label_145220;
            case 0x145230u: goto label_145230;
            case 0x145240u: goto label_145240;
            case 0x145250u: goto label_145250;
            case 0x145260u: goto label_145260;
            case 0x145270u: goto label_145270;
            case 0x145280u: goto label_145280;
            case 0x145290u: goto label_145290;
            case 0x1452A0u: goto label_1452a0;
            case 0x1452B0u: goto label_1452b0;
            case 0x1452DCu: goto label_1452dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145220u;
label_145220:
    // 0x145220: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145220u;
    SET_GPR_U32(ctx, 31, 0x145228u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145228u; }
        if (ctx->pc != 0x145228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145228u; }
        if (ctx->pc != 0x145228u) { return; }
    }
    ctx->pc = 0x145228u;
    // 0x145228: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x145228u;
    {
        const bool branch_taken_0x145228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145228u;
            // 0x14522c: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145228) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145230u;
label_145230:
    // 0x145230: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145230u;
    SET_GPR_U32(ctx, 31, 0x145238u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145238u; }
        if (ctx->pc != 0x145238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145238u; }
        if (ctx->pc != 0x145238u) { return; }
    }
    ctx->pc = 0x145238u;
    // 0x145238: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x145238u;
    {
        const bool branch_taken_0x145238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145238u;
            // 0x14523c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145238) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145240u;
label_145240:
    // 0x145240: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145240u;
    SET_GPR_U32(ctx, 31, 0x145248u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145248u; }
        if (ctx->pc != 0x145248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145248u; }
        if (ctx->pc != 0x145248u) { return; }
    }
    ctx->pc = 0x145248u;
    // 0x145248: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x145248u;
    {
        const bool branch_taken_0x145248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145248u;
            // 0x14524c: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145248) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145250u;
label_145250:
    // 0x145250: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145250u;
    SET_GPR_U32(ctx, 31, 0x145258u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145258u; }
        if (ctx->pc != 0x145258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145258u; }
        if (ctx->pc != 0x145258u) { return; }
    }
    ctx->pc = 0x145258u;
    // 0x145258: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x145258u;
    {
        const bool branch_taken_0x145258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145258u;
            // 0x14525c: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145258) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145260u;
label_145260:
    // 0x145260: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145260u;
    SET_GPR_U32(ctx, 31, 0x145268u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145268u; }
        if (ctx->pc != 0x145268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145268u; }
        if (ctx->pc != 0x145268u) { return; }
    }
    ctx->pc = 0x145268u;
    // 0x145268: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145268u;
    {
        const bool branch_taken_0x145268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145268u;
            // 0x14526c: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145268) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0xc050f26  jal         func_143C98
    ctx->pc = 0x145270u;
    SET_GPR_U32(ctx, 31, 0x145278u);
    ctx->pc = 0x143C98u;
    if (runtime->hasFunction(0x143C98u)) {
        auto targetFn = runtime->lookupFunction(0x143C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145278u; }
        if (ctx->pc != 0x145278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C98_0x143c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145278u; }
        if (ctx->pc != 0x145278u) { return; }
    }
    ctx->pc = 0x145278u;
    // 0x145278: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x145278u;
    {
        const bool branch_taken_0x145278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145278u;
            // 0x14527c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145278) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145280u;
label_145280:
    // 0x145280: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145280u;
    SET_GPR_U32(ctx, 31, 0x145288u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145288u; }
        if (ctx->pc != 0x145288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145288u; }
        if (ctx->pc != 0x145288u) { return; }
    }
    ctx->pc = 0x145288u;
    // 0x145288: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x145288u;
    {
        const bool branch_taken_0x145288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145288u;
            // 0x14528c: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145288) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x145290u;
label_145290:
    // 0x145290: 0xc050f80  jal         func_143E00
    ctx->pc = 0x145290u;
    SET_GPR_U32(ctx, 31, 0x145298u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145298u; }
        if (ctx->pc != 0x145298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145298u; }
        if (ctx->pc != 0x145298u) { return; }
    }
    ctx->pc = 0x145298u;
    // 0x145298: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145298u;
            // 0x14529c: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x1452A0u;
label_1452a0:
    // 0x1452a0: 0xc050f80  jal         func_143E00
    ctx->pc = 0x1452A0u;
    SET_GPR_U32(ctx, 31, 0x1452A8u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452A8u; }
        if (ctx->pc != 0x1452A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452A8u; }
        if (ctx->pc != 0x1452A8u) { return; }
    }
    ctx->pc = 0x1452A8u;
    // 0x1452a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1452A8u;
    {
        const bool branch_taken_0x1452a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452A8u;
            // 0x1452ac: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452a8) {
            ctx->pc = 0x1452DCu;
            goto label_1452dc;
        }
    }
    ctx->pc = 0x1452B0u;
label_1452b0:
    // 0x1452b0: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x1452B0u;
    SET_GPR_U32(ctx, 31, 0x1452B8u);
    ctx->pc = 0x143D70u;
    if (runtime->hasFunction(0x143D70u)) {
        auto targetFn = runtime->lookupFunction(0x143D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452B8u; }
        if (ctx->pc != 0x1452B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143d70_0x143e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452B8u; }
        if (ctx->pc != 0x1452B8u) { return; }
    }
    ctx->pc = 0x1452B8u;
    // 0x1452b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1452b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452bc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1452BCu;
    {
        const bool branch_taken_0x1452bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1452C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452BCu;
            // 0x1452c0: 0x28a30003  slti        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452bc) {
            ctx->pc = 0x1452CCu;
            goto label_1452cc;
        }
    }
    ctx->pc = 0x1452C4u;
    // 0x1452c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1452C4u;
    {
        const bool branch_taken_0x1452c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452C4u;
            // 0x1452c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452c4) {
            ctx->pc = 0x1452D4u;
            goto label_1452d4;
        }
    }
    ctx->pc = 0x1452CCu;
label_1452cc:
    // 0x1452cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1452ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1452d0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1452d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1452d4:
    // 0x1452d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1452d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1452d8: 0xac450d34  sw          $a1, 0xD34($v0)
    ctx->pc = 0x1452d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3380), GPR_U32(ctx, 5));
label_1452dc:
    // 0x1452dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1452dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1452e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1452E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452E4u;
            // 0x1452e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145220u: goto label_145220;
            case 0x145230u: goto label_145230;
            case 0x145240u: goto label_145240;
            case 0x145250u: goto label_145250;
            case 0x145260u: goto label_145260;
            case 0x145270u: goto label_145270;
            case 0x145280u: goto label_145280;
            case 0x145290u: goto label_145290;
            case 0x1452A0u: goto label_1452a0;
            case 0x1452B0u: goto label_1452b0;
            case 0x1452CCu: goto label_1452cc;
            case 0x1452D4u: goto label_1452d4;
            case 0x1452DCu: goto label_1452dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1452ECu;
    // 0x1452ec: 0x0  nop
    ctx->pc = 0x1452ecu;
    // NOP
}

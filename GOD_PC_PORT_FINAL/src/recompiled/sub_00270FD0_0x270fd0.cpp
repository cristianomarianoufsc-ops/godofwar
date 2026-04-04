#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270FD0
// Address: 0x270fd0 - 0x2716d0
void sub_00270FD0_0x270fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270FD0_0x270fd0");
#endif

    ctx->pc = 0x270fd0u;

    // 0x270fd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x270fd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x270fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270fd8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x270fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x270fdc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x270fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x270fe0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x270fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x270fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x270fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fe8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x270fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x270fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ff0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x270ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x270ff4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x270ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ff8: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x270ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x270ffc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x270ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x271000: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x271000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x271004: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x271004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x271008: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x27100c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x27100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x271010: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x271010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x271014: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x271014u;
    SET_GPR_U32(ctx, 31, 0x27101Cu);
    ctx->pc = 0x271018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271014u;
            // 0x271018: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27101Cu; }
        if (ctx->pc != 0x27101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27101Cu; }
        if (ctx->pc != 0x27101Cu) { return; }
    }
    ctx->pc = 0x27101Cu;
    // 0x27101c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271020: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x271024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271028: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x271028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x27102c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27102Cu;
    {
        const bool branch_taken_0x27102c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27102Cu;
            // 0x271030: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27102c) {
            ctx->pc = 0x27103Cu;
            goto label_27103c;
        }
    }
    ctx->pc = 0x271034u;
    // 0x271034: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x271034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x271038: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x271038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2));
label_27103c:
    // 0x27103c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271040: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x271040u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x271044: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_271048:
    // 0x271048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27104c: 0x0  nop
    ctx->pc = 0x27104cu;
    // NOP
    // 0x271050: 0x0  nop
    ctx->pc = 0x271050u;
    // NOP
    // 0x271054: 0x0  nop
    ctx->pc = 0x271054u;
    // NOP
    // 0x271058: 0x0  nop
    ctx->pc = 0x271058u;
    // NOP
    // 0x27105c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27105Cu;
    {
        const bool branch_taken_0x27105c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27105c) {
            ctx->pc = 0x271048u;
            runtime->cooperativeGuestYield();
            goto label_271048;
        }
    }
    ctx->pc = 0x271064u;
    // 0x271064: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x271064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x271068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27106c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x27106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x271070: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x271070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x271074: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x271074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x271078: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x271078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x27107c: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x27107cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x271080: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x271080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x271084: 0x0  nop
    ctx->pc = 0x271084u;
    // NOP
label_271088:
    // 0x271088: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x271088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27108c: 0x0  nop
    ctx->pc = 0x27108cu;
    // NOP
    // 0x271090: 0x0  nop
    ctx->pc = 0x271090u;
    // NOP
    // 0x271094: 0x0  nop
    ctx->pc = 0x271094u;
    // NOP
    // 0x271098: 0x0  nop
    ctx->pc = 0x271098u;
    // NOP
    // 0x27109c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27109Cu;
    {
        const bool branch_taken_0x27109c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27109c) {
            ctx->pc = 0x271088u;
            runtime->cooperativeGuestYield();
            goto label_271088;
        }
    }
    ctx->pc = 0x2710A4u;
    // 0x2710a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2710a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710a8: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x2710A8u;
    SET_GPR_U32(ctx, 31, 0x2710B0u);
    ctx->pc = 0x2710ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710A8u;
            // 0x2710ac: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710B0u; }
        if (ctx->pc != 0x2710B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710B0u; }
        if (ctx->pc != 0x2710B0u) { return; }
    }
    ctx->pc = 0x2710B0u;
    // 0x2710b0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2710b4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2710b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2710b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2710b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2710bc: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2710bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2710c0: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x2710c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2710c4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2710c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2710c8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2710c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2710cc: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x2710ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2710d0: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2710D0u;
    {
        const bool branch_taken_0x2710d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2710D0u;
            // 0x2710d4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710d0) {
            ctx->pc = 0x2712D8u;
            goto label_2712d8;
        }
    }
    ctx->pc = 0x2710D8u;
    // 0x2710d8: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x2710d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x2710dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2710dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2710e0: 0x24a515f0  addiu       $a1, $a1, 0x15F0
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5616));
    // 0x2710e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2710e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710e8: 0xc0a4e50  jal         func_293940
    ctx->pc = 0x2710E8u;
    SET_GPR_U32(ctx, 31, 0x2710F0u);
    ctx->pc = 0x2710ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710E8u;
            // 0x2710ec: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293940u;
    if (runtime->hasFunction(0x293940u)) {
        auto targetFn = runtime->lookupFunction(0x293940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F0u; }
        if (ctx->pc != 0x2710F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293940_0x293950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F0u; }
        if (ctx->pc != 0x2710F0u) { return; }
    }
    ctx->pc = 0x2710F0u;
    // 0x2710f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2710f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2710f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2710f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2710f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2710fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271100: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x271100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x271104: 0xc0a51d8  jal         func_294760
    ctx->pc = 0x271104u;
    SET_GPR_U32(ctx, 31, 0x27110Cu);
    ctx->pc = 0x271108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271104u;
            // 0x271108: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294760u;
    if (runtime->hasFunction(0x294760u)) {
        auto targetFn = runtime->lookupFunction(0x294760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27110Cu; }
        if (ctx->pc != 0x27110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294760_0x294760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27110Cu; }
        if (ctx->pc != 0x27110Cu) { return; }
    }
    ctx->pc = 0x27110Cu;
    // 0x27110c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27110Cu;
    SET_GPR_U32(ctx, 31, 0x271114u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271114u; }
        if (ctx->pc != 0x271114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271114u; }
        if (ctx->pc != 0x271114u) { return; }
    }
    ctx->pc = 0x271114u;
    // 0x271114: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x271118: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27111c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x27111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x271120: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x271120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x271124: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x271124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x271128: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x271128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x27112c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x27112cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x271130: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271134: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x271134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x271138: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x271138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x27113c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27113cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x271140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271140u;
    {
        const bool branch_taken_0x271140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271140u;
            // 0x271144: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271140) {
            ctx->pc = 0x271154u;
            goto label_271154;
        }
    }
    ctx->pc = 0x271148u;
    // 0x271148: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x271148u;
    SET_GPR_U32(ctx, 31, 0x271150u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271150u; }
        if (ctx->pc != 0x271150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271150u; }
        if (ctx->pc != 0x271150u) { return; }
    }
    ctx->pc = 0x271150u;
    // 0x271150: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x271150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_271154:
    // 0x271154: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x271154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x271158: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x271158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27115c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x27115cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x271160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271164: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x271164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x271168: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x271168u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x27116c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27116cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x271170: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x271170u;
    {
        const bool branch_taken_0x271170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x271174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271170u;
            // 0x271174: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271170) {
            ctx->pc = 0x2712ACu;
            goto label_2712ac;
        }
    }
    ctx->pc = 0x271178u;
    // 0x271178: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27117c: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x271180: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x271180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271184: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x271184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x271188: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27118c: 0x0  nop
    ctx->pc = 0x27118cu;
    // NOP
label_271190:
    // 0x271190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271194: 0x0  nop
    ctx->pc = 0x271194u;
    // NOP
    // 0x271198: 0x0  nop
    ctx->pc = 0x271198u;
    // NOP
    // 0x27119c: 0x0  nop
    ctx->pc = 0x27119cu;
    // NOP
    // 0x2711a0: 0x0  nop
    ctx->pc = 0x2711a0u;
    // NOP
    // 0x2711a4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2711A4u;
    {
        const bool branch_taken_0x2711a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2711a4) {
            ctx->pc = 0x271190u;
            runtime->cooperativeGuestYield();
            goto label_271190;
        }
    }
    ctx->pc = 0x2711ACu;
    // 0x2711ac: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2711ACu;
    SET_GPR_U32(ctx, 31, 0x2711B4u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711B4u; }
        if (ctx->pc != 0x2711B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711B4u; }
        if (ctx->pc != 0x2711B4u) { return; }
    }
    ctx->pc = 0x2711B4u;
    // 0x2711b4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2711b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2711b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2711b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2711bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2711bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2711c0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x2711c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x2711c4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2711c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2711c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2711c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2711cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2711ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2711d0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2711d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2711d4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2711d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x2711d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2711d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2711dc: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2711dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2711e0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2711e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2711e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2711e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2711e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2711E8u;
    {
        const bool branch_taken_0x2711e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711E8u;
            // 0x2711ec: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711e8) {
            ctx->pc = 0x2711FCu;
            goto label_2711fc;
        }
    }
    ctx->pc = 0x2711F0u;
    // 0x2711f0: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2711F0u;
    SET_GPR_U32(ctx, 31, 0x2711F8u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711F8u; }
        if (ctx->pc != 0x2711F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711F8u; }
        if (ctx->pc != 0x2711F8u) { return; }
    }
    ctx->pc = 0x2711F8u;
    // 0x2711f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2711f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_2711fc:
    // 0x2711fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2711fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x271200: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x271200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x271204: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x271204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x271208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x271208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27120c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x271210: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x271210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x271214: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x271214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x271218: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271218u;
    {
        const bool branch_taken_0x271218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271218u;
            // 0x27121c: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271218) {
            ctx->pc = 0x271234u;
            goto label_271234;
        }
    }
    ctx->pc = 0x271220u;
    // 0x271220: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x271220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x271224: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271224u;
    {
        const bool branch_taken_0x271224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271224u;
            // 0x271228: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271224) {
            ctx->pc = 0x271234u;
            goto label_271234;
        }
    }
    ctx->pc = 0x27122Cu;
    // 0x27122c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27122Cu;
    {
        const bool branch_taken_0x27122c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x271230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27122Cu;
            // 0x271230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27122c) {
            ctx->pc = 0x27123Cu;
            goto label_27123c;
        }
    }
    ctx->pc = 0x271234u;
label_271234:
    // 0x271234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271234u;
    {
        const bool branch_taken_0x271234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271234u;
            // 0x271238: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271234) {
            ctx->pc = 0x271240u;
            goto label_271240;
        }
    }
    ctx->pc = 0x27123Cu;
label_27123c:
    // 0x27123c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x27123cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_271240:
    // 0x271240: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271244: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x271244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x271248: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x271248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x27124c: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x27124Cu;
    SET_GPR_U32(ctx, 31, 0x271254u);
    ctx->pc = 0x271250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27124Cu;
            // 0x271250: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271254u; }
        if (ctx->pc != 0x271254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271254u; }
        if (ctx->pc != 0x271254u) { return; }
    }
    ctx->pc = 0x271254u;
    // 0x271254: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271258: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x271258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x27125c: 0x0  nop
    ctx->pc = 0x27125cu;
    // NOP
label_271260:
    // 0x271260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271264: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x271268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27126c: 0x0  nop
    ctx->pc = 0x27126cu;
    // NOP
    // 0x271270: 0x0  nop
    ctx->pc = 0x271270u;
    // NOP
    // 0x271274: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271274u;
    {
        const bool branch_taken_0x271274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271274) {
            ctx->pc = 0x271260u;
            runtime->cooperativeGuestYield();
            goto label_271260;
        }
    }
    ctx->pc = 0x27127Cu;
    // 0x27127c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271280: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x271284: 0x0  nop
    ctx->pc = 0x271284u;
    // NOP
label_271288:
    // 0x271288: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27128c: 0x0  nop
    ctx->pc = 0x27128cu;
    // NOP
    // 0x271290: 0x0  nop
    ctx->pc = 0x271290u;
    // NOP
    // 0x271294: 0x0  nop
    ctx->pc = 0x271294u;
    // NOP
    // 0x271298: 0x0  nop
    ctx->pc = 0x271298u;
    // NOP
    // 0x27129c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27129Cu;
    {
        const bool branch_taken_0x27129c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27129c) {
            ctx->pc = 0x271288u;
            runtime->cooperativeGuestYield();
            goto label_271288;
        }
    }
    ctx->pc = 0x2712A4u;
    // 0x2712a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2712A4u;
    {
        const bool branch_taken_0x2712a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712a4) {
            ctx->pc = 0x2712BCu;
            goto label_2712bc;
        }
    }
    ctx->pc = 0x2712ACu;
label_2712ac:
    // 0x2712ac: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x2712acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2712b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2712b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712b4: 0xc09c384  jal         func_270E10
    ctx->pc = 0x2712B4u;
    SET_GPR_U32(ctx, 31, 0x2712BCu);
    ctx->pc = 0x2712B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712B4u;
            // 0x2712b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270E10u;
    if (runtime->hasFunction(0x270E10u)) {
        auto targetFn = runtime->lookupFunction(0x270E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712BCu; }
        if (ctx->pc != 0x2712BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270e10_0x270fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712BCu; }
        if (ctx->pc != 0x2712BCu) { return; }
    }
    ctx->pc = 0x2712BCu;
label_2712bc:
    // 0x2712bc: 0xc0a51be  jal         func_2946F8
    ctx->pc = 0x2712BCu;
    SET_GPR_U32(ctx, 31, 0x2712C4u);
    ctx->pc = 0x2712C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712BCu;
            // 0x2712c0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2946F8u;
    if (runtime->hasFunction(0x2946F8u)) {
        auto targetFn = runtime->lookupFunction(0x2946F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712C4u; }
        if (ctx->pc != 0x2712C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002946F8_0x2946f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712C4u; }
        if (ctx->pc != 0x2712C4u) { return; }
    }
    ctx->pc = 0x2712C4u;
    // 0x2712c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2712c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712c8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2712C8u;
    SET_GPR_U32(ctx, 31, 0x2712D0u);
    ctx->pc = 0x2712CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712C8u;
            // 0x2712cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (runtime->hasFunction(0x293950u)) {
        auto targetFn = runtime->lookupFunction(0x293950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712D0u; }
        if (ctx->pc != 0x2712D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293950_0x293960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712D0u; }
        if (ctx->pc != 0x2712D0u) { return; }
    }
    ctx->pc = 0x2712D0u;
    // 0x2712d0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2712D0u;
    {
        const bool branch_taken_0x2712d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2712D0u;
            // 0x2712d4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712d0) {
            ctx->pc = 0x271470u;
            goto label_271470;
        }
    }
    ctx->pc = 0x2712D8u;
label_2712d8:
    // 0x2712d8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2712D8u;
    SET_GPR_U32(ctx, 31, 0x2712E0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712E0u; }
        if (ctx->pc != 0x2712E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712E0u; }
        if (ctx->pc != 0x2712E0u) { return; }
    }
    ctx->pc = 0x2712E0u;
    // 0x2712e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2712e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2712e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2712e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2712e8: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x2712e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x2712ec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2712ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2712f0: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x2712f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x2712f4: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x2712f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x2712f8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2712fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2712fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x271300: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x271300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x271304: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x271308: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x271308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27130c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x27130cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x271310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271310u;
    {
        const bool branch_taken_0x271310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271310u;
            // 0x271314: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271310) {
            ctx->pc = 0x271320u;
            goto label_271320;
        }
    }
    ctx->pc = 0x271318u;
    // 0x271318: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x271318u;
    SET_GPR_U32(ctx, 31, 0x271320u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271320u; }
        if (ctx->pc != 0x271320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271320u; }
        if (ctx->pc != 0x271320u) { return; }
    }
    ctx->pc = 0x271320u;
label_271320:
    // 0x271320: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x271320u;
    {
        const bool branch_taken_0x271320 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x271324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271320u;
            // 0x271324: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271320) {
            ctx->pc = 0x27145Cu;
            goto label_27145c;
        }
    }
    ctx->pc = 0x271328u;
    // 0x271328: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27132c: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x271330: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271334: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x271334u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x271338: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27133c: 0x0  nop
    ctx->pc = 0x27133cu;
    // NOP
label_271340:
    // 0x271340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271344: 0x0  nop
    ctx->pc = 0x271344u;
    // NOP
    // 0x271348: 0x0  nop
    ctx->pc = 0x271348u;
    // NOP
    // 0x27134c: 0x0  nop
    ctx->pc = 0x27134cu;
    // NOP
    // 0x271350: 0x0  nop
    ctx->pc = 0x271350u;
    // NOP
    // 0x271354: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271354u;
    {
        const bool branch_taken_0x271354 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x271354) {
            ctx->pc = 0x271340u;
            runtime->cooperativeGuestYield();
            goto label_271340;
        }
    }
    ctx->pc = 0x27135Cu;
    // 0x27135c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27135Cu;
    SET_GPR_U32(ctx, 31, 0x271364u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271364u; }
        if (ctx->pc != 0x271364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271364u; }
        if (ctx->pc != 0x271364u) { return; }
    }
    ctx->pc = 0x271364u;
    // 0x271364: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x271368: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x271368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27136c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27136cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x271370: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x271370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x271374: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x271374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x271378: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x271378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27137c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27137cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x271380: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x271380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x271384: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x271384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x271388: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27138c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x27138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x271390: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x271390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x271394: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x271394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x271398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271398u;
    {
        const bool branch_taken_0x271398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271398u;
            // 0x27139c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271398) {
            ctx->pc = 0x2713ACu;
            goto label_2713ac;
        }
    }
    ctx->pc = 0x2713A0u;
    // 0x2713a0: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2713A0u;
    SET_GPR_U32(ctx, 31, 0x2713A8u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2713A8u; }
        if (ctx->pc != 0x2713A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2713A8u; }
        if (ctx->pc != 0x2713A8u) { return; }
    }
    ctx->pc = 0x2713A8u;
    // 0x2713a8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2713a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_2713ac:
    // 0x2713ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2713acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2713b0: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2713b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2713b4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2713b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2713b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2713b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2713bc: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2713bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x2713c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2713c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2713c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2713c8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2713C8u;
    {
        const bool branch_taken_0x2713c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2713CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713C8u;
            // 0x2713cc: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713c8) {
            ctx->pc = 0x2713E4u;
            goto label_2713e4;
        }
    }
    ctx->pc = 0x2713D0u;
    // 0x2713d0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2713d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2713d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2713D4u;
    {
        const bool branch_taken_0x2713d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2713D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713D4u;
            // 0x2713d8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713d4) {
            ctx->pc = 0x2713E4u;
            goto label_2713e4;
        }
    }
    ctx->pc = 0x2713DCu;
    // 0x2713dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2713DCu;
    {
        const bool branch_taken_0x2713dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2713E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713DCu;
            // 0x2713e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713dc) {
            ctx->pc = 0x2713ECu;
            goto label_2713ec;
        }
    }
    ctx->pc = 0x2713E4u;
label_2713e4:
    // 0x2713e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2713E4u;
    {
        const bool branch_taken_0x2713e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713E4u;
            // 0x2713e8: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713e4) {
            ctx->pc = 0x2713F0u;
            goto label_2713f0;
        }
    }
    ctx->pc = 0x2713ECu;
label_2713ec:
    // 0x2713ec: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x2713ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_2713f0:
    // 0x2713f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2713f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2713f4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2713f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2713f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2713f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2713fc: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x2713FCu;
    SET_GPR_U32(ctx, 31, 0x271404u);
    ctx->pc = 0x271400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2713FCu;
            // 0x271400: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271404u; }
        if (ctx->pc != 0x271404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271404u; }
        if (ctx->pc != 0x271404u) { return; }
    }
    ctx->pc = 0x271404u;
    // 0x271404: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x271404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271408: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x271408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x27140c: 0x0  nop
    ctx->pc = 0x27140cu;
    // NOP
label_271410:
    // 0x271410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271414: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x271414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x271418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27141c: 0x0  nop
    ctx->pc = 0x27141cu;
    // NOP
    // 0x271420: 0x0  nop
    ctx->pc = 0x271420u;
    // NOP
    // 0x271424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271424u;
    {
        const bool branch_taken_0x271424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271424) {
            ctx->pc = 0x271410u;
            runtime->cooperativeGuestYield();
            goto label_271410;
        }
    }
    ctx->pc = 0x27142Cu;
    // 0x27142c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271430: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x271434: 0x0  nop
    ctx->pc = 0x271434u;
    // NOP
label_271438:
    // 0x271438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27143c: 0x0  nop
    ctx->pc = 0x27143cu;
    // NOP
    // 0x271440: 0x0  nop
    ctx->pc = 0x271440u;
    // NOP
    // 0x271444: 0x0  nop
    ctx->pc = 0x271444u;
    // NOP
    // 0x271448: 0x0  nop
    ctx->pc = 0x271448u;
    // NOP
    // 0x27144c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27144Cu;
    {
        const bool branch_taken_0x27144c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27144c) {
            ctx->pc = 0x271438u;
            runtime->cooperativeGuestYield();
            goto label_271438;
        }
    }
    ctx->pc = 0x271454u;
    // 0x271454: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x271454u;
    {
        const bool branch_taken_0x271454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271454u;
            // 0x271458: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271454) {
            ctx->pc = 0x271470u;
            goto label_271470;
        }
    }
    ctx->pc = 0x27145Cu;
label_27145c:
    // 0x27145c: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x27145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x271460: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271464: 0xc09c384  jal         func_270E10
    ctx->pc = 0x271464u;
    SET_GPR_U32(ctx, 31, 0x27146Cu);
    ctx->pc = 0x271468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271464u;
            // 0x271468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270E10u;
    if (runtime->hasFunction(0x270E10u)) {
        auto targetFn = runtime->lookupFunction(0x270E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27146Cu; }
        if (ctx->pc != 0x27146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270e10_0x270fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27146Cu; }
        if (ctx->pc != 0x27146Cu) { return; }
    }
    ctx->pc = 0x27146Cu;
    // 0x27146c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x27146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_271470:
    // 0x271470: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271474: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x271474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x271478: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x271478u;
    SET_GPR_U32(ctx, 31, 0x271480u);
    ctx->pc = 0x27147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271478u;
            // 0x27147c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271480u; }
        if (ctx->pc != 0x271480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271480u; }
        if (ctx->pc != 0x271480u) { return; }
    }
    ctx->pc = 0x271480u;
    // 0x271480: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x271480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271484: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x271484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271488: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x271488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27148c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x27148cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x271490: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x271490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271494: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x271494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271498: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x271498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27149c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x27149cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2714a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2714A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2714A0u;
            // 0x2714a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27103Cu: goto label_27103c;
            case 0x271048u: goto label_271048;
            case 0x271088u: goto label_271088;
            case 0x271154u: goto label_271154;
            case 0x271190u: goto label_271190;
            case 0x2711FCu: goto label_2711fc;
            case 0x271234u: goto label_271234;
            case 0x27123Cu: goto label_27123c;
            case 0x271240u: goto label_271240;
            case 0x271260u: goto label_271260;
            case 0x271288u: goto label_271288;
            case 0x2712ACu: goto label_2712ac;
            case 0x2712BCu: goto label_2712bc;
            case 0x2712D8u: goto label_2712d8;
            case 0x271320u: goto label_271320;
            case 0x271340u: goto label_271340;
            case 0x2713ACu: goto label_2713ac;
            case 0x2713E4u: goto label_2713e4;
            case 0x2713ECu: goto label_2713ec;
            case 0x2713F0u: goto label_2713f0;
            case 0x271410u: goto label_271410;
            case 0x271438u: goto label_271438;
            case 0x27145Cu: goto label_27145c;
            case 0x271470u: goto label_271470;
            case 0x2714F4u: goto label_2714f4;
            case 0x271508u: goto label_271508;
            case 0x27157Cu: goto label_27157c;
            case 0x2715E0u: goto label_2715e0;
            case 0x271620u: goto label_271620;
            case 0x271684u: goto label_271684;
            case 0x2716B4u: goto label_2716b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2714A8u;
    // 0x2714a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2714a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2714ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2714acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2714b0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2714b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2714b4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2714b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2714b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2714bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2714bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2714c0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2714c4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2714c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2714c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2714cc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2714ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2714d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2714d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2714d4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2714D4u;
    {
        const bool branch_taken_0x2714d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2714D4u;
            // 0x2714d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714d4) {
            ctx->pc = 0x2714F4u;
            goto label_2714f4;
        }
    }
    ctx->pc = 0x2714DCu;
    // 0x2714dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2714e0: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x2714e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2714e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2714e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2714e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2714ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2714ECu;
    {
        const bool branch_taken_0x2714ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2714ECu;
            // 0x2714f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714ec) {
            ctx->pc = 0x271508u;
            goto label_271508;
        }
    }
    ctx->pc = 0x2714F4u;
label_2714f4:
    // 0x2714f4: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2714f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2714f8: 0xf  sync
    ctx->pc = 0x2714f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2714fc: 0x42000038  ei
    ctx->pc = 0x2714fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x271500: 0x3e00008  jr          $ra
    ctx->pc = 0x271500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271500u;
            // 0x271504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27103Cu: goto label_27103c;
            case 0x271048u: goto label_271048;
            case 0x271088u: goto label_271088;
            case 0x271154u: goto label_271154;
            case 0x271190u: goto label_271190;
            case 0x2711FCu: goto label_2711fc;
            case 0x271234u: goto label_271234;
            case 0x27123Cu: goto label_27123c;
            case 0x271240u: goto label_271240;
            case 0x271260u: goto label_271260;
            case 0x271288u: goto label_271288;
            case 0x2712ACu: goto label_2712ac;
            case 0x2712BCu: goto label_2712bc;
            case 0x2712D8u: goto label_2712d8;
            case 0x271320u: goto label_271320;
            case 0x271340u: goto label_271340;
            case 0x2713ACu: goto label_2713ac;
            case 0x2713E4u: goto label_2713e4;
            case 0x2713ECu: goto label_2713ec;
            case 0x2713F0u: goto label_2713f0;
            case 0x271410u: goto label_271410;
            case 0x271438u: goto label_271438;
            case 0x27145Cu: goto label_27145c;
            case 0x271470u: goto label_271470;
            case 0x2714F4u: goto label_2714f4;
            case 0x271508u: goto label_271508;
            case 0x27157Cu: goto label_27157c;
            case 0x2715E0u: goto label_2715e0;
            case 0x271620u: goto label_271620;
            case 0x271684u: goto label_271684;
            case 0x2716B4u: goto label_2716b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271508u;
label_271508:
    // 0x271508: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x271508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x27150c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x27150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x271510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271514: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271518: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x271518u;
    {
        const bool branch_taken_0x271518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271518u;
            // 0x27151c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271518) {
            ctx->pc = 0x27157Cu;
            goto label_27157c;
        }
    }
    ctx->pc = 0x271520u;
    // 0x271520: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x271520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x271524: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x271528: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x271528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x27152c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27152cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271530: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x271530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x271534: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x271534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x271538: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x271538u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4));
    // 0x27153c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27153cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x271540: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x271540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x271544: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x271544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x271548: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x271548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5));
    // 0x27154c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x27154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x271550: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x271550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x271554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x271554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x271558: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x27155c: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x27155cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x271560: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x271564: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x271568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x271568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27156c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x271570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x271570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x271574: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x271574u;
    {
        const bool branch_taken_0x271574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271574u;
            // 0x271578: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271574) {
            ctx->pc = 0x2715E0u;
            goto label_2715e0;
        }
    }
    ctx->pc = 0x27157Cu;
label_27157c:
    // 0x27157c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x27157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x271580: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x271580u;
    {
        const bool branch_taken_0x271580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x271584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271580u;
            // 0x271584: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271580) {
            ctx->pc = 0x2715E0u;
            goto label_2715e0;
        }
    }
    ctx->pc = 0x271588u;
    // 0x271588: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x271588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27158c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x27158cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x271590: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x271590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x271594: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x271594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x271598: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x271598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x27159c: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x27159cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2715a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2715a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2715a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2715a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2715a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2715ac: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x2715acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x2715b0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x2715b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x2715b4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2715b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2715b8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x2715b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x2715bc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2715bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2715c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2715c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2715c4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2715c8: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x2715c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2));
    // 0x2715cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2715ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2715d0: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x2715d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 8));
    // 0x2715d4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2715d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2715d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2715d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2715dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2715dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2715e0:
    // 0x2715e0: 0xf  sync
    ctx->pc = 0x2715e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2715e4: 0x42000038  ei
    ctx->pc = 0x2715e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2715e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2715E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715E8u;
            // 0x2715ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27103Cu: goto label_27103c;
            case 0x271048u: goto label_271048;
            case 0x271088u: goto label_271088;
            case 0x271154u: goto label_271154;
            case 0x271190u: goto label_271190;
            case 0x2711FCu: goto label_2711fc;
            case 0x271234u: goto label_271234;
            case 0x27123Cu: goto label_27123c;
            case 0x271240u: goto label_271240;
            case 0x271260u: goto label_271260;
            case 0x271288u: goto label_271288;
            case 0x2712ACu: goto label_2712ac;
            case 0x2712BCu: goto label_2712bc;
            case 0x2712D8u: goto label_2712d8;
            case 0x271320u: goto label_271320;
            case 0x271340u: goto label_271340;
            case 0x2713ACu: goto label_2713ac;
            case 0x2713E4u: goto label_2713e4;
            case 0x2713ECu: goto label_2713ec;
            case 0x2713F0u: goto label_2713f0;
            case 0x271410u: goto label_271410;
            case 0x271438u: goto label_271438;
            case 0x27145Cu: goto label_27145c;
            case 0x271470u: goto label_271470;
            case 0x2714F4u: goto label_2714f4;
            case 0x271508u: goto label_271508;
            case 0x27157Cu: goto label_27157c;
            case 0x2715E0u: goto label_2715e0;
            case 0x271620u: goto label_271620;
            case 0x271684u: goto label_271684;
            case 0x2716B4u: goto label_2716b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2715F0u;
    // 0x2715f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2715f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2715f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2715f8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2715f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2715fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2715fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271600: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x271600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271604: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x271604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271608u;
    {
        const bool branch_taken_0x271608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271608u;
            // 0x27160c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271608) {
            ctx->pc = 0x271620u;
            goto label_271620;
        }
    }
    ctx->pc = 0x271610u;
    // 0x271610: 0xf  sync
    ctx->pc = 0x271610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x271614: 0x42000038  ei
    ctx->pc = 0x271614u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x271618: 0x3e00008  jr          $ra
    ctx->pc = 0x271618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271618u;
            // 0x27161c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27103Cu: goto label_27103c;
            case 0x271048u: goto label_271048;
            case 0x271088u: goto label_271088;
            case 0x271154u: goto label_271154;
            case 0x271190u: goto label_271190;
            case 0x2711FCu: goto label_2711fc;
            case 0x271234u: goto label_271234;
            case 0x27123Cu: goto label_27123c;
            case 0x271240u: goto label_271240;
            case 0x271260u: goto label_271260;
            case 0x271288u: goto label_271288;
            case 0x2712ACu: goto label_2712ac;
            case 0x2712BCu: goto label_2712bc;
            case 0x2712D8u: goto label_2712d8;
            case 0x271320u: goto label_271320;
            case 0x271340u: goto label_271340;
            case 0x2713ACu: goto label_2713ac;
            case 0x2713E4u: goto label_2713e4;
            case 0x2713ECu: goto label_2713ec;
            case 0x2713F0u: goto label_2713f0;
            case 0x271410u: goto label_271410;
            case 0x271438u: goto label_271438;
            case 0x27145Cu: goto label_27145c;
            case 0x271470u: goto label_271470;
            case 0x2714F4u: goto label_2714f4;
            case 0x271508u: goto label_271508;
            case 0x27157Cu: goto label_27157c;
            case 0x2715E0u: goto label_2715e0;
            case 0x271620u: goto label_271620;
            case 0x271684u: goto label_271684;
            case 0x2716B4u: goto label_2716b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271620u;
label_271620:
    // 0x271620: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x271624: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x271624u;
    {
        const bool branch_taken_0x271624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271624u;
            // 0x271628: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271624) {
            ctx->pc = 0x271684u;
            goto label_271684;
        }
    }
    ctx->pc = 0x27162Cu;
    // 0x27162c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x27162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271630: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x271634: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x271634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x271638: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x271638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27163c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x27163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x271640: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x271640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x271644: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x271648: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x271648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x27164c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x27164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x271650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x271650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271654: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x271658: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x271658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x27165c: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x27165cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x271660: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x271660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271664: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x271664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x271668: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27166c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x271670: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x271670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x271674: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271678: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x271678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x27167c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27167Cu;
    {
        const bool branch_taken_0x27167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27167Cu;
            // 0x271680: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27167c) {
            ctx->pc = 0x2716B4u;
            goto label_2716b4;
        }
    }
    ctx->pc = 0x271684u;
label_271684:
    // 0x271684: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x271684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x271688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27168c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x27168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x271690: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x271690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x271694: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x271694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x271698: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x271698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27169c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x27169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2716a0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2716a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2716a4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x2716a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x2716a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2716a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2716ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2716acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2716b0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2716b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2716b4:
    // 0x2716b4: 0xf  sync
    ctx->pc = 0x2716b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2716b8: 0x42000038  ei
    ctx->pc = 0x2716b8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2716bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2716BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2716C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716BCu;
            // 0x2716c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27103Cu: goto label_27103c;
            case 0x271048u: goto label_271048;
            case 0x271088u: goto label_271088;
            case 0x271154u: goto label_271154;
            case 0x271190u: goto label_271190;
            case 0x2711FCu: goto label_2711fc;
            case 0x271234u: goto label_271234;
            case 0x27123Cu: goto label_27123c;
            case 0x271240u: goto label_271240;
            case 0x271260u: goto label_271260;
            case 0x271288u: goto label_271288;
            case 0x2712ACu: goto label_2712ac;
            case 0x2712BCu: goto label_2712bc;
            case 0x2712D8u: goto label_2712d8;
            case 0x271320u: goto label_271320;
            case 0x271340u: goto label_271340;
            case 0x2713ACu: goto label_2713ac;
            case 0x2713E4u: goto label_2713e4;
            case 0x2713ECu: goto label_2713ec;
            case 0x2713F0u: goto label_2713f0;
            case 0x271410u: goto label_271410;
            case 0x271438u: goto label_271438;
            case 0x27145Cu: goto label_27145c;
            case 0x271470u: goto label_271470;
            case 0x2714F4u: goto label_2714f4;
            case 0x271508u: goto label_271508;
            case 0x27157Cu: goto label_27157c;
            case 0x2715E0u: goto label_2715e0;
            case 0x271620u: goto label_271620;
            case 0x271684u: goto label_271684;
            case 0x2716B4u: goto label_2716b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2716C4u;
    // 0x2716c4: 0x0  nop
    ctx->pc = 0x2716c4u;
    // NOP
    // 0x2716c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2716cc: 0x0  nop
    ctx->pc = 0x2716ccu;
    // NOP
}

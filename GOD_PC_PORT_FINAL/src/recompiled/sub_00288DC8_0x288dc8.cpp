#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288DC8
// Address: 0x288dc8 - 0x288fa0
void sub_00288DC8_0x288dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288DC8_0x288dc8");
#endif

    ctx->pc = 0x288dc8u;

    // 0x288dc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x288dcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x288dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288dd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x288dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x288dd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x288dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x288dd8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x288dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x288ddc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x288ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x288de0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x288de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x288de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x288de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x288de8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x288de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288dec: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x288decu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288df0: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x288df0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x288df4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x288df4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x288df8: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x288dfc: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x288dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x288e00: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x288e04: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x288e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x288e08: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x288E08u;
    {
        const bool branch_taken_0x288e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E08u;
            // 0x288e0c: 0x2a220034  slti        $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e08) {
            ctx->pc = 0x288ECCu;
            goto label_288ecc;
        }
    }
    ctx->pc = 0x288E10u;
    // 0x288e10: 0x6210017  bgez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x288E10u;
    {
        const bool branch_taken_0x288e10 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x288E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E10u;
            // 0x288e14: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e10) {
            ctx->pc = 0x288E70u;
            goto label_288e70;
        }
    }
    ctx->pc = 0x288E18u;
    // 0x288e18: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x288e1c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288E1Cu;
    SET_GPR_U32(ctx, 31, 0x288E24u);
    ctx->pc = 0x288E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288E1Cu;
            // 0x288e20: 0xdc4559d0  ld          $a1, 0x59D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E24u; }
        if (ctx->pc != 0x288E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E24u; }
        if (ctx->pc != 0x288E24u) { return; }
    }
    ctx->pc = 0x288E24u;
    // 0x288e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e28: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x288E28u;
    SET_GPR_U32(ctx, 31, 0x288E30u);
    ctx->pc = 0x288E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288E28u;
            // 0x288e2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E30u; }
        if (ctx->pc != 0x288E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E30u; }
        if (ctx->pc != 0x288E30u) { return; }
    }
    ctx->pc = 0x288E30u;
    // 0x288e30: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x288E30u;
    {
        const bool branch_taken_0x288e30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x288E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E30u;
            // 0x288e34: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e30) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288E38u;
    // 0x288e38: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288E38u;
    {
        const bool branch_taken_0x288e38 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x288E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E38u;
            // 0x288e3c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e38) {
            ctx->pc = 0x288E50u;
            goto label_288e50;
        }
    }
    ctx->pc = 0x288E40u;
    // 0x288e40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e44: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x288E44u;
    {
        const bool branch_taken_0x288e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E44u;
            // 0x288e48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e44) {
            ctx->pc = 0x288F68u;
            goto label_288f68;
        }
    }
    ctx->pc = 0x288E4Cu;
    // 0x288e4c: 0x0  nop
    ctx->pc = 0x288e4cu;
    // NOP
label_288e50:
    // 0x288e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288e54: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x288e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x288e58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x288e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x288e5c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x288E5Cu;
    {
        const bool branch_taken_0x288e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E5Cu;
            // 0x288e60: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e5c) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288E64u;
    // 0x288e64: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x288e68: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x288E68u;
    {
        const bool branch_taken_0x288e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E68u;
            // 0x288e6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e68) {
            ctx->pc = 0x288F68u;
            goto label_288f68;
        }
    }
    ctx->pc = 0x288E70u;
label_288e70:
    // 0x288e70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288e74: 0x2229807  srav        $s3, $v0, $s1
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x288e78: 0x2131824  and         $v1, $s0, $s3
    ctx->pc = 0x288e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x288e7c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x288e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x288e80: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x288E80u;
    {
        const bool branch_taken_0x288e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E80u;
            // 0x288e84: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e80) {
            ctx->pc = 0x288F7Cu;
            goto label_288f7c;
        }
    }
    ctx->pc = 0x288E88u;
    // 0x288e88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x288e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e8c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288E8Cu;
    SET_GPR_U32(ctx, 31, 0x288E94u);
    ctx->pc = 0x288E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288E8Cu;
            // 0x288e90: 0xdc4559d0  ld          $a1, 0x59D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E94u; }
        if (ctx->pc != 0x288E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E94u; }
        if (ctx->pc != 0x288E94u) { return; }
    }
    ctx->pc = 0x288E94u;
    // 0x288e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e98: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x288E98u;
    SET_GPR_U32(ctx, 31, 0x288EA0u);
    ctx->pc = 0x288E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288E98u;
            // 0x288e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EA0u; }
        if (ctx->pc != 0x288EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EA0u; }
        if (ctx->pc != 0x288EA0u) { return; }
    }
    ctx->pc = 0x288EA0u;
    // 0x288ea0: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x288EA0u;
    {
        const bool branch_taken_0x288ea0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x288EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EA0u;
            // 0x288ea4: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ea0) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288EA8u;
    // 0x288ea8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288EA8u;
    {
        const bool branch_taken_0x288ea8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x288EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EA8u;
            // 0x288eac: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ea8) {
            ctx->pc = 0x288EC0u;
            goto label_288ec0;
        }
    }
    ctx->pc = 0x288EB0u;
    // 0x288eb0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x288eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x288eb4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x288eb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x288eb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x288eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x288ebc: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x288ebcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_288ec0:
    // 0x288ec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ec4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x288EC4u;
    {
        const bool branch_taken_0x288ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EC4u;
            // 0x288ec8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ec4) {
            ctx->pc = 0x288F68u;
            goto label_288f68;
        }
    }
    ctx->pc = 0x288ECCu;
label_288ecc:
    // 0x288ecc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288ECCu;
    {
        const bool branch_taken_0x288ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288ECCu;
            // 0x288ed0: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ecc) {
            ctx->pc = 0x288EF0u;
            goto label_288ef0;
        }
    }
    ctx->pc = 0x288ED4u;
    // 0x288ed4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x288ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x288ed8: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x288ED8u;
    {
        const bool branch_taken_0x288ed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x288EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288ED8u;
            // 0x288edc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed8) {
            ctx->pc = 0x288F80u;
            goto label_288f80;
        }
    }
    ctx->pc = 0x288EE0u;
    // 0x288ee0: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288EE0u;
    SET_GPR_U32(ctx, 31, 0x288EE8u);
    ctx->pc = 0x288EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288EE0u;
            // 0x288ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EE8u; }
        if (ctx->pc != 0x288EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EE8u; }
        if (ctx->pc != 0x288EE8u) { return; }
    }
    ctx->pc = 0x288EE8u;
    // 0x288ee8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x288EE8u;
    {
        const bool branch_taken_0x288ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EE8u;
            // 0x288eec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ee8) {
            ctx->pc = 0x288F84u;
            goto label_288f84;
        }
    }
    ctx->pc = 0x288EF0u;
label_288ef0:
    // 0x288ef0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x288ef4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288ef8: 0x829806  srlv        $s3, $v0, $a0
    ctx->pc = 0x288ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x288efc: 0x2531824  and         $v1, $s2, $s3
    ctx->pc = 0x288efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 19));
    // 0x288f00: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x288F00u;
    {
        const bool branch_taken_0x288f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F00u;
            // 0x288f04: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f00) {
            ctx->pc = 0x288F7Cu;
            goto label_288f7c;
        }
    }
    ctx->pc = 0x288F08u;
    // 0x288f08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x288f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f0c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288F0Cu;
    SET_GPR_U32(ctx, 31, 0x288F14u);
    ctx->pc = 0x288F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288F0Cu;
            // 0x288f10: 0xdc4559d0  ld          $a1, 0x59D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F14u; }
        if (ctx->pc != 0x288F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F14u; }
        if (ctx->pc != 0x288F14u) { return; }
    }
    ctx->pc = 0x288F14u;
    // 0x288f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f18: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x288F18u;
    SET_GPR_U32(ctx, 31, 0x288F20u);
    ctx->pc = 0x288F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288F18u;
            // 0x288f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F20u; }
        if (ctx->pc != 0x288F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288F20u; }
        if (ctx->pc != 0x288F20u) { return; }
    }
    ctx->pc = 0x288F20u;
    // 0x288f20: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x288F20u;
    {
        const bool branch_taken_0x288f20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x288F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F20u;
            // 0x288f24: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f20) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288F28u;
    // 0x288f28: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x288F28u;
    {
        const bool branch_taken_0x288f28 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x288F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F28u;
            // 0x288f2c: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f28) {
            ctx->pc = 0x288F64u;
            goto label_288f64;
        }
    }
    ctx->pc = 0x288F30u;
    // 0x288f30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x288f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x288f34: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288F34u;
    {
        const bool branch_taken_0x288f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x288F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F34u;
            // 0x288f38: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f34) {
            ctx->pc = 0x288F44u;
            goto label_288f44;
        }
    }
    ctx->pc = 0x288F3Cu;
    // 0x288f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x288F3Cu;
    {
        const bool branch_taken_0x288f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F3Cu;
            // 0x288f40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f3c) {
            ctx->pc = 0x288F60u;
            goto label_288f60;
        }
    }
    ctx->pc = 0x288F44u;
label_288f44:
    // 0x288f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288f48: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x288f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x288f4c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x288f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x288f50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x288f54: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x288f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x288f58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x288f5c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_288f60:
    // 0x288f60: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x288f60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_288f64:
    // 0x288f64: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x288f64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_288f68:
    // 0x288f68: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x288f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x288f6c: 0x0  nop
    ctx->pc = 0x288f6cu;
    // NOP
label_288f70:
    // 0x288f70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x288f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x288f74: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x288f74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
    // 0x288f78: 0x2822825  or          $a1, $s4, $v0
    ctx->pc = 0x288f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_288f7c:
    // 0x288f7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x288f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_288f80:
    // 0x288f80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x288f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_288f84:
    // 0x288f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x288f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x288f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x288f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x288f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288f98: 0x3e00008  jr          $ra
    ctx->pc = 0x288F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F98u;
            // 0x288f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288E50u: goto label_288e50;
            case 0x288E70u: goto label_288e70;
            case 0x288EC0u: goto label_288ec0;
            case 0x288ECCu: goto label_288ecc;
            case 0x288EF0u: goto label_288ef0;
            case 0x288F44u: goto label_288f44;
            case 0x288F60u: goto label_288f60;
            case 0x288F64u: goto label_288f64;
            case 0x288F68u: goto label_288f68;
            case 0x288F70u: goto label_288f70;
            case 0x288F7Cu: goto label_288f7c;
            case 0x288F80u: goto label_288f80;
            case 0x288F84u: goto label_288f84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288FA0u;
}

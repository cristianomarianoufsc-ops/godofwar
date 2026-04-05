#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E88B8
// Address: 0x1e88b8 - 0x1e8bd8
void sub_001E88B8_0x1e88b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E88B8_0x1e88b8");
#endif

    ctx->pc = 0x1e88b8u;

    // 0x1e88b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e88b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e88bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e88bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e88c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e88c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e88c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e88c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e88c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e88cc: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e88d0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e88d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E88D4u;
    {
        const bool branch_taken_0x1e88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88D4u;
            // 0x1e88d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88d4) {
            ctx->pc = 0x1E88F0u;
            goto label_1e88f0;
        }
    }
    ctx->pc = 0x1E88DCu;
    // 0x1e88dc: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E88DCu;
    SET_GPR_U32(ctx, 31, 0x1E88E4u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88E4u; }
        if (ctx->pc != 0x1E88E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88E4u; }
        if (ctx->pc != 0x1E88E4u) { return; }
    }
    ctx->pc = 0x1E88E4u;
    // 0x1e88e4: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1e88e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1e88e8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1e88e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1e88ec: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1e88ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e88f0:
    // 0x1e88f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E88F0u;
    {
        const bool branch_taken_0x1e88f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e88f0) {
            ctx->pc = 0x1E88F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88F0u;
            // 0x1e88f4: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E88F8u;
    // 0x1e88f8: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1E88F8u;
    SET_GPR_U32(ctx, 31, 0x1E8900u);
    ctx->pc = 0x1E88FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88F8u;
            // 0x1e88fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8900u; }
        if (ctx->pc != 0x1E8900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8900u; }
        if (ctx->pc != 0x1E8900u) { return; }
    }
    ctx->pc = 0x1E8900u;
    // 0x1e8900: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1E8900u;
    {
        const bool branch_taken_0x1e8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8900u;
            // 0x1e8904: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8900) {
            ctx->pc = 0x1E8BC4u;
            goto label_1e8bc4;
        }
    }
    ctx->pc = 0x1E8908u;
label_1e8908:
    // 0x1e8908: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e890c: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1e890cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1e8910: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1e8910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1e8914: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e8914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8918: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e8918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e891c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x1e891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x1e8920: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e8920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e8924: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8928: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1e892c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e892cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8930: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e8930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e8934: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8938: 0x8e070174  lw          $a3, 0x174($s0)
    ctx->pc = 0x1e8938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e893c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e8940: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1e8940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1e8944: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e8948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e894c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8950: 0x34a5efff  ori         $a1, $a1, 0xEFFF
    ctx->pc = 0x1e8950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    // 0x1e8954: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1e8954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8958: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1e8958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1e895c: 0x34c6fffd  ori         $a2, $a2, 0xFFFD
    ctx->pc = 0x1e895cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
    // 0x1e8960: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8964: 0x3484f800  ori         $a0, $a0, 0xF800
    ctx->pc = 0x1e8964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63488);
    // 0x1e8968: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1e8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1e896c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1e896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1e8970: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x1e8970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1e8974: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x1e8974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x1e8978: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e897c: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1e8980: 0x30e24000  andi        $v0, $a3, 0x4000
    ctx->pc = 0x1e8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x1e8984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8984u;
    {
        const bool branch_taken_0x1e8984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8984u;
            // 0x1e8988: 0xae070174  sw          $a3, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8984) {
            ctx->pc = 0x1E899Cu;
            goto label_1e899c;
        }
    }
    ctx->pc = 0x1E898Cu;
    // 0x1e898c: 0xc070ab6  jal         func_1C2AD8
    ctx->pc = 0x1E898Cu;
    SET_GPR_U32(ctx, 31, 0x1E8994u);
    ctx->pc = 0x1E8990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E898Cu;
            // 0x1e8990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AD8u;
    if (runtime->hasFunction(0x1C2AD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C2AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8994u; }
        if (ctx->pc != 0x1E8994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2AD8_0x1c2ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8994u; }
        if (ctx->pc != 0x1E8994u) { return; }
    }
    ctx->pc = 0x1E8994u;
    // 0x1e8994: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1E8994u;
    {
        const bool branch_taken_0x1e8994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8994u;
            // 0x1e8998: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8994) {
            ctx->pc = 0x1E8BC4u;
            goto label_1e8bc4;
        }
    }
    ctx->pc = 0x1E899Cu;
label_1e899c:
    // 0x1e899c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e89a0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1e89a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1e89a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E89A4u;
    {
        const bool branch_taken_0x1e89a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89A4u;
            // 0x1e89a8: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89a4) {
            ctx->pc = 0x1E89B8u;
            goto label_1e89b8;
        }
    }
    ctx->pc = 0x1E89ACu;
    // 0x1e89ac: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e89b0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1E89B0u;
    {
        const bool branch_taken_0x1e89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89B0u;
            // 0x1e89b4: 0xa46200e0  sh          $v0, 0xE0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89b0) {
            ctx->pc = 0x1E8BC0u;
            goto label_1e8bc0;
        }
    }
    ctx->pc = 0x1E89B8u;
label_1e89b8:
    // 0x1e89b8: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e89bc: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e89c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E89C0u;
    {
        const bool branch_taken_0x1e89c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e89c0) {
            ctx->pc = 0x1E89E0u;
            goto label_1e89e0;
        }
    }
    ctx->pc = 0x1E89C8u;
    // 0x1e89c8: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E89C8u;
    SET_GPR_U32(ctx, 31, 0x1E89D0u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89D0u; }
        if (ctx->pc != 0x1E89D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89D0u; }
        if (ctx->pc != 0x1E89D0u) { return; }
    }
    ctx->pc = 0x1E89D0u;
    // 0x1e89d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E89D0u;
    {
        const bool branch_taken_0x1e89d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89D0u;
            // 0x1e89d4: 0x90430012  lbu         $v1, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89d0) {
            ctx->pc = 0x1E89ECu;
            goto label_1e89ec;
        }
    }
    ctx->pc = 0x1E89D8u;
label_1e89d8:
    // 0x1e89d8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E89D8u;
    {
        const bool branch_taken_0x1e89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89D8u;
            // 0x1e89dc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89d8) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E89E0u;
label_1e89e0:
    // 0x1e89e0: 0xc090d54  jal         func_243550
    ctx->pc = 0x1E89E0u;
    SET_GPR_U32(ctx, 31, 0x1E89E8u);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89E8u; }
        if (ctx->pc != 0x1E89E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89E8u; }
        if (ctx->pc != 0x1E89E8u) { return; }
    }
    ctx->pc = 0x1E89E8u;
    // 0x1e89e8: 0x94430038  lhu         $v1, 0x38($v0)
    ctx->pc = 0x1e89e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e89ec:
    // 0x1e89ec: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x1e89ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x1e89f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e89f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E89F4u;
    {
        const bool branch_taken_0x1e89f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89F4u;
            // 0x1e89f8: 0x8e030320  lw          $v1, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89f4) {
            ctx->pc = 0x1E8A10u;
            goto label_1e8a10;
        }
    }
    ctx->pc = 0x1E89FCu;
    // 0x1e89fc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e8a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e8a04: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E8A04u;
    {
        const bool branch_taken_0x1e8a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a04) {
            ctx->pc = 0x1E8AC8u;
            goto label_1e8ac8;
        }
    }
    ctx->pc = 0x1E8A0Cu;
    // 0x1e8a0c: 0x0  nop
    ctx->pc = 0x1e8a0cu;
    // NOP
label_1e8a10:
    // 0x1e8a10: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1e8a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e8a14: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e8a18: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1e8a18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e8a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8a20: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e8a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e8a24: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x1e8a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8a28: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1e8a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8a2c: 0x0  nop
    ctx->pc = 0x1e8a2cu;
    // NOP
    // 0x1e8a30: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1E8A30u;
    {
        const bool branch_taken_0x1e8a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A30u;
            // 0x1e8a34: 0xe6000164  swc1        $f0, 0x164($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a30) {
            ctx->pc = 0x1E8AF0u;
            goto label_1e8af0;
        }
    }
    ctx->pc = 0x1E8A38u;
    // 0x1e8a38: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1e8a38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1e8a3c: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e8a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a40: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8a44: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1e8a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a48: 0xda0500e0  lqc2        $vf5, 0xE0($s0)
    ctx->pc = 0x1e8a48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e8a4c: 0x4be510aa  vmul.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x1e8a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a50: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e8a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a54: 0xda040070  lqc2        $vf4, 0x70($s0)
    ctx->pc = 0x1e8a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e8a58: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e8a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a5c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e8a5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8a60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e8a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8a64: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e8a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e8a68: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x1e8a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a6c: 0x4be518ea  vmul.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x1e8a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a70: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e8a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a74: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e8a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8a78: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x1e8a78u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x1e8a7c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e8a7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8a80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e8a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8a84: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1e8a84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1e8a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8a8c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8A8Cu;
    {
        const bool branch_taken_0x1e8a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8a8c) {
            ctx->pc = 0x1E8AB0u;
            goto label_1e8ab0;
        }
    }
    ctx->pc = 0x1E8A94u;
    // 0x1e8a94: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1e8a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8a98: 0x0  nop
    ctx->pc = 0x1e8a98u;
    // NOP
    // 0x1e8a9c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1E8A9Cu;
    {
        const bool branch_taken_0x1e8a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A9Cu;
            // 0x1e8aa0: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a9c) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E8AA4u;
    // 0x1e8aa4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E8AA4u;
    {
        const bool branch_taken_0x1e8aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AA4u;
            // 0x1e8aa8: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8aa4) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E8AACu;
    // 0x1e8aac: 0x0  nop
    ctx->pc = 0x1e8aacu;
    // NOP
label_1e8ab0:
    // 0x1e8ab0: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x1e8ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ab4: 0x0  nop
    ctx->pc = 0x1e8ab4u;
    // NOP
    // 0x1e8ab8: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x1E8AB8u;
    {
        const bool branch_taken_0x1e8ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AB8u;
            // 0x1e8abc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ab8) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E8AC0u;
    // 0x1e8ac0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E8AC0u;
    {
        const bool branch_taken_0x1e8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AC0u;
            // 0x1e8ac4: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac0) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E8AC8u;
label_1e8ac8:
    // 0x1e8ac8: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1e8ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e8acc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1e8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e8ad0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1e8ad0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e8ad4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e8ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8adc: 0xc46100ec  lwc1        $f1, 0xEC($v1)
    ctx->pc = 0x1e8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8ae0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e8ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ae4: 0x0  nop
    ctx->pc = 0x1e8ae4u;
    // NOP
    // 0x1e8ae8: 0x4501ffbb  bc1t        . + 4 + (-0x45 << 2)
    ctx->pc = 0x1E8AE8u;
    {
        const bool branch_taken_0x1e8ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AE8u;
            // 0x1e8aec: 0xe6010164  swc1        $f1, 0x164($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ae8) {
            ctx->pc = 0x1E89D8u;
            runtime->cooperativeGuestYield();
            goto label_1e89d8;
        }
    }
    ctx->pc = 0x1E8AF0u;
label_1e8af0:
    // 0x1e8af0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8af4: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E8AF4u;
    {
        const bool branch_taken_0x1e8af4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E8AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AF4u;
            // 0x1e8af8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8af4) {
            ctx->pc = 0x1E8B80u;
            goto label_1e8b80;
        }
    }
    ctx->pc = 0x1E8AFCu;
    // 0x1e8afc: 0xda010070  lqc2        $vf1, 0x70($s0)
    ctx->pc = 0x1e8afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e8b00: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1e8b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b04: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e8b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8b08: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e8b08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b0c: 0xda020300  lqc2        $vf2, 0x300($s0)
    ctx->pc = 0x1e8b0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1e8b10: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e8b14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e8b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e8b18: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8b1c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e8b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b20: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8b24: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e8b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b28: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e8b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b2c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e8b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b30: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e8b30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e8b34: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8b34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e8b38: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e8b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b3c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b3cu;
    // NOP operation, no action needed for VU0
    // 0x1e8b40: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b40u;
    // NOP operation, no action needed for VU0
    // 0x1e8b44: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1e8b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b48: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8b4c: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e8b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b50: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e8b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8b54: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x1e8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x1e8b58: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1e8b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1e8b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8b60: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e8b60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8b64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8b70: 0x0  nop
    ctx->pc = 0x1e8b70u;
    // NOP
    // 0x1e8b74: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8B74u;
    {
        const bool branch_taken_0x1e8b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8b74) {
            ctx->pc = 0x1E8B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B74u;
            // 0x1e8b78: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8B84u;
            goto label_1e8b84;
        }
    }
    ctx->pc = 0x1E8B7Cu;
    // 0x1e8b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b80:
    // 0x1e8b80: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1e8b84:
    // 0x1e8b84: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e8b88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8B88u;
    {
        const bool branch_taken_0x1e8b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b88) {
            ctx->pc = 0x1E8BA0u;
            goto label_1e8ba0;
        }
    }
    ctx->pc = 0x1E8B90u;
    // 0x1e8b90: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E8B90u;
    SET_GPR_U32(ctx, 31, 0x1E8B98u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B98u; }
        if (ctx->pc != 0x1E8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B98u; }
        if (ctx->pc != 0x1E8B98u) { return; }
    }
    ctx->pc = 0x1E8B98u;
    // 0x1e8b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8B98u;
    {
        const bool branch_taken_0x1e8b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B98u;
            // 0x1e8b9c: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b98) {
            ctx->pc = 0x1E8BACu;
            goto label_1e8bac;
        }
    }
    ctx->pc = 0x1E8BA0u;
label_1e8ba0:
    // 0x1e8ba0: 0xc090d54  jal         func_243550
    ctx->pc = 0x1E8BA0u;
    SET_GPR_U32(ctx, 31, 0x1E8BA8u);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BA8u; }
        if (ctx->pc != 0x1E8BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BA8u; }
        if (ctx->pc != 0x1E8BA8u) { return; }
    }
    ctx->pc = 0x1E8BA8u;
    // 0x1e8ba8: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1e8ba8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e8bac:
    // 0x1e8bac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e8bb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8BB0u;
    {
        const bool branch_taken_0x1e8bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bb0) {
            ctx->pc = 0x1E8BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BB0u;
            // 0x1e8bb4: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8BB8u;
            goto label_1e8bb8;
        }
    }
    ctx->pc = 0x1E8BB8u;
label_1e8bb8:
    // 0x1e8bb8: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1e8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e8bbc: 0xa45100e0  sh          $s1, 0xE0($v0)
    ctx->pc = 0x1e8bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 17));
label_1e8bc0:
    // 0x1e8bc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e8bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e8bc4:
    // 0x1e8bc4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e8bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e8bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BCCu;
            // 0x1e8bd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88F0u: goto label_1e88f0;
            case 0x1E8908u: goto label_1e8908;
            case 0x1E899Cu: goto label_1e899c;
            case 0x1E89B8u: goto label_1e89b8;
            case 0x1E89D8u: goto label_1e89d8;
            case 0x1E89E0u: goto label_1e89e0;
            case 0x1E89ECu: goto label_1e89ec;
            case 0x1E8A10u: goto label_1e8a10;
            case 0x1E8AB0u: goto label_1e8ab0;
            case 0x1E8AC8u: goto label_1e8ac8;
            case 0x1E8AF0u: goto label_1e8af0;
            case 0x1E8B80u: goto label_1e8b80;
            case 0x1E8B84u: goto label_1e8b84;
            case 0x1E8BA0u: goto label_1e8ba0;
            case 0x1E8BACu: goto label_1e8bac;
            case 0x1E8BB8u: goto label_1e8bb8;
            case 0x1E8BC0u: goto label_1e8bc0;
            case 0x1E8BC4u: goto label_1e8bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8BD4u;
    // 0x1e8bd4: 0x0  nop
    ctx->pc = 0x1e8bd4u;
    // NOP
}

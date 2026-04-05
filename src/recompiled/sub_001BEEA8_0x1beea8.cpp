#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEEA8
// Address: 0x1beea8 - 0x1bf028
void sub_001BEEA8_0x1beea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEEA8_0x1beea8");
#endif

    ctx->pc = 0x1beea8u;

    // 0x1beea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1beea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1beeac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1beeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1beeb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1beeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1beeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1beeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1beeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1beebc: 0x8e050174  lw          $a1, 0x174($s0)
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1beec0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1beec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1beec4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1BEEC4u;
    {
        const bool branch_taken_0x1beec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEC4u;
            // 0x1beec8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beec4) {
            ctx->pc = 0x1BF000u;
            goto label_1bf000;
        }
    }
    ctx->pc = 0x1BEECCu;
    // 0x1beecc: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x1beeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1beed0: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1beed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1beed8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1beedc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1beedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1beee0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEEE0u;
    {
        const bool branch_taken_0x1beee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEE0u;
            // 0x1beee4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beee0) {
            ctx->pc = 0x1BEF10u;
            goto label_1bef10;
        }
    }
    ctx->pc = 0x1BEEE8u;
    // 0x1beee8: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x1beee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x1beeec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BEEECu;
    {
        const bool branch_taken_0x1beeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEECu;
            // 0x1beef0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeec) {
            ctx->pc = 0x1BEF4Cu;
            goto label_1bef4c;
        }
    }
    ctx->pc = 0x1BEEF4u;
    // 0x1beef4: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1beef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1beef8: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x1beef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x1beefc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1beefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1bef00: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1BEF00u;
    SET_GPR_U32(ctx, 31, 0x1BEF08u);
    ctx->pc = 0x1BEF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF00u;
            // 0x1bef04: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    }
    ctx->pc = 0x1BEF08u;
    // 0x1bef08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BEF08u;
    {
        const bool branch_taken_0x1bef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF08u;
            // 0x1bef0c: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef08) {
            ctx->pc = 0x1BEF48u;
            goto label_1bef48;
        }
    }
    ctx->pc = 0x1BEF10u;
label_1bef10:
    // 0x1bef10: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x1bef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x1bef14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEF14u;
    {
        const bool branch_taken_0x1bef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF14u;
            // 0x1bef18: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef14) {
            ctx->pc = 0x1BEF48u;
            goto label_1bef48;
        }
    }
    ctx->pc = 0x1BEF1Cu;
    // 0x1bef1c: 0x3c02fd80  lui         $v0, 0xFD80
    ctx->pc = 0x1bef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64896 << 16));
    // 0x1bef20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bef24: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1bef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1bef28: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1bef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1bef2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bef34: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1BEF34u;
    SET_GPR_U32(ctx, 31, 0x1BEF3Cu);
    ctx->pc = 0x1BEF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF34u;
            // 0x1bef38: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF3Cu; }
        if (ctx->pc != 0x1BEF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF3Cu; }
        if (ctx->pc != 0x1BEF3Cu) { return; }
    }
    ctx->pc = 0x1BEF3Cu;
    // 0x1bef3c: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1bef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1bef40: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1bef40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x1bef44: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1bef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
label_1bef48:
    // 0x1bef48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1bef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1bef4c:
    // 0x1bef4c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1bef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1bef50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF50u;
    {
        const bool branch_taken_0x1bef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef50) {
            ctx->pc = 0x1BEF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF50u;
            // 0x1bef54: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEF68u;
            goto label_1bef68;
        }
    }
    ctx->pc = 0x1BEF58u;
    // 0x1bef58: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bef5c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1bef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1bef60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF60u;
    {
        const bool branch_taken_0x1bef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF60u;
            // 0x1bef64: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef60) {
            ctx->pc = 0x1BEF78u;
            goto label_1bef78;
        }
    }
    ctx->pc = 0x1BEF68u;
label_1bef68:
    // 0x1bef68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bef68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bef6c: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x1bef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x1bef70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bef74: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1bef74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
label_1bef78:
    // 0x1bef78: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1bef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bef7c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1bef80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bef84: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BEF84u;
    {
        const bool branch_taken_0x1bef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef84) {
            ctx->pc = 0x1BEF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF84u;
            // 0x1bef88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BEF8Cu;
    // 0x1bef8c: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1bef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1bef90: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1bef94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEF94u;
    {
        const bool branch_taken_0x1bef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF94u;
            // 0x1bef98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef94) {
            ctx->pc = 0x1BEFB0u;
            goto label_1befb0;
        }
    }
    ctx->pc = 0x1BEF9Cu;
    // 0x1bef9c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1BEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEFA4u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFA4u; }
        if (ctx->pc != 0x1BEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFA4u; }
        if (ctx->pc != 0x1BEFA4u) { return; }
    }
    ctx->pc = 0x1BEFA4u;
    // 0x1befa4: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1befa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1befa8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1befa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1befac: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1befacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1befb0:
    // 0x1befb0: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BEFB0u;
    {
        const bool branch_taken_0x1befb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1befb0) {
            ctx->pc = 0x1BEFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFB0u;
            // 0x1befb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BEFB8u;
    // 0x1befb8: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1befb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1befbc: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1befc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEFC0u;
    {
        const bool branch_taken_0x1befc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFC0u;
            // 0x1befc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befc0) {
            ctx->pc = 0x1BEFE8u;
            goto label_1befe8;
        }
    }
    ctx->pc = 0x1BEFC8u;
    // 0x1befc8: 0xc090d58  jal         func_243560
    ctx->pc = 0x1BEFC8u;
    SET_GPR_U32(ctx, 31, 0x1BEFD0u);
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFD0u; }
        if (ctx->pc != 0x1BEFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFD0u; }
        if (ctx->pc != 0x1BEFD0u) { return; }
    }
    ctx->pc = 0x1BEFD0u;
    // 0x1befd0: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x1befd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1befd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1befd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1befd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1befd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1befdc: 0x0  nop
    ctx->pc = 0x1befdcu;
    // NOP
    // 0x1befe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BEFE0u;
    {
        const bool branch_taken_0x1befe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1befe0) {
            ctx->pc = 0x1BEFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFE0u;
            // 0x1befe4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEFE8u;
            goto label_1befe8;
        }
    }
    ctx->pc = 0x1BEFE8u;
label_1befe8:
    // 0x1befe8: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEFE8u;
    {
        const bool branch_taken_0x1befe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1befe8) {
            ctx->pc = 0x1BEFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFE8u;
            // 0x1befec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BEFF0u;
    // 0x1beff0: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1BEFF0u;
    SET_GPR_U32(ctx, 31, 0x1BEFF8u);
    ctx->pc = 0x1BEFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFF0u;
            // 0x1beff4: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFF8u; }
        if (ctx->pc != 0x1BEFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFF8u; }
        if (ctx->pc != 0x1BEFF8u) { return; }
    }
    ctx->pc = 0x1BEFF8u;
    // 0x1beff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEFF8u;
    {
        const bool branch_taken_0x1beff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFF8u;
            // 0x1beffc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beff8) {
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BF000u;
label_1bf000:
    // 0x1bf000: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1bf004: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x1bf004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x1bf008: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1bf008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1bf00c: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1bf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1bf010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf014:
    // 0x1bf014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF01Cu;
            // 0x1bf020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEF10u: goto label_1bef10;
            case 0x1BEF48u: goto label_1bef48;
            case 0x1BEF4Cu: goto label_1bef4c;
            case 0x1BEF68u: goto label_1bef68;
            case 0x1BEF78u: goto label_1bef78;
            case 0x1BEFB0u: goto label_1befb0;
            case 0x1BEFE8u: goto label_1befe8;
            case 0x1BF000u: goto label_1bf000;
            case 0x1BF014u: goto label_1bf014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF024u;
    // 0x1bf024: 0x0  nop
    ctx->pc = 0x1bf024u;
    // NOP
}

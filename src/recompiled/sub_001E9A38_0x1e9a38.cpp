#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9A38
// Address: 0x1e9a38 - 0x1ea0b8
void sub_001E9A38_0x1e9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9A38_0x1e9a38");
#endif

    ctx->pc = 0x1e9a38u;

    // 0x1e9a38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e9a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e9a3c: 0x3c030203  lui         $v1, 0x203
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)515 << 16));
    // 0x1e9a40: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e9a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e9a44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1e9a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1e9a48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e9a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a50: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1e9a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1e9a54: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x1e9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x1e9a58: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e9a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e9a5c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a60: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e9a64: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e9a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e9a68: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e9a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e9a6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e9a70: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e9a74: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1e9a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9a78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e9a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e9a7c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1e9a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1e9a80: 0x4c10009  bgez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9A80u;
    {
        const bool branch_taken_0x1e9a80 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E9A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A80u;
            // 0x1e9a84: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a80) {
            ctx->pc = 0x1E9AA8u;
            goto label_1e9aa8;
        }
    }
    ctx->pc = 0x1E9A88u;
    // 0x1e9a88: 0x30c2004c  andi        $v0, $a2, 0x4C
    ctx->pc = 0x1e9a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)76);
    // 0x1e9a8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9A8Cu;
    {
        const bool branch_taken_0x1e9a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a8c) {
            ctx->pc = 0x1E9A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A8Cu;
            // 0x1e9a90: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9AA8u;
            goto label_1e9aa8;
        }
    }
    ctx->pc = 0x1E9A94u;
    // 0x1e9a94: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9a98: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1e9a9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A9Cu;
    {
        const bool branch_taken_0x1e9a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a9c) {
            ctx->pc = 0x1E9AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A9Cu;
            // 0x1e9aa0: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9AACu;
            goto label_1e9aac;
        }
    }
    ctx->pc = 0x1E9AA4u;
    // 0x1e9aa4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1e9aa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9aa8:
    // 0x1e9aa8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1e9aac:
    // 0x1e9aac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9ab0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1e9ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ab8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e9abc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1e9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1e9ac0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9AC0u;
    {
        const bool branch_taken_0x1e9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AC0u;
            // 0x1e9ac4: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ac0) {
            ctx->pc = 0x1E9AE8u;
            goto label_1e9ae8;
        }
    }
    ctx->pc = 0x1E9AC8u;
    // 0x1e9ac8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1e9ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1e9acc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9ACCu;
    {
        const bool branch_taken_0x1e9acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9acc) {
            ctx->pc = 0x1E9AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9ACCu;
            // 0x1e9ad0: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9AECu;
            goto label_1e9aec;
        }
    }
    ctx->pc = 0x1E9AD4u;
    // 0x1e9ad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e9ad8: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e9ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e9adc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1e9adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1e9ae0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1e9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e9ae4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
label_1e9ae8:
    // 0x1e9ae8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1e9aec:
    // 0x1e9aec: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1e9aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1e9af0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9AF0u;
    {
        const bool branch_taken_0x1e9af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AF0u;
            // 0x1e9af4: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9af0) {
            ctx->pc = 0x1E9B08u;
            goto label_1e9b08;
        }
    }
    ctx->pc = 0x1E9AF8u;
    // 0x1e9af8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1e9af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e9afc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9AFCu;
    {
        const bool branch_taken_0x1e9afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9afc) {
            ctx->pc = 0x1E9B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AFCu;
            // 0x1e9b00: 0x3c120002  lui         $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9B04u;
            goto label_1e9b04;
        }
    }
    ctx->pc = 0x1E9B04u;
label_1e9b04:
    // 0x1e9b04: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e9b08:
    // 0x1e9b08: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E9B08u;
    {
        const bool branch_taken_0x1e9b08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E9B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B08u;
            // 0x1e9b0c: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b08) {
            ctx->pc = 0x1E9B3Cu;
            goto label_1e9b3c;
        }
    }
    ctx->pc = 0x1E9B10u;
    // 0x1e9b10: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e9b14: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e9b18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9B18u;
    {
        const bool branch_taken_0x1e9b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B18u;
            // 0x1e9b1c: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b18) {
            ctx->pc = 0x1E9B3Cu;
            goto label_1e9b3c;
        }
    }
    ctx->pc = 0x1E9B20u;
    // 0x1e9b20: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E9B20u;
    SET_GPR_U32(ctx, 31, 0x1E9B28u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B28u; }
        if (ctx->pc != 0x1E9B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B28u; }
        if (ctx->pc != 0x1E9B28u) { return; }
    }
    ctx->pc = 0x1E9B28u;
    // 0x1e9b28: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1e9b2c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1e9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1e9b30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9B30u;
    {
        const bool branch_taken_0x1e9b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b30) {
            ctx->pc = 0x1E9B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B30u;
            // 0x1e9b34: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9B44u;
            goto label_1e9b44;
        }
    }
    ctx->pc = 0x1E9B38u;
    // 0x1e9b38: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1e9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1e9b3c:
    // 0x1e9b3c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1e9b3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1e9b40: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1e9b44:
    // 0x1e9b44: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e9b48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9B48u;
    {
        const bool branch_taken_0x1e9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B48u;
            // 0x1e9b4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b48) {
            ctx->pc = 0x1E9B64u;
            goto label_1e9b64;
        }
    }
    ctx->pc = 0x1E9B50u;
    // 0x1e9b50: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E9B50u;
    SET_GPR_U32(ctx, 31, 0x1E9B58u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B58u; }
        if (ctx->pc != 0x1E9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B58u; }
        if (ctx->pc != 0x1E9B58u) { return; }
    }
    ctx->pc = 0x1E9B58u;
    // 0x1e9b58: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1e9b58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1e9b5c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1e9b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1e9b60: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1e9b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e9b64:
    // 0x1e9b64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9B64u;
    {
        const bool branch_taken_0x1e9b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B64u;
            // 0x1e9b68: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b64) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B6Cu;
    // 0x1e9b6c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1e9b6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1e9b70:
    // 0x1e9b70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e9b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b74: 0x0  nop
    ctx->pc = 0x1e9b74u;
    // NOP
label_1e9b78:
    // 0x1e9b78: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9B78u;
    {
        const bool branch_taken_0x1e9b78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B78u;
            // 0x1e9b7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b78) {
            ctx->pc = 0x1E9B94u;
            goto label_1e9b94;
        }
    }
    ctx->pc = 0x1E9B80u;
    // 0x1e9b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b84: 0xc078888  jal         func_1E2220
    ctx->pc = 0x1E9B84u;
    SET_GPR_U32(ctx, 31, 0x1E9B8Cu);
    ctx->pc = 0x1E9B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B84u;
            // 0x1e9b88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2220u;
    if (runtime->hasFunction(0x1E2220u)) {
        auto targetFn = runtime->lookupFunction(0x1E2220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B8Cu; }
        if (ctx->pc != 0x1E9B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2220_0x1e2220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B8Cu; }
        if (ctx->pc != 0x1E9B8Cu) { return; }
    }
    ctx->pc = 0x1E9B8Cu;
    // 0x1e9b8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e9b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b94:
    // 0x1e9b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e9b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ba0: 0xc078552  jal         func_1E1548
    ctx->pc = 0x1E9BA0u;
    SET_GPR_U32(ctx, 31, 0x1E9BA8u);
    ctx->pc = 0x1E9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BA0u;
            // 0x1e9ba4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1548u;
    if (runtime->hasFunction(0x1E1548u)) {
        auto targetFn = runtime->lookupFunction(0x1E1548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9BA8u; }
        if (ctx->pc != 0x1E9BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1548_0x1e1548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9BA8u; }
        if (ctx->pc != 0x1E9BA8u) { return; }
    }
    ctx->pc = 0x1E9BA8u;
    // 0x1e9ba8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1e9ba8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1e9bac: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E9BACu;
    {
        const bool branch_taken_0x1e9bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BACu;
            // 0x1e9bb0: 0x32220032  andi        $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bac) {
            ctx->pc = 0x1E9C38u;
            goto label_1e9c38;
        }
    }
    ctx->pc = 0x1E9BB4u;
    // 0x1e9bb4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9bb8: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e9bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e9bbc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9BBCu;
    {
        const bool branch_taken_0x1e9bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BBCu;
            // 0x1e9bc0: 0x32220032  andi        $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bbc) {
            ctx->pc = 0x1E9C38u;
            goto label_1e9c38;
        }
    }
    ctx->pc = 0x1E9BC4u;
    // 0x1e9bc4: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9bc8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9bcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E9BCCu;
    {
        const bool branch_taken_0x1e9bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BCCu;
            // 0x1e9bd0: 0x32220032  andi        $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bcc) {
            ctx->pc = 0x1E9C38u;
            goto label_1e9c38;
        }
    }
    ctx->pc = 0x1E9BD4u;
    // 0x1e9bd4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1e9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1e9bd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9bdc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9BDCu;
    {
        const bool branch_taken_0x1e9bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BDCu;
            // 0x1e9be0: 0x32220032  andi        $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bdc) {
            ctx->pc = 0x1E9C38u;
            goto label_1e9c38;
        }
    }
    ctx->pc = 0x1E9BE4u;
    // 0x1e9be4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1e9be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e9be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9bf0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e9bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9bf4: 0x0  nop
    ctx->pc = 0x1e9bf4u;
    // NOP
    // 0x1e9bf8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E9BF8u;
    {
        const bool branch_taken_0x1e9bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BF8u;
            // 0x1e9bfc: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bf8) {
            ctx->pc = 0x1E9C38u;
            goto label_1e9c38;
        }
    }
    ctx->pc = 0x1E9C00u;
    // 0x1e9c00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e9c04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e9c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e9c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9c0c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1e9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1e9c10: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1e9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1e9c14: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1e9c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1e9c18: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1e9c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1e9c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9c20: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9c24: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1e9c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e9c28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e9c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e9c2c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e9c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1e9c30: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1e9c34: 0x32220032  andi        $v0, $s1, 0x32
    ctx->pc = 0x1e9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)50);
label_1e9c38:
    // 0x1e9c38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9C38u;
    {
        const bool branch_taken_0x1e9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c38) {
            ctx->pc = 0x1E9C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C38u;
            // 0x1e9c3c: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9C50u;
            goto label_1e9c50;
        }
    }
    ctx->pc = 0x1E9C40u;
    // 0x1e9c40: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9c44: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e9c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e9c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9C48u;
    {
        const bool branch_taken_0x1e9c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C48u;
            // 0x1e9c4c: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c48) {
            ctx->pc = 0x1E9C60u;
            goto label_1e9c60;
        }
    }
    ctx->pc = 0x1E9C50u;
label_1e9c50:
    // 0x1e9c50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e9c54: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1e9c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x1e9c58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e9c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9c5c: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1e9c60:
    // 0x1e9c60: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9c64: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1e9c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1e9c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9C68u;
    {
        const bool branch_taken_0x1e9c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C68u;
            // 0x1e9c6c: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c68) {
            ctx->pc = 0x1E9C80u;
            goto label_1e9c80;
        }
    }
    ctx->pc = 0x1E9C70u;
    // 0x1e9c70: 0xc072576  jal         func_1C95D8
    ctx->pc = 0x1E9C70u;
    SET_GPR_U32(ctx, 31, 0x1E9C78u);
    ctx->pc = 0x1E9C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C70u;
            // 0x1e9c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C95D8u;
    if (runtime->hasFunction(0x1C95D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C95D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C78u; }
        if (ctx->pc != 0x1E9C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C95D8_0x1c95d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C78u; }
        if (ctx->pc != 0x1E9C78u) { return; }
    }
    ctx->pc = 0x1E9C78u;
    // 0x1e9c78: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1E9C78u;
    {
        const bool branch_taken_0x1e9c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C78u;
            // 0x1e9c7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c78) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9C80u;
label_1e9c80:
    // 0x1e9c80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e9c84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9c88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9C88u;
    {
        const bool branch_taken_0x1e9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C88u;
            // 0x1e9c8c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c88) {
            ctx->pc = 0x1E9C9Cu;
            goto label_1e9c9c;
        }
    }
    ctx->pc = 0x1E9C90u;
    // 0x1e9c90: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1e9c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1e9c94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9C94u;
    {
        const bool branch_taken_0x1e9c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C94u;
            // 0x1e9c98: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c94) {
            ctx->pc = 0x1E9CB4u;
            goto label_1e9cb4;
        }
    }
    ctx->pc = 0x1E9C9Cu;
label_1e9c9c:
    // 0x1e9c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9C9Cu;
    {
        const bool branch_taken_0x1e9c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C9Cu;
            // 0x1e9ca0: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c9c) {
            ctx->pc = 0x1E9CB4u;
            goto label_1e9cb4;
        }
    }
    ctx->pc = 0x1E9CA4u;
    // 0x1e9ca4: 0xc06fc0a  jal         func_1BF028
    ctx->pc = 0x1E9CA4u;
    SET_GPR_U32(ctx, 31, 0x1E9CACu);
    ctx->pc = 0x1E9CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CA4u;
            // 0x1e9ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF028u;
    if (runtime->hasFunction(0x1BF028u)) {
        auto targetFn = runtime->lookupFunction(0x1BF028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CACu; }
        if (ctx->pc != 0x1E9CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF028_0x1bf028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CACu; }
        if (ctx->pc != 0x1E9CACu) { return; }
    }
    ctx->pc = 0x1E9CACu;
    // 0x1e9cac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1E9CACu;
    {
        const bool branch_taken_0x1e9cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CACu;
            // 0x1e9cb0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cac) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9CB4u;
label_1e9cb4:
    // 0x1e9cb4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1e9cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1e9cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9CB8u;
    {
        const bool branch_taken_0x1e9cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CB8u;
            // 0x1e9cbc: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cb8) {
            ctx->pc = 0x1E9CD0u;
            goto label_1e9cd0;
        }
    }
    ctx->pc = 0x1E9CC0u;
    // 0x1e9cc0: 0xc0729d2  jal         func_1CA748
    ctx->pc = 0x1E9CC0u;
    SET_GPR_U32(ctx, 31, 0x1E9CC8u);
    ctx->pc = 0x1E9CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CC0u;
            // 0x1e9cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA748u;
    if (runtime->hasFunction(0x1CA748u)) {
        auto targetFn = runtime->lookupFunction(0x1CA748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CC8u; }
        if (ctx->pc != 0x1E9CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA748_0x1ca748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CC8u; }
        if (ctx->pc != 0x1E9CC8u) { return; }
    }
    ctx->pc = 0x1E9CC8u;
    // 0x1e9cc8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1E9CC8u;
    {
        const bool branch_taken_0x1e9cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CC8u;
            // 0x1e9ccc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cc8) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9CD0u;
label_1e9cd0:
    // 0x1e9cd0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e9cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1e9cd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9CD4u;
    {
        const bool branch_taken_0x1e9cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cd4) {
            ctx->pc = 0x1E9CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CD4u;
            // 0x1e9cd8: 0xda0400e0  lqc2        $vf4, 0xE0($s0) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9CECu;
            goto label_1e9cec;
        }
    }
    ctx->pc = 0x1E9CDCu;
    // 0x1e9cdc: 0xc071ecc  jal         func_1C7B30
    ctx->pc = 0x1E9CDCu;
    SET_GPR_U32(ctx, 31, 0x1E9CE4u);
    ctx->pc = 0x1E9CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CDCu;
            // 0x1e9ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B30u;
    if (runtime->hasFunction(0x1C7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1C7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CE4u; }
        if (ctx->pc != 0x1E9CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7B30_0x1c7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CE4u; }
        if (ctx->pc != 0x1E9CE4u) { return; }
    }
    ctx->pc = 0x1E9CE4u;
    // 0x1e9ce4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1E9CE4u;
    {
        const bool branch_taken_0x1e9ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CE4u;
            // 0x1e9ce8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ce4) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9CECu;
label_1e9cec:
    // 0x1e9cec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e9cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9cf0: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1e9cf0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9cf4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e9cf4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9cfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9cfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9d00: 0x0  nop
    ctx->pc = 0x1e9d00u;
    // NOP
    // 0x1e9d04: 0x450000a8  bc1f        . + 4 + (0xA8 << 2)
    ctx->pc = 0x1E9D04u;
    {
        const bool branch_taken_0x1e9d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D04u;
            // 0x1e9d08: 0xdba30000  lqc2        $vf3, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d04) {
            ctx->pc = 0x1E9FA8u;
            goto label_1e9fa8;
        }
    }
    ctx->pc = 0x1E9D0Cu;
    // 0x1e9d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d10: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1e9d10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e9d14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d18: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1e9d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9d1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e9d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d20: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1e9d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e9d24: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x1E9D24u;
    SET_GPR_U32(ctx, 31, 0x1E9D2Cu);
    ctx->pc = 0x1E9D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D24u;
            // 0x1e9d28: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D2Cu; }
        if (ctx->pc != 0x1E9D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D2Cu; }
        if (ctx->pc != 0x1E9D2Cu) { return; }
    }
    ctx->pc = 0x1E9D2Cu;
    // 0x1e9d2c: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1e9d2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9d30: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1E9D30u;
    {
        const bool branch_taken_0x1e9d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D30u;
            // 0x1e9d34: 0xdba40030  lqc2        $vf4, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d30) {
            ctx->pc = 0x1E9E88u;
            goto label_1e9e88;
        }
    }
    ctx->pc = 0x1E9D38u;
    // 0x1e9d38: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E9D38u;
    {
        const bool branch_taken_0x1e9d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D38u;
            // 0x1e9d3c: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d38) {
            ctx->pc = 0x1E9E38u;
            goto label_1e9e38;
        }
    }
    ctx->pc = 0x1E9D40u;
label_1e9d40:
    // 0x1e9d40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e9d44: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x1e9d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x1e9d48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e9d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9d4c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1e9d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1e9d50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E9D50u;
    {
        const bool branch_taken_0x1e9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D50u;
            // 0x1e9d54: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d50) {
            ctx->pc = 0x1E9D8Cu;
            goto label_1e9d8c;
        }
    }
    ctx->pc = 0x1E9D58u;
label_1e9d58:
    // 0x1e9d58: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1e9d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e9d5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9D5Cu;
    {
        const bool branch_taken_0x1e9d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D5Cu;
            // 0x1e9d60: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d5c) {
            ctx->pc = 0x1E9D8Cu;
            goto label_1e9d8c;
        }
    }
    ctx->pc = 0x1E9D64u;
    // 0x1e9d64: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1e9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1e9d68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e9d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e9d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9d70: 0x3c013f96  lui         $at, 0x3F96
    ctx->pc = 0x1e9d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16278 << 16));
    // 0x1e9d74: 0x3421872b  ori         $at, $at, 0x872B
    ctx->pc = 0x1e9d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34603);
    // 0x1e9d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9d7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e9d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e9d80: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1e9d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1e9d84: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1e9d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1e9d88: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
label_1e9d8c:
    // 0x1e9d8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e9d90: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1e9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1e9d94: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e9d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9da0: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1e9da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e9da4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9DA4u;
    {
        const bool branch_taken_0x1e9da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DA4u;
            // 0x1e9da8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9da4) {
            ctx->pc = 0x1E9DDCu;
            goto label_1e9ddc;
        }
    }
    ctx->pc = 0x1E9DACu;
    // 0x1e9dac: 0x7a020210  lq          $v0, 0x210($s0)
    ctx->pc = 0x1e9dacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1e9db0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1e9db4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e9db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e9db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9dbc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e9dbcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9dc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9dc8: 0x0  nop
    ctx->pc = 0x1e9dc8u;
    // NOP
    // 0x1e9dcc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9DCCu;
    {
        const bool branch_taken_0x1e9dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9dcc) {
            ctx->pc = 0x1E9DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DCCu;
            // 0x1e9dd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9DD8u;
            goto label_1e9dd8;
        }
    }
    ctx->pc = 0x1E9DD4u;
    // 0x1e9dd4: 0x0  nop
    ctx->pc = 0x1e9dd4u;
    // NOP
label_1e9dd8:
    // 0x1e9dd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1e9ddc:
    // 0x1e9ddc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1e9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9de0: 0xc4405ed8  lwc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1e9de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9de4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9de8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E9DE8u;
    {
        const bool branch_taken_0x1e9de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9de8) {
            ctx->pc = 0x1E9E28u;
            goto label_1e9e28;
        }
    }
    ctx->pc = 0x1E9DF0u;
    // 0x1e9df0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9DF0u;
    {
        const bool branch_taken_0x1e9df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9df0) {
            ctx->pc = 0x1E9E28u;
            goto label_1e9e28;
        }
    }
    ctx->pc = 0x1E9DF8u;
    // 0x1e9df8: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1e9df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e9dfc: 0x4b040040  vaddx.x     $vf1, $vf0, $vf4x
    ctx->pc = 0x1e9dfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9e00: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9e04: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1e9e04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9e08: 0x4a440042  vaddz.z     $vf1, $vf0, $vf4z
    ctx->pc = 0x1e9e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9e0c: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1e9e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1e9e10: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1E9E10u;
    {
        const bool branch_taken_0x1e9e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E10u;
            // 0x1e9e14: 0xfa0100e0  sqc2        $vf1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e10) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9E18u;
    // 0x1e9e18: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1E9E18u;
    SET_GPR_U32(ctx, 31, 0x1E9E20u);
    ctx->pc = 0x1E9E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E18u;
            // 0x1e9e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E20u; }
        if (ctx->pc != 0x1E9E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E20u; }
        if (ctx->pc != 0x1E9E20u) { return; }
    }
    ctx->pc = 0x1E9E20u;
    // 0x1e9e20: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1E9E20u;
    {
        const bool branch_taken_0x1e9e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e20) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9E28u;
label_1e9e28:
    // 0x1e9e28: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1E9E28u;
    SET_GPR_U32(ctx, 31, 0x1E9E30u);
    ctx->pc = 0x1E9E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E28u;
            // 0x1e9e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E30u; }
        if (ctx->pc != 0x1E9E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E30u; }
        if (ctx->pc != 0x1E9E30u) { return; }
    }
    ctx->pc = 0x1E9E30u;
    // 0x1e9e30: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1E9E30u;
    {
        const bool branch_taken_0x1e9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e30) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9E38u;
label_1e9e38:
    // 0x1e9e38: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1e9e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1e9e3c: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1E9E3Cu;
    {
        const bool branch_taken_0x1e9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E3Cu;
            // 0x1e9e40: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e3c) {
            ctx->pc = 0x1E9D58u;
            runtime->cooperativeGuestYield();
            goto label_1e9d58;
        }
    }
    ctx->pc = 0x1E9E44u;
    // 0x1e9e44: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1e9e44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e9e48: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e9e48u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9e50: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e9e50u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e9e54: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e9e54u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9e60: 0x0  nop
    ctx->pc = 0x1e9e60u;
    // NOP
    // 0x1e9e64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9E64u;
    {
        const bool branch_taken_0x1e9e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E64u;
            // 0x1e9e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e64) {
            ctx->pc = 0x1E9E70u;
            goto label_1e9e70;
        }
    }
    ctx->pc = 0x1E9E6Cu;
    // 0x1e9e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e70:
    // 0x1e9e70: 0x5040ffb3  beql        $v0, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1E9E70u;
    {
        const bool branch_taken_0x1e9e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e70) {
            ctx->pc = 0x1E9E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E70u;
            // 0x1e9e74: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9D40u;
            runtime->cooperativeGuestYield();
            goto label_1e9d40;
        }
    }
    ctx->pc = 0x1E9E78u;
    // 0x1e9e78: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1e9e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9e7c: 0xfa0400e0  sqc2        $vf4, 0xE0($s0)
    ctx->pc = 0x1e9e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9e80: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1E9E80u;
    {
        const bool branch_taken_0x1e9e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E80u;
            // 0x1e9e84: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e80) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9E88u;
label_1e9e88:
    // 0x1e9e88: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e9e8c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1e9e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1e9e90: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e9e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e9e94: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e9e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9e98: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e9e9c: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1e9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1e9ea0: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x1e9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x1e9ea4: 0x248412c8  addiu       $a0, $a0, 0x12C8
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4808));
    // 0x1e9ea8: 0x2b22825  or          $a1, $s5, $s2
    ctx->pc = 0x1e9ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 18));
    // 0x1e9eac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9eb0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1e9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1e9eb4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e9eb8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1e9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1e9ebc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1e9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1e9ec0: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1e9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1e9ec4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e9ec8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e9ecc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e9ed0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e9ed4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e9ed8: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1e9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1e9edc: 0x7a050110  lq          $a1, 0x110($s0)
    ctx->pc = 0x1e9edcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e9ee0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E9EE0u;
    SET_GPR_U32(ctx, 31, 0x1E9EE8u);
    ctx->pc = 0x1E9EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EE0u;
            // 0x1e9ee4: 0x7ba60000  lq          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EE8u; }
        if (ctx->pc != 0x1E9EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EE8u; }
        if (ctx->pc != 0x1E9EE8u) { return; }
    }
    ctx->pc = 0x1E9EE8u;
    // 0x1e9ee8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9EE8u;
    {
        const bool branch_taken_0x1e9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EE8u;
            // 0x1e9eec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ee8) {
            ctx->pc = 0x1E9F00u;
            goto label_1e9f00;
        }
    }
    ctx->pc = 0x1E9EF0u;
    // 0x1e9ef0: 0x1262004f  beq         $s3, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1E9EF0u;
    {
        const bool branch_taken_0x1e9ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EF0u;
            // 0x1e9ef4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ef0) {
            ctx->pc = 0x1EA030u;
            goto label_1ea030;
        }
    }
    ctx->pc = 0x1E9EF8u;
    // 0x1e9ef8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E9EF8u;
    {
        const bool branch_taken_0x1e9ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ef8) {
            ctx->pc = 0x1EA03Cu;
            goto label_1ea03c;
        }
    }
    ctx->pc = 0x1E9F00u;
label_1e9f00:
    // 0x1e9f00: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9f04: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e9f08: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E9F08u;
    {
        const bool branch_taken_0x1e9f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F08u;
            // 0x1e9f0c: 0x30620380  andi        $v0, $v1, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f08) {
            ctx->pc = 0x1EA070u;
            goto label_1ea070;
        }
    }
    ctx->pc = 0x1E9F10u;
    // 0x1e9f10: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E9F10u;
    {
        const bool branch_taken_0x1e9f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F10u;
            // 0x1e9f14: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f10) {
            ctx->pc = 0x1EA070u;
            goto label_1ea070;
        }
    }
    ctx->pc = 0x1E9F18u;
    // 0x1e9f18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9F18u;
    {
        const bool branch_taken_0x1e9f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f18) {
            ctx->pc = 0x1E9F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F18u;
            // 0x1e9f1c: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9F30u;
            goto label_1e9f30;
        }
    }
    ctx->pc = 0x1E9F20u;
    // 0x1e9f20: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9f24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e9f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e9f28: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e9f2c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1e9f30:
    // 0x1e9f30: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1e9f34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e9f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9f38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9F38u;
    {
        const bool branch_taken_0x1e9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F38u;
            // 0x1e9f3c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f38) {
            ctx->pc = 0x1E9F64u;
            goto label_1e9f64;
        }
    }
    ctx->pc = 0x1E9F40u;
    // 0x1e9f40: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e9f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e9f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9f48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9F48u;
    {
        const bool branch_taken_0x1e9f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f48) {
            ctx->pc = 0x1E9F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F48u;
            // 0x1e9f4c: 0x8e0502d8  lw          $a1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9F68u;
            goto label_1e9f68;
        }
    }
    ctx->pc = 0x1E9F50u;
    // 0x1e9f50: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1e9f50u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f54: 0xc0725d6  jal         func_1C9758
    ctx->pc = 0x1E9F54u;
    SET_GPR_U32(ctx, 31, 0x1E9F5Cu);
    ctx->pc = 0x1E9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F54u;
            // 0x1e9f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9758u;
    if (runtime->hasFunction(0x1C9758u)) {
        auto targetFn = runtime->lookupFunction(0x1C9758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F5Cu; }
        if (ctx->pc != 0x1E9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9758_0x1c9758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F5Cu; }
        if (ctx->pc != 0x1E9F5Cu) { return; }
    }
    ctx->pc = 0x1E9F5Cu;
    // 0x1e9f5c: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E9F5Cu;
    {
        const bool branch_taken_0x1e9f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f5c) {
            ctx->pc = 0x1E9F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F5Cu;
            // 0x1e9f60: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA074u;
            goto label_1ea074;
        }
    }
    ctx->pc = 0x1E9F64u;
label_1e9f64:
    // 0x1e9f64: 0x8e0502d8  lw          $a1, 0x2D8($s0)
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1e9f68:
    // 0x1e9f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f6c: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x1e9f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1e9f70: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1E9F70u;
    SET_GPR_U32(ctx, 31, 0x1E9F78u);
    ctx->pc = 0x1E9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F70u;
            // 0x1e9f74: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F78u; }
        if (ctx->pc != 0x1E9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F78u; }
        if (ctx->pc != 0x1E9F78u) { return; }
    }
    ctx->pc = 0x1E9F78u;
    // 0x1e9f78: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1E9F78u;
    {
        const bool branch_taken_0x1e9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F78u;
            // 0x1e9f7c: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f78) {
            ctx->pc = 0x1EA074u;
            goto label_1ea074;
        }
    }
    ctx->pc = 0x1E9F80u;
label_1e9f80:
    // 0x1e9f80: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e9f84: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x1e9f84u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9f90: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x1e9f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f94: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1e9f98: 0xc07a1ca  jal         func_1E8728
    ctx->pc = 0x1E9F98u;
    SET_GPR_U32(ctx, 31, 0x1E9FA0u);
    ctx->pc = 0x1E9F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F98u;
            // 0x1e9f9c: 0xe60002b4  swc1        $f0, 0x2B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8728u;
    if (runtime->hasFunction(0x1E8728u)) {
        auto targetFn = runtime->lookupFunction(0x1E8728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FA0u; }
        if (ctx->pc != 0x1E9FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8728_0x1e8728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FA0u; }
        if (ctx->pc != 0x1E9FA0u) { return; }
    }
    ctx->pc = 0x1E9FA0u;
    // 0x1e9fa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9FA0u;
    {
        const bool branch_taken_0x1e9fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fa0) {
            ctx->pc = 0x1E9FC0u;
            goto label_1e9fc0;
        }
    }
    ctx->pc = 0x1E9FA8u;
label_1e9fa8:
    // 0x1e9fa8: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1e9fa8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e9fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e9fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fb8: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x1E9FB8u;
    SET_GPR_U32(ctx, 31, 0x1E9FC0u);
    ctx->pc = 0x1E9FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FB8u;
            // 0x1e9fbc: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FC0u; }
        if (ctx->pc != 0x1E9FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FC0u; }
        if (ctx->pc != 0x1E9FC0u) { return; }
    }
    ctx->pc = 0x1E9FC0u;
label_1e9fc0:
    // 0x1e9fc0: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e9fc4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1e9fc8: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e9fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e9fcc: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e9fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9fd0: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e9fd4: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1e9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1e9fd8: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x1e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x1e9fdc: 0x248412c8  addiu       $a0, $a0, 0x12C8
    ctx->pc = 0x1e9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4808));
    // 0x1e9fe0: 0x2b22825  or          $a1, $s5, $s2
    ctx->pc = 0x1e9fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 18));
    // 0x1e9fe4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9fe8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1e9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1e9fec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e9ff0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1e9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1e9ff4: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1e9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1e9ff8: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1e9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1e9ffc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1ea000: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1ea004: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ea004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ea008: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ea008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1ea00c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1ea00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1ea010: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1ea014: 0x7a050110  lq          $a1, 0x110($s0)
    ctx->pc = 0x1ea014u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ea018: 0xc047864  jal         func_11E190
    ctx->pc = 0x1EA018u;
    SET_GPR_U32(ctx, 31, 0x1EA020u);
    ctx->pc = 0x1EA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA018u;
            // 0x1ea01c: 0x7ba60000  lq          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA020u; }
        if (ctx->pc != 0x1EA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA020u; }
        if (ctx->pc != 0x1EA020u) { return; }
    }
    ctx->pc = 0x1EA020u;
    // 0x1ea020: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EA020u;
    {
        const bool branch_taken_0x1ea020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA020u;
            // 0x1ea024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea020) {
            ctx->pc = 0x1EA070u;
            goto label_1ea070;
        }
    }
    ctx->pc = 0x1EA028u;
    // 0x1ea028: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA028u;
    {
        const bool branch_taken_0x1ea028 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA028u;
            // 0x1ea02c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea028) {
            ctx->pc = 0x1EA03Cu;
            goto label_1ea03c;
        }
    }
    ctx->pc = 0x1EA030u;
label_1ea030:
    // 0x1ea030: 0x7a020110  lq          $v0, 0x110($s0)
    ctx->pc = 0x1ea030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ea034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EA034u;
    {
        const bool branch_taken_0x1ea034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA034u;
            // 0x1ea038: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea034) {
            ctx->pc = 0x1EA060u;
            goto label_1ea060;
        }
    }
    ctx->pc = 0x1EA03Cu;
label_1ea03c:
    // 0x1ea03c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1ea040: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1ea044: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ea044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea048: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1ea048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1ea04c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1ea04cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea050: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1ea050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea054: 0xd841fff0  lqc2        $vf1, -0x10($v0)
    ctx->pc = 0x1ea054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x1ea058: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ea058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea05c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ea060:
    // 0x1ea060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea064: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1ea064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ea068: 0x1440fec3  bnez        $v0, . + 4 + (-0x13D << 2)
    ctx->pc = 0x1EA068u;
    {
        const bool branch_taken_0x1ea068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea068) {
            ctx->pc = 0x1E9B78u;
            runtime->cooperativeGuestYield();
            goto label_1e9b78;
        }
    }
    ctx->pc = 0x1EA070u;
label_1ea070:
    // 0x1ea070: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1ea070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1ea074:
    // 0x1ea074: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ea074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ea078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA078u;
    {
        const bool branch_taken_0x1ea078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA078u;
            // 0x1ea07c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea078) {
            ctx->pc = 0x1EA08Cu;
            goto label_1ea08c;
        }
    }
    ctx->pc = 0x1EA080u;
    // 0x1ea080: 0xc06fbaa  jal         func_1BEEA8
    ctx->pc = 0x1EA080u;
    SET_GPR_U32(ctx, 31, 0x1EA088u);
    ctx->pc = 0x1EA084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA080u;
            // 0x1ea084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEEA8u;
    if (runtime->hasFunction(0x1BEEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BEEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA088u; }
        if (ctx->pc != 0x1EA088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEEA8_0x1beea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA088u; }
        if (ctx->pc != 0x1EA088u) { return; }
    }
    ctx->pc = 0x1EA088u;
    // 0x1ea088: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1ea088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea08c:
    // 0x1ea08c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ea08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea090: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ea090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ea094: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ea094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ea098: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1ea098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea09c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ea09cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea0a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ea0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea0a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1ea0a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea0a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0ACu;
            // 0x1ea0b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9AA8u: goto label_1e9aa8;
            case 0x1E9AACu: goto label_1e9aac;
            case 0x1E9AE8u: goto label_1e9ae8;
            case 0x1E9AECu: goto label_1e9aec;
            case 0x1E9B04u: goto label_1e9b04;
            case 0x1E9B08u: goto label_1e9b08;
            case 0x1E9B3Cu: goto label_1e9b3c;
            case 0x1E9B44u: goto label_1e9b44;
            case 0x1E9B64u: goto label_1e9b64;
            case 0x1E9B70u: goto label_1e9b70;
            case 0x1E9B78u: goto label_1e9b78;
            case 0x1E9B94u: goto label_1e9b94;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C80u: goto label_1e9c80;
            case 0x1E9C9Cu: goto label_1e9c9c;
            case 0x1E9CB4u: goto label_1e9cb4;
            case 0x1E9CD0u: goto label_1e9cd0;
            case 0x1E9CECu: goto label_1e9cec;
            case 0x1E9D40u: goto label_1e9d40;
            case 0x1E9D58u: goto label_1e9d58;
            case 0x1E9D8Cu: goto label_1e9d8c;
            case 0x1E9DD8u: goto label_1e9dd8;
            case 0x1E9DDCu: goto label_1e9ddc;
            case 0x1E9E28u: goto label_1e9e28;
            case 0x1E9E38u: goto label_1e9e38;
            case 0x1E9E70u: goto label_1e9e70;
            case 0x1E9E88u: goto label_1e9e88;
            case 0x1E9F00u: goto label_1e9f00;
            case 0x1E9F30u: goto label_1e9f30;
            case 0x1E9F64u: goto label_1e9f64;
            case 0x1E9F68u: goto label_1e9f68;
            case 0x1E9F80u: goto label_1e9f80;
            case 0x1E9FA8u: goto label_1e9fa8;
            case 0x1E9FC0u: goto label_1e9fc0;
            case 0x1EA030u: goto label_1ea030;
            case 0x1EA03Cu: goto label_1ea03c;
            case 0x1EA060u: goto label_1ea060;
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA074u: goto label_1ea074;
            case 0x1EA08Cu: goto label_1ea08c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA0B4u;
    // 0x1ea0b4: 0x0  nop
    ctx->pc = 0x1ea0b4u;
    // NOP
}

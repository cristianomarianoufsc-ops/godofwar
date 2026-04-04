#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001429E8
// Address: 0x1429e8 - 0x142da0
void sub_001429E8_0x1429e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001429E8_0x1429e8");
#endif

    ctx->pc = 0x1429e8u;

    // 0x1429e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1429e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1429ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1429ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1429f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1429f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1429f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1429f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1429f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1429fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1429fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x142a00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x142a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x142a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142a08: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x142A08u;
    SET_GPR_U32(ctx, 31, 0x142A10u);
    ctx->pc = 0x142A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A08u;
            // 0x142a0c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A10u; }
        if (ctx->pc != 0x142A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A10u; }
        if (ctx->pc != 0x142A10u) { return; }
    }
    ctx->pc = 0x142A10u;
    // 0x142a10: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142a14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x142a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x142a18: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142a1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x142a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x142a20: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x142A20u;
    SET_GPR_U32(ctx, 31, 0x142A28u);
    ctx->pc = 0x142A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A20u;
            // 0x142a24: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A28u; }
        if (ctx->pc != 0x142A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A28u; }
        if (ctx->pc != 0x142A28u) { return; }
    }
    ctx->pc = 0x142A28u;
    // 0x142a28: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142a2c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x142a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x142a30: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x142a34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x142a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x142a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x142a3c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x142a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142a40: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x142a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x142a44: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x142a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x142a48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x142a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x142a4c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x142a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x142a50: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x142a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x142a54: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142a58: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x142a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x142a5c: 0x9c63f19c  lwu         $v1, -0xE64($v1)
    ctx->pc = 0x142a5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x142a60: 0x9c82f1a0  lwu         $v0, -0xE60($a0)
    ctx->pc = 0x142a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963616)));
    // 0x142a64: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x142a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x142a68: 0x8e18f168  lw          $t8, -0xE98($s0)
    ctx->pc = 0x142a68u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142a70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x142a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x142a74: 0xff050018  sd          $a1, 0x18($t8)
    ctx->pc = 0x142a74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 5));
    // 0x142a78: 0xff020010  sd          $v0, 0x10($t8)
    ctx->pc = 0x142a78u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 2));
    // 0x142a7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x142a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a80: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x142a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x142a84: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x142a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x142a88: 0x8c45dd58  lw          $a1, -0x22A8($v0)
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x142a8c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x142a90: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x142a94: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x142a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x142a98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142a9c: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x142aa0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x142aa4: 0xff070020  sd          $a3, 0x20($t8)
    ctx->pc = 0x142aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 7));
    // 0x142aa8: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142aac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142ab0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x142ab4: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x142ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x142ab8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x142ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x142abc: 0xff060028  sd          $a2, 0x28($t8)
    ctx->pc = 0x142abcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 6));
    // 0x142ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142ac4: 0xff040038  sd          $a0, 0x38($t8)
    ctx->pc = 0x142ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 4));
    // 0x142ac8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x142ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x142acc: 0xff020040  sd          $v0, 0x40($t8)
    ctx->pc = 0x142accu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 2));
    // 0x142ad0: 0xff030048  sd          $v1, 0x48($t8)
    ctx->pc = 0x142ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 3));
    // 0x142ad4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x142ad8: 0xff000030  sd          $zero, 0x30($t8)
    ctx->pc = 0x142ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 0));
    // 0x142adc: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x142ae0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x142ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x142ae4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142ae8: 0x9ce2bfd8  lwu         $v0, -0x4028($a3)
    ctx->pc = 0x142ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294950872)));
    // 0x142aec: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x142af0: 0xff060068  sd          $a2, 0x68($t8)
    ctx->pc = 0x142af0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 6));
    // 0x142af4: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x142af4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x142af8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142afc: 0xff040058  sd          $a0, 0x58($t8)
    ctx->pc = 0x142afcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 4));
    // 0x142b00: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x142b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x142b04: 0xff000060  sd          $zero, 0x60($t8)
    ctx->pc = 0x142b04u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 0));
    // 0x142b08: 0xff020050  sd          $v0, 0x50($t8)
    ctx->pc = 0x142b08u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 2));
    // 0x142b0c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x142b0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142b10: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x142b10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x142b14: 0x340efe00  ori         $t6, $zero, 0xFE00
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x142b18: 0xe73bc  dsll32      $t6, $t6, 14
    ctx->pc = 0x142b18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 14));
    // 0x142b1c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x142b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x142b20: 0x9c63bfd0  lwu         $v1, -0x4030($v1)
    ctx->pc = 0x142b20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294950864)));
    // 0x142b24: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x142b28: 0x9d22bfcc  lwu         $v0, -0x4034($t1)
    ctx->pc = 0x142b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294950860)));
    // 0x142b2c: 0x5c900  sll         $t9, $a1, 4
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x142b30: 0x9d44bfd4  lwu         $a0, -0x402C($t2)
    ctx->pc = 0x142b30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 4294950868)));
    // 0x142b34: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x142b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x142b38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142b3c: 0xff070080  sd          $a3, 0x80($t8)
    ctx->pc = 0x142b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 7));
    // 0x142b40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x142b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x142b44: 0xff060088  sd          $a2, 0x88($t8)
    ctx->pc = 0x142b44u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 6));
    // 0x142b48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142b4c: 0xff0f0078  sd          $t7, 0x78($t8)
    ctx->pc = 0x142b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 15));
    // 0x142b50: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x142b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x142b54: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x142b58: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x142b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x142b5c: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x142b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x142b60: 0xff020070  sd          $v0, 0x70($t8)
    ctx->pc = 0x142b60u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 2));
    // 0x142b64: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x142b68: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x142b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x142b6c: 0x3407ff00  ori         $a3, $zero, 0xFF00
    ctx->pc = 0x142b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x142b70: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x142b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x142b74: 0x9d82f1ac  lwu         $v0, -0xE54($t4)
    ctx->pc = 0x142b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 4294963628)));
    // 0x142b78: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x142b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x142b7c: 0x9d63f1a8  lwu         $v1, -0xE58($t3)
    ctx->pc = 0x142b7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4294963624)));
    // 0x142b80: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x142b84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x142b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x142b88: 0xff040098  sd          $a0, 0x98($t8)
    ctx->pc = 0x142b88u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 4));
    // 0x142b8c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x142b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x142b90: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x142b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x142b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142b98: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x142b98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x142b9c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x142ba0: 0x8ccadd50  lw          $t2, -0x22B0($a2)
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294958416)));
    // 0x142ba4: 0xff020090  sd          $v0, 0x90($t8)
    ctx->pc = 0x142ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 2));
    // 0x142ba8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x142ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x142bac: 0xa1982  srl         $v1, $t2, 6
    ctx->pc = 0x142bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x142bb0: 0x3c0c2800  lui         $t4, 0x2800
    ctx->pc = 0x142bb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)10240 << 16));
    // 0x142bb4: 0x8d021074  lw          $v0, 0x1074($t0)
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4212)));
    // 0x142bb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142bbc: 0x9d241070  lwu         $a0, 0x1070($t1)
    ctx->pc = 0x142bbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 4208)));
    // 0x142bc0: 0x31cba  dsrl        $v1, $v1, 18
    ctx->pc = 0x142bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 18);
    // 0x142bc4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x142bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x142bc8: 0x340ba000  ori         $t3, $zero, 0xA000
    ctx->pc = 0x142bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x142bcc: 0xb5cb8  dsll        $t3, $t3, 18
    ctx->pc = 0x142bccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 18);
    // 0x142bd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142bd4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x142bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x142bd8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x142bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x142bdc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x142bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142be0: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x142be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x142be4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142be8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x142bec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142bf0: 0xff0500a8  sd          $a1, 0xA8($t8)
    ctx->pc = 0x142bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 168), GPR_U64(ctx, 5));
    // 0x142bf4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x142bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x142bf8: 0x24c6dd50  addiu       $a2, $a2, -0x22B0
    ctx->pc = 0x142bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958416));
    // 0x142bfc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x142bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x142c00: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x142c04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x142c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x142c08: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x142c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x142c0c: 0xff0200a0  sd          $v0, 0xA0($t8)
    ctx->pc = 0x142c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 160), GPR_U64(ctx, 2));
    // 0x142c10: 0x270900b0  addiu       $t1, $t8, 0xB0
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 176));
    // 0x142c14: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x142c18: 0x37100  sll         $t6, $v1, 4
    ctx->pc = 0x142c18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142c1c: 0x8c88bfdc  lw          $t0, -0x4024($a0)
    ctx->pc = 0x142c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950876)));
    // 0x142c20: 0xae09f168  sw          $t1, -0xE98($s0)
    ctx->pc = 0x142c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 9));
    // 0x142c24: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x142c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c28: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x142c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c2c: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x142c30: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C30u;
            // 0x142c34: 0x1c87023  subu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C48u;
            goto label_142c48;
        }
    }
    ctx->pc = 0x142C38u;
    // 0x142c38: 0x24510018  addiu       $s1, $v0, 0x18
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x142c3c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x142c40: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x142c44: 0x25ce0018  addiu       $t6, $t6, 0x18
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24));
label_142c48:
    // 0x142c48: 0x272401ff  addiu       $a0, $t9, 0x1FF
    ctx->pc = 0x142c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 511));
    // 0x142c4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x142c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142c50: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x142c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x142c54: 0x272303fe  addiu       $v1, $t9, 0x3FE
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 1022));
    // 0x142c58: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x142c58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x142c5c: 0x33243  sra         $a2, $v1, 9
    ctx->pc = 0x142c5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 9));
    // 0x142c60: 0x1481023  subu        $v0, $t2, $t0
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x142c64: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x142c64u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x142c68: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142C68u;
    {
        const bool branch_taken_0x142c68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c68) {
            ctx->pc = 0x142C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142C68u;
            // 0x142c6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142C70u;
            goto label_142c70;
        }
    }
    ctx->pc = 0x142C70u;
label_142c70:
    // 0x142c70: 0x34c28000  ori         $v0, $a2, 0x8000
    ctx->pc = 0x142c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x142c74: 0xaf0200b0  sw          $v0, 0xB0($t8)
    ctx->pc = 0x142c74u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 2));
    // 0x142c78: 0x3c0341ab  lui         $v1, 0x41AB
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16811 << 16));
    // 0x142c7c: 0x270400c0  addiu       $a0, $t8, 0xC0
    ctx->pc = 0x142c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 192));
    // 0x142c80: 0x24025353  addiu       $v0, $zero, 0x5353
    ctx->pc = 0x142c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x142c84: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x142c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x142c88: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x142c88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x142c8c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x142c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x142c90: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x142c90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x142c94: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x142c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x142c98: 0x5012  mflo        $t2
    ctx->pc = 0x142c98u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x142c9c: 0x326001a  div         $zero, $t9, $a2
    ctx->pc = 0x142c9cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x142ca0: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x142ca0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ca4: 0x2812  mflo        $a1
    ctx->pc = 0x142ca4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x142ca8: 0x18c00029  blez        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x142CA8u;
    {
        const bool branch_taken_0x142ca8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x142CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142CA8u;
            // 0x142cac: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ca8) {
            ctx->pc = 0x142D50u;
            goto label_142d50;
        }
    }
    ctx->pc = 0x142CB0u;
    // 0x142cb0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x142cb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cb4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x142cb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cb8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x142cb8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cbc: 0x25090008  addiu       $t1, $t0, 0x8
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x142cc0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x142cc0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cc4: 0x0  nop
    ctx->pc = 0x142cc4u;
    // NOP
label_142cc8:
    // 0x142cc8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142ccc: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x142cd0: 0x1482821  addu        $a1, $t2, $t0
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x142cd4: 0x25c70008  addiu       $a3, $t6, 0x8
    ctx->pc = 0x142cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x142cd8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x142cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x142cdc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x142cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x142ce0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x142ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x142ce4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x142ce8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142cec: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x142cecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x142cf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x142cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x142cf4: 0x1394821  addu        $t1, $t1, $t9
    ctx->pc = 0x142cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x142cf8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x142cfc: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142d00: 0xac580010  sw          $t8, 0x10($v0)
    ctx->pc = 0x142d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 24));
    // 0x142d04: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x142d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142d08: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x142d0c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x142d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142d10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x142d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x142d14: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x142d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x142d18: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x142d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x142d1c: 0x30dc021  addu        $t8, $t8, $t5
    ctx->pc = 0x142d1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x142d20: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x142d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x142d24: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x142d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x142d28: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x142d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x142d2c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142d30: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142d34: 0xac4b0030  sw          $t3, 0x30($v0)
    ctx->pc = 0x142d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 11));
    // 0x142d38: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x142d3c: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x142d40: 0xae06f168  sw          $a2, -0xE98($s0)
    ctx->pc = 0x142d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
    // 0x142d44: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x142d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x142d48: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x142D48u;
    {
        const bool branch_taken_0x142d48 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x142D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D48u;
            // 0x142d4c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d48) {
            ctx->pc = 0x142CC8u;
            runtime->cooperativeGuestYield();
            goto label_142cc8;
        }
    }
    ctx->pc = 0x142D50u;
label_142d50:
    // 0x142d50: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x142D50u;
    SET_GPR_U32(ctx, 31, 0x142D58u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D58u; }
        if (ctx->pc != 0x142D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D58u; }
        if (ctx->pc != 0x142D58u) { return; }
    }
    ctx->pc = 0x142D58u;
    // 0x142d58: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x142D58u;
    SET_GPR_U32(ctx, 31, 0x142D60u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D60u; }
        if (ctx->pc != 0x142D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D60u; }
        if (ctx->pc != 0x142D60u) { return; }
    }
    ctx->pc = 0x142D60u;
    // 0x142d60: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x142D60u;
    {
        const bool branch_taken_0x142d60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d60) {
            ctx->pc = 0x142D78u;
            goto label_142d78;
        }
    }
    ctx->pc = 0x142D68u;
    // 0x142d68: 0xc0509b0  jal         func_1426C0
    ctx->pc = 0x142D68u;
    SET_GPR_U32(ctx, 31, 0x142D70u);
    ctx->pc = 0x142D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D68u;
            // 0x142d6c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1426C0u;
    if (runtime->hasFunction(0x1426C0u)) {
        auto targetFn = runtime->lookupFunction(0x1426C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D70u; }
        if (ctx->pc != 0x142D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001426C0_0x1426c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D70u; }
        if (ctx->pc != 0x142D70u) { return; }
    }
    ctx->pc = 0x142D70u;
    // 0x142d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142D70u;
    {
        const bool branch_taken_0x142d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D70u;
            // 0x142d74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d70) {
            ctx->pc = 0x142D84u;
            goto label_142d84;
        }
    }
    ctx->pc = 0x142D78u;
label_142d78:
    // 0x142d78: 0xc050878  jal         func_1421E0
    ctx->pc = 0x142D78u;
    SET_GPR_U32(ctx, 31, 0x142D80u);
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D80u; }
        if (ctx->pc != 0x142D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001421E0_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D80u; }
        if (ctx->pc != 0x142D80u) { return; }
    }
    ctx->pc = 0x142D80u;
    // 0x142d80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x142d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_142d84:
    // 0x142d84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x142d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142d88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142d8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x142d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142d94: 0x3e00008  jr          $ra
    ctx->pc = 0x142D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D94u;
            // 0x142d98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142C48u: goto label_142c48;
            case 0x142C70u: goto label_142c70;
            case 0x142CC8u: goto label_142cc8;
            case 0x142D50u: goto label_142d50;
            case 0x142D78u: goto label_142d78;
            case 0x142D84u: goto label_142d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142D9Cu;
    // 0x142d9c: 0x0  nop
    ctx->pc = 0x142d9cu;
    // NOP
}

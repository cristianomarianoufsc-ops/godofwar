#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C908
// Address: 0x12c908 - 0x12ca78
void sub_0012C908_0x12c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C908_0x12c908");
#endif

    ctx->pc = 0x12c908u;

    // 0x12c908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c90c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c910: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12c914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c920: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12C920u;
    SET_GPR_U32(ctx, 31, 0x12C928u);
    ctx->pc = 0x12C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C920u;
            // 0x12c924: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C928u; }
        if (ctx->pc != 0x12C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C928u; }
        if (ctx->pc != 0x12C928u) { return; }
    }
    ctx->pc = 0x12C928u;
    // 0x12c928: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c92c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12c930: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c934: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12c938: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12C938u;
    SET_GPR_U32(ctx, 31, 0x12C940u);
    ctx->pc = 0x12C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C938u;
            // 0x12c93c: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C940u; }
        if (ctx->pc != 0x12C940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C940u; }
        if (ctx->pc != 0x12C940u) { return; }
    }
    ctx->pc = 0x12C940u;
    // 0x12c940: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c944: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12c948: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c94c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12c954: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x12c954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12c958: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12c958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12c95c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x12c960: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12c960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12c964: 0x2464dd58  addiu       $a0, $v1, -0x22A8
    ctx->pc = 0x12c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958424));
    // 0x12c968: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12c968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12c96c: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x12c96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c970: 0x8c66dd58  lw          $a2, -0x22A8($v1)
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958424)));
    // 0x12c974: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c978: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12c97c: 0x8e25f168  lw          $a1, -0xE98($s1)
    ctx->pc = 0x12c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c980: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12c984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c988: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x12c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x12c98c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c990: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12c994: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x12c994u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x12c998: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x12c998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x12c99c: 0xfca80028  sd          $t0, 0x28($a1)
    ctx->pc = 0x12c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 8));
    // 0x12c9a0: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x12c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x12c9a4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c9a8: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x12c9ac: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12c9b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12c9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12c9b4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12c9b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12c9b8: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x12c9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x12c9bc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x12c9c0: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x12c9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x12c9c4: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12c9c8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x12c9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x12c9cc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x12c9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x12c9d0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x12c9d4: 0x350800ff  ori         $t0, $t0, 0xFF
    ctx->pc = 0x12c9d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)255);
    // 0x12c9d8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x12c9d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x12c9dc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x12c9dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x12c9e0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x12c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12c9e4: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x12c9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12c9e8: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x12c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
    // 0x12c9ec: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x12c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x12c9f0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12c9f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12c9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c9f8: 0x348400a4  ori         $a0, $a0, 0xA4
    ctx->pc = 0x12c9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
    // 0x12c9fc: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x12c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x12ca00: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x12ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x12ca04: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x12ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x12ca08: 0xfca70048  sd          $a3, 0x48($a1)
    ctx->pc = 0x12ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 7));
    // 0x12ca0c: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x12ca10: 0xfca80050  sd          $t0, 0x50($a1)
    ctx->pc = 0x12ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 8));
    // 0x12ca14: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x12ca14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ca18: 0xb5c78  dsll        $t3, $t3, 17
    ctx->pc = 0x12ca18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 17);
    // 0x12ca1c: 0xfcac0058  sd          $t4, 0x58($a1)
    ctx->pc = 0x12ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 12));
    // 0x12ca20: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x12ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12ca24: 0xfca60060  sd          $a2, 0x60($a1)
    ctx->pc = 0x12ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 6));
    // 0x12ca28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca2c: 0xfca90068  sd          $t1, 0x68($a1)
    ctx->pc = 0x12ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 9));
    // 0x12ca30: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x12ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x12ca34: 0x9d42f19c  lwu         $v0, -0xE64($t2)
    ctx->pc = 0x12ca34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 4294963612)));
    // 0x12ca38: 0xfca30078  sd          $v1, 0x78($a1)
    ctx->pc = 0x12ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 3));
    // 0x12ca3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ca40: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12ca40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12ca44: 0x20b8025  or          $s0, $s0, $t3
    ctx->pc = 0x12ca44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
    // 0x12ca48: 0xc048222  jal         func_120888
    ctx->pc = 0x12CA48u;
    SET_GPR_U32(ctx, 31, 0x12CA50u);
    ctx->pc = 0x12CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA48u;
            // 0x12ca4c: 0xfcb00070  sd          $s0, 0x70($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120888u;
    if (runtime->hasFunction(0x120888u)) {
        auto targetFn = runtime->lookupFunction(0x120888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA50u; }
        if (ctx->pc != 0x12CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120888_0x120888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA50u; }
        if (ctx->pc != 0x12CA50u) { return; }
    }
    ctx->pc = 0x12CA50u;
    // 0x12ca50: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12CA50u;
    SET_GPR_U32(ctx, 31, 0x12CA58u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA58u; }
        if (ctx->pc != 0x12CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA58u; }
        if (ctx->pc != 0x12CA58u) { return; }
    }
    ctx->pc = 0x12CA58u;
    // 0x12ca58: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12CA58u;
    SET_GPR_U32(ctx, 31, 0x12CA60u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA60u; }
        if (ctx->pc != 0x12CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA60u; }
        if (ctx->pc != 0x12CA60u) { return; }
    }
    ctx->pc = 0x12CA60u;
    // 0x12ca60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ca64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ca64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ca68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA6Cu;
            // 0x12ca70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CA74u;
    // 0x12ca74: 0x0  nop
    ctx->pc = 0x12ca74u;
    // NOP
}

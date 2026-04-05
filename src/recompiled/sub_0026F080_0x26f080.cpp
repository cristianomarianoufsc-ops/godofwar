#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F080
// Address: 0x26f080 - 0x26f228
void sub_0026F080_0x26f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F080_0x26f080");
#endif

    ctx->pc = 0x26f080u;

    // 0x26f080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26f084: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26f084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26f088: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26f088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26f08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f090: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26f094: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x26f094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f098: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26f09c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26f09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26f0a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26f0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0a8: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F0A8u;
    {
        const bool branch_taken_0x26f0a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0A8u;
            // 0x26f0ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0a8) {
            ctx->pc = 0x26F0B8u;
            goto label_26f0b8;
        }
    }
    ctx->pc = 0x26F0B0u;
    // 0x26f0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F0B0u;
    {
        const bool branch_taken_0x26f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0B0u;
            // 0x26f0b4: 0x119180  sll         $s2, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0b0) {
            ctx->pc = 0x26F0BCu;
            goto label_26f0bc;
        }
    }
    ctx->pc = 0x26F0B8u;
label_26f0b8:
    // 0x26f0b8: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x26f0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_26f0bc:
    // 0x26f0bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x26f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26f0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0c4: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x26f0c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26f0c8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x26f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x26f0cc: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x26f0d0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x26f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x26f0d4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x26f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x26f0d8: 0xc0a5164  jal         func_294590
    ctx->pc = 0x26F0D8u;
    SET_GPR_U32(ctx, 31, 0x26F0E0u);
    ctx->pc = 0x26F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0D8u;
            // 0x26f0dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294590u;
    if (runtime->hasFunction(0x294590u)) {
        auto targetFn = runtime->lookupFunction(0x294590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0E0u; }
        if (ctx->pc != 0x26F0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294590_0x294590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0E0u; }
        if (ctx->pc != 0x26F0E0u) { return; }
    }
    ctx->pc = 0x26F0E0u;
    // 0x26f0e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x26f0e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f0e8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x26f0e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x26f0ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26f0f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26f0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26f0f4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x26f0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x26f0f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f0fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x26f0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x26f100: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f104: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x26f108: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f10c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26f110: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x26f110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x26f114: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26f114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26f118: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26f118u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26f11c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x26f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x26f120: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f124: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f128: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26f128u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26f12c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26f12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f130: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x26f130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x26f134: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x26f138: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f140: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x26f140u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x26f144: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26f144u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26f148: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x26F148u;
    {
        const bool branch_taken_0x26f148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F148u;
            // 0x26f14c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f148) {
            ctx->pc = 0x26F1FCu;
            goto label_26f1fc;
        }
    }
    ctx->pc = 0x26F150u;
label_26f150:
    // 0x26f150: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f154: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f158: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x26f158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26f15c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26f160: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x26f160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f164: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26f168: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26f16c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x26f170: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f174: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x26f174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26f178: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x26f178u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x26f17c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26f180: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26f180u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26f184: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x26f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x26f188: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f18c: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x26f190: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x26f190u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x26f194: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x26f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x26f198: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26f198u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26f19c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x26f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x26f1a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f1a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26f1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26f1a8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x26f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x26f1ac: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x26f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x26f1b0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x26f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x26f1b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26f1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26f1b8: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x26f1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x26f1bc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x26f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x26f1c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f1c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26f1c8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x26f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x26f1cc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x26f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x26f1d0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x26f1d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f1d8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x26f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x26f1dc: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x26f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x26f1e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26f1e4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x26f1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f1e8: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x26f1e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x26f1ec: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x26f1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x26f1f0: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x26f1f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x26f1f4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x26F1F4u;
    {
        const bool branch_taken_0x26f1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1F4u;
            // 0x26f1f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1f4) {
            ctx->pc = 0x26F150u;
            runtime->cooperativeGuestYield();
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F1FCu;
label_26f1fc:
    // 0x26f1fc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x26f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x26f200: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x26f200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x26f204: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f208: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26f208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f20c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26f20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f210: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26f210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f214: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26f214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f218: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26f218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f220: 0x3e00008  jr          $ra
    ctx->pc = 0x26F220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F220u;
            // 0x26f224: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F0B8u: goto label_26f0b8;
            case 0x26F0BCu: goto label_26f0bc;
            case 0x26F150u: goto label_26f150;
            case 0x26F1FCu: goto label_26f1fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F228u;
}

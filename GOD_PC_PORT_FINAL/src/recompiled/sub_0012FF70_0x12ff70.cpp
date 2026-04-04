#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012FF70
// Address: 0x12ff70 - 0x130048
void sub_0012FF70_0x12ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF70_0x12ff70");
#endif

    ctx->pc = 0x12ff70u;

    // 0x12ff70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12ff74: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x12ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x12ff78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12ff7c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x12ff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x12ff80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12ff84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ff84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ff8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ff8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff90: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12ff94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12ff98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ff9c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x12ff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ffa0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x12ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12ffa4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12ffa8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12ffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12ffac: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x12ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12ffb0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x12ffb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ffb4: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x12ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x12ffb8: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x12FFB8u;
    SET_GPR_U32(ctx, 31, 0x12FFC0u);
    ctx->pc = 0x12FFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFB8u;
            // 0x12ffbc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFC0u; }
        if (ctx->pc != 0x12FFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFC0u; }
        if (ctx->pc != 0x12FFC0u) { return; }
    }
    ctx->pc = 0x12FFC0u;
    // 0x12ffc0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12ffc4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12ffc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ffcc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12ffd0: 0xa6020062  sh          $v0, 0x62($s0)
    ctx->pc = 0x12ffd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ffd4: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x12ffd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ffd8: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x12ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x12ffdc: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x12ffdcu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x12ffe0: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x12ffe0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x12ffe4: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x12ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ffe8: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x12ffe8u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x12ffec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12fff0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12fff4: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x12fff4u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x12fff8: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x12fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12fffc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x12fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x130000: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x130000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130008: 0xf8630030  sqc2        $vf3, 0x30($v1)
    ctx->pc = 0x130008u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13000c: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13000cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130010: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x130010u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130014: 0xdca3bdf8  ld          $v1, -0x4208($a1)
    ctx->pc = 0x130014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x130018: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x130018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13001c: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x13001cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x130020: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x130020u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x130024: 0xfca3bdf8  sd          $v1, -0x4208($a1)
    ctx->pc = 0x130024u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 3));
    // 0x130028: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x130028u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x13002c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13002cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130030: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x130030u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x130034: 0xfe030068  sd          $v1, 0x68($s0)
    ctx->pc = 0x130034u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
    // 0x130038: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x130038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13003c: 0x3e00008  jr          $ra
    ctx->pc = 0x13003Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13003Cu;
            // 0x130040: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130044u;
    // 0x130044: 0x0  nop
    ctx->pc = 0x130044u;
    // NOP
}

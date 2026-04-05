#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206A70
// Address: 0x206a70 - 0x206bf8
void sub_00206A70_0x206a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206A70_0x206a70");
#endif

    ctx->pc = 0x206a70u;

    // 0x206a70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x206a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x206a74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x206a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a78: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x206a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x206a7c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x206a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x206a80: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x206a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x206a84: 0x24500050  addiu       $s0, $v0, 0x50
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x206a88: 0x8ce60080  lw          $a2, 0x80($a3)
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x206a8c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x206a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x206a90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x206A90u;
    {
        const bool branch_taken_0x206a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A90u;
            // 0x206a94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a90) {
            ctx->pc = 0x206ACCu;
            goto label_206acc;
        }
    }
    ctx->pc = 0x206A98u;
    // 0x206a98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x206a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206a9c: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x206a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x206aa0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x206aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x206aa4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x206aa8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x206aac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206ab0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206ab8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x206AB8u;
    {
        const bool branch_taken_0x206ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x206ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206AB8u;
            // 0x206abc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ab8) {
            ctx->pc = 0x206AC8u;
            goto label_206ac8;
        }
    }
    ctx->pc = 0x206AC0u;
    // 0x206ac0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x206ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x206ac4: 0x0  nop
    ctx->pc = 0x206ac4u;
    // NOP
label_206ac8:
    // 0x206ac8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x206ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206acc:
    // 0x206acc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x206ACCu;
    {
        const bool branch_taken_0x206acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206ACCu;
            // 0x206ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206acc) {
            ctx->pc = 0x206B00u;
            goto label_206b00;
        }
    }
    ctx->pc = 0x206AD4u;
    // 0x206ad4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x206ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x206ad8: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x206adc: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x206adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x206ae0: 0x40f809  jalr        $v0
    ctx->pc = 0x206AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206AE8u);
        ctx->pc = 0x206AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206AE0u;
            // 0x206ae4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206AE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206AC8u: goto label_206ac8;
            case 0x206ACCu: goto label_206acc;
            case 0x206B00u: goto label_206b00;
            case 0x206B28u: goto label_206b28;
            case 0x206B50u: goto label_206b50;
            case 0x206BA8u: goto label_206ba8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206AE8u; }
            if (ctx->pc != 0x206AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x206AE8u;
    // 0x206ae8: 0xda010030  lqc2        $vf1, 0x30($s0)
    ctx->pc = 0x206ae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x206aec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x206aecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206af0: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x206af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206af4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x206AF4u;
    {
        const bool branch_taken_0x206af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206AF4u;
            // 0x206af8: 0xfba10060  sqc2        $vf1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206af4) {
            ctx->pc = 0x206BA8u;
            goto label_206ba8;
        }
    }
    ctx->pc = 0x206AFCu;
    // 0x206afc: 0x0  nop
    ctx->pc = 0x206afcu;
    // NOP
label_206b00:
    // 0x206b00: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x206b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206b04: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x206b08: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x206b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x206b0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x206b10: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x206b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x206b14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206b18: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x206b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206b1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206b20: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x206B20u;
    {
        const bool branch_taken_0x206b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x206b20) {
            ctx->pc = 0x206B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206B20u;
            // 0x206b24: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206B28u;
            goto label_206b28;
        }
    }
    ctx->pc = 0x206B28u;
label_206b28:
    // 0x206b28: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206B28u;
    {
        const bool branch_taken_0x206b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b28) {
            ctx->pc = 0x206B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206B28u;
            // 0x206b2c: 0xda020020  lqc2        $vf2, 0x20($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206B50u;
            goto label_206b50;
        }
    }
    ctx->pc = 0x206B30u;
    // 0x206b30: 0xc04c612  jal         func_131848
    ctx->pc = 0x206B30u;
    SET_GPR_U32(ctx, 31, 0x206B38u);
    ctx->pc = 0x206B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B30u;
            // 0x206b34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131848u;
    if (runtime->hasFunction(0x131848u)) {
        auto targetFn = runtime->lookupFunction(0x131848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B38u; }
        if (ctx->pc != 0x206B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131848_0x131848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B38u; }
        if (ctx->pc != 0x206B38u) { return; }
    }
    ctx->pc = 0x206B38u;
    // 0x206b38: 0xda020030  lqc2        $vf2, 0x30($s0)
    ctx->pc = 0x206b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x206b3c: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x206b3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206b40: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x206b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206b44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x206B44u;
    {
        const bool branch_taken_0x206b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B44u;
            // 0x206b48: 0xfba10060  sqc2        $vf1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b44) {
            ctx->pc = 0x206BA8u;
            goto label_206ba8;
        }
    }
    ctx->pc = 0x206B4Cu;
    // 0x206b4c: 0x0  nop
    ctx->pc = 0x206b4cu;
    // NOP
label_206b50:
    // 0x206b50: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x206b50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206b54: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x206b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206b58: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x206b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206b5c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x206b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206b60: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x206b64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x206b68: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x206b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x206b6c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x206b70: 0x40f809  jalr        $v0
    ctx->pc = 0x206B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206B78u);
        ctx->pc = 0x206B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B70u;
            // 0x206b74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206B78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206AC8u: goto label_206ac8;
            case 0x206ACCu: goto label_206acc;
            case 0x206B00u: goto label_206b00;
            case 0x206B28u: goto label_206b28;
            case 0x206B50u: goto label_206b50;
            case 0x206BA8u: goto label_206ba8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206B78u; }
            if (ctx->pc != 0x206B78u) { return; }
        }
        }
    }
    ctx->pc = 0x206B78u;
    // 0x206b78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x206b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206b7c: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x206b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206b80: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x206b84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x206b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x206b88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206b8c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x206b8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206b98: 0x0  nop
    ctx->pc = 0x206b98u;
    // NOP
    // 0x206b9c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206B9Cu;
            // 0x206ba0: 0xfba20060  sqc2        $vf2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206BA8u;
            goto label_206ba8;
        }
    }
    ctx->pc = 0x206BA4u;
    // 0x206ba4: 0x0  nop
    ctx->pc = 0x206ba4u;
    // NOP
label_206ba8:
    // 0x206ba8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x206bac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x206bacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206bb0: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x206bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206bb4: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x206bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206bb8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x206bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x206bbc: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x206bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206bc0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x206bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206bc4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x206bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206bc8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x206bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x206bcc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x206bccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x206bd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x206bd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x206bd4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x206bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206bd8: 0x4a0002ff  vnop
    ctx->pc = 0x206bd8u;
    // NOP operation, no action needed for VU0
    // 0x206bdc: 0x4a0002ff  vnop
    ctx->pc = 0x206bdcu;
    // NOP operation, no action needed for VU0
    // 0x206be0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x206be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206be4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x206be4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206be8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x206be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206bec: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x206becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x206BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BF0u;
            // 0x206bf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206AC8u: goto label_206ac8;
            case 0x206ACCu: goto label_206acc;
            case 0x206B00u: goto label_206b00;
            case 0x206B28u: goto label_206b28;
            case 0x206B50u: goto label_206b50;
            case 0x206BA8u: goto label_206ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206BF8u;
}

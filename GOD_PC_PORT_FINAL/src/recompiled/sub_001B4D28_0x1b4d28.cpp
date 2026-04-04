#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4D28
// Address: 0x1b4d28 - 0x1b4fc8
void sub_001B4D28_0x1b4d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D28_0x1b4d28");
#endif

    ctx->pc = 0x1b4d28u;

    // 0x1b4d28: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b4d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b4d2c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1b4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4d30: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1b4d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4d34: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x1b4d34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1b4d38: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1b4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1b4d3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4d40: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4d44: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x1b4d44u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1b4d48: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1b4d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1b4d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d50: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1b4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1b4d54: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1b4d54u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1b4d58: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1b4d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1b4d5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b4d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d60: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1b4d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1b4d64: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1b4d64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x1b4d68: 0x922401a0  lbu         $a0, 0x1A0($s1)
    ctx->pc = 0x1b4d68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b4d6c: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B4D6Cu;
    {
        const bool branch_taken_0x1b4d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D6Cu;
            // 0x1b4d70: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d6c) {
            ctx->pc = 0x1B4E30u;
            goto label_1b4e30;
        }
    }
    ctx->pc = 0x1B4D74u;
    // 0x1b4d74: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1b4d78:
    // 0x1b4d78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4d7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b4d80: 0x8c5300d8  lw          $s3, 0xD8($v0)
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1b4d84: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b4d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4d88: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b4d8c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4D8Cu;
    {
        const bool branch_taken_0x1b4d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D8Cu;
            // 0x1b4d90: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d8c) {
            ctx->pc = 0x1B4D9Cu;
            goto label_1b4d9c;
        }
    }
    ctx->pc = 0x1B4D94u;
    // 0x1b4d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4D94u;
    {
        const bool branch_taken_0x1b4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D94u;
            // 0x1b4d98: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d94) {
            ctx->pc = 0x1B4DB8u;
            goto label_1b4db8;
        }
    }
    ctx->pc = 0x1B4D9Cu;
label_1b4d9c:
    // 0x1b4d9c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b4da0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1b4da0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1b4da4: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4DA4u;
    {
        const bool branch_taken_0x1b4da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b4da4) {
            ctx->pc = 0x1B4DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DA4u;
            // 0x1b4da8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4DB8u;
            goto label_1b4db8;
        }
    }
    ctx->pc = 0x1B4DACu;
    // 0x1b4dac: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1B4DACu;
    SET_GPR_U32(ctx, 31, 0x1B4DB4u);
    ctx->pc = 0x1B4DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DACu;
            // 0x1b4db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    }
    ctx->pc = 0x1B4DB4u;
    // 0x1b4db4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1b4db8:
    // 0x1b4db8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1b4db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4dbc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1b4dc0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1b4dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b4dc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b4dc8: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1b4dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b4dcc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4dd0: 0xd8830030  lqc2        $vf3, 0x30($a0)
    ctx->pc = 0x1b4dd0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b4dd4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1b4dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4dd8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1b4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1b4ddc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1b4ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b4de0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1b4de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b4de4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4de8: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1b4de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4dec: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4decu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4df0: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1b4df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b4df4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b4df8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b4df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b4dfc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1b4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b4e00: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1b4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b4e04: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4E0Cu);
        ctx->pc = 0x1B4E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E04u;
            // 0x1b4e08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4E0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4D78u: goto label_1b4d78;
            case 0x1B4D9Cu: goto label_1b4d9c;
            case 0x1B4DB8u: goto label_1b4db8;
            case 0x1B4E30u: goto label_1b4e30;
            case 0x1B4E40u: goto label_1b4e40;
            case 0x1B4E78u: goto label_1b4e78;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4FA8u: goto label_1b4fa8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E0Cu; }
            if (ctx->pc != 0x1B4E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B4E0Cu;
    // 0x1b4e0c: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1b4e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b4e10: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b4e10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b4e14: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1b4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b4e18: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1b4e18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4e1c: 0x922201a0  lbu         $v0, 0x1A0($s1)
    ctx->pc = 0x1b4e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b4e20: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b4e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4e24: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B4E24u;
    {
        const bool branch_taken_0x1b4e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E24u;
            // 0x1b4e28: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e24) {
            ctx->pc = 0x1B4D78u;
            runtime->cooperativeGuestYield();
            goto label_1b4d78;
        }
    }
    ctx->pc = 0x1B4E2Cu;
    // 0x1b4e2c: 0x0  nop
    ctx->pc = 0x1b4e2cu;
    // NOP
label_1b4e30:
    // 0x1b4e30: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b4e30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b4e34: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B4E34u;
    {
        const bool branch_taken_0x1b4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E34u;
            // 0x1b4e38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e34) {
            ctx->pc = 0x1B4F50u;
            goto label_1b4f50;
        }
    }
    ctx->pc = 0x1B4E3Cu;
    // 0x1b4e3c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1b4e40:
    // 0x1b4e40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b4e44: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b4e48: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b4e4c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1b4e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1b4e50: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b4e54: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4E5Cu);
        ctx->pc = 0x1B4E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E54u;
            // 0x1b4e58: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4E5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4D78u: goto label_1b4d78;
            case 0x1B4D9Cu: goto label_1b4d9c;
            case 0x1B4DB8u: goto label_1b4db8;
            case 0x1B4E30u: goto label_1b4e30;
            case 0x1B4E40u: goto label_1b4e40;
            case 0x1B4E78u: goto label_1b4e78;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4FA8u: goto label_1b4fa8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E5Cu; }
            if (ctx->pc != 0x1B4E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B4E5Cu;
    // 0x1b4e5c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4e60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4e64: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b4e68: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4E68u;
    {
        const bool branch_taken_0x1b4e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E68u;
            // 0x1b4e6c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e68) {
            ctx->pc = 0x1B4E78u;
            goto label_1b4e78;
        }
    }
    ctx->pc = 0x1B4E70u;
    // 0x1b4e70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4E70u;
    {
        const bool branch_taken_0x1b4e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E70u;
            // 0x1b4e74: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e70) {
            ctx->pc = 0x1B4E94u;
            goto label_1b4e94;
        }
    }
    ctx->pc = 0x1B4E78u;
label_1b4e78:
    // 0x1b4e78: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1b4e78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b4e7c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1b4e7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1b4e80: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4E80u;
    {
        const bool branch_taken_0x1b4e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B4E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E80u;
            // 0x1b4e84: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e80) {
            ctx->pc = 0x1B4E94u;
            goto label_1b4e94;
        }
    }
    ctx->pc = 0x1B4E88u;
    // 0x1b4e88: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1B4E88u;
    SET_GPR_U32(ctx, 31, 0x1B4E90u);
    ctx->pc = 0x1B4E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E88u;
            // 0x1b4e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E90u; }
        if (ctx->pc != 0x1B4E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E90u; }
        if (ctx->pc != 0x1B4E90u) { return; }
    }
    ctx->pc = 0x1B4E90u;
    // 0x1b4e90: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1b4e94:
    // 0x1b4e94: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1b4e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4e98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1b4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1b4e9c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1b4e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b4ea0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1b4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1b4ea4: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1b4ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b4ea8: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1b4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b4eac: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1b4eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b4eb0: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1b4eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b4eb4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1b4eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1b4eb8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1b4eb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4ebc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1b4ebcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b4ec0: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1b4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1b4ec4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4ec8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4ecc: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b4ed0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4ED0u;
    {
        const bool branch_taken_0x1b4ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4ED0u;
            // 0x1b4ed4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ed0) {
            ctx->pc = 0x1B4EE0u;
            goto label_1b4ee0;
        }
    }
    ctx->pc = 0x1B4ED8u;
    // 0x1b4ed8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4ED8u;
    {
        const bool branch_taken_0x1b4ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4ED8u;
            // 0x1b4edc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ed8) {
            ctx->pc = 0x1B4EFCu;
            goto label_1b4efc;
        }
    }
    ctx->pc = 0x1B4EE0u;
label_1b4ee0:
    // 0x1b4ee0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1b4ee0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b4ee4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1b4ee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1b4ee8: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4EE8u;
    {
        const bool branch_taken_0x1b4ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b4ee8) {
            ctx->pc = 0x1B4EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EE8u;
            // 0x1b4eec: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4EFCu;
            goto label_1b4efc;
        }
    }
    ctx->pc = 0x1B4EF0u;
    // 0x1b4ef0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1B4EF0u;
    SET_GPR_U32(ctx, 31, 0x1B4EF8u);
    ctx->pc = 0x1B4EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EF0u;
            // 0x1b4ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4EF8u; }
        if (ctx->pc != 0x1B4EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4EF8u; }
        if (ctx->pc != 0x1B4EF8u) { return; }
    }
    ctx->pc = 0x1B4EF8u;
    // 0x1b4ef8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b4ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1b4efc:
    // 0x1b4efc: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1b4efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b4f00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4f04: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1b4f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4f08: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4f0c: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b4f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b4f10: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1b4f10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4f14: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1b4f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4f18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b4f1c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b4f20: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1b4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b4f24: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4F2Cu);
        ctx->pc = 0x1B4F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F24u;
            // 0x1b4f28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4F2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4D78u: goto label_1b4d78;
            case 0x1B4D9Cu: goto label_1b4d9c;
            case 0x1B4DB8u: goto label_1b4db8;
            case 0x1B4E30u: goto label_1b4e30;
            case 0x1B4E40u: goto label_1b4e40;
            case 0x1B4E78u: goto label_1b4e78;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4FA8u: goto label_1b4fa8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F2Cu; }
            if (ctx->pc != 0x1B4F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B4F2Cu;
    // 0x1b4f2c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1b4f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b4f30: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1b4f34: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b4f38: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1b4f38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4f3c: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b4f3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b4f40: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b4f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4f44: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B4F44u;
    {
        const bool branch_taken_0x1b4f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F44u;
            // 0x1b4f48: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f44) {
            ctx->pc = 0x1B4E40u;
            runtime->cooperativeGuestYield();
            goto label_1b4e40;
        }
    }
    ctx->pc = 0x1B4F4Cu;
    // 0x1b4f4c: 0x0  nop
    ctx->pc = 0x1b4f4cu;
    // NOP
label_1b4f50:
    // 0x1b4f50: 0x922301a0  lbu         $v1, 0x1A0($s1)
    ctx->pc = 0x1b4f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b4f54: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b4f54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b4f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4f5c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4F5Cu;
    {
        const bool branch_taken_0x1b4f5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b4f5c) {
            ctx->pc = 0x1B4F98u;
            goto label_1b4f98;
        }
    }
    ctx->pc = 0x1B4F64u;
    // 0x1b4f64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b4f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b4f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b4f74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1b4f78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b4f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b4f7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b4f7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b4f80: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4f84: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1b4f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4f88: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4f8c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1b4f8cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1b4f90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4F90u;
    {
        const bool branch_taken_0x1b4f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F90u;
            // 0x1b4f94: 0xfa210000  sqc2        $vf1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f90) {
            ctx->pc = 0x1B4FA8u;
            goto label_1b4fa8;
        }
    }
    ctx->pc = 0x1B4F98u;
label_1b4f98:
    // 0x1b4f98: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4F98u;
    {
        const bool branch_taken_0x1b4f98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F98u;
            // 0x1b4f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f98) {
            ctx->pc = 0x1B4FA8u;
            goto label_1b4fa8;
        }
    }
    ctx->pc = 0x1B4FA0u;
    // 0x1b4fa0: 0xc06d316  jal         func_1B4C58
    ctx->pc = 0x1B4FA0u;
    SET_GPR_U32(ctx, 31, 0x1B4FA8u);
    ctx->pc = 0x1B4FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FA0u;
            // 0x1b4fa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C58u;
    if (runtime->hasFunction(0x1B4C58u)) {
        auto targetFn = runtime->lookupFunction(0x1B4C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FA8u; }
        if (ctx->pc != 0x1B4FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4C58_0x1b4c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FA8u; }
        if (ctx->pc != 0x1B4FA8u) { return; }
    }
    ctx->pc = 0x1B4FA8u;
label_1b4fa8:
    // 0x1b4fa8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1b4fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4fac: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1b4facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b4fb0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1b4fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b4fb4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1b4fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b4fb8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1b4fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b4fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FBCu;
            // 0x1b4fc0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4D78u: goto label_1b4d78;
            case 0x1B4D9Cu: goto label_1b4d9c;
            case 0x1B4DB8u: goto label_1b4db8;
            case 0x1B4E30u: goto label_1b4e30;
            case 0x1B4E40u: goto label_1b4e40;
            case 0x1B4E78u: goto label_1b4e78;
            case 0x1B4E94u: goto label_1b4e94;
            case 0x1B4EE0u: goto label_1b4ee0;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F50u: goto label_1b4f50;
            case 0x1B4F98u: goto label_1b4f98;
            case 0x1B4FA8u: goto label_1b4fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4FC4u;
    // 0x1b4fc4: 0x0  nop
    ctx->pc = 0x1b4fc4u;
    // NOP
}

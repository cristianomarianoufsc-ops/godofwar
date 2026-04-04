#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28943c
// Address: 0x28943c - 0x2894f4
void entry_28943c_0x2894f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28943c_0x2894f4");
#endif

    ctx->pc = 0x28943cu;

    // 0x28943c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x28943cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x289440: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x289440u;
    {
        const bool branch_taken_0x289440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289440u;
            // 0x289444: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289440) {
            ctx->pc = 0x2894B8u;
            goto label_2894b8;
        }
    }
    ctx->pc = 0x289448u;
    // 0x289448: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x289448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x28944c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28944Cu;
    {
        const bool branch_taken_0x28944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28944Cu;
            // 0x289450: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28944c) {
            ctx->pc = 0x2894B8u;
            goto label_2894b8;
        }
    }
    ctx->pc = 0x289454u;
    // 0x289454: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x289454u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x289458: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x289458u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x28945c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x28945cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289460: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x289460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x289464: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x289464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x289468: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x289468u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x28946c: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x28946Cu;
    {
        const bool branch_taken_0x28946c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x289470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28946Cu;
            // 0x289470: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28946c) {
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x289474u;
    // 0x289474: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x289474u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_289478:
    // 0x289478: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x289478u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x28947c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x28947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x289480: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x289480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289484: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x289484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x289488: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x289488u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x28948c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28948Cu;
    {
        const bool branch_taken_0x28948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28948Cu;
            // 0x289490: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28948c) {
            ctx->pc = 0x289478u;
            runtime->cooperativeGuestYield();
            goto label_289478;
        }
    }
    ctx->pc = 0x289494u;
    // 0x289494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289494u;
    {
        const bool branch_taken_0x289494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289494u;
            // 0x289498: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289494) {
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x28949Cu;
label_28949c:
    // 0x28949c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x28949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2894a0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2894a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2894a4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2894a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2894a8:
    // 0x2894a8: 0x0  nop
    ctx->pc = 0x2894a8u;
    // NOP
    // 0x2894ac: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2894ACu;
    {
        const bool branch_taken_0x2894ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2894ac) {
            ctx->pc = 0x2894B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2894ACu;
            // 0x2894b0: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28949Cu;
            runtime->cooperativeGuestYield();
            goto label_28949c;
        }
    }
    ctx->pc = 0x2894B4u;
    // 0x2894b4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2894b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2894b8:
    // 0x2894b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2894b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2894bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2894bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2894c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2894c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2894c4: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2894C4u;
    {
        const bool branch_taken_0x2894c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2894c4) {
            ctx->pc = 0x2894ECu;
            goto label_2894ec;
        }
    }
    ctx->pc = 0x2894CCu;
    // 0x2894cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2894ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2894d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2894d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2894d4:
    // 0x2894d4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2894d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2894d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2894d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2894dc: 0x0  nop
    ctx->pc = 0x2894dcu;
    // NOP
    // 0x2894e0: 0x0  nop
    ctx->pc = 0x2894e0u;
    // NOP
    // 0x2894e4: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2894E4u;
    {
        const bool branch_taken_0x2894e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2894E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894E4u;
            // 0x2894e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894e4) {
            ctx->pc = 0x2894D4u;
            runtime->cooperativeGuestYield();
            goto label_2894d4;
        }
    }
    ctx->pc = 0x2894ECu;
label_2894ec:
    // 0x2894ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2894ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2894F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894ECu;
            // 0x2894f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289478u: goto label_289478;
            case 0x28949Cu: goto label_28949c;
            case 0x2894A8u: goto label_2894a8;
            case 0x2894B8u: goto label_2894b8;
            case 0x2894D4u: goto label_2894d4;
            case 0x2894ECu: goto label_2894ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2894F4u;
}

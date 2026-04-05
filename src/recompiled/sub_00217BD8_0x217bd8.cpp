#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217BD8
// Address: 0x217bd8 - 0x217ca8
void sub_00217BD8_0x217bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217BD8_0x217bd8");
#endif

    ctx->pc = 0x217bd8u;

    // 0x217bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217bdc: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x217bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x217be0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x217be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x217be4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x217be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x217be8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x217be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x217bec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x217becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x217bf0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x217bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x217bf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x217bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x217bf8: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x217bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x217bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c04: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x217c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x217c08: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x217c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x217c0c: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x217c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x217c10: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x217c10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x217c14: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x217c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x217c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217c1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x217c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x217c20: 0xfe0200c0  sd          $v0, 0xC0($s0)
    ctx->pc = 0x217c20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 2));
    // 0x217c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217c2c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x217c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x217c30: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x217c30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217c34: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x217c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x217c38: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x217c38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x217c3c: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x217c3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x217c40: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x217c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x217c44: 0xfe0200c0  sd          $v0, 0xC0($s0)
    ctx->pc = 0x217c44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 2));
    // 0x217c48: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217c4c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x217c50: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x217c50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x217c54: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x217c54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x217c58: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x217c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x217c5c: 0xfe0200c0  sd          $v0, 0xC0($s0)
    ctx->pc = 0x217c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 2));
    // 0x217c60: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x217c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217c64: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x217c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x217c68: 0xc0541a6  jal         func_150698
    ctx->pc = 0x217C68u;
    SET_GPR_U32(ctx, 31, 0x217C70u);
    ctx->pc = 0x217C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C68u;
            // 0x217c6c: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C70u; }
        if (ctx->pc != 0x217C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C70u; }
        if (ctx->pc != 0x217C70u) { return; }
    }
    ctx->pc = 0x217C70u;
    // 0x217c70: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x217c70u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x217c74: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x217c74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217c78: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x217c7c: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x217c7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x217c80: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x217c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x217c84: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x217c84u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x217c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c8c: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x217c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x217c90: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x217c90u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x217c94: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x217c94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x217c98: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x217c98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x217c9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x217CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217CA0u;
            // 0x217ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217CA8u;
}

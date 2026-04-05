#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130310
// Address: 0x130310 - 0x130370
void sub_00130310_0x130310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130310_0x130310");
#endif

    ctx->pc = 0x130310u;

    // 0x130310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x130314: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x130314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x130318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13031c: 0xc04bfdc  jal         func_12FF70
    ctx->pc = 0x13031Cu;
    SET_GPR_U32(ctx, 31, 0x130324u);
    ctx->pc = 0x130320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13031Cu;
            // 0x130320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF70u;
    if (runtime->hasFunction(0x12FF70u)) {
        auto targetFn = runtime->lookupFunction(0x12FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130324u; }
        if (ctx->pc != 0x130324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FF70_0x12ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130324u; }
        if (ctx->pc != 0x130324u) { return; }
    }
    ctx->pc = 0x130324u;
    // 0x130324: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x130328: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x130328u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13032c: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x13032cu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x130330: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x130330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130334: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x130334u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x130338: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x130338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13033c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130340: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x130340u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x130344: 0xfa030070  sqc2        $vf3, 0x70($s0)
    ctx->pc = 0x130344u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13034c: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x13034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130350: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x130350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130354: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130358: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x130358u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13035c: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13035cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130360: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x130360u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130364: 0x3e00008  jr          $ra
    ctx->pc = 0x130364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130364u;
            // 0x130368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13036Cu;
    // 0x13036c: 0x0  nop
    ctx->pc = 0x13036cu;
    // NOP
}

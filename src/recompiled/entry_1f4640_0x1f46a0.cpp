#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f4640
// Address: 0x1f4640 - 0x1f46a0
void entry_1f4640_0x1f46a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f4640_0x1f46a0");
#endif

    ctx->pc = 0x1f4640u;

    // 0x1f4640: 0x46108142  mul.s       $f5, $f16, $f16
    ctx->pc = 0x1f4640u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1f4644: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f4644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f4648: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f4648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f464c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1f4650: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f4650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f4654: 0x46102842  mul.s       $f1, $f5, $f16
    ctx->pc = 0x1f4654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[16]);
    // 0x1f4658: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1f4658u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1f465c: 0x46052880  add.s       $f2, $f5, $f5
    ctx->pc = 0x1f465cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x1f4660: 0x46010800  add.s       $f0, $f1, $f1
    ctx->pc = 0x1f4660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1f4664: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1f4664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f4668: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1f4668u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f466c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1f466cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1f4670: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1f4670u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1f4674: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x1f4674u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x1f4678: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1f4678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1f467c: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x1f467cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x1f4680: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1f4680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1f4684: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1f4684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1f4688: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x1f4688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x1f468c: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x1f468cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x1f4690: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f4690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f4694: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f4694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f4698: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4698u;
            // 0x1f469c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F46A0u;
}

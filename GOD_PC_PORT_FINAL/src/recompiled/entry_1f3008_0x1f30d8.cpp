#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3008
// Address: 0x1f3008 - 0x1f30d8
void entry_1f3008_0x1f30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3008_0x1f30d8");
#endif

    ctx->pc = 0x1f3008u;

    // 0x1f3008: 0x46108042  mul.s       $f1, $f16, $f16
    ctx->pc = 0x1f3008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1f300c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f3010: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f3010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f3014: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1f3018: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f3018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f301c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3020: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f3020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f3024: 0x46100902  mul.s       $f4, $f1, $f16
    ctx->pc = 0x1f3024u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
    // 0x1f3028: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1f302c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f302cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f3030: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x1f3030u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1f3034: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x1f3034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x1f3038: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f3038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f303c: 0x46010880  add.s       $f2, $f1, $f1
    ctx->pc = 0x1f303cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1f3040: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1f3040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1f3044: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f3044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f3048: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x1f3048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1f304c: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x1f304cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1f3050: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1f3050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x1f3054: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1f3054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1f3058: 0x46082c40  add.s       $f17, $f5, $f8
    ctx->pc = 0x1f3058u;
    ctx->f[17] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x1f305c: 0x46068142  mul.s       $f5, $f16, $f6
    ctx->pc = 0x1f305cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x1f3060: 0x46090280  add.s       $f10, $f0, $f9
    ctx->pc = 0x1f3060u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1f3064: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x1f3064u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1f3068: 0x460380c2  mul.s       $f3, $f16, $f3
    ctx->pc = 0x1f3068u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x1f306c: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x1f306cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1f3070: 0x46101480  add.s       $f18, $f2, $f16
    ctx->pc = 0x1f3070u;
    ctx->f[18] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x1f3074: 0x460c5002  mul.s       $f0, $f10, $f12
    ctx->pc = 0x1f3074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x1f3078: 0x460e8882  mul.s       $f2, $f17, $f14
    ctx->pc = 0x1f3078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[17], ctx->f[14]);
    // 0x1f307c: 0x46053c40  add.s       $f17, $f7, $f5
    ctx->pc = 0x1f307cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x1f3080: 0x46053281  sub.s       $f10, $f6, $f5
    ctx->pc = 0x1f3080u;
    ctx->f[10] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1f3084: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x1f3084u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x1f3088: 0x460122c1  sub.s       $f11, $f4, $f1
    ctx->pc = 0x1f3088u;
    ctx->f[11] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1f308c: 0x460d9102  mul.s       $f4, $f18, $f13
    ctx->pc = 0x1f308cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[18], ctx->f[13]);
    // 0x1f3090: 0x46091c80  add.s       $f18, $f3, $f9
    ctx->pc = 0x1f3090u;
    ctx->f[18] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x1f3094: 0x460c5302  mul.s       $f12, $f10, $f12
    ctx->pc = 0x1f3094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x1f3098: 0x460e8b82  mul.s       $f14, $f17, $f14
    ctx->pc = 0x1f3098u;
    ctx->f[14] = FPU_MUL_S(ctx->f[17], ctx->f[14]);
    // 0x1f309c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x1f309cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
    // 0x1f30a0: 0x460f5842  mul.s       $f1, $f11, $f15
    ctx->pc = 0x1f30a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[15]);
    // 0x1f30a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f30a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f30a8: 0x461042c1  sub.s       $f11, $f8, $f16
    ctx->pc = 0x1f30a8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x1f30ac: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x1f30acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x1f30b0: 0x460d9342  mul.s       $f13, $f18, $f13
    ctx->pc = 0x1f30b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[18], ctx->f[13]);
    // 0x1f30b4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f30b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f30b8: 0x460f5bc2  mul.s       $f15, $f11, $f15
    ctx->pc = 0x1f30b8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[11], ctx->f[15]);
    // 0x1f30bc: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x1f30bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x1f30c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f30c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f30c4: 0x460f6300  add.s       $f12, $f12, $f15
    ctx->pc = 0x1f30c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[15]);
    // 0x1f30c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f30c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f30cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30CCu;
            // 0x1f30d0: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F30D4u;
    // 0x1f30d4: 0x0  nop
    ctx->pc = 0x1f30d4u;
    // NOP
}

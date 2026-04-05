#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ddd68
// Address: 0x1ddd68 - 0x1dddd8
void entry_1ddd68_0x1dddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ddd68_0x1dddd8");
#endif

    ctx->pc = 0x1ddd68u;

    // 0x1ddd68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ddd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ddd6c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ddd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ddd70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddd74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddd78: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ddd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ddd7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDD7Cu;
    {
        const bool branch_taken_0x1ddd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD7Cu;
            // 0x1ddd80: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd7c) {
            ctx->pc = 0x1DDD90u;
            goto label_1ddd90;
        }
    }
    ctx->pc = 0x1DDD84u;
    // 0x1ddd84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDD88u;
    {
        const bool branch_taken_0x1ddd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD88u;
            // 0x1ddd8c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd88) {
            ctx->pc = 0x1DDD94u;
            goto label_1ddd94;
        }
    }
    ctx->pc = 0x1DDD90u;
label_1ddd90:
    // 0x1ddd90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd94:
    // 0x1ddd94: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DDD94u;
    {
        const bool branch_taken_0x1ddd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd94) {
            ctx->pc = 0x1DDDD0u;
            goto label_1dddd0;
        }
    }
    ctx->pc = 0x1DDD9Cu;
    // 0x1ddd9c: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x1ddd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1ddda0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDDA0u;
    {
        const bool branch_taken_0x1ddda0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDA0u;
            // 0x1ddda4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddda0) {
            ctx->pc = 0x1DDDD0u;
            goto label_1dddd0;
        }
    }
    ctx->pc = 0x1DDDA8u;
    // 0x1ddda8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ddda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1dddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dddb0:
    // 0x1dddb0: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1dddb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1dddb4: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1dddb8: 0xe44c0128  swc1        $f12, 0x128($v0)
    ctx->pc = 0x1dddb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1dddbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dddc0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1dddc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1dddc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DDDC4u;
    {
        const bool branch_taken_0x1dddc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDC4u;
            // 0x1dddc8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddc4) {
            ctx->pc = 0x1DDDB0u;
            runtime->cooperativeGuestYield();
            goto label_1dddb0;
        }
    }
    ctx->pc = 0x1DDDCCu;
    // 0x1dddcc: 0x0  nop
    ctx->pc = 0x1dddccu;
    // NOP
label_1dddd0:
    // 0x1dddd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDD90u: goto label_1ddd90;
            case 0x1DDD94u: goto label_1ddd94;
            case 0x1DDDB0u: goto label_1dddb0;
            case 0x1DDDD0u: goto label_1dddd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDDD8u;
}

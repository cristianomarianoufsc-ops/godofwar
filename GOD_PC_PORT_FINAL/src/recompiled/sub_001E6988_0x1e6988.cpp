#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6988
// Address: 0x1e6988 - 0x1e6a00
void sub_001E6988_0x1e6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6988_0x1e6988");
#endif

    ctx->pc = 0x1e6988u;

    // 0x1e6988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e698c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6994: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x1e6994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x1e6998: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6998u;
    {
        const bool branch_taken_0x1e6998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6998) {
            ctx->pc = 0x1E699Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6998u;
            // 0x1e699c: 0xe4cc0168  swc1        $f12, 0x168($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 360), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E69E4u;
            goto label_1e69e4;
        }
    }
    ctx->pc = 0x1E69A0u;
    // 0x1e69a0: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1e69a4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E69A4u;
    {
        const bool branch_taken_0x1e69a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E69A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69A4u;
            // 0x1e69a8: 0xe48d0140  swc1        $f13, 0x140($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69a4) {
            ctx->pc = 0x1E69E0u;
            goto label_1e69e0;
        }
    }
    ctx->pc = 0x1E69ACu;
    // 0x1e69ac: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x1e69acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1e69b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e69b4: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e69b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e69b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e69bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e69bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e69c0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1e69c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1e69c4: 0x3c0140cc  lui         $at, 0x40CC
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16588 << 16));
    // 0x1e69c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e69c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e69cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e69ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e69d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e69d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e69d4: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x1e69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x1e69d8: 0xe4810150  swc1        $f1, 0x150($a0)
    ctx->pc = 0x1e69d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1e69dc: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x1e69dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
label_1e69e0:
    // 0x1e69e0: 0xe4cc0168  swc1        $f12, 0x168($a2)
    ctx->pc = 0x1e69e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 360), bits); }
label_1e69e4:
    // 0x1e69e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e69e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69e8: 0xc0799d8  jal         func_1E6760
    ctx->pc = 0x1E69E8u;
    SET_GPR_U32(ctx, 31, 0x1E69F0u);
    ctx->pc = 0x1E69ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69E8u;
            // 0x1e69ec: 0xacc502dc  sw          $a1, 0x2DC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 732), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6760u;
    if (runtime->hasFunction(0x1E6760u)) {
        auto targetFn = runtime->lookupFunction(0x1E6760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69F0u; }
        if (ctx->pc != 0x1E69F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6760_0x1e6760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69F0u; }
        if (ctx->pc != 0x1E69F0u) { return; }
    }
    ctx->pc = 0x1E69F0u;
    // 0x1e69f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e69f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e69f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E69F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69F4u;
            // 0x1e69f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E69E0u: goto label_1e69e0;
            case 0x1E69E4u: goto label_1e69e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E69FCu;
    // 0x1e69fc: 0x0  nop
    ctx->pc = 0x1e69fcu;
    // NOP
}

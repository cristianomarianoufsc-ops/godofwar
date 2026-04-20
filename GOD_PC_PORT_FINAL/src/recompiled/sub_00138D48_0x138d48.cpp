#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138D48
// Address: 0x138d48 - 0x138de8
// Chamada pelo _start como 4a funcao de inicializacao do jogo.
// Inicializa varios subsistemas do God of War PS2.
void sub_00138D48_0x138d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D48_0x138d48");
#endif

    ctx->pc = 0x138d48u;

    // 0x138d48: addiu $sp, $sp, -48
    ctx->pc = 0x138d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248u));  // -48

    // 0x138d4c: sq $s0, 32($sp)
    ctx->pc = 0x138d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));

    // 0x138d50: sq $s1, 16($sp)
    ctx->pc = 0x138d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));

    // 0x138d54: daddu $s0, $a0, $zero  [delay slot preluded: s0 = a0]
    ctx->pc = 0x138d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));

    // 0x138d58: sd $ra, 0($sp)
    ctx->pc = 0x138d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));

    // 0x138d5c: jal 0x283770  [delay: daddu $s1, $a1, $zero]
    ctx->pc = 0x138d5cu;
    SET_GPR_U32(ctx, 31, 0x138d64u);
    // Delay slot: daddu $s1, $a1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x283770u;
    if (runtime->hasFunction(0x283770u)) {
        auto targetFn = runtime->lookupFunction(0x283770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138d64u; }
        if (ctx->pc != 0x138d64u) { return; }
    } else {
        // func_283770 nao encontrada - skip gracefully
        ctx->pc = 0x138d64u;
    }
    ctx->pc = 0x138d64u;

    // 0x138d64: lui $v0, 0x30  -> r2 = 0x300000
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0x30u << 16));

    // 0x138d68: lui $v1, 0x33  -> r3 = 0x330000
    ctx->pc = 0x138d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0x33u << 16));

    // 0x138d6c: lw $a2, 18212($v0)  -> a2 = mem[0x304724]
    ctx->pc = 0x138d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18212)));

    // 0x138d70: daddu $a0, $s0, $zero  -> a0 = s0
    ctx->pc = 0x138d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));

    // 0x138d74: lui $v0, 0x33  -> r2 = 0x330000
    ctx->pc = 0x138d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0x33u << 16));

    // 0x138d78: daddu $a1, $s1, $zero  -> a1 = s1
    ctx->pc = 0x138d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));

    // 0x138d7c: sw $s0, -3080($v1)  -> mem[0x330000 - 0xC08] = s0
    ctx->pc = 0x138d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), (uint32_t)-3080), GPR_U32(ctx, 16));

    // 0x138d80: jal 0x17aa88  [delay: sw $s1, -3076($v0)]
    ctx->pc = 0x138d80u;
    SET_GPR_U32(ctx, 31, 0x138d88u);
    // Delay slot: sw $s1, -3076($v0) -> mem[0x330000 - 0xC04] = s1
    WRITE32(ADD32(GPR_U32(ctx, 2), (uint32_t)-3076), GPR_U32(ctx, 17));
    ctx->pc = 0x17aa88u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17aa88u)) {
            auto targetFn = runtime->lookupFunction(0x17aa88u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138d88u; }
            if (ctx->pc != 0x138d88u) { return; }
        } else {
            sub_0017AA88_0x17aa88(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138d88u; }
            if (ctx->pc != 0x138d88u) { return; }
        }
    }
    ctx->pc = 0x138d88u;

    // 0x138d88: jal 0x17acb8  [delay: nop]
    ctx->pc = 0x138d88u;
    SET_GPR_U32(ctx, 31, 0x138d90u);
    ctx->pc = 0x17acb8u;
    if (runtime->hasFunction(0x17acb8u)) {
        auto targetFn = runtime->lookupFunction(0x17acb8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138d90u; }
        if (ctx->pc != 0x138d90u) { return; }
    } else {
        // func_17acb8 nao encontrada - skip
        ctx->pc = 0x138d90u;
    }
    ctx->pc = 0x138d90u;

    // 0x138d90: jal 0x138b10  [delay: nop]
    ctx->pc = 0x138d90u;
    SET_GPR_U32(ctx, 31, 0x138d98u);
    ctx->pc = 0x138b10u;
    if (runtime->hasFunction(0x138b10u)) {
        auto targetFn = runtime->lookupFunction(0x138b10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138d98u; }
        if (ctx->pc != 0x138d98u) { return; }
    } else {
        // func_138b10 nao encontrada - skip
        ctx->pc = 0x138d98u;
    }
    ctx->pc = 0x138d98u;

    // 0x138d98: jal 0x1838d0  [delay: nop]
    ctx->pc = 0x138d98u;
    SET_GPR_U32(ctx, 31, 0x138da0u);
    ctx->pc = 0x1838d0u;
    if (runtime->hasFunction(0x1838d0u)) {
        auto targetFn = runtime->lookupFunction(0x1838d0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138da0u; }
        if (ctx->pc != 0x138da0u) { return; }
    } else {
        // func_1838d0 nao encontrada - skip
        ctx->pc = 0x138da0u;
    }
    ctx->pc = 0x138da0u;

    // 0x138da0: jal 0x17a910  [delay: nop]
    ctx->pc = 0x138da0u;
    SET_GPR_U32(ctx, 31, 0x138da8u);
    ctx->pc = 0x17a910u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17a910u)) {
            auto targetFn = runtime->lookupFunction(0x17a910u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138da8u; }
            if (ctx->pc != 0x138da8u) { return; }
        } else {
            sub_0017A910_0x17a910(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138da8u; }
            if (ctx->pc != 0x138da8u) { return; }
        }
    }
    ctx->pc = 0x138da8u;

    // 0x138da8: jal 0x21ff60  [delay: nop]
    ctx->pc = 0x138da8u;
    SET_GPR_U32(ctx, 31, 0x138db0u);
    ctx->pc = 0x21ff60u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x21ff60u)) {
            auto targetFn = runtime->lookupFunction(0x21ff60u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138db0u; }
            if (ctx->pc != 0x138db0u) { return; }
        } else {
            sub_0021FF60_0x21ff60(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138db0u; }
            if (ctx->pc != 0x138db0u) { return; }
        }
    }
    ctx->pc = 0x138db0u;

    // 0x138db0: jal 0x17bc80  [delay: nop]
    ctx->pc = 0x138db0u;
    SET_GPR_U32(ctx, 31, 0x138db8u);
    ctx->pc = 0x17bc80u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17bc80u)) {
            auto targetFn = runtime->lookupFunction(0x17bc80u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138db8u; }
            if (ctx->pc != 0x138db8u) { return; }
        } else {
            sub_0017BC80_0x17bc80(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138db8u; }
            if (ctx->pc != 0x138db8u) { return; }
        }
    }
    ctx->pc = 0x138db8u;

    // 0x138db8: jal 0x17a940  [delay: nop]
    ctx->pc = 0x138db8u;
    SET_GPR_U32(ctx, 31, 0x138dc0u);
    ctx->pc = 0x17a940u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17a940u)) {
            auto targetFn = runtime->lookupFunction(0x17a940u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dc0u; }
            if (ctx->pc != 0x138dc0u) { return; }
        } else {
            sub_0017A940_0x17a940(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dc0u; }
            if (ctx->pc != 0x138dc0u) { return; }
        }
    }
    ctx->pc = 0x138dc0u;

    // 0x138dc0: jal 0x17aa18  [delay: nop]
    ctx->pc = 0x138dc0u;
    SET_GPR_U32(ctx, 31, 0x138dc8u);
    ctx->pc = 0x17aa18u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17aa18u)) {
            auto targetFn = runtime->lookupFunction(0x17aa18u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dc8u; }
            if (ctx->pc != 0x138dc8u) { return; }
        } else {
            sub_0017AA18_0x17aa18(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dc8u; }
            if (ctx->pc != 0x138dc8u) { return; }
        }
    }
    ctx->pc = 0x138dc8u;

    // 0x138dc8: jal 0x17a9b0  [delay: nop]
    ctx->pc = 0x138dc8u;
    SET_GPR_U32(ctx, 31, 0x138dd0u);
    ctx->pc = 0x17a9b0u;
    {
        const uint32_t __entryPc = ctx->pc;
        if (runtime->hasFunction(0x17a9b0u)) {
            auto targetFn = runtime->lookupFunction(0x17a9b0u);
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dd0u; }
            if (ctx->pc != 0x138dd0u) { return; }
        } else {
            sub_0017A9B0_0x17a9b0(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138dd0u; }
            if (ctx->pc != 0x138dd0u) { return; }
        }
    }
    ctx->pc = 0x138dd0u;

    // 0x138dd0: lq $s0, 32($sp)
    ctx->pc = 0x138dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));

    // 0x138dd4: daddu $v0, $zero, $zero  -> retorno = 0
    ctx->pc = 0x138dd4u;
    SET_GPR_U64(ctx, 2, 0);

    // 0x138dd8: lq $s1, 16($sp)
    ctx->pc = 0x138dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));

    // 0x138ddc: ld $ra, 0($sp)
    ctx->pc = 0x138ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));

    // 0x138de0: jr $ra  [delay: addiu $sp, $sp, 48]
    ctx->pc = 0x138de0u;
    // Delay slot: addiu $sp, $sp, 48
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = GPR_U32(ctx, 31);
}

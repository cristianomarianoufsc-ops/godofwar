#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A52C0
// Address: 0x1a52c0 - 0x1a5338
void sub_001A52C0_0x1a52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A52C0_0x1a52c0");
#endif

    ctx->pc = 0x1a52c0u;

    // 0x1a52c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a52c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a52c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a52c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a52d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a52d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a52d4: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1a52d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a52d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a52d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a52dc: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x1a52dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a52e0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a52e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a52e4: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x1a52e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a52e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a52e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a52ec: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A52ECu;
    SET_GPR_U32(ctx, 31, 0x1A52F4u);
    ctx->pc = 0x1A52F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52ECu;
            // 0x1a52f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52F4u; }
        if (ctx->pc != 0x1A52F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52F4u; }
        if (ctx->pc != 0x1A52F4u) { return; }
    }
    ctx->pc = 0x1A52F4u;
    // 0x1a52f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a52f8: 0xa6110010  sh          $s1, 0x10($s0)
    ctx->pc = 0x1a52f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a52fc: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1a52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
    // 0x1a5300: 0xa6120012  sh          $s2, 0x12($s0)
    ctx->pc = 0x1a5300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5304: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a5304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a5308: 0xa6130014  sh          $s3, 0x14($s0)
    ctx->pc = 0x1a5308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x1a530c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a530cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5310: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1a5310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1a5314: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a5314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5318: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a531c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a531cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5320: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a5320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5328: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a532c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A532Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A532Cu;
            // 0x1a5330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5334u;
    // 0x1a5334: 0x0  nop
    ctx->pc = 0x1a5334u;
    // NOP
}

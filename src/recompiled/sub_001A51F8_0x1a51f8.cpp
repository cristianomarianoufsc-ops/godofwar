#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A51F8
// Address: 0x1a51f8 - 0x1a5270
void sub_001A51F8_0x1a51f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A51F8_0x1a51f8");
#endif

    ctx->pc = 0x1a51f8u;

    // 0x1a51f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a51f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a51fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a5200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5204: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a5208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a520c: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1a520cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a5210: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a5210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a5214: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x1a5214u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a5218: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a5218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a521c: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x1a521cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a5220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5224: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A5224u;
    SET_GPR_U32(ctx, 31, 0x1A522Cu);
    ctx->pc = 0x1A5228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5224u;
            // 0x1a5228: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A522Cu; }
        if (ctx->pc != 0x1A522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A522Cu; }
        if (ctx->pc != 0x1A522Cu) { return; }
    }
    ctx->pc = 0x1A522Cu;
    // 0x1a522c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a5230: 0xa6110010  sh          $s1, 0x10($s0)
    ctx->pc = 0x1a5230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a5234: 0x2442aa98  addiu       $v0, $v0, -0x5568
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945432));
    // 0x1a5238: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1a5238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1a523c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a523cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a5240: 0xa6120012  sh          $s2, 0x12($s0)
    ctx->pc = 0x1a5240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5248: 0xa6130014  sh          $s3, 0x14($s0)
    ctx->pc = 0x1a5248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x1a524c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a524cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5250: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5258: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a5258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a525c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5260: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5264: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5264u;
            // 0x1a5268: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A526Cu;
    // 0x1a526c: 0x0  nop
    ctx->pc = 0x1a526cu;
    // NOP
}

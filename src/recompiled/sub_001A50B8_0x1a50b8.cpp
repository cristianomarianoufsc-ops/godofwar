#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A50B8
// Address: 0x1a50b8 - 0x1a51a8
void sub_001A50B8_0x1a50b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A50B8_0x1a50b8");
#endif

    ctx->pc = 0x1a50b8u;

    // 0x1a50b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a50bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a50bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a50c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a50c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a50c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a50cc: 0x98c00  sll         $s1, $t1, 16
    ctx->pc = 0x1a50ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1a50d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a50d4: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1a50d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a50d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a50dc: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x1a50dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a50e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1a50e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1a50e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a50e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50e8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1a50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1a50ec: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a50ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50f0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1a50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1a50f4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1a50f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50f8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1a50f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a50fc: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1a50fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5100: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1a5100u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a5104: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1a5104u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1a5108: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1a5108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a510c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a510cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1a5110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5114: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5114u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a5118: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A5118u;
    SET_GPR_U32(ctx, 31, 0x1A5120u);
    ctx->pc = 0x1A511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5118u;
            // 0x1a511c: 0x118c03  sra         $s1, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5120u; }
        if (ctx->pc != 0x1A5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5120u; }
        if (ctx->pc != 0x1A5120u) { return; }
    }
    ctx->pc = 0x1A5120u;
    // 0x1a5120: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1a5120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1a5124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5128: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a512c: 0x2442aae8  addiu       $v0, $v0, -0x5518
    ctx->pc = 0x1a512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
    // 0x1a5130: 0xa612000c  sh          $s2, 0xC($s0)
    ctx->pc = 0x1a5130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5134: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a5134u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1a5138: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a5138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a513c: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x1a513cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x1a5140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5144: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1a5144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1a5148: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a514c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a514cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a5150: 0xa2150015  sb          $s5, 0x15($s0)
    ctx->pc = 0x1a5150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 21));
    // 0x1a5154: 0xa6110016  sh          $s1, 0x16($s0)
    ctx->pc = 0x1a5154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a5158: 0xe6150018  swc1        $f21, 0x18($s0)
    ctx->pc = 0x1a5158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1a515c: 0xe616001c  swc1        $f22, 0x1C($s0)
    ctx->pc = 0x1a515cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1a5160: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x1a5160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x1a5164: 0xae170024  sw          $s7, 0x24($s0)
    ctx->pc = 0x1a5164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 23));
    // 0x1a5168: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x1a5168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a516c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a516cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5170: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a5170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a5174: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a5174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5178: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a5178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a517c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a517cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5180: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1a5180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5184: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1a5184u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5188: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1a5188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a518c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5190: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1a5190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a5194: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1a5194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a5198: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1a5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a519c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A519Cu;
            // 0x1a51a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A51A4u;
    // 0x1a51a4: 0x0  nop
    ctx->pc = 0x1a51a4u;
    // NOP
}

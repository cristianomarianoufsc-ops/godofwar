#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5490
// Address: 0x1a5490 - 0x1a5520
void sub_001A5490_0x1a5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5490_0x1a5490");
#endif

    ctx->pc = 0x1a5490u;

    // 0x1a5490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a5494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a5498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a549c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a54a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a54a4: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A54A4u;
    SET_GPR_U32(ctx, 31, 0x1A54ACu);
    ctx->pc = 0x1A54A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54A4u;
            // 0x1a54a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54ACu; }
        if (ctx->pc != 0x1A54ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54ACu; }
        if (ctx->pc != 0x1A54ACu) { return; }
    }
    ctx->pc = 0x1A54ACu;
    // 0x1a54ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1a54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a54b0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1a54b4: 0x2463a958  addiu       $v1, $v1, -0x56A8
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945112));
    // 0x1a54b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a54bc: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1a54bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a54c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a54c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a54c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54c8: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x1a54c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a54cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a54d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a54d4: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x1a54d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1a54d8: 0x70032789  pexew       $a0, $v1
    ctx->pc = 0x1a54d8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1a54dc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1a54dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a54e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a54e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a54e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a54e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a54e8: 0x70031fc9  prot3w      $v1, $v1
    ctx->pc = 0x1a54e8u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1a54ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a54ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a54f0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a54f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1a54f4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1a54f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a54f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a54f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a54fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a54fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a5500: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5504: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5508: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1a5508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a550c: 0xa6040018  sh          $a0, 0x18($s0)
    ctx->pc = 0x1a550cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5510: 0xa605001a  sh          $a1, 0x1A($s0)
    ctx->pc = 0x1a5510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5514: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a5514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5518: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A551Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5518u;
            // 0x1a551c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5520u;
}

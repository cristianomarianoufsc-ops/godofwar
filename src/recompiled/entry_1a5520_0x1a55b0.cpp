#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5520
// Address: 0x1a5520 - 0x1a55b0
void entry_1a5520_0x1a55b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5520_0x1a55b0");
#endif

    ctx->pc = 0x1a5520u;

    // 0x1a5520: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1a5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1a5524: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a5524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a5528: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1a5528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a552c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A552Cu;
    {
        const bool branch_taken_0x1a552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a552c) {
            ctx->pc = 0x1A5530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A552Cu;
            // 0x1a5530: 0x78a50050  lq          $a1, 0x50($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A553Cu;
            goto label_1a553c;
        }
    }
    ctx->pc = 0x1A5534u;
label_1a5534:
    // 0x1a5534: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5534u;
            // 0x1a5538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5534u: goto label_1a5534;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A55A8u: goto label_1a55a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A553Cu;
label_1a553c:
    // 0x1a553c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a553cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5540: 0x84830016  lh          $v1, 0x16($a0)
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1a5544: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a5548: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a5548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a554c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5550: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1a5554: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A5554u;
    {
        const bool branch_taken_0x1a5554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5554) {
            ctx->pc = 0x1A5534u;
            runtime->cooperativeGuestYield();
            goto label_1a5534;
        }
    }
    ctx->pc = 0x1A555Cu;
    // 0x1a555c: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x1a555cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1a5560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5564: 0x84830018  lh          $v1, 0x18($a0)
    ctx->pc = 0x1a5564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a5568: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a556c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a556cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a5570: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5574: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a5574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1a5578: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5578u;
    {
        const bool branch_taken_0x1a5578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5578) {
            ctx->pc = 0x1A55A8u;
            goto label_1a55a8;
        }
    }
    ctx->pc = 0x1A5580u;
    // 0x1a5580: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1a5580u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1a5584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5588: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x1a5588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1a558c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a558cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a5590: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a5590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a5594: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a5598: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a5598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a559c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1a559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1a55a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55A0u;
            // 0x1a55a4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5534u: goto label_1a5534;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A55A8u: goto label_1a55a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A55A8u;
label_1a55a8:
    // 0x1a55a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55A8u;
            // 0x1a55ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5534u: goto label_1a5534;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A55A8u: goto label_1a55a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A55B0u;
}

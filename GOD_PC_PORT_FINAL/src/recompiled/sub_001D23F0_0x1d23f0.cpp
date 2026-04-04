#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D23F0
// Address: 0x1d23f0 - 0x1d2510
void sub_001D23F0_0x1d23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D23F0_0x1d23f0");
#endif

    ctx->pc = 0x1d23f0u;

    // 0x1d23f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d23f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d23f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d23f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d23fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d23fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2400: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d2404: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D2404u;
    {
        const bool branch_taken_0x1d2404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2404) {
            ctx->pc = 0x1D2408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2404u;
            // 0x1d2408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2500u;
            goto label_1d2500;
        }
    }
    ctx->pc = 0x1D240Cu;
    // 0x1d240c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1d240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d2410: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1d2410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1d2414: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2414u;
    {
        const bool branch_taken_0x1d2414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2414u;
            // 0x1d2418: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2414) {
            ctx->pc = 0x1D244Cu;
            goto label_1d244c;
        }
    }
    ctx->pc = 0x1D241Cu;
    // 0x1d241c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d2420: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d2424: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d2424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d2428: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d242c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d2430: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d2430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d2434: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d243c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D243Cu;
    {
        const bool branch_taken_0x1d243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D2440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D243Cu;
            // 0x1d2440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d243c) {
            ctx->pc = 0x1D2448u;
            goto label_1d2448;
        }
    }
    ctx->pc = 0x1D2444u;
    // 0x1d2444: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d2448:
    // 0x1d2448: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d2448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d244c:
    // 0x1d244c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2450: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d2454: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d2458: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2460u);
        ctx->pc = 0x1D245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2458u;
            // 0x1d245c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2460u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2448u: goto label_1d2448;
            case 0x1D244Cu: goto label_1d244c;
            case 0x1D2484u: goto label_1d2484;
            case 0x1D2488u: goto label_1d2488;
            case 0x1D24A8u: goto label_1d24a8;
            case 0x1D24ACu: goto label_1d24ac;
            case 0x1D2500u: goto label_1d2500;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2460u; }
            if (ctx->pc != 0x1D2460u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2460u;
    // 0x1d2460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d2460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2464: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d2468: 0x9465000e  lhu         $a1, 0xE($v1)
    ctx->pc = 0x1d2468u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1d246c: 0x94440014  lhu         $a0, 0x14($v0)
    ctx->pc = 0x1d246cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d2470: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1d2470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d2474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2474u;
    {
        const bool branch_taken_0x1d2474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2474u;
            // 0x1d2478: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2474) {
            ctx->pc = 0x1D2484u;
            goto label_1d2484;
        }
    }
    ctx->pc = 0x1D247Cu;
    // 0x1d247c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D247Cu;
    {
        const bool branch_taken_0x1d247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D247Cu;
            // 0x1d2480: 0xa460000e  sh          $zero, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d247c) {
            ctx->pc = 0x1D2488u;
            goto label_1d2488;
        }
    }
    ctx->pc = 0x1D2484u;
label_1d2484:
    // 0x1d2484: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1d2484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_1d2488:
    // 0x1d2488: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d248c: 0x94650010  lhu         $a1, 0x10($v1)
    ctx->pc = 0x1d248cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d2490: 0x94440016  lhu         $a0, 0x16($v0)
    ctx->pc = 0x1d2490u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1d2494: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1d2494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d2498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2498u;
    {
        const bool branch_taken_0x1d2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2498u;
            // 0x1d249c: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2498) {
            ctx->pc = 0x1D24A8u;
            goto label_1d24a8;
        }
    }
    ctx->pc = 0x1D24A0u;
    // 0x1d24a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D24A0u;
    {
        const bool branch_taken_0x1d24a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24A0u;
            // 0x1d24a4: 0xa4600010  sh          $zero, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24a0) {
            ctx->pc = 0x1D24ACu;
            goto label_1d24ac;
        }
    }
    ctx->pc = 0x1D24A8u;
label_1d24a8:
    // 0x1d24a8: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x1d24a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
label_1d24ac:
    // 0x1d24ac: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d24b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d24b4: 0x8443cc9c  lh          $v1, -0x3364($v0)
    ctx->pc = 0x1d24b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1d24b8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d24bc: 0x94a50018  lhu         $a1, 0x18($a1)
    ctx->pc = 0x1d24bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1d24c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d24c4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d24c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d24c8: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
    // 0x1d24cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d24ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d24d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d24d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d24d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d24d8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1d24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1d24dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d24e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d24e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d24e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d24e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d24e8: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1d24e8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1d24ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d24ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d24f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d24f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d24f4: 0xa6020078  sh          $v0, 0x78($s0)
    ctx->pc = 0x1d24f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d24f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d24f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d24fc: 0x0  nop
    ctx->pc = 0x1d24fcu;
    // NOP
label_1d2500:
    // 0x1d2500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2504u;
            // 0x1d2508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2448u: goto label_1d2448;
            case 0x1D244Cu: goto label_1d244c;
            case 0x1D2484u: goto label_1d2484;
            case 0x1D2488u: goto label_1d2488;
            case 0x1D24A8u: goto label_1d24a8;
            case 0x1D24ACu: goto label_1d24ac;
            case 0x1D2500u: goto label_1d2500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D250Cu;
    // 0x1d250c: 0x0  nop
    ctx->pc = 0x1d250cu;
    // NOP
}

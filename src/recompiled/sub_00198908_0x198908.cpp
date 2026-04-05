#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198908
// Address: 0x198908 - 0x199368
void sub_00198908_0x198908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198908_0x198908");
#endif

    ctx->pc = 0x198908u;

label_198908:
    // 0x198908: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x19890c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x19890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x198910: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x198910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x198914: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198918: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x198918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x19891c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19891cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198920: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x198920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x198924: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x198924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x198928: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x198928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x19892c: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x19892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x198930: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x198930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x198934: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x198934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x198938: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x198938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x19893c: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198940: 0x8ed00104  lw          $s0, 0x104($s6)
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x198944: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x198948: 0xdee5bdf8  ld          $a1, -0x4208($s7)
    ctx->pc = 0x198948u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 4294950392)));
    // 0x19894c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x19894cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x198950: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198950u;
    {
        const bool branch_taken_0x198950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x198954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198950u;
            // 0x198954: 0x8671001c  lh          $s1, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198950) {
            ctx->pc = 0x198960u;
            goto label_198960;
        }
    }
    ctx->pc = 0x198958u;
    // 0x198958: 0xc04da64  jal         func_136990
    ctx->pc = 0x198958u;
    SET_GPR_U32(ctx, 31, 0x198960u);
    ctx->pc = 0x19895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198958u;
            // 0x19895c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198960u; }
        if (ctx->pc != 0x198960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198960u; }
        if (ctx->pc != 0x198960u) { return; }
    }
    ctx->pc = 0x198960u;
label_198960:
    // 0x198960: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x198964: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x198968: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19896c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198970: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x198970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198974: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x198974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x198978: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x198978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19897c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x198980: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x198980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198984: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x198984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x198988: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x198988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19898c: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x19898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x198990: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x198990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x198994: 0x84a40060  lh          $a0, 0x60($a1)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x198998: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x19899c: 0x40f809  jalr        $v0
    ctx->pc = 0x19899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1989A4u);
        ctx->pc = 0x1989A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19899Cu;
            // 0x1989a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1989A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1989A4u; }
            if (ctx->pc != 0x1989A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1989A4u;
    // 0x1989a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1989a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989a8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1989ac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1989acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1989b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1989b4: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1989b8: 0x8c65d2ac  lw          $a1, -0x2D54($v1)
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1989bc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1989bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1989c0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1989c4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1989c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1989c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1989cc: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1989CCu;
    {
        const bool branch_taken_0x1989cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1989D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989CCu;
            // 0x1989d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989cc) {
            ctx->pc = 0x1989D8u;
            goto label_1989d8;
        }
    }
    ctx->pc = 0x1989D4u;
    // 0x1989d4: 0x8c750008  lw          $s5, 0x8($v1)
    ctx->pc = 0x1989d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1989d8:
    // 0x1989d8: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x1989d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1989dc: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x1989e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1989E0u;
    {
        const bool branch_taken_0x1989e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1989E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989E0u;
            // 0x1989e4: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989e0) {
            ctx->pc = 0x198A18u;
            goto label_198a18;
        }
    }
    ctx->pc = 0x1989E8u;
    // 0x1989e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1989E8u;
    {
        const bool branch_taken_0x1989e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1989ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989E8u;
            // 0x1989ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989e8) {
            ctx->pc = 0x198A1Cu;
            goto label_198a1c;
        }
    }
    ctx->pc = 0x1989F0u;
    // 0x1989f0: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1989f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1989f4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1989f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1989f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1989fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x198a00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198a04: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198A04u;
    {
        const bool branch_taken_0x198a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A04u;
            // 0x198a08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a04) {
            ctx->pc = 0x198A10u;
            goto label_198a10;
        }
    }
    ctx->pc = 0x198A0Cu;
    // 0x198a0c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198a10:
    // 0x198a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198A10u;
    {
        const bool branch_taken_0x198a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A10u;
            // 0x198a14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a10) {
            ctx->pc = 0x198A1Cu;
            goto label_198a1c;
        }
    }
    ctx->pc = 0x198A18u;
label_198a18:
    // 0x198a18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198a1c:
    // 0x198a1c: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x198A1Cu;
    {
        const bool branch_taken_0x198a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a1c) {
            ctx->pc = 0x198A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198A1Cu;
            // 0x198a20: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198A70u;
            goto label_198a70;
        }
    }
    ctx->pc = 0x198A24u;
    // 0x198a24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198a28: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x198a2c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x198a30: 0x40f809  jalr        $v0
    ctx->pc = 0x198A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198A38u);
        ctx->pc = 0x198A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A30u;
            // 0x198a34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198A38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198A38u; }
            if (ctx->pc != 0x198A38u) { return; }
        }
        }
    }
    ctx->pc = 0x198A38u;
    // 0x198a38: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x198a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198a40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198a44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x198a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x198a48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x198a48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x198a4c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x198a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a50: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x198a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198a58: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x198a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x198a5c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x198a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a60: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x198a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x198a64: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x198a64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198A68u;
    {
        const bool branch_taken_0x198a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A68u;
            // 0x198a6c: 0xfba10100  sqc2        $vf1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a68) {
            ctx->pc = 0x198A88u;
            goto label_198a88;
        }
    }
    ctx->pc = 0x198A70u;
label_198a70:
    // 0x198a70: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x198a70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a74: 0xd8420040  lqc2        $vf2, 0x40($v0)
    ctx->pc = 0x198a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x198a78: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x198a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198a7c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x198a7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198a80: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x198a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198a84: 0x0  nop
    ctx->pc = 0x198a84u;
    // NOP
label_198a88:
    // 0x198a88: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x198a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x198a8c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x198a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x198a90: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x198a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198a94: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x198a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198a98: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x198a98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x198a9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x198a9cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x198aa0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x198aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198aa4: 0x4a0002ff  vnop
    ctx->pc = 0x198aa4u;
    // NOP operation, no action needed for VU0
    // 0x198aa8: 0x4a0002ff  vnop
    ctx->pc = 0x198aa8u;
    // NOP operation, no action needed for VU0
    // 0x198aac: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x198aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198ab0: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x198AB0u;
    {
        const bool branch_taken_0x198ab0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AB0u;
            // 0x198ab4: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ab0) {
            ctx->pc = 0x198B48u;
            goto label_198b48;
        }
    }
    ctx->pc = 0x198AB8u;
    // 0x198ab8: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x198ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x198abc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198ac0: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x198ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x198ac4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198AC4u;
    {
        const bool branch_taken_0x198ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AC4u;
            // 0x198ac8: 0xdee5bdf8  ld          $a1, -0x4208($s7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ac4) {
            ctx->pc = 0x198AD8u;
            goto label_198ad8;
        }
    }
    ctx->pc = 0x198ACCu;
    // 0x198acc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198ACCu;
    {
        const bool branch_taken_0x198acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198ACCu;
            // 0x198ad0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198acc) {
            ctx->pc = 0x198AF0u;
            goto label_198af0;
        }
    }
    ctx->pc = 0x198AD4u;
    // 0x198ad4: 0x0  nop
    ctx->pc = 0x198ad4u;
    // NOP
label_198ad8:
    // 0x198ad8: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x198ad8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x198adc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198ADCu;
    {
        const bool branch_taken_0x198adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x198AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198ADCu;
            // 0x198ae0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198adc) {
            ctx->pc = 0x198AF0u;
            goto label_198af0;
        }
    }
    ctx->pc = 0x198AE4u;
    // 0x198ae4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x198AE4u;
    SET_GPR_U32(ctx, 31, 0x198AECu);
    ctx->pc = 0x198AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AE4u;
            // 0x198ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AECu; }
        if (ctx->pc != 0x198AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AECu; }
        if (ctx->pc != 0x198AECu) { return; }
    }
    ctx->pc = 0x198AECu;
    // 0x198aec: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x198aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_198af0:
    // 0x198af0: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x198af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198af4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x198af4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198af8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x198af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198afc: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x198afcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198b00: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x198b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x198b04: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x198b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198b08: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x198b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198b0c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x198b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x198b10: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x198b10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x198b14: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x198b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198b18: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x198b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198b1c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x198b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x198b20: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x198b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198b24: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x198b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198b28: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x198b28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x198b2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x198b2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x198b30: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x198b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198b34: 0x4a0002ff  vnop
    ctx->pc = 0x198b34u;
    // NOP operation, no action needed for VU0
    // 0x198b38: 0x4a0002ff  vnop
    ctx->pc = 0x198b38u;
    // NOP operation, no action needed for VU0
    // 0x198b3c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x198b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198b40: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x198b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198b44: 0x0  nop
    ctx->pc = 0x198b44u;
    // NOP
label_198b48:
    // 0x198b48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198b4c: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x198b50: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x198b54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x198b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198b58: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x198b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x198b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x198b60: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x198b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x198b64: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x198b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x198b68: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x198b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x198b6c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x198b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198b70: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x198b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x198b74: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x198b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198b78: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x198b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b80: 0xc090e12  jal         func_243848
    ctx->pc = 0x198B80u;
    SET_GPR_U32(ctx, 31, 0x198B88u);
    ctx->pc = 0x198B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B80u;
            // 0x198b84: 0xfba20130  sqc2        $vf2, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243848u;
    if (runtime->hasFunction(0x243848u)) {
        auto targetFn = runtime->lookupFunction(0x243848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B88u; }
        if (ctx->pc != 0x198B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243848_0x243850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B88u; }
        if (ctx->pc != 0x198B88u) { return; }
    }
    ctx->pc = 0x198B88u;
    // 0x198b88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b8c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x198b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x198b90: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x198b94: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x198b94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x198b98: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x198b9c: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x198b9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x198ba0: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x198ba4: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x198ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ba8: 0x24635ad8  addiu       $v1, $v1, 0x5AD8
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23256));
    // 0x198bac: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x198bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x198bb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x198bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198bb4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x198bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x198bb8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x198bbc: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x198bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x198bc0: 0x2522f170  addiu       $v0, $t1, -0xE90
    ctx->pc = 0x198bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963568));
    // 0x198bc4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x198bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x198bc8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x198bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x198bcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198bd0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198bd4: 0xdba20130  lqc2        $vf2, 0x130($sp)
    ctx->pc = 0x198bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x198bd8: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x198bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198bdc: 0x8c84bcf8  lw          $a0, -0x4308($a0)
    ctx->pc = 0x198bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950136)));
    // 0x198be0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x198be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x198be4: 0xad26f170  sw          $a2, -0xE90($t1)
    ctx->pc = 0x198be4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963568), GPR_U32(ctx, 6));
    // 0x198be8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x198be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x198bec: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x198becu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198bf0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x198bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x198bf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198bf8: 0xac560014  sw          $s6, 0x14($v0)
    ctx->pc = 0x198bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 22));
    // 0x198bfc: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x198bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
    // 0x198c00: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x198c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x198c04: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x198c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x198c08: 0xa7a00098  sh          $zero, 0x98($sp)
    ctx->pc = 0x198c08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x198c0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x198c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x198c10: 0xc50c001c  lwc1        $f12, 0x1C($t0)
    ctx->pc = 0x198c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198c14: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x198c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x198c18: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x198c18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x198c1c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x198c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x198c20: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x198C20u;
    SET_GPR_U32(ctx, 31, 0x198C28u);
    ctx->pc = 0x198C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C20u;
            // 0x198c24: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C28u; }
        if (ctx->pc != 0x198C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C28u; }
        if (ctx->pc != 0x198C28u) { return; }
    }
    ctx->pc = 0x198C28u;
    // 0x198c28: 0x87a20098  lh          $v0, 0x98($sp)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x198c2c: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x198C2Cu;
    {
        const bool branch_taken_0x198c2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C2Cu;
            // 0x198c30: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c2c) {
            ctx->pc = 0x198D60u;
            goto label_198d60;
        }
    }
    ctx->pc = 0x198C34u;
    // 0x198c34: 0x0  nop
    ctx->pc = 0x198c34u;
    // NOP
label_198c38:
    // 0x198c38: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x198c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198c40: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198c44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198c48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x198c4c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x198c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x198c50: 0x40f809  jalr        $v0
    ctx->pc = 0x198C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198C58u);
        ctx->pc = 0x198C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C50u;
            // 0x198c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198C58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198C58u; }
            if (ctx->pc != 0x198C58u) { return; }
        }
        }
    }
    ctx->pc = 0x198C58u;
    // 0x198c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c5c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x198c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x198c60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x198C60u;
    {
        const bool branch_taken_0x198c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C60u;
            // 0x198c64: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c60) {
            ctx->pc = 0x198C84u;
            goto label_198c84;
        }
    }
    ctx->pc = 0x198C68u;
    // 0x198c68: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x198c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x198c6c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x198c70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198C70u;
    {
        const bool branch_taken_0x198c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C70u;
            // 0x198c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c70) {
            ctx->pc = 0x198C88u;
            goto label_198c88;
        }
    }
    ctx->pc = 0x198C78u;
    // 0x198c78: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x198c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x198c7c: 0xc081522  jal         func_205488
    ctx->pc = 0x198C7Cu;
    SET_GPR_U32(ctx, 31, 0x198C84u);
    ctx->pc = 0x198C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C7Cu;
            // 0x198c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C84u; }
        if (ctx->pc != 0x198C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C84u; }
        if (ctx->pc != 0x198C84u) { return; }
    }
    ctx->pc = 0x198C84u;
label_198c84:
    // 0x198c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198c88:
    // 0x198c88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198c8c: 0xc090d5c  jal         func_243570
    ctx->pc = 0x198C8Cu;
    SET_GPR_U32(ctx, 31, 0x198C94u);
    ctx->pc = 0x198C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198C8Cu;
            // 0x198c90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C94u; }
        if (ctx->pc != 0x198C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C94u; }
        if (ctx->pc != 0x198C94u) { return; }
    }
    ctx->pc = 0x198C94u;
    // 0x198c94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198C94u;
    {
        const bool branch_taken_0x198c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198c94) {
            ctx->pc = 0x198C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198C94u;
            // 0x198c98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198CACu;
            goto label_198cac;
        }
    }
    ctx->pc = 0x198C9Cu;
    // 0x198c9c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x198C9Cu;
    SET_GPR_U32(ctx, 31, 0x198CA4u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CA4u; }
        if (ctx->pc != 0x198CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CA4u; }
        if (ctx->pc != 0x198CA4u) { return; }
    }
    ctx->pc = 0x198CA4u;
    // 0x198ca4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198CA4u;
    {
        const bool branch_taken_0x198ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198ca4) {
            ctx->pc = 0x198CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198CA4u;
            // 0x198ca8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198CACu;
            goto label_198cac;
        }
    }
    ctx->pc = 0x198CACu;
label_198cac:
    // 0x198cac: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x198CACu;
    {
        const bool branch_taken_0x198cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CACu;
            // 0x198cb0: 0x87a20098  lh          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cac) {
            ctx->pc = 0x198D50u;
            goto label_198d50;
        }
    }
    ctx->pc = 0x198CB4u;
    // 0x198cb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198cb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x198cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198cbc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x198cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x198cc0: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x198cc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x198cc4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x198cc8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x198cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x198ccc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x198cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198cd0: 0x40f809  jalr        $v0
    ctx->pc = 0x198CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198CD8u);
        ctx->pc = 0x198CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CD0u;
            // 0x198cd4: 0x7fa30120  sq          $v1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198CD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198CD8u; }
            if (ctx->pc != 0x198CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x198CD8u;
    // 0x198cd8: 0x3c014166  lui         $at, 0x4166
    ctx->pc = 0x198cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16742 << 16));
    // 0x198cdc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x198ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198ce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198ce8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x198ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x198cec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x198cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x198cf0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x198cf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198cf4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x198cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198cf8: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x198cf8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x198cfc: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x198cfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x198d00: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x198d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198d04: 0xc06562c  jal         func_1958B0
    ctx->pc = 0x198D04u;
    SET_GPR_U32(ctx, 31, 0x198D0Cu);
    ctx->pc = 0x198D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198D04u;
            // 0x198d08: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1958B0u;
    if (runtime->hasFunction(0x1958B0u)) {
        auto targetFn = runtime->lookupFunction(0x1958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D0Cu; }
        if (ctx->pc != 0x198D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1958b0_0x195ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D0Cu; }
        if (ctx->pc != 0x198D0Cu) { return; }
    }
    ctx->pc = 0x198D0Cu;
    // 0x198d0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x198D0Cu;
    {
        const bool branch_taken_0x198d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D0Cu;
            // 0x198d10: 0x87a20098  lh          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d0c) {
            ctx->pc = 0x198D50u;
            goto label_198d50;
        }
    }
    ctx->pc = 0x198D14u;
    // 0x198d14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198d18: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x198d18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x198d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x198d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x198d20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x198d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x198d24: 0xc0782f0  jal         func_1E0BC0
    ctx->pc = 0x198D24u;
    SET_GPR_U32(ctx, 31, 0x198D2Cu);
    ctx->pc = 0x198D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198D24u;
            // 0x198d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BC0u;
    if (runtime->hasFunction(0x1E0BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D2Cu; }
        if (ctx->pc != 0x198D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BC0_0x1e0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D2Cu; }
        if (ctx->pc != 0x198D2Cu) { return; }
    }
    ctx->pc = 0x198D2Cu;
    // 0x198d2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x198d30: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x198d34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198d38: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198D38u;
    {
        const bool branch_taken_0x198d38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x198D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D38u;
            // 0x198d3c: 0x87a20098  lh          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d38) {
            ctx->pc = 0x198D50u;
            goto label_198d50;
        }
    }
    ctx->pc = 0x198D40u;
    // 0x198d40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198d44: 0x9442002e  lhu         $v0, 0x2E($v0)
    ctx->pc = 0x198d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x198d48: 0xa4620072  sh          $v0, 0x72($v1)
    ctx->pc = 0x198d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x198d4c: 0x87a20098  lh          $v0, 0x98($sp)
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
label_198d50:
    // 0x198d50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x198d54: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198d58: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x198D58u;
    {
        const bool branch_taken_0x198d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D58u;
            // 0x198d5c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d58) {
            ctx->pc = 0x198C38u;
            runtime->cooperativeGuestYield();
            goto label_198c38;
        }
    }
    ctx->pc = 0x198D60u;
label_198d60:
    // 0x198d60: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x198d60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198d64: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x198d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x198d68: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x198d68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198d6c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x198d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198d70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198d74: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x198d74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x198d78: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x198d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198d7c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x198d7cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x198d80: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x198d80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x198d84: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x198d84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198d88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x198d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198d8c: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x198d8cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x198d90: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x198d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x198d94: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x198d94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198d98: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x198d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x198d9c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x198da0: 0xc06149c  jal         func_185270
    ctx->pc = 0x198DA0u;
    SET_GPR_U32(ctx, 31, 0x198DA8u);
    ctx->pc = 0x198DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DA0u;
            // 0x198da4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DA8u; }
        if (ctx->pc != 0x198DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DA8u; }
        if (ctx->pc != 0x198DA8u) { return; }
    }
    ctx->pc = 0x198DA8u;
    // 0x198da8: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x198DA8u;
    {
        const bool branch_taken_0x198da8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198DA8u;
            // 0x198dac: 0x3c06002a  lui         $a2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198da8) {
            ctx->pc = 0x198DF8u;
            goto label_198df8;
        }
    }
    ctx->pc = 0x198DB0u;
    // 0x198db0: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x198db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x198db4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x198db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198db8: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x198db8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x198dbc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x198dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x198dc0: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x198dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x198dc4: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x198dc4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x198dc8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x198dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198dcc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x198dccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x198dd0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x198dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x198dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dd8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x198dd8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x198ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198de0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x198de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198de4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x198de4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x198de8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x198de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198dec: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x198decu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x198df0: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x198df0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x198df4: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x198df4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_198df8:
    // 0x198df8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x198dfc: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x198dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198e00: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x198e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198e04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x198e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198e08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198e0c: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x198e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x198e10: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x198e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198e14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x198e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198e18: 0x0  nop
    ctx->pc = 0x198e18u;
    // NOP
    // 0x198e1c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x198E1Cu;
    {
        const bool branch_taken_0x198e1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E1Cu;
            // 0x198e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e1c) {
            ctx->pc = 0x198E60u;
            goto label_198e60;
        }
    }
    ctx->pc = 0x198E24u;
    // 0x198e24: 0xc081c1e  jal         func_207078
    ctx->pc = 0x198E24u;
    SET_GPR_U32(ctx, 31, 0x198E2Cu);
    ctx->pc = 0x198E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E24u;
            // 0x198e28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E2Cu; }
        if (ctx->pc != 0x198E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E2Cu; }
        if (ctx->pc != 0x198E2Cu) { return; }
    }
    ctx->pc = 0x198E2Cu;
    // 0x198e2c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x198E2Cu;
    {
        const bool branch_taken_0x198e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e2c) {
            ctx->pc = 0x198E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198E2Cu;
            // 0x198e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198E60u;
            goto label_198e60;
        }
    }
    ctx->pc = 0x198E34u;
    // 0x198e34: 0xc081c1e  jal         func_207078
    ctx->pc = 0x198E34u;
    SET_GPR_U32(ctx, 31, 0x198E3Cu);
    ctx->pc = 0x198E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E34u;
            // 0x198e38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E3Cu; }
        if (ctx->pc != 0x198E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E3Cu; }
        if (ctx->pc != 0x198E3Cu) { return; }
    }
    ctx->pc = 0x198E3Cu;
    // 0x198e3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x198e40: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x198e44: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x198e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x198e48: 0x60f809  jalr        $v1
    ctx->pc = 0x198E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198E50u);
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E48u;
            // 0x198e4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198E50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198E50u; }
            if (ctx->pc != 0x198E50u) { return; }
        }
        }
    }
    ctx->pc = 0x198E50u;
    // 0x198e50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e54: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198E54u;
    {
        const bool branch_taken_0x198e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E54u;
            // 0x198e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e54) {
            ctx->pc = 0x198E60u;
            goto label_198e60;
        }
    }
    ctx->pc = 0x198E5Cu;
    // 0x198e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e60:
    // 0x198e60: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x198e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x198e64: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x198e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x198e68: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x198e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x198e6c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x198e6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x198e70: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x198e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x198e74: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x198e74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x198e78: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x198e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x198e7c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x198e7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x198e80: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x198e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x198e84: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x198e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198e88: 0x3e00008  jr          $ra
    ctx->pc = 0x198E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E88u;
            // 0x198e8c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198E90u;
    // 0x198e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ea0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x198ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x198ea4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198EA4u;
    {
        const bool branch_taken_0x198ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ea4) {
            ctx->pc = 0x198EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198EA4u;
            // 0x198ea8: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198EB8u;
            goto label_198eb8;
        }
    }
    ctx->pc = 0x198EACu;
    // 0x198eac: 0xc0661bc  jal         func_1986F0
    ctx->pc = 0x198EACu;
    SET_GPR_U32(ctx, 31, 0x198EB4u);
    ctx->pc = 0x198EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198EACu;
            // 0x198eb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1986F0u;
    if (runtime->hasFunction(0x1986F0u)) {
        auto targetFn = runtime->lookupFunction(0x1986F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198EB4u; }
        if (ctx->pc != 0x198EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001986F0_0x1986f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198EB4u; }
        if (ctx->pc != 0x198EB4u) { return; }
    }
    ctx->pc = 0x198EB4u;
    // 0x198eb4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x198eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_198eb8:
    // 0x198eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x198EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198EC0u;
            // 0x198ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198EC8u;
    // 0x198ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198ecc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198ed0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x198ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ed8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x198edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198ee0: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x198ee4: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x198ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x198ee8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198EE8u;
    {
        const bool branch_taken_0x198ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198EE8u;
            // 0x198eec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ee8) {
            ctx->pc = 0x198F24u;
            goto label_198f24;
        }
    }
    ctx->pc = 0x198EF0u;
    // 0x198ef0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198ef4: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x198ef8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x198ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x198efc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x198f00: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x198f04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x198f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x198f08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198f0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f10: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x198F10u;
    {
        const bool branch_taken_0x198f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x198F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F10u;
            // 0x198f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f10) {
            ctx->pc = 0x198F20u;
            goto label_198f20;
        }
    }
    ctx->pc = 0x198F18u;
    // 0x198f18: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x198f1c: 0x0  nop
    ctx->pc = 0x198f1cu;
    // NOP
label_198f20:
    // 0x198f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198f24:
    // 0x198f24: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x198F24u;
    {
        const bool branch_taken_0x198f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F24u;
            // 0x198f28: 0x8e32004c  lw          $s2, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f24) {
            ctx->pc = 0x198F78u;
            goto label_198f78;
        }
    }
    ctx->pc = 0x198F2Cu;
    // 0x198f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f30: 0xc066242  jal         func_198908
    ctx->pc = 0x198F30u;
    SET_GPR_U32(ctx, 31, 0x198F38u);
    ctx->pc = 0x198F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F30u;
            // 0x198f34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198908u;
    runtime->cooperativeGuestYield();
    goto label_198908;
    ctx->pc = 0x198F38u;
label_198f38:
    // 0x198f38: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x198F38u;
    {
        const bool branch_taken_0x198f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f38) {
            ctx->pc = 0x198F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F38u;
            // 0x198f3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F88u;
            goto label_198f88;
        }
    }
    ctx->pc = 0x198F40u;
    // 0x198f40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198f44: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x198f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x198f48: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x198f4c: 0x40f809  jalr        $v0
    ctx->pc = 0x198F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198F54u);
        ctx->pc = 0x198F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F4Cu;
            // 0x198f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198F54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198F54u; }
            if (ctx->pc != 0x198F54u) { return; }
        }
        }
    }
    ctx->pc = 0x198F54u;
    // 0x198f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f58: 0xc08235e  jal         func_208D78
    ctx->pc = 0x198F58u;
    SET_GPR_U32(ctx, 31, 0x198F60u);
    ctx->pc = 0x198F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F58u;
            // 0x198f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F60u; }
        if (ctx->pc != 0x198F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F60u; }
        if (ctx->pc != 0x198F60u) { return; }
    }
    ctx->pc = 0x198F60u;
    // 0x198f60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198f64: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198f68: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198F68u;
    {
        const bool branch_taken_0x198f68 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x198f68) {
            ctx->pc = 0x198F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F68u;
            // 0x198f6c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F7Cu;
            goto label_198f7c;
        }
    }
    ctx->pc = 0x198F70u;
    // 0x198f70: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x198F70u;
    SET_GPR_U32(ctx, 31, 0x198F78u);
    ctx->pc = 0x198F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F70u;
            // 0x198f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F78u; }
        if (ctx->pc != 0x198F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F78u; }
        if (ctx->pc != 0x198F78u) { return; }
    }
    ctx->pc = 0x198F78u;
label_198f78:
    // 0x198f78: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x198f78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_198f7c:
    // 0x198f7c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x198f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x198f80: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x198f80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x198f84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198f88:
    // 0x198f88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198f8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198f94: 0x3e00008  jr          $ra
    ctx->pc = 0x198F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F94u;
            // 0x198f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198F9Cu;
    // 0x198f9c: 0x0  nop
    ctx->pc = 0x198f9cu;
    // NOP
    // 0x198fa0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x198fa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198fa4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x198fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x198fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198FA8u;
    {
        const bool branch_taken_0x198fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FA8u;
            // 0x198fac: 0x34620003  ori         $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fa8) {
            ctx->pc = 0x198FB4u;
            goto label_198fb4;
        }
    }
    ctx->pc = 0x198FB0u;
    // 0x198fb0: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x198fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_198fb4:
    // 0x198fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x198FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198FBCu;
    // 0x198fbc: 0x0  nop
    ctx->pc = 0x198fbcu;
    // NOP
    // 0x198fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198fc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198fc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x198fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x198fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198fd8: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x198fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x198fdc: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x198fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x198fe0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198FE0u;
    {
        const bool branch_taken_0x198fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FE0u;
            // 0x198fe4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fe0) {
            ctx->pc = 0x19901Cu;
            goto label_19901c;
        }
    }
    ctx->pc = 0x198FE8u;
    // 0x198fe8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198fec: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x198fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x198ff0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x198ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x198ff4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x198ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x198ff8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x198ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x198ffc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x198ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x199000: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199008: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x199008u;
    {
        const bool branch_taken_0x199008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x19900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199008u;
            // 0x19900c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199008) {
            ctx->pc = 0x199018u;
            goto label_199018;
        }
    }
    ctx->pc = 0x199010u;
    // 0x199010: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x199010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x199014: 0x0  nop
    ctx->pc = 0x199014u;
    // NOP
label_199018:
    // 0x199018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19901c:
    // 0x19901c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x199020: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x199020u;
    {
        const bool branch_taken_0x199020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199020u;
            // 0x199024: 0x8e320068  lw          $s2, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199020) {
            ctx->pc = 0x199070u;
            goto label_199070;
        }
    }
    ctx->pc = 0x199028u;
    // 0x199028: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x199028u;
    {
        const bool branch_taken_0x199028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199028) {
            ctx->pc = 0x19902Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199028u;
            // 0x19902c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199074u;
            goto label_199074;
        }
    }
    ctx->pc = 0x199030u;
    // 0x199030: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x199030u;
    SET_GPR_U32(ctx, 31, 0x199038u);
    ctx->pc = 0x199034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199030u;
            // 0x199034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199038u; }
        if (ctx->pc != 0x199038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199038u; }
        if (ctx->pc != 0x199038u) { return; }
    }
    ctx->pc = 0x199038u;
    // 0x199038: 0xc0655dc  jal         func_195770
    ctx->pc = 0x199038u;
    SET_GPR_U32(ctx, 31, 0x199040u);
    ctx->pc = 0x19903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199038u;
            // 0x19903c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199040u; }
        if (ctx->pc != 0x199040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195770_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199040u; }
        if (ctx->pc != 0x199040u) { return; }
    }
    ctx->pc = 0x199040u;
    // 0x199040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199048: 0xc0660e6  jal         func_198398
    ctx->pc = 0x199048u;
    SET_GPR_U32(ctx, 31, 0x199050u);
    ctx->pc = 0x19904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199048u;
            // 0x19904c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198398u;
    if (runtime->hasFunction(0x198398u)) {
        auto targetFn = runtime->lookupFunction(0x198398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199050u; }
        if (ctx->pc != 0x199050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198398_0x198398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199050u; }
        if (ctx->pc != 0x199050u) { return; }
    }
    ctx->pc = 0x199050u;
    // 0x199050: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x199054: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x199058: 0x24848e90  addiu       $a0, $a0, -0x7170
    ctx->pc = 0x199058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938256));
    // 0x19905c: 0x24638ec8  addiu       $v1, $v1, -0x7138
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938312));
    // 0x199060: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x199060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x199064: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x199064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x199068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199068u;
    {
        const bool branch_taken_0x199068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19906Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199068u;
            // 0x19906c: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199068) {
            ctx->pc = 0x19907Cu;
            goto label_19907c;
        }
    }
    ctx->pc = 0x199070u;
label_199070:
    // 0x199070: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x199070u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_199074:
    // 0x199074: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x199074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x199078: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x199078u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_19907c:
    // 0x19907c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19907cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x199084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19908c: 0x3e00008  jr          $ra
    ctx->pc = 0x19908Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19908Cu;
            // 0x199090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199094u;
    // 0x199094: 0x0  nop
    ctx->pc = 0x199094u;
    // NOP
    // 0x199098: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19909c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1990a0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1990a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1990a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1990a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1990a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1990a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1990ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1990acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1990b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1990b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1990b4: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1990b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1990b8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1990b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1990bc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1990BCu;
    {
        const bool branch_taken_0x1990bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1990bc) {
            ctx->pc = 0x1990C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1990BCu;
            // 0x1990c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199100u;
            goto label_199100;
        }
    }
    ctx->pc = 0x1990C4u;
    // 0x1990c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1990c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1990c8: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1990cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1990ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1990d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1990d4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1990d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1990dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1990e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1990e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1990e4: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1990E4u;
    {
        const bool branch_taken_0x1990e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1990E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990E4u;
            // 0x1990e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e4) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990ECu;
    // 0x1990ec: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1990ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1990f0:
    // 0x1990f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1990F0u;
    {
        const bool branch_taken_0x1990f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990F0u;
            // 0x1990f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990f0) {
            ctx->pc = 0x199100u;
            goto label_199100;
        }
    }
    ctx->pc = 0x1990F8u;
label_1990f8:
    // 0x1990f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1990F8u;
    {
        const bool branch_taken_0x1990f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990F8u;
            // 0x1990fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990f8) {
            ctx->pc = 0x19914Cu;
            goto label_19914c;
        }
    }
    ctx->pc = 0x199100u;
label_199100:
    // 0x199100: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199104: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x199104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x199108: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x19910c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199110: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199114: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x199118: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x199118u;
    {
        const bool branch_taken_0x199118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199118u;
            // 0x19911c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199118) {
            ctx->pc = 0x19914Cu;
            goto label_19914c;
        }
    }
    ctx->pc = 0x199120u;
    // 0x199120: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x199120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x199124: 0x0  nop
    ctx->pc = 0x199124u;
    // NOP
label_199128:
    // 0x199128: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19912c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x19912cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x199130: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x199130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x199134: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x199138: 0x24638fc0  addiu       $v1, $v1, -0x7040
    ctx->pc = 0x199138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938560));
    // 0x19913c: 0x1043ffee  beq         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19913Cu;
            // 0x199140: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19913c) {
            ctx->pc = 0x1990F8u;
            runtime->cooperativeGuestYield();
            goto label_1990f8;
        }
    }
    ctx->pc = 0x199144u;
    // 0x199144: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199144u;
    {
        const bool branch_taken_0x199144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x199148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199144u;
            // 0x199148: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199144) {
            ctx->pc = 0x199128u;
            runtime->cooperativeGuestYield();
            goto label_199128;
        }
    }
    ctx->pc = 0x19914Cu;
label_19914c:
    // 0x19914c: 0x10c0004e  beqz        $a2, . + 4 + (0x4E << 2)
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19914Cu;
            // 0x199150: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19914c) {
            ctx->pc = 0x199288u;
            goto label_199288;
        }
    }
    ctx->pc = 0x199154u;
    // 0x199154: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x199158: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x199158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x19915c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199160: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x199160u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x199164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x199164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199168: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x199168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19916c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199170: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x199170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x199174: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x199174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x199178: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x199178u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x19917c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x19917cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x199180: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x199180u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x199184: 0x0  nop
    ctx->pc = 0x199184u;
    // NOP
label_199188:
    // 0x199188: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19918c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x19918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x199190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199198: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x199198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19919c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19919Cu;
    {
        const bool branch_taken_0x19919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19919Cu;
            // 0x1991a0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19919c) {
            ctx->pc = 0x199188u;
            runtime->cooperativeGuestYield();
            goto label_199188;
        }
    }
    ctx->pc = 0x1991A4u;
    // 0x1991a4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1991a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1991a8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1991a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1991ac: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1991acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1991b0: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1991b4: 0x2662e848  addiu       $v0, $s3, -0x17B8
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x1991b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1991b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991bc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1991c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1991c4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1991c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1991c8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1991c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1991cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1991CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1991D4u);
        ctx->pc = 0x1991D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1991CCu;
            // 0x1991d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1991D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1991D4u; }
            if (ctx->pc != 0x1991D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1991D4u;
    // 0x1991d4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1991d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1991D8u;
    {
        const bool branch_taken_0x1991d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1991D8u;
            // 0x1991dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991d8) {
            ctx->pc = 0x1991E8u;
            goto label_1991e8;
        }
    }
    ctx->pc = 0x1991E0u;
    // 0x1991e0: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1991E0u;
    SET_GPR_U32(ctx, 31, 0x1991E8u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991E8u; }
        if (ctx->pc != 0x1991E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991E8u; }
        if (ctx->pc != 0x1991E8u) { return; }
    }
    ctx->pc = 0x1991E8u;
label_1991e8:
    // 0x1991e8: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x1991e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1991ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1991ECu;
    {
        const bool branch_taken_0x1991ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1991ECu;
            // 0x1991f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ec) {
            ctx->pc = 0x199228u;
            goto label_199228;
        }
    }
    ctx->pc = 0x1991F4u;
    // 0x1991f4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1991f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1991f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1991F8u;
    {
        const bool branch_taken_0x1991f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1991F8u;
            // 0x1991fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991f8) {
            ctx->pc = 0x199218u;
            goto label_199218;
        }
    }
    ctx->pc = 0x199200u;
label_199200:
    // 0x199200: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x199200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x199204: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x199204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x199208: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199208u;
            // 0x19920c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199208) {
            ctx->pc = 0x19922Cu;
            goto label_19922c;
        }
    }
    ctx->pc = 0x199210u;
    // 0x199210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199214: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_199218:
    // 0x199218: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x199218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19921c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x199220: 0x5443fff7  bnel        $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x199220u;
    {
        const bool branch_taken_0x199220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199220) {
            ctx->pc = 0x199224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199220u;
            // 0x199224: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199200u;
            runtime->cooperativeGuestYield();
            goto label_199200;
        }
    }
    ctx->pc = 0x199228u;
label_199228:
    // 0x199228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19922c:
    // 0x19922c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x19922cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x199230: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x199230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x199234: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x199234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x199238: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x199238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x19923c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x19923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x199240: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x199244: 0x24428fa0  addiu       $v0, $v0, -0x7060
    ctx->pc = 0x199244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938528));
    // 0x199248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19924c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x19924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x199250: 0xc04c492  jal         func_131248
    ctx->pc = 0x199250u;
    SET_GPR_U32(ctx, 31, 0x199258u);
    ctx->pc = 0x199254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199250u;
            // 0x199254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199258u; }
        if (ctx->pc != 0x199258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199258u; }
        if (ctx->pc != 0x199258u) { return; }
    }
    ctx->pc = 0x199258u;
    // 0x199258: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x199258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19925c: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x199260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19926c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199270: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x199274: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x199278: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x199278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19927c: 0x40f809  jalr        $v0
    ctx->pc = 0x19927Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199284u);
        ctx->pc = 0x199280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19927Cu;
            // 0x199280: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x199284u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199284u; }
            if (ctx->pc != 0x199284u) { return; }
        }
        }
    }
    ctx->pc = 0x199284u;
    // 0x199284: 0x0  nop
    ctx->pc = 0x199284u;
    // NOP
label_199288:
    // 0x199288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19928c: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x19928cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x199290: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x199290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199294: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x199294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199298: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x199298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19929c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19929cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1992a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1992a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1992a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1992A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1992A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992A4u;
            // 0x1992a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1992ACu;
    // 0x1992ac: 0x0  nop
    ctx->pc = 0x1992acu;
    // NOP
    // 0x1992b0: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1992b4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1992b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1992b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1992B8u;
    {
        const bool branch_taken_0x1992b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1992BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992B8u;
            // 0x1992bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992b8) {
            ctx->pc = 0x1992F4u;
            goto label_1992f4;
        }
    }
    ctx->pc = 0x1992C0u;
    // 0x1992c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1992c4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1992c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1992c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1992cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1992d0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1992d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1992d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1992dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1992e0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1992E0u;
    {
        const bool branch_taken_0x1992e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1992E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992E0u;
            // 0x1992e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992e0) {
            ctx->pc = 0x1992F0u;
            goto label_1992f0;
        }
    }
    ctx->pc = 0x1992E8u;
    // 0x1992e8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1992ec: 0x0  nop
    ctx->pc = 0x1992ecu;
    // NOP
label_1992f0:
    // 0x1992f0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1992f4:
    // 0x1992f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1992f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1992fc: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x199300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199308: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19930c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19930Cu;
    {
        const bool branch_taken_0x19930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19930Cu;
            // 0x199310: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19930c) {
            ctx->pc = 0x199360u;
            goto label_199360;
        }
    }
    ctx->pc = 0x199314u;
    // 0x199314: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_199318:
    // 0x199318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19931c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x19931cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x199320: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199324: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x199328: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x19932c: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x199330: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199330u;
    {
        const bool branch_taken_0x199330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x199334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199330u;
            // 0x199334: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199330) {
            ctx->pc = 0x199348u;
            goto label_199348;
        }
    }
    ctx->pc = 0x199338u;
    // 0x199338: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19933c: 0x24428ec8  addiu       $v0, $v0, -0x7138
    ctx->pc = 0x19933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938312));
    // 0x199340: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199340u;
    {
        const bool branch_taken_0x199340 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x199340) {
            ctx->pc = 0x199354u;
            goto label_199354;
        }
    }
    ctx->pc = 0x199348u;
label_199348:
    // 0x199348: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x199348u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19934c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x199350: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x199350u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_199354:
    // 0x199354: 0x14e0fff0  bnez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x199354u;
    {
        const bool branch_taken_0x199354 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x199358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199354u;
            // 0x199358: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199354) {
            ctx->pc = 0x199318u;
            runtime->cooperativeGuestYield();
            goto label_199318;
        }
    }
    ctx->pc = 0x19935Cu;
    // 0x19935c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_199360:
    // 0x199360: 0x3e00008  jr          $ra
    ctx->pc = 0x199360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199360u;
            // 0x199364: 0xa482002a  sh          $v0, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198908u: goto label_198908;
            case 0x198960u: goto label_198960;
            case 0x1989D8u: goto label_1989d8;
            case 0x198A10u: goto label_198a10;
            case 0x198A18u: goto label_198a18;
            case 0x198A1Cu: goto label_198a1c;
            case 0x198A70u: goto label_198a70;
            case 0x198A88u: goto label_198a88;
            case 0x198AD8u: goto label_198ad8;
            case 0x198AF0u: goto label_198af0;
            case 0x198B48u: goto label_198b48;
            case 0x198C38u: goto label_198c38;
            case 0x198C84u: goto label_198c84;
            case 0x198C88u: goto label_198c88;
            case 0x198CACu: goto label_198cac;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198DF8u: goto label_198df8;
            case 0x198E60u: goto label_198e60;
            case 0x198EB8u: goto label_198eb8;
            case 0x198F20u: goto label_198f20;
            case 0x198F24u: goto label_198f24;
            case 0x198F38u: goto label_198f38;
            case 0x198F78u: goto label_198f78;
            case 0x198F7Cu: goto label_198f7c;
            case 0x198F88u: goto label_198f88;
            case 0x198FB4u: goto label_198fb4;
            case 0x199018u: goto label_199018;
            case 0x19901Cu: goto label_19901c;
            case 0x199070u: goto label_199070;
            case 0x199074u: goto label_199074;
            case 0x19907Cu: goto label_19907c;
            case 0x1990F0u: goto label_1990f0;
            case 0x1990F8u: goto label_1990f8;
            case 0x199100u: goto label_199100;
            case 0x199128u: goto label_199128;
            case 0x19914Cu: goto label_19914c;
            case 0x199188u: goto label_199188;
            case 0x1991E8u: goto label_1991e8;
            case 0x199200u: goto label_199200;
            case 0x199218u: goto label_199218;
            case 0x199228u: goto label_199228;
            case 0x19922Cu: goto label_19922c;
            case 0x199288u: goto label_199288;
            case 0x1992F0u: goto label_1992f0;
            case 0x1992F4u: goto label_1992f4;
            case 0x199318u: goto label_199318;
            case 0x199348u: goto label_199348;
            case 0x199354u: goto label_199354;
            case 0x199360u: goto label_199360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199368u;
}

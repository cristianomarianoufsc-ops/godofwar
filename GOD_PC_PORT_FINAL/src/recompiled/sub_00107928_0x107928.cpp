#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107928
// Address: 0x107928 - 0x107b90
void sub_00107928_0x107928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107928_0x107928");
#endif

    ctx->pc = 0x107928u;

    // 0x107928: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10792c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x10792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x107930: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x107930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x107934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x107934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107938: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x107938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x10793c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10793cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107940: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x107940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x107944: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x107944u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107948: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x107948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x10794c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x10794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x107950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x107954: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x107954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x107958: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x107958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x10795c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107960: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x107960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x107964: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x107964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x107968: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x107968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x10796c: 0xc6f50004  lwc1        $f21, 0x4($s7)
    ctx->pc = 0x10796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107970: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x107970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x107974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107978: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x107978u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[21];
    // 0x10797c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x10797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x107980: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x107980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x107984: 0x1204000e  beq         $s0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x107984u;
    {
        const bool branch_taken_0x107984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x107988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107984u;
            // 0x107988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107984) {
            ctx->pc = 0x1079C0u;
            goto label_1079c0;
        }
    }
    ctx->pc = 0x10798Cu;
    // 0x10798c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107990:
    // 0x107990: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x107990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x107994: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x107994u;
    {
        const bool branch_taken_0x107994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107994) {
            ctx->pc = 0x107998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107994u;
            // 0x107998: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1079B8u;
            goto label_1079b8;
        }
    }
    ctx->pc = 0x10799Cu;
    // 0x10799c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1079a0: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1079A0u;
    {
        const bool branch_taken_0x1079a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1079a0) {
            ctx->pc = 0x1079A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079A0u;
            // 0x1079a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1079B8u;
            goto label_1079b8;
        }
    }
    ctx->pc = 0x1079A8u;
    // 0x1079a8: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x1079a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x1079ac: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1079ACu;
    {
        const bool branch_taken_0x1079ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1079ac) {
            ctx->pc = 0x1079B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079ACu;
            // 0x1079b0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x1079B4u;
    // 0x1079b4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1079b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1079b8:
    // 0x1079b8: 0x5604fff5  bnel        $s0, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1079B8u;
    {
        const bool branch_taken_0x1079b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x1079b8) {
            ctx->pc = 0x1079BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079B8u;
            // 0x1079bc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107990u;
            runtime->cooperativeGuestYield();
            goto label_107990;
        }
    }
    ctx->pc = 0x1079C0u;
label_1079c0:
    // 0x1079c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1079c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1079c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1079c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1079c8: 0x265e0014  addiu       $fp, $s2, 0x14
    ctx->pc = 0x1079c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1079cc: 0x121e0040  beq         $s0, $fp, . + 4 + (0x40 << 2)
    ctx->pc = 0x1079CCu;
    {
        const bool branch_taken_0x1079cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x1079D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1079CCu;
            // 0x1079d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079cc) {
            ctx->pc = 0x107AD0u;
            goto label_107ad0;
        }
    }
    ctx->pc = 0x1079D4u;
    // 0x1079d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1079d8:
    // 0x1079d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1079d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1079dc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1079DCu;
    {
        const bool branch_taken_0x1079dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1079dc) {
            ctx->pc = 0x1079E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079DCu;
            // 0x1079e0: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A50u;
            goto label_107a50;
        }
    }
    ctx->pc = 0x1079E4u;
    // 0x1079e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1079e8: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1079E8u;
    {
        const bool branch_taken_0x1079e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1079e8) {
            ctx->pc = 0x1079ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079E8u;
            // 0x1079ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A08u;
            goto label_107a08;
        }
    }
    ctx->pc = 0x1079F0u;
    // 0x1079f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1079f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1079F4u;
    {
        const bool branch_taken_0x1079f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1079f4) {
            ctx->pc = 0x1079F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079F4u;
            // 0x1079f8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A08u;
            goto label_107a08;
        }
    }
    ctx->pc = 0x1079FCu;
    // 0x1079fc: 0x52a0000b  beql        $s5, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1079FCu;
    {
        const bool branch_taken_0x1079fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1079fc) {
            ctx->pc = 0x107A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1079FCu;
            // 0x107a00: 0x8e160008  lw          $s6, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A2Cu;
            goto label_107a2c;
        }
    }
    ctx->pc = 0x107A04u;
    // 0x107a04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x107a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_107a08:
    // 0x107a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a0c: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x107a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x107a10: 0xc045ece  jal         func_117B38
    ctx->pc = 0x107A10u;
    SET_GPR_U32(ctx, 31, 0x107A18u);
    ctx->pc = 0x107A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A10u;
            // 0x107a14: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B38u;
    if (runtime->hasFunction(0x117B38u)) {
        auto targetFn = runtime->lookupFunction(0x117B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A18u; }
        if (ctx->pc != 0x107A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117b38_0x117b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A18u; }
        if (ctx->pc != 0x107A18u) { return; }
    }
    ctx->pc = 0x107A18u;
    // 0x107a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a1c: 0xc045ede  jal         func_117B78
    ctx->pc = 0x107A1Cu;
    SET_GPR_U32(ctx, 31, 0x107A24u);
    ctx->pc = 0x107A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A1Cu;
            // 0x107a20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B78u;
    if (runtime->hasFunction(0x117B78u)) {
        auto targetFn = runtime->lookupFunction(0x117B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A24u; }
        if (ctx->pc != 0x107A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117b78_0x117bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A24u; }
        if (ctx->pc != 0x107A24u) { return; }
    }
    ctx->pc = 0x107A24u;
    // 0x107a24: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x107A24u;
    {
        const bool branch_taken_0x107a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A24u;
            // 0x107a28: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a24) {
            ctx->pc = 0x107AC8u;
            goto label_107ac8;
        }
    }
    ctx->pc = 0x107A2Cu;
label_107a2c:
    // 0x107a2c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x107a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a30: 0xc045ed4  jal         func_117B50
    ctx->pc = 0x107A30u;
    SET_GPR_U32(ctx, 31, 0x107A38u);
    ctx->pc = 0x107A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A30u;
            // 0x107a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B50u;
    if (runtime->hasFunction(0x117B50u)) {
        auto targetFn = runtime->lookupFunction(0x117B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A38u; }
        if (ctx->pc != 0x107A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117b50_0x117b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A38u; }
        if (ctx->pc != 0x107A38u) { return; }
    }
    ctx->pc = 0x107A38u;
    // 0x107a38: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x107a38u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x107a3c: 0xc045ede  jal         func_117B78
    ctx->pc = 0x107A3Cu;
    SET_GPR_U32(ctx, 31, 0x107A44u);
    ctx->pc = 0x107A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A3Cu;
            // 0x107a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B78u;
    if (runtime->hasFunction(0x117B78u)) {
        auto targetFn = runtime->lookupFunction(0x117B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A44u; }
        if (ctx->pc != 0x107A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117b78_0x117bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A44u; }
        if (ctx->pc != 0x107A44u) { return; }
    }
    ctx->pc = 0x107A44u;
    // 0x107a44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x107A44u;
    {
        const bool branch_taken_0x107a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A44u;
            // 0x107a48: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a44) {
            ctx->pc = 0x107AC8u;
            goto label_107ac8;
        }
    }
    ctx->pc = 0x107A4Cu;
    // 0x107a4c: 0x0  nop
    ctx->pc = 0x107a4cu;
    // NOP
label_107a50:
    // 0x107a50: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x107a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x107a54: 0x5233001c  beql        $s1, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x107A54u;
    {
        const bool branch_taken_0x107a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x107a54) {
            ctx->pc = 0x107A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107A54u;
            // 0x107a58: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107AC8u;
            goto label_107ac8;
        }
    }
    ctx->pc = 0x107A5Cu;
    // 0x107a5c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x107a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_107a60:
    // 0x107a60: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x107a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x107a64: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x107A64u;
    {
        const bool branch_taken_0x107a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107a64) {
            ctx->pc = 0x107A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107A64u;
            // 0x107a68: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107ABCu;
            goto label_107abc;
        }
    }
    ctx->pc = 0x107A6Cu;
    // 0x107a6c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x107a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x107a70: 0x54570007  bnel        $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x107A70u;
    {
        const bool branch_taken_0x107a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x107a70) {
            ctx->pc = 0x107A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107A70u;
            // 0x107a74: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A90u;
            goto label_107a90;
        }
    }
    ctx->pc = 0x107A78u;
    // 0x107a78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107a7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A7Cu;
    {
        const bool branch_taken_0x107a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107a7c) {
            ctx->pc = 0x107A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107A7Cu;
            // 0x107a80: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A90u;
            goto label_107a90;
        }
    }
    ctx->pc = 0x107A84u;
    // 0x107a84: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x107A84u;
    {
        const bool branch_taken_0x107a84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x107a84) {
            ctx->pc = 0x107A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107A84u;
            // 0x107a88: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107AA4u;
            goto label_107aa4;
        }
    }
    ctx->pc = 0x107A8Cu;
    // 0x107a8c: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x107a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107a90:
    // 0x107a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a94: 0xc045d0e  jal         func_117438
    ctx->pc = 0x107A94u;
    SET_GPR_U32(ctx, 31, 0x107A9Cu);
    ctx->pc = 0x107A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A94u;
            // 0x107a98: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117438u;
    if (runtime->hasFunction(0x117438u)) {
        auto targetFn = runtime->lookupFunction(0x117438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A9Cu; }
        if (ctx->pc != 0x107A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117438_0x117450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A9Cu; }
        if (ctx->pc != 0x107A9Cu) { return; }
    }
    ctx->pc = 0x107A9Cu;
    // 0x107a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107A9Cu;
    {
        const bool branch_taken_0x107a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A9Cu;
            // 0x107aa0: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a9c) {
            ctx->pc = 0x107AB8u;
            goto label_107ab8;
        }
    }
    ctx->pc = 0x107AA4u;
label_107aa4:
    // 0x107aa4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x107aa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107aa8: 0xc045d14  jal         func_117450
    ctx->pc = 0x107AA8u;
    SET_GPR_U32(ctx, 31, 0x107AB0u);
    ctx->pc = 0x107AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107AA8u;
            // 0x107aac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117450u;
    if (runtime->hasFunction(0x117450u)) {
        auto targetFn = runtime->lookupFunction(0x117450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107AB0u; }
        if (ctx->pc != 0x107AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117450_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107AB0u; }
        if (ctx->pc != 0x107AB0u) { return; }
    }
    ctx->pc = 0x107AB0u;
    // 0x107ab0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x107ab0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x107ab4: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x107ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_107ab8:
    // 0x107ab8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x107ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_107abc:
    // 0x107abc: 0x5633ffe8  bnel        $s1, $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x107ABCu;
    {
        const bool branch_taken_0x107abc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x107abc) {
            ctx->pc = 0x107AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107ABCu;
            // 0x107ac0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107A60u;
            runtime->cooperativeGuestYield();
            goto label_107a60;
        }
    }
    ctx->pc = 0x107AC4u;
    // 0x107ac4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107ac8:
    // 0x107ac8: 0x561effc3  bnel        $s0, $fp, . + 4 + (-0x3D << 2)
    ctx->pc = 0x107AC8u;
    {
        const bool branch_taken_0x107ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        if (branch_taken_0x107ac8) {
            ctx->pc = 0x107ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107AC8u;
            // 0x107acc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1079D8u;
            runtime->cooperativeGuestYield();
            goto label_1079d8;
        }
    }
    ctx->pc = 0x107AD0u;
label_107ad0:
    // 0x107ad0: 0x16a00021  bnez        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x107AD0u;
    {
        const bool branch_taken_0x107ad0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x107AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107AD0u;
            // 0x107ad4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ad0) {
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107AD8u;
    // 0x107ad8: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x107AD8u;
    {
        const bool branch_taken_0x107ad8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107AD8u;
            // 0x107adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ad8) {
            ctx->pc = 0x107B2Cu;
            goto label_107b2c;
        }
    }
    ctx->pc = 0x107AE0u;
    // 0x107ae0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x107ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ae4: 0xc041e1e  jal         func_107878
    ctx->pc = 0x107AE4u;
    SET_GPR_U32(ctx, 31, 0x107AECu);
    ctx->pc = 0x107AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107AE4u;
            // 0x107ae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107878u;
    if (runtime->hasFunction(0x107878u)) {
        auto targetFn = runtime->lookupFunction(0x107878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107AECu; }
        if (ctx->pc != 0x107AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107878_0x107878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107AECu; }
        if (ctx->pc != 0x107AECu) { return; }
    }
    ctx->pc = 0x107AECu;
    // 0x107aec: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x107af0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x107af4: 0x50640018  beql        $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x107AF4u;
    {
        const bool branch_taken_0x107af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x107af4) {
            ctx->pc = 0x107AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107AF4u;
            // 0x107af8: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107AFCu;
    // 0x107afc: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x107afcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x107b00: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x107b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x107b04: 0x0  nop
    ctx->pc = 0x107b04u;
    // NOP
label_107b08:
    // 0x107b08: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x107b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x107b0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107b10: 0x0  nop
    ctx->pc = 0x107b10u;
    // NOP
    // 0x107b14: 0x0  nop
    ctx->pc = 0x107b14u;
    // NOP
    // 0x107b18: 0x0  nop
    ctx->pc = 0x107b18u;
    // NOP
    // 0x107b1c: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107B1Cu;
    {
        const bool branch_taken_0x107b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x107b1c) {
            ctx->pc = 0x107B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107B1Cu;
            // 0x107b20: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107B08u;
            runtime->cooperativeGuestYield();
            goto label_107b08;
        }
    }
    ctx->pc = 0x107B24u;
    // 0x107b24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107B24u;
    {
        const bool branch_taken_0x107b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B24u;
            // 0x107b28: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b24) {
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107B2Cu;
label_107b2c:
    // 0x107b2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x107b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b30: 0xc041d66  jal         func_107598
    ctx->pc = 0x107B30u;
    SET_GPR_U32(ctx, 31, 0x107B38u);
    ctx->pc = 0x107B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107B30u;
            // 0x107b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B38u; }
        if (ctx->pc != 0x107B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B38u; }
        if (ctx->pc != 0x107B38u) { return; }
    }
    ctx->pc = 0x107B38u;
    // 0x107b38: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x107b38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x107b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x107b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107b44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b48: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x107b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x107b4c: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x107b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x107b50: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x107b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x107b54: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x107b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_107b58:
    // 0x107b58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x107b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107b5c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x107b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107b60: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x107b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107b64: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x107b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107b68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x107b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107b6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x107b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107b70: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x107b70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107b74: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x107b74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107b78: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x107b78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107b80: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x107b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107b84: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x107b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107b88: 0x3e00008  jr          $ra
    ctx->pc = 0x107B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B88u;
            // 0x107b8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107990u: goto label_107990;
            case 0x1079B8u: goto label_1079b8;
            case 0x1079C0u: goto label_1079c0;
            case 0x1079D8u: goto label_1079d8;
            case 0x107A08u: goto label_107a08;
            case 0x107A2Cu: goto label_107a2c;
            case 0x107A50u: goto label_107a50;
            case 0x107A60u: goto label_107a60;
            case 0x107A90u: goto label_107a90;
            case 0x107AA4u: goto label_107aa4;
            case 0x107AB8u: goto label_107ab8;
            case 0x107ABCu: goto label_107abc;
            case 0x107AC8u: goto label_107ac8;
            case 0x107AD0u: goto label_107ad0;
            case 0x107B08u: goto label_107b08;
            case 0x107B2Cu: goto label_107b2c;
            case 0x107B58u: goto label_107b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107B90u;
}

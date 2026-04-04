#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDE68
// Address: 0x1dde68 - 0x1ddfc0
void sub_001DDE68_0x1dde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDE68_0x1dde68");
#endif

    ctx->pc = 0x1dde68u;

    // 0x1dde68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dde6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dde70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1dde70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1dde74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dde74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1dde78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1dde7c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1dde7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde80: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1dde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1dde84: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1dde84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dde88: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1dde88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1dde8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dde8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde90: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1dde90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1dde94: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1dde94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1dde98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dde98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dde9c: 0x0  nop
    ctx->pc = 0x1dde9cu;
    // NOP
label_1ddea0:
    // 0x1ddea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddea4: 0xc091038  jal         func_2440E0
    ctx->pc = 0x1DDEA4u;
    SET_GPR_U32(ctx, 31, 0x1DDEACu);
    ctx->pc = 0x1DDEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEA4u;
            // 0x1ddea8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2440E0u;
    if (runtime->hasFunction(0x2440E0u)) {
        auto targetFn = runtime->lookupFunction(0x2440E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEACu; }
        if (ctx->pc != 0x1DDEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2440e0_0x2440e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEACu; }
        if (ctx->pc != 0x1DDEACu) { return; }
    }
    ctx->pc = 0x1DDEACu;
    // 0x1ddeac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ddeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddeb0: 0x1622fffb  bne         $s1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DDEB0u;
    {
        const bool branch_taken_0x1ddeb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEB0u;
            // 0x1ddeb4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeb0) {
            ctx->pc = 0x1DDEA0u;
            runtime->cooperativeGuestYield();
            goto label_1ddea0;
        }
    }
    ctx->pc = 0x1DDEB8u;
    // 0x1ddeb8: 0x8e520104  lw          $s2, 0x104($s2)
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1ddebc: 0x96420086  lhu         $v0, 0x86($s2)
    ctx->pc = 0x1ddebcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x1ddec0: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x1ddec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1ddec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ddec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddec8: 0x9656005c  lhu         $s6, 0x5C($s2)
    ctx->pc = 0x1ddec8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1ddecc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dded0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1dded4: 0x84500004  lh          $s0, 0x4($v0)
    ctx->pc = 0x1dded4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dded8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1dded8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ddedc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DDEDCu;
    {
        const bool branch_taken_0x1ddedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEDCu;
            // 0x1ddee0: 0xae600c00  sw          $zero, 0xC00($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddedc) {
            ctx->pc = 0x1DDF90u;
            goto label_1ddf90;
        }
    }
    ctx->pc = 0x1DDEE4u;
    // 0x1ddee4: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1ddee8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1ddee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ddeec: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x1ddeecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ddef0: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x1ddef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddef4: 0x0  nop
    ctx->pc = 0x1ddef4u;
    // NOP
label_1ddef8:
    // 0x1ddef8: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ddefc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddf00: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DDF00u;
    {
        const bool branch_taken_0x1ddf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ddf00) {
            ctx->pc = 0x1DDF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF00u;
            // 0x1ddf04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF80u;
            goto label_1ddf80;
        }
    }
    ctx->pc = 0x1DDF08u;
    // 0x1ddf08: 0x8e630c00  lw          $v1, 0xC00($s3)
    ctx->pc = 0x1ddf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
    // 0x1ddf0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ddf10: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1ddf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ddf14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ddf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ddf18: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ddf18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ddf1c: 0xde420040  ld          $v0, 0x40($s2)
    ctx->pc = 0x1ddf1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1ddf20: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDF20u;
    {
        const bool branch_taken_0x1ddf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF20u;
            // 0x1ddf24: 0x938821  addu        $s1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf20) {
            ctx->pc = 0x1DDF30u;
            goto label_1ddf30;
        }
    }
    ctx->pc = 0x1DDF28u;
    // 0x1ddf28: 0xc04da64  jal         func_136990
    ctx->pc = 0x1DDF28u;
    SET_GPR_U32(ctx, 31, 0x1DDF30u);
    ctx->pc = 0x1DDF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF28u;
            // 0x1ddf2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF30u; }
        if (ctx->pc != 0x1DDF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF30u; }
        if (ctx->pc != 0x1DDF30u) { return; }
    }
    ctx->pc = 0x1DDF30u;
label_1ddf30:
    // 0x1ddf30: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1ddf34: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1ddf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1ddf38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddf3c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ddf3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ddf40: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1ddf40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1ddf44: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1ddf44u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ddf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddf4c: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1ddf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ddf50: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1ddf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1ddf54: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x1ddf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x1ddf58: 0x3c01411d  lui         $at, 0x411D
    ctx->pc = 0x1ddf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16669 << 16));
    // 0x1ddf5c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1ddf5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1ddf60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf64: 0x8e620c00  lw          $v0, 0xC00($s3)
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
    // 0x1ddf68: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1ddf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1ddf6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ddf70: 0xae350020  sw          $s5, 0x20($s1)
    ctx->pc = 0x1ddf70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
    // 0x1ddf74: 0xae620c00  sw          $v0, 0xC00($s3)
    ctx->pc = 0x1ddf74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3072), GPR_U32(ctx, 2));
    // 0x1ddf78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ddf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ddf7c: 0x0  nop
    ctx->pc = 0x1ddf7cu;
    // NOP
label_1ddf80:
    // 0x1ddf80: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1ddf80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ddf84: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1ddf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ddf88: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1DDF88u;
    {
        const bool branch_taken_0x1ddf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF88u;
            // 0x1ddf8c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf88) {
            ctx->pc = 0x1DDEF8u;
            runtime->cooperativeGuestYield();
            goto label_1ddef8;
        }
    }
    ctx->pc = 0x1DDF90u;
label_1ddf90:
    // 0x1ddf90: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ddf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ddf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ddf98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ddf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddf9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ddfa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddfa4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ddfa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddfa8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddfac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ddfacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFB4u;
            // 0x1ddfb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDEA0u: goto label_1ddea0;
            case 0x1DDEF8u: goto label_1ddef8;
            case 0x1DDF30u: goto label_1ddf30;
            case 0x1DDF80u: goto label_1ddf80;
            case 0x1DDF90u: goto label_1ddf90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDFBCu;
    // 0x1ddfbc: 0x0  nop
    ctx->pc = 0x1ddfbcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDFE8
// Address: 0x1ddfe8 - 0x1de520
void sub_001DDFE8_0x1ddfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDFE8_0x1ddfe8");
#endif

    ctx->pc = 0x1ddfe8u;

    // 0x1ddfe8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1ddfec: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x1ddfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
    // 0x1ddff0: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x1ddff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x1ddff4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ddff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddff8: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x1ddff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x1ddffc: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x1ddffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x1de000: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x1de000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x1de004: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x1de004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
    // 0x1de008: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x1de008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
    // 0x1de00c: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x1de00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
    // 0x1de010: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x1de010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x1de014: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x1de014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x1de018: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x1de018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1de01c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1de01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x1de020: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x1de020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x1de024: 0x8eb30104  lw          $s3, 0x104($s5)
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x1de028: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1de02c: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x1de02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x1de030: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1de034: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1de034u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1de038: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x1de038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1de03c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE03Cu;
    {
        const bool branch_taken_0x1de03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DE040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE03Cu;
            // 0x1de040: 0x96700086  lhu         $s0, 0x86($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de03c) {
            ctx->pc = 0x1DE050u;
            goto label_1de050;
        }
    }
    ctx->pc = 0x1DE044u;
    // 0x1de044: 0xc04da64  jal         func_136990
    ctx->pc = 0x1DE044u;
    SET_GPR_U32(ctx, 31, 0x1DE04Cu);
    ctx->pc = 0x1DE048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE044u;
            // 0x1de048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE04Cu; }
        if (ctx->pc != 0x1DE04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE04Cu; }
        if (ctx->pc != 0x1DE04Cu) { return; }
    }
    ctx->pc = 0x1DE04Cu;
    // 0x1de04c: 0x0  nop
    ctx->pc = 0x1de04cu;
    // NOP
label_1de050:
    // 0x1de050: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1de054: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1de058: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1de05c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1de060: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1de060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1de064: 0x24a3f170  addiu       $v1, $a1, -0xE90
    ctx->pc = 0x1de064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1de068: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1de068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1de06c: 0x3c060b33  lui         $a2, 0xB33
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2867 << 16));
    // 0x1de070: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1de070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de074: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1de074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de078: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1de078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1de07c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1de07cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1de080: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1de080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1de084: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1de084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1de088: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1de088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1de08c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1de08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1de090: 0xaca8f170  sw          $t0, -0xE90($a1)
    ctx->pc = 0x1de090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 8));
    // 0x1de094: 0x700227c9  prot3w      $a0, $v0
    ctx->pc = 0x1de094u;
    SET_GPR_VEC(ctx, 4, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1de098: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1de098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1de09c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1de09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1de0a0: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1de0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1de0a4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1de0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1de0a8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1de0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1de0ac: 0x441ea800  mfc1        $fp, $f21
    ctx->pc = 0x1de0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x1de0b0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1de0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1de0b4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1de0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1de0b8: 0xac750014  sw          $s5, 0x14($v1)
    ctx->pc = 0x1de0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 21));
    // 0x1de0bc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1de0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1de0c0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1de0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1de0c4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1de0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1de0c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1de0cc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1de0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1de0d0: 0x8c770c00  lw          $s7, 0xC00($v1)
    ctx->pc = 0x1de0d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x1de0d4: 0x1ae000fa  blez        $s7, . + 4 + (0xFA << 2)
    ctx->pc = 0x1DE0D4u;
    {
        const bool branch_taken_0x1de0d4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1DE0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0D4u;
            // 0x1de0d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0d4) {
            ctx->pc = 0x1DE4C0u;
            goto label_1de4c0;
        }
    }
    ctx->pc = 0x1DE0DCu;
    // 0x1de0dc: 0x0  nop
    ctx->pc = 0x1de0dcu;
    // NOP
label_1de0e0:
    // 0x1de0e0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1de0e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1de0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1de0e8: 0x600013  mtlo        $v1
    ctx->pc = 0x1de0e8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1de0ec: 0x72828800  madd        $s1, $s4, $v0
    ctx->pc = 0x1de0ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1de0f0: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1de0f4: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1de0f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1de0f8: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x1de0f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1de0fc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE0FCu;
    {
        const bool branch_taken_0x1de0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DE100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0FCu;
            // 0x1de100: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0fc) {
            ctx->pc = 0x1DE110u;
            goto label_1de110;
        }
    }
    ctx->pc = 0x1DE104u;
    // 0x1de104: 0xc04da64  jal         func_136990
    ctx->pc = 0x1DE104u;
    SET_GPR_U32(ctx, 31, 0x1DE10Cu);
    ctx->pc = 0x1DE108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE104u;
            // 0x1de108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE10Cu; }
        if (ctx->pc != 0x1DE10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE10Cu; }
        if (ctx->pc != 0x1DE10Cu) { return; }
    }
    ctx->pc = 0x1DE10Cu;
    // 0x1de10c: 0x0  nop
    ctx->pc = 0x1de10cu;
    // NOP
label_1de110:
    // 0x1de110: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x1de110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1de114: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1de118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de11c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1de11cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de120: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1de120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1de124: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1de124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1de128: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1de128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1de12c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1de12cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de130: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1de130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1de134: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x1de134u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1de138: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1de138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1de13c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1de13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1de140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de144: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x1DE144u;
    {
        const bool branch_taken_0x1de144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de144) {
            ctx->pc = 0x1DE148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE144u;
            // 0x1de148: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE278u;
            goto label_1de278;
        }
    }
    ctx->pc = 0x1DE14Cu;
    // 0x1de14c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1de14cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1de150: 0x48a34000  qmtc2.ni    $v1, $vf8
    ctx->pc = 0x1de150u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de154: 0x4be440ac  vsub.xyzw   $vf2, $vf8, $vf4
    ctx->pc = 0x1de154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de158: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1de158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de15c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1de15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1de160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1de160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1de164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de168: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1de168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de16c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1de16cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1de170: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de174: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1de174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de178: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1de178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de17c: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1de17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de180: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1de180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1de184: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1de184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1de188: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1de188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1de18c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1de18cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de190: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1de190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de194: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1de198: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1de198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1de19c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1de19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de1a0: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1de1a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de1a4: 0x4be1406c  vsub.xyzw   $vf1, $vf8, $vf1
    ctx->pc = 0x1de1a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de1a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1de1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1de1ac: 0x4be220e8  vadd.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1de1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1de1b0: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1de1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1de1b4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1de1b4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de1b8: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1de1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de1bc: 0xfba801c0  sqc2        $vf8, 0x1C0($sp)
    ctx->pc = 0x1de1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1de1c0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1DE1C0u;
    SET_GPR_U32(ctx, 31, 0x1DE1C8u);
    ctx->pc = 0x1DE1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1C0u;
            // 0x1de1c4: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1C8u; }
        if (ctx->pc != 0x1DE1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1C8u; }
        if (ctx->pc != 0x1DE1C8u) { return; }
    }
    ctx->pc = 0x1DE1C8u;
    // 0x1de1c8: 0xdba101b0  lqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1de1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1de1cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DE1CCu;
    {
        const bool branch_taken_0x1de1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1CCu;
            // 0x1de1d0: 0xdba801c0  lqc2        $vf8, 0x1C0($sp) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1cc) {
            ctx->pc = 0x1DE220u;
            goto label_1de220;
        }
    }
    ctx->pc = 0x1DE1D4u;
    // 0x1de1d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de1d8: 0x48be1000  qmtc2.ni    $fp, $vf2
    ctx->pc = 0x1de1d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 30));
    // 0x1de1dc: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1de1e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1de1e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de1e4: 0x4a820844  vsubx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1de1e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de1e8: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1de1e8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de1ec: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1de1f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1de1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1de1f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de1f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1de1f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de1fc: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1de1fcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1de200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de208: 0x0  nop
    ctx->pc = 0x1de208u;
    // NOP
    // 0x1de20c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1DE20Cu;
    {
        const bool branch_taken_0x1de20c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE20Cu;
            // 0x1de210: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de20c) {
            ctx->pc = 0x1DE268u;
            goto label_1de268;
        }
    }
    ctx->pc = 0x1DE214u;
    // 0x1de214: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE214u;
    {
        const bool branch_taken_0x1de214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE214u;
            // 0x1de218: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de214) {
            ctx->pc = 0x1DE25Cu;
            goto label_1de25c;
        }
    }
    ctx->pc = 0x1DE21Cu;
    // 0x1de21c: 0x0  nop
    ctx->pc = 0x1de21cu;
    // NOP
label_1de220:
    // 0x1de220: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1de220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1de224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1de224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1de228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de22c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1de22cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de230: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1de230u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1de234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de238: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1de238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1de23c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de240: 0x0  nop
    ctx->pc = 0x1de240u;
    // NOP
    // 0x1de244: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE244u;
    {
        const bool branch_taken_0x1de244 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE244u;
            // 0x1de248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de244) {
            ctx->pc = 0x1DE250u;
            goto label_1de250;
        }
    }
    ctx->pc = 0x1DE24Cu;
    // 0x1de24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de250:
    // 0x1de250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE250u;
    {
        const bool branch_taken_0x1de250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE250u;
            // 0x1de254: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de250) {
            ctx->pc = 0x1DE268u;
            goto label_1de268;
        }
    }
    ctx->pc = 0x1DE258u;
    // 0x1de258: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1de258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1de25c:
    // 0x1de25c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1de25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1de260: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1de260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1de264: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1de268:
    // 0x1de268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de26c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1DE26Cu;
    {
        const bool branch_taken_0x1de26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE26Cu;
            // 0x1de270: 0xdba10030  lqc2        $vf1, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de26c) {
            ctx->pc = 0x1DE478u;
            goto label_1de478;
        }
    }
    ctx->pc = 0x1DE274u;
    // 0x1de274: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1de274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1de278:
    // 0x1de278: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1de27c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1de27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de284: 0x84500008  lh          $s0, 0x8($v0)
    ctx->pc = 0x1de284u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de288: 0x12500015  beq         $s2, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE288u;
    {
        const bool branch_taken_0x1de288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x1DE28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE288u;
            // 0x1de28c: 0xdec5bdf8  ld          $a1, -0x4208($s6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de288) {
            ctx->pc = 0x1DE2E0u;
            goto label_1de2e0;
        }
    }
    ctx->pc = 0x1DE290u;
    // 0x1de290: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x1de290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1de294: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE294u;
    {
        const bool branch_taken_0x1de294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DE298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE294u;
            // 0x1de298: 0x27b200c0  addiu       $s2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de294) {
            ctx->pc = 0x1DE2A8u;
            goto label_1de2a8;
        }
    }
    ctx->pc = 0x1DE29Cu;
    // 0x1de29c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1DE29Cu;
    SET_GPR_U32(ctx, 31, 0x1DE2A4u);
    ctx->pc = 0x1DE2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE29Cu;
            // 0x1de2a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2A4u; }
        if (ctx->pc != 0x1DE2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2A4u; }
        if (ctx->pc != 0x1DE2A4u) { return; }
    }
    ctx->pc = 0x1DE2A4u;
    // 0x1de2a4: 0x0  nop
    ctx->pc = 0x1de2a4u;
    // NOP
label_1de2a8:
    // 0x1de2a8: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1de2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1de2ac: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x1de2acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1de2b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2b4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1de2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1de2b8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1DE2B8u;
    SET_GPR_U32(ctx, 31, 0x1DE2C0u);
    ctx->pc = 0x1DE2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2B8u;
            // 0x1de2bc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2C0u; }
        if (ctx->pc != 0x1DE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2C0u; }
        if (ctx->pc != 0x1DE2C0u) { return; }
    }
    ctx->pc = 0x1DE2C0u;
    // 0x1de2c0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1de2c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1de2c4: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1de2c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1de2c8: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1de2c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1de2cc: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1de2ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1de2d0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1de2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1de2d4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1de2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1de2d8: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x1de2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x1de2dc: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1de2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_1de2e0:
    // 0x1de2e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1de2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1de2e4: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1de2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1de2e8: 0x3c01c420  lui         $at, 0xC420
    ctx->pc = 0x1de2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50208 << 16));
    // 0x1de2ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de2f0: 0xc602c658  lwc1        $f2, -0x39A8($s0)
    ctx->pc = 0x1de2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de2f4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1de2f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de2f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1de2f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1de2fc: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1de2fcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1de300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de304: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1de304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1de308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1de30c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de310: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1de310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de314: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1de314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de318: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1de318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de31c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1de31cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de320: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1de320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de324: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1de324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de328: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1de328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1de32c: 0x4be12228  vadd.xyzw   $vf8, $vf4, $vf1
    ctx->pc = 0x1de32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1de330: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1de330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1de334: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1de334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1de338: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1de338u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1de33c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1de33cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de340: 0x4a831080  vaddx.y     $vf2, $vf2, $vf3x
    ctx->pc = 0x1de340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de344: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1de344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de348: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1de348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de34c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1de34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1de350: 0x4be220e8  vadd.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1de350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1de354: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1de358: 0x4be140ac  vsub.xyzw   $vf2, $vf8, $vf1
    ctx->pc = 0x1de358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de35c: 0xfba801c0  sqc2        $vf8, 0x1C0($sp)
    ctx->pc = 0x1de35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1de360: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1de360u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1de364: 0xc047864  jal         func_11E190
    ctx->pc = 0x1DE364u;
    SET_GPR_U32(ctx, 31, 0x1DE36Cu);
    ctx->pc = 0x1DE368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE364u;
            // 0x1de368: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE36Cu; }
        if (ctx->pc != 0x1DE36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE36Cu; }
        if (ctx->pc != 0x1DE36Cu) { return; }
    }
    ctx->pc = 0x1DE36Cu;
    // 0x1de36c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DE36Cu;
    {
        const bool branch_taken_0x1de36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE36Cu;
            // 0x1de370: 0xdba801c0  lqc2        $vf8, 0x1C0($sp) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de36c) {
            ctx->pc = 0x1DE3D0u;
            goto label_1de3d0;
        }
    }
    ctx->pc = 0x1DE374u;
    // 0x1de374: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de378: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x1de378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1de37c: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1de37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1de380: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1de384: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1de384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de388: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de38c: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1de38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de390: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1de390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de394: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1de394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de398: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x1de398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1de39c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1de39cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de3a0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1de3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de3a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1de3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1de3a8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1de3a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1de3ac: 0x4b030858  vmulx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x1de3acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de3b0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1de3b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1de3b4: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1de3b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de3b8: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1de3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de3bc: 0x8e10c658  lw          $s0, -0x39A8($s0)
    ctx->pc = 0x1de3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952536)));
    // 0x1de3c0: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x1de3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1de3c4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1de3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de3c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1de3c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1de3cc: 0x4be20a28  vadd.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x1de3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_1de3d0:
    // 0x1de3d0: 0x4a28033c  vmove.w     $vf8, $vf0
    ctx->pc = 0x1de3d0u;
    ctx->vu0_vf[8] = ctx->vu0_vf[0];
    // 0x1de3d4: 0xfba800b0  sqc2        $vf8, 0xB0($sp)
    ctx->pc = 0x1de3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1de3d8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1de3dc: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x1de3dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de3e0: 0xdba60050  lqc2        $vf6, 0x50($sp)
    ctx->pc = 0x1de3e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de3e4: 0xdba70060  lqc2        $vf7, 0x60($sp)
    ctx->pc = 0x1de3e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de3e8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1de3e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de3ec: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1de3ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1de3f0: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1de3f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1de3f4: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1de3f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1de3f8: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1de3f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1de3fc: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1de3fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de400: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1de400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de404: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1de404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1de408: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1de408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1de40c: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1de40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1de410: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1de410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de414: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1de414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de418: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1de418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1de41c: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1de41cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1de420: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1de420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de424: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x1de424u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de428: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x1de428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de42c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1de42cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1de430: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x1de430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1de434: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1de434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de438: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x1de438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de43c: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x1de43cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1de440: 0x4be8210b  vmaddw.xyzw $vf4, $vf4, $vf8w
    ctx->pc = 0x1de440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1de444: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1de444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de448: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1de448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1de44c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1de44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de450: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1de450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de454: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1de454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de458: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1de458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1de45c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1de45cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1de460: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1de460u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1de464: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1de464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1de468: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1de468u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1de46c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1de46cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1de470: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1de470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x1de474: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1de474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1de478:
    // 0x1de478: 0x4be1406c  vsub.xyzw   $vf1, $vf8, $vf1
    ctx->pc = 0x1de478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de47c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1de47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de480: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1de480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de484: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1de484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de488: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1de488u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de490: 0x46000004  c1          0x4
    ctx->pc = 0x1de490u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1de494: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1de494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de498: 0x0  nop
    ctx->pc = 0x1de498u;
    // NOP
    // 0x1de49c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE49Cu;
    {
        const bool branch_taken_0x1de49c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de49c) {
            ctx->pc = 0x1DE4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE49Cu;
            // 0x1de4a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE4A8u;
            goto label_1de4a8;
        }
    }
    ctx->pc = 0x1DE4A4u;
    // 0x1de4a4: 0x0  nop
    ctx->pc = 0x1de4a4u;
    // NOP
label_1de4a8:
    // 0x1de4a8: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1de4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1de4ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1de4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1de4b0: 0xfa280000  sqc2        $vf8, 0x0($s1)
    ctx->pc = 0x1de4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1de4b4: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x1de4b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1de4b8: 0x1460ff09  bnez        $v1, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x1DE4B8u;
    {
        const bool branch_taken_0x1de4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4B8u;
            // 0x1de4bc: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4b8) {
            ctx->pc = 0x1DE0E0u;
            runtime->cooperativeGuestYield();
            goto label_1de0e0;
        }
    }
    ctx->pc = 0x1DE4C0u;
label_1de4c0:
    // 0x1de4c0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1de4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1de4c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de4c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4cc: 0xc07775a  jal         func_1DDD68
    ctx->pc = 0x1DE4CCu;
    SET_GPR_U32(ctx, 31, 0x1DE4D4u);
    ctx->pc = 0x1DE4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4CCu;
            // 0x1de4d0: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD68u;
    if (runtime->hasFunction(0x1DDD68u)) {
        auto targetFn = runtime->lookupFunction(0x1DDD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4D4u; }
        if (ctx->pc != 0x1DE4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ddd68_0x1dddd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4D4u; }
        if (ctx->pc != 0x1DE4D4u) { return; }
    }
    ctx->pc = 0x1DE4D4u;
    // 0x1de4d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1de4d8: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x1de4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1de4dc: 0xdc62bdf8  ld          $v0, -0x4208($v1)
    ctx->pc = 0x1de4dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294950392)));
    // 0x1de4e0: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x1de4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1de4e4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1de4e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1de4e8: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x1de4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1de4ec: 0xfc62bdf8  sd          $v0, -0x4208($v1)
    ctx->pc = 0x1de4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294950392), GPR_U64(ctx, 2));
    // 0x1de4f0: 0xfe600040  sd          $zero, 0x40($s3)
    ctx->pc = 0x1de4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 0));
    // 0x1de4f4: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x1de4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1de4f8: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x1de4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1de4fc: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x1de4fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1de500: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x1de500u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1de504: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x1de504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1de508: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x1de508u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1de50c: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x1de50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1de510: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x1de510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1de514: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x1de514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1de518: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE518u;
            // 0x1de51c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE050u: goto label_1de050;
            case 0x1DE0E0u: goto label_1de0e0;
            case 0x1DE110u: goto label_1de110;
            case 0x1DE220u: goto label_1de220;
            case 0x1DE250u: goto label_1de250;
            case 0x1DE25Cu: goto label_1de25c;
            case 0x1DE268u: goto label_1de268;
            case 0x1DE278u: goto label_1de278;
            case 0x1DE2A8u: goto label_1de2a8;
            case 0x1DE2E0u: goto label_1de2e0;
            case 0x1DE3D0u: goto label_1de3d0;
            case 0x1DE478u: goto label_1de478;
            case 0x1DE4A8u: goto label_1de4a8;
            case 0x1DE4C0u: goto label_1de4c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE520u;
}

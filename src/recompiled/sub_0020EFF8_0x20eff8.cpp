#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020EFF8
// Address: 0x20eff8 - 0x20f540
void sub_0020EFF8_0x20eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EFF8_0x20eff8");
#endif

    ctx->pc = 0x20eff8u;

    // 0x20eff8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x20effc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x20effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x20f000: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x20f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x20f004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f008: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x20f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x20f00c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20f00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f010: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x20f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x20f014: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20f014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f018: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x20f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x20f01c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f020: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x20f020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x20f024: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x20f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x20f028: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f02c: 0x0  nop
    ctx->pc = 0x20f02cu;
    // NOP
label_20f030:
    // 0x20f030: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f034: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20f038: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x20f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20f03c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20f040: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f044: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20F044u;
    {
        const bool branch_taken_0x20f044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F044u;
            // 0x20f048: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f044) {
            ctx->pc = 0x20F030u;
            runtime->cooperativeGuestYield();
            goto label_20f030;
        }
    }
    ctx->pc = 0x20F04Cu;
    // 0x20f04c: 0xc077988  jal         func_1DE620
    ctx->pc = 0x20F04Cu;
    SET_GPR_U32(ctx, 31, 0x20F054u);
    ctx->pc = 0x20F050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F04Cu;
            // 0x20f050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE620u;
    if (runtime->hasFunction(0x1DE620u)) {
        auto targetFn = runtime->lookupFunction(0x1DE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F054u; }
        if (ctx->pc != 0x20F054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE620_0x1de620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F054u; }
        if (ctx->pc != 0x20F054u) { return; }
    }
    ctx->pc = 0x20F054u;
    // 0x20f054: 0x8e330104  lw          $s3, 0x104($s1)
    ctx->pc = 0x20f054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20f058: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20f05c: 0xae120260  sw          $s2, 0x260($s0)
    ctx->pc = 0x20f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 18));
    // 0x20f060: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x20f064: 0x96450018  lhu         $a1, 0x18($s2)
    ctx->pc = 0x20f064u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x20f068: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x20f068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x20f06c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20f070: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x20f070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x20f074: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x20f078: 0x2cc30009  sltiu       $v1, $a2, 0x9
    ctx->pc = 0x20f078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20f07c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20f080: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x20f080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20f084: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20f084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x20f088: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x20f088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20f08c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20f090: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x20f090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20f094: 0xa6050264  sh          $a1, 0x264($s0)
    ctx->pc = 0x20f094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 612), (uint16_t)GPR_U32(ctx, 5));
    // 0x20f098: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20F098u;
    {
        const bool branch_taken_0x20f098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F098u;
            // 0x20f09c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f098) {
            ctx->pc = 0x20F118u;
            goto label_20f118;
        }
    }
    ctx->pc = 0x20F0A0u;
    // 0x20f0a0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x20f0a4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20f0a8: 0x24427c90  addiu       $v0, $v0, 0x7C90
    ctx->pc = 0x20f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31888));
    // 0x20f0ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f0b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f0b4: 0x400008  jr          $v0
    ctx->pc = 0x20F0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F0BCu;
label_20f0bc:
    // 0x20f0bc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x20f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x20f0c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x20f0c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F0C4u;
    {
        const bool branch_taken_0x20f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F0C4u;
            // 0x20f0c8: 0x34420c00  ori         $v0, $v0, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0c4) {
            ctx->pc = 0x20F0E0u;
            goto label_20f0e0;
        }
    }
    ctx->pc = 0x20F0CCu;
    // 0x20f0cc: 0x0  nop
    ctx->pc = 0x20f0ccu;
    // NOP
label_20f0d0:
    // 0x20f0d0: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x20f0d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x20f0d8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x20f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x20f0dc: 0x0  nop
    ctx->pc = 0x20f0dcu;
    // NOP
label_20f0e0:
    // 0x20f0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20f0e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20F0E4u;
    {
        const bool branch_taken_0x20f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F0E4u;
            // 0x20f0e8: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0e4) {
            ctx->pc = 0x20F118u;
            goto label_20f118;
        }
    }
    ctx->pc = 0x20F0ECu;
label_20f0ec:
    // 0x20f0ec: 0x3c038001  lui         $v1, 0x8001
    ctx->pc = 0x20f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32769 << 16));
    // 0x20f0f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F0F0u;
    {
        const bool branch_taken_0x20f0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F0F0u;
            // 0x20f0f4: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0f0) {
            ctx->pc = 0x20F110u;
            goto label_20f110;
        }
    }
    ctx->pc = 0x20F0F8u;
label_20f0f8:
    // 0x20f0f8: 0x3c038002  lui         $v1, 0x8002
    ctx->pc = 0x20f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32770 << 16));
    // 0x20f0fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20F0FCu;
    {
        const bool branch_taken_0x20f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F0FCu;
            // 0x20f100: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0fc) {
            ctx->pc = 0x20F110u;
            goto label_20f110;
        }
    }
    ctx->pc = 0x20F104u;
    // 0x20f104: 0x0  nop
    ctx->pc = 0x20f104u;
    // NOP
label_20f108:
    // 0x20f108: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x20f10c: 0x3c038010  lui         $v1, 0x8010
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32784 << 16));
label_20f110:
    // 0x20f110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20f114: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x20f114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_20f118:
    // 0x20f118: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x20f11c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F11Cu;
    {
        const bool branch_taken_0x20f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F11Cu;
            // 0x20f120: 0xdba50010  lqc2        $vf5, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f11c) {
            ctx->pc = 0x20F134u;
            goto label_20f134;
        }
    }
    ctx->pc = 0x20F124u;
    // 0x20f124: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x20f128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f12c: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x20f12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x20f130: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x20f130u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f134:
    // 0x20f134: 0x4be5292a  vmul.xyzw   $vf4, $vf5, $vf5
    ctx->pc = 0x20f134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20f138: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x20f138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f13c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20f13cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20f144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20f144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20f148: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20f148u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f14c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x20f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x20f150: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x20f154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f15c: 0x46000084  c1          0x84
    ctx->pc = 0x20f15cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x20f160: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x20f160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x20f164: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20f164u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20f168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f16c: 0x0  nop
    ctx->pc = 0x20f16cu;
    // NOP
    // 0x20f170: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x20F170u;
    {
        const bool branch_taken_0x20f170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F170u;
            // 0x20f174: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f170) {
            ctx->pc = 0x20F1F8u;
            goto label_20f1f8;
        }
    }
    ctx->pc = 0x20F178u;
    // 0x20f178: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x20f178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f17c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x20f17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f180: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x20f180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f184: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x20f184u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x20f188: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f18c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x20f18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20f190: 0x4a0002ff  vnop
    ctx->pc = 0x20f190u;
    // NOP operation, no action needed for VU0
    // 0x20f194: 0x4a0002ff  vnop
    ctx->pc = 0x20f194u;
    // NOP operation, no action needed for VU0
    // 0x20f198: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x20f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f19c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x20f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f1a0: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x20f1a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f1a4: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20f1a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f1a8: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20f1a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f1ac: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x20f1acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x20f1b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f1b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f1b4: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x20f1b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f1b8: 0x4a0002ff  vnop
    ctx->pc = 0x20f1b8u;
    // NOP operation, no action needed for VU0
    // 0x20f1bc: 0x4a0002ff  vnop
    ctx->pc = 0x20f1bcu;
    // NOP operation, no action needed for VU0
    // 0x20f1c0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x20f1c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f1c4: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x20f1c4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x20f1c8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f1cc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x20f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f1d0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x20f1d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f1d4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x20f1d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f1d8: 0xe6020168  swc1        $f2, 0x168($s0)
    ctx->pc = 0x20f1d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x20f1dc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x20f1dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x20f1e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f1e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f1e4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x20f1e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20f1e8: 0x4a0002ff  vnop
    ctx->pc = 0x20f1e8u;
    // NOP operation, no action needed for VU0
    // 0x20f1ec: 0x4a0002ff  vnop
    ctx->pc = 0x20f1ecu;
    // NOP operation, no action needed for VU0
    // 0x20f1f0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f1f4: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x20f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
label_20f1f8:
    // 0x20f1f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x20f1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f1fc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x20f1fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f200: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x20f200u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f204: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x20f204u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f208: 0x8e06028c  lw          $a2, 0x28C($s0)
    ctx->pc = 0x20f208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x20f20c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x20f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x20f210: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x20f210u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x20f214: 0x7e040030  sq          $a0, 0x30($s0)
    ctx->pc = 0x20f214u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 4));
    // 0x20f218: 0x7e050040  sq          $a1, 0x40($s0)
    ctx->pc = 0x20f218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 5));
    // 0x20f21c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x20f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x20f220: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x20f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x20f224: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x20f224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x20f228: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F228u;
    {
        const bool branch_taken_0x20f228 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F228u;
            // 0x20f22c: 0x7fa500a0  sq          $a1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f228) {
            ctx->pc = 0x20F248u;
            goto label_20f248;
        }
    }
    ctx->pc = 0x20F230u;
    // 0x20f230: 0xc07ff7a  jal         func_1FFDE8
    ctx->pc = 0x20F230u;
    SET_GPR_U32(ctx, 31, 0x20F238u);
    ctx->pc = 0x20F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F230u;
            // 0x20f234: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDE8u;
    if (runtime->hasFunction(0x1FFDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F238u; }
        if (ctx->pc != 0x20F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFDE8_0x1ffde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F238u; }
        if (ctx->pc != 0x20F238u) { return; }
    }
    ctx->pc = 0x20F238u;
    // 0x20f238: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x20f23c: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x20f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x20f240: 0x24638a18  addiu       $v1, $v1, -0x75E8
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937112));
    // 0x20f244: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x20f244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_20f248:
    // 0x20f248: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x20f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x20f24c: 0xc07ffaa  jal         func_1FFEA8
    ctx->pc = 0x20F24Cu;
    SET_GPR_U32(ctx, 31, 0x20F254u);
    ctx->pc = 0x20F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F24Cu;
            // 0x20f250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFEA8u;
    if (runtime->hasFunction(0x1FFEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F254u; }
        if (ctx->pc != 0x20F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ffea8_0x1fffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F254u; }
        if (ctx->pc != 0x20F254u) { return; }
    }
    ctx->pc = 0x20F254u;
    // 0x20f254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20f258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f25c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f260: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x20f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x20f264: 0x40f809  jalr        $v0
    ctx->pc = 0x20F264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F26Cu);
        ctx->pc = 0x20F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F264u;
            // 0x20f268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F26Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F26Cu; }
            if (ctx->pc != 0x20F26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20F26Cu;
    // 0x20f26c: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f270: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20F270u;
    {
        const bool branch_taken_0x20f270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f270) {
            ctx->pc = 0x20F274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F270u;
            // 0x20f274: 0xe6140274  swc1        $f20, 0x274($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F2A4u;
            goto label_20f2a4;
        }
    }
    ctx->pc = 0x20F278u;
    // 0x20f278: 0x86020264  lh          $v0, 0x264($s0)
    ctx->pc = 0x20f278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x20f27c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F27Cu;
    {
        const bool branch_taken_0x20f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F27Cu;
            // 0x20f280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f27c) {
            ctx->pc = 0x20F298u;
            goto label_20f298;
        }
    }
    ctx->pc = 0x20F284u;
    // 0x20f284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f28c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f290: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x20F290u;
    SET_GPR_U32(ctx, 31, 0x20F298u);
    ctx->pc = 0x20F294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F290u;
            // 0x20f294: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F298u; }
        if (ctx->pc != 0x20F298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F298u; }
        if (ctx->pc != 0x20F298u) { return; }
    }
    ctx->pc = 0x20F298u;
label_20f298:
    // 0x20f298: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x20F298u;
    SET_GPR_U32(ctx, 31, 0x20F2A0u);
    ctx->pc = 0x20F29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F298u;
            // 0x20f29c: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2A0u; }
        if (ctx->pc != 0x20F2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2A0u; }
        if (ctx->pc != 0x20F2A0u) { return; }
    }
    ctx->pc = 0x20F2A0u;
    // 0x20f2a0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x20f2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_20f2a4:
    // 0x20f2a4: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x20f2a8: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x20f2ac: 0xae140284  sw          $s4, 0x284($s0)
    ctx->pc = 0x20f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 20));
    // 0x20f2b0: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x20f2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f2b4: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x20f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x20f2b8: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x20f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x20f2bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F2BCu;
    {
        const bool branch_taken_0x20f2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2BCu;
            // 0x20f2c0: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2bc) {
            ctx->pc = 0x20F2D4u;
            goto label_20f2d4;
        }
    }
    ctx->pc = 0x20F2C4u;
    // 0x20f2c4: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x20f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x20f2c8: 0xc077a3a  jal         func_1DE8E8
    ctx->pc = 0x20F2C8u;
    SET_GPR_U32(ctx, 31, 0x20F2D0u);
    ctx->pc = 0x20F2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2C8u;
            // 0x20f2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE8E8u;
    if (runtime->hasFunction(0x1DE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2D0u; }
        if (ctx->pc != 0x20F2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE8E8_0x1de8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2D0u; }
        if (ctx->pc != 0x20F2D0u) { return; }
    }
    ctx->pc = 0x20F2D0u;
    // 0x20f2d0: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x20f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
label_20f2d4:
    // 0x20f2d4: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x20f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x20f2d8: 0xc05c476  jal         func_1711D8
    ctx->pc = 0x20F2D8u;
    SET_GPR_U32(ctx, 31, 0x20F2E0u);
    ctx->pc = 0x20F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2D8u;
            // 0x20f2dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711D8u;
    if (runtime->hasFunction(0x1711D8u)) {
        auto targetFn = runtime->lookupFunction(0x1711D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2E0u; }
        if (ctx->pc != 0x20F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001711D8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2E0u; }
        if (ctx->pc != 0x20F2E0u) { return; }
    }
    ctx->pc = 0x20F2E0u;
    // 0x20f2e0: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x20f2e4: 0xc05c476  jal         func_1711D8
    ctx->pc = 0x20F2E4u;
    SET_GPR_U32(ctx, 31, 0x20F2ECu);
    ctx->pc = 0x20F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2E4u;
            // 0x20f2e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711D8u;
    if (runtime->hasFunction(0x1711D8u)) {
        auto targetFn = runtime->lookupFunction(0x1711D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2ECu; }
        if (ctx->pc != 0x20F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001711D8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2ECu; }
        if (ctx->pc != 0x20F2ECu) { return; }
    }
    ctx->pc = 0x20F2ECu;
    // 0x20f2ec: 0x86030264  lh          $v1, 0x264($s0)
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x20f2f0: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x20f2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20f2f4: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x20F2F4u;
    {
        const bool branch_taken_0x20f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2F4u;
            // 0x20f2f8: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2f4) {
            ctx->pc = 0x20F50Cu;
            goto label_20f50c;
        }
    }
    ctx->pc = 0x20F2FCu;
    // 0x20f2fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f300: 0x24427cc0  addiu       $v0, $v0, 0x7CC0
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31936));
    // 0x20f304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f30c: 0x400008  jr          $v0
    ctx->pc = 0x20F30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F314u: goto label_20f314;
            case 0x20F388u: goto label_20f388;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F314u;
label_20f314:
    // 0x20f314: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x20F314u;
    SET_GPR_U32(ctx, 31, 0x20F31Cu);
    ctx->pc = 0x20F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F314u;
            // 0x20f318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F31Cu; }
        if (ctx->pc != 0x20F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F31Cu; }
        if (ctx->pc != 0x20F31Cu) { return; }
    }
    ctx->pc = 0x20F31Cu;
    // 0x20f31c: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x20f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f320: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x20f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x20f324: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20f324u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f328: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f32c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20F32Cu;
    {
        const bool branch_taken_0x20f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f32c) {
            ctx->pc = 0x20F330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F32Cu;
            // 0x20f330: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F368u;
            goto label_20f368;
        }
    }
    ctx->pc = 0x20F334u;
    // 0x20f334: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f334u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f338: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f33c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f34c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f350: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20f350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f354: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f358: 0x40f809  jalr        $v0
    ctx->pc = 0x20F358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F360u);
        ctx->pc = 0x20F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F358u;
            // 0x20f35c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F360u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F360u; }
            if (ctx->pc != 0x20F360u) { return; }
        }
        }
    }
    ctx->pc = 0x20F360u;
    // 0x20f360: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f364: 0x0  nop
    ctx->pc = 0x20f364u;
    // NOP
label_20f368:
    // 0x20f368: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20f368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20f36c: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x20F36Cu;
    SET_GPR_U32(ctx, 31, 0x20F374u);
    ctx->pc = 0x20F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F36Cu;
            // 0x20f370: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F374u; }
        if (ctx->pc != 0x20F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F374u; }
        if (ctx->pc != 0x20F374u) { return; }
    }
    ctx->pc = 0x20F374u;
    // 0x20f374: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f378: 0xc040298  jal         func_100A60
    ctx->pc = 0x20F378u;
    SET_GPR_U32(ctx, 31, 0x20F380u);
    ctx->pc = 0x20F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F378u;
            // 0x20f37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F380u; }
        if (ctx->pc != 0x20F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F380u; }
        if (ctx->pc != 0x20F380u) { return; }
    }
    ctx->pc = 0x20F380u;
    // 0x20f380: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F380u;
            // 0x20f384: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f380) {
            ctx->pc = 0x20F3E0u;
            goto label_20f3e0;
        }
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F388u;
            // 0x20f38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F390u; }
        if (ctx->pc != 0x20F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F390u; }
        if (ctx->pc != 0x20F390u) { return; }
    }
    ctx->pc = 0x20F390u;
    // 0x20f390: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f394: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x20f394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x20f398: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20f398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f39c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f3a0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x20F3A0u;
    {
        const bool branch_taken_0x20f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f3a0) {
            ctx->pc = 0x20F3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3A0u;
            // 0x20f3a4: 0xae000278  sw          $zero, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F3D8u;
            goto label_20f3d8;
        }
    }
    ctx->pc = 0x20F3A8u;
    // 0x20f3a8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f3a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f3ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f3b0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f3b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f3b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f3bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f3c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f3c4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f3c8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x20f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f3cc: 0x40f809  jalr        $v0
    ctx->pc = 0x20F3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F3D4u);
        ctx->pc = 0x20F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3CCu;
            // 0x20f3d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F3D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F3D4u; }
            if (ctx->pc != 0x20F3D4u) { return; }
        }
        }
    }
    ctx->pc = 0x20F3D4u;
    // 0x20f3d4: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x20f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_20f3d8:
    // 0x20f3d8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f3dc: 0xc6140278  lwc1        $f20, 0x278($s0)
    ctx->pc = 0x20f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f3e0:
    // 0x20f3e0: 0xc04015e  jal         func_100578
    ctx->pc = 0x20F3E0u;
    SET_GPR_U32(ctx, 31, 0x20F3E8u);
    ctx->pc = 0x20F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3E0u;
            // 0x20f3e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3E8u; }
        if (ctx->pc != 0x20F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3E8u; }
        if (ctx->pc != 0x20F3E8u) { return; }
    }
    ctx->pc = 0x20F3E8u;
    // 0x20f3e8: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x20f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f3ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20F3ECu;
    {
        const bool branch_taken_0x20f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3ECu;
            // 0x20f3f0: 0xe454003c  swc1        $f20, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3ec) {
            ctx->pc = 0x20F50Cu;
            goto label_20f50c;
        }
    }
    ctx->pc = 0x20F3F4u;
label_20f3f4:
    // 0x20f3f4: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x20F3F4u;
    SET_GPR_U32(ctx, 31, 0x20F3FCu);
    ctx->pc = 0x20F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3F4u;
            // 0x20f3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3FCu; }
        if (ctx->pc != 0x20F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3FCu; }
        if (ctx->pc != 0x20F3FCu) { return; }
    }
    ctx->pc = 0x20F3FCu;
    // 0x20f3fc: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x20f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f400: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x20f400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x20f404: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20f404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f408: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f40c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20F40Cu;
    {
        const bool branch_taken_0x20f40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f40c) {
            ctx->pc = 0x20F410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F40Cu;
            // 0x20f410: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F448u;
            goto label_20f448;
        }
    }
    ctx->pc = 0x20F414u;
    // 0x20f414: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f414u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f418: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f41c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f428: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f42c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f430: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f434: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f438: 0x40f809  jalr        $v0
    ctx->pc = 0x20F438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F440u);
        ctx->pc = 0x20F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F438u;
            // 0x20f43c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F440u; }
            if (ctx->pc != 0x20F440u) { return; }
        }
        }
    }
    ctx->pc = 0x20F440u;
    // 0x20f440: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f444: 0x0  nop
    ctx->pc = 0x20f444u;
    // NOP
label_20f448:
    // 0x20f448: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x20F448u;
    SET_GPR_U32(ctx, 31, 0x20F450u);
    ctx->pc = 0x20F44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F448u;
            // 0x20f44c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F450u; }
        if (ctx->pc != 0x20F450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F450u; }
        if (ctx->pc != 0x20F450u) { return; }
    }
    ctx->pc = 0x20F450u;
    // 0x20f450: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f454: 0xc040298  jal         func_100A60
    ctx->pc = 0x20F454u;
    SET_GPR_U32(ctx, 31, 0x20F45Cu);
    ctx->pc = 0x20F458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F454u;
            // 0x20f458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F45Cu; }
        if (ctx->pc != 0x20F45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F45Cu; }
        if (ctx->pc != 0x20F45Cu) { return; }
    }
    ctx->pc = 0x20F45Cu;
    // 0x20f45c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20f460: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x20f460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x20f464: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x20f468: 0x40f809  jalr        $v0
    ctx->pc = 0x20F468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F470u);
        ctx->pc = 0x20F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F468u;
            // 0x20f46c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F470u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F470u; }
            if (ctx->pc != 0x20F470u) { return; }
        }
        }
    }
    ctx->pc = 0x20F470u;
    // 0x20f470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20f474: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f478: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20f47c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20f480: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x20f484: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20f484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x20f488: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20f488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20f48c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20f490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f494: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x20f494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x20f498: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x20f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x20f49c: 0xe4420028  swc1        $f2, 0x28($v0)
    ctx->pc = 0x20f49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20f4a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20F4A0u;
    {
        const bool branch_taken_0x20f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4A0u;
            // 0x20f4a4: 0xe443002c  swc1        $f3, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4a0) {
            ctx->pc = 0x20F50Cu;
            goto label_20f50c;
        }
    }
    ctx->pc = 0x20F4A8u;
label_20f4a8:
    // 0x20f4a8: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x20F4A8u;
    SET_GPR_U32(ctx, 31, 0x20F4B0u);
    ctx->pc = 0x20F4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4A8u;
            // 0x20f4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F4B0u; }
        if (ctx->pc != 0x20F4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F4B0u; }
        if (ctx->pc != 0x20F4B0u) { return; }
    }
    ctx->pc = 0x20F4B0u;
    // 0x20f4b0: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x20f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f4b4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x20f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x20f4b8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20f4b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f4bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f4c0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x20F4C0u;
    {
        const bool branch_taken_0x20f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f4c0) {
            ctx->pc = 0x20F4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4C0u;
            // 0x20f4c4: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F4F8u;
            goto label_20f4f8;
        }
    }
    ctx->pc = 0x20F4C8u;
    // 0x20f4c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f4c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f4cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f4d0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f4d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f4d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f4dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f4e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f4e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f4e8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x20f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f4ec: 0x40f809  jalr        $v0
    ctx->pc = 0x20F4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F4F4u);
        ctx->pc = 0x20F4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4ECu;
            // 0x20f4f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F4F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F4F4u; }
            if (ctx->pc != 0x20F4F4u) { return; }
        }
        }
    }
    ctx->pc = 0x20F4F4u;
    // 0x20f4f4: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_20f4f8:
    // 0x20f4f8: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x20F4F8u;
    SET_GPR_U32(ctx, 31, 0x20F500u);
    ctx->pc = 0x20F4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4F8u;
            // 0x20f4fc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F500u; }
        if (ctx->pc != 0x20F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F500u; }
        if (ctx->pc != 0x20F500u) { return; }
    }
    ctx->pc = 0x20F500u;
    // 0x20f500: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x20f504: 0xc040298  jal         func_100A60
    ctx->pc = 0x20F504u;
    SET_GPR_U32(ctx, 31, 0x20F50Cu);
    ctx->pc = 0x20F508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F504u;
            // 0x20f508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F50Cu; }
        if (ctx->pc != 0x20F50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F50Cu; }
        if (ctx->pc != 0x20F50Cu) { return; }
    }
    ctx->pc = 0x20F50Cu;
label_20f50c:
    // 0x20f50c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x20f510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f514: 0xa202029a  sb          $v0, 0x29A($s0)
    ctx->pc = 0x20f514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
    // 0x20f518: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x20f518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x20f51c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x20f51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20f520: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x20f520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20f524: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x20f524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20f528: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x20f528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f52c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x20f52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20f530: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x20f530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20f534: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x20f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20f538: 0x3e00008  jr          $ra
    ctx->pc = 0x20F538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F538u;
            // 0x20f53c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F030u: goto label_20f030;
            case 0x20F0BCu: goto label_20f0bc;
            case 0x20F0D0u: goto label_20f0d0;
            case 0x20F0E0u: goto label_20f0e0;
            case 0x20F0ECu: goto label_20f0ec;
            case 0x20F0F8u: goto label_20f0f8;
            case 0x20F108u: goto label_20f108;
            case 0x20F110u: goto label_20f110;
            case 0x20F118u: goto label_20f118;
            case 0x20F134u: goto label_20f134;
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F248u: goto label_20f248;
            case 0x20F298u: goto label_20f298;
            case 0x20F2A4u: goto label_20f2a4;
            case 0x20F2D4u: goto label_20f2d4;
            case 0x20F314u: goto label_20f314;
            case 0x20F368u: goto label_20f368;
            case 0x20F388u: goto label_20f388;
            case 0x20F3D8u: goto label_20f3d8;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F448u: goto label_20f448;
            case 0x20F4A8u: goto label_20f4a8;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F50Cu: goto label_20f50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F540u;
}

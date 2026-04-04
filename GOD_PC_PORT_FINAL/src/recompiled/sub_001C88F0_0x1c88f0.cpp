#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C88F0
// Address: 0x1c88f0 - 0x1c89f0
void sub_001C88F0_0x1c88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C88F0_0x1c88f0");
#endif

    ctx->pc = 0x1c88f0u;

    // 0x1c88f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c88f4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1c88f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c88fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c8900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8908: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c890c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x1c890cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x1c8910: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8914: 0x3484fcff  ori         $a0, $a0, 0xFCFF
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64767);
    // 0x1c8918: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c891c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c8920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8924: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c8924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c8928: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1c8928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1c892c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1c892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1c8930: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c8934: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8938: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C8938u;
    SET_GPR_U32(ctx, 31, 0x1C8940u);
    ctx->pc = 0x1C893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8938u;
            // 0x1c893c: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8940u; }
        if (ctx->pc != 0x1C8940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8940u; }
        if (ctx->pc != 0x1C8940u) { return; }
    }
    ctx->pc = 0x1C8940u;
    // 0x1c8940: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c8940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8948: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c8948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c894c: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8950: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8954: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c8958: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1c8958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1c895c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1c895cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c8960: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8960u;
    {
        const bool branch_taken_0x1c8960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8960u;
            // 0x1c8964: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8960) {
            ctx->pc = 0x1C8994u;
            goto label_1c8994;
        }
    }
    ctx->pc = 0x1C8968u;
    // 0x1c8968: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c8968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c896c: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1c896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c8970: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c8970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8974: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c8974u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c8978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c897c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c897cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8980: 0x0  nop
    ctx->pc = 0x1c8980u;
    // NOP
    // 0x1c8984: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1C8984u;
    {
        const bool branch_taken_0x1c8984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8984) {
            ctx->pc = 0x1C8988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8984u;
            // 0x1c8988: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C89C0u;
            goto label_1c89c0;
        }
    }
    ctx->pc = 0x1C898Cu;
    // 0x1c898c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C898Cu;
    {
        const bool branch_taken_0x1c898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C898Cu;
            // 0x1c8990: 0x8e020328  lw          $v0, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c898c) {
            ctx->pc = 0x1C89C8u;
            goto label_1c89c8;
        }
    }
    ctx->pc = 0x1C8994u;
label_1c8994:
    // 0x1c8994: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c8994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8998: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1c8998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c899c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1c899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1c89a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c89a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c89a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c89a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89a8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c89a8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c89ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c89acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c89b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c89b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c89b4: 0x0  nop
    ctx->pc = 0x1c89b4u;
    // NOP
    // 0x1c89b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C89B8u;
    {
        const bool branch_taken_0x1c89b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c89b8) {
            ctx->pc = 0x1C89BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89B8u;
            // 0x1c89bc: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C89C0u;
            goto label_1c89c0;
        }
    }
    ctx->pc = 0x1C89C0u;
label_1c89c0:
    // 0x1c89c0: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c89c4: 0x0  nop
    ctx->pc = 0x1c89c4u;
    // NOP
label_1c89c8:
    // 0x1c89c8: 0xa44300e0  sh          $v1, 0xE0($v0)
    ctx->pc = 0x1c89c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c89cc: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c89d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c89d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c89d8: 0xc44001d4  lwc1        $f0, 0x1D4($v0)
    ctx->pc = 0x1c89d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c89dc: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1c89dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1c89e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c89e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c89e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C89E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89E4u;
            // 0x1c89e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8994u: goto label_1c8994;
            case 0x1C89C0u: goto label_1c89c0;
            case 0x1C89C8u: goto label_1c89c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C89ECu;
    // 0x1c89ec: 0x0  nop
    ctx->pc = 0x1c89ecu;
    // NOP
}

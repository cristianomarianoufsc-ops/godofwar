#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4A38
// Address: 0x1a4a38 - 0x1a4ba0
void sub_001A4A38_0x1a4a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4A38_0x1a4a38");
#endif

    ctx->pc = 0x1a4a38u;

    // 0x1a4a38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a4a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a4a3c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a4a40: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a4a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a4a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a48: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a4a4c: 0x88c00  sll         $s1, $t0, 16
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1a4a50: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a4a54: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1a4a54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a4a58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a4a5c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a4a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a4a64: 0x3174ffff  andi        $s4, $t3, 0xFFFF
    ctx->pc = 0x1a4a64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1a4a68: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1a4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1a4a6c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x1a4a6cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x1a4a70: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1a4a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1a4a74: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1a4a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1a4a78: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1a4a78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a4a7c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a4a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a4a80: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a4a80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1a4a84: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1a4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1a4a88: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x1a4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x1a4a8c: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x1a4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x1a4a90: 0x87b700d0  lh          $s7, 0xD0($sp)
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a4a94: 0x87be00d8  lh          $fp, 0xD8($sp)
    ctx->pc = 0x1a4a94u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1a4a98: 0x87b500e0  lh          $s5, 0xE0($sp)
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a4a9c: 0x87b600e8  lh          $s6, 0xE8($sp)
    ctx->pc = 0x1a4a9cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1a4aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4aa4: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A4AA4u;
    SET_GPR_U32(ctx, 31, 0x1A4AACu);
    ctx->pc = 0x1A4AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AA4u;
            // 0x1a4aa8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AACu; }
        if (ctx->pc != 0x1A4AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AACu; }
        if (ctx->pc != 0x1A4AACu) { return; }
    }
    ctx->pc = 0x1A4AACu;
    // 0x1a4aac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a4ab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ab4: 0x2442ab38  addiu       $v0, $v0, -0x54C8
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945592));
    // 0x1a4ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4abc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1A4ABCu;
    SET_GPR_U32(ctx, 31, 0x1A4AC4u);
    ctx->pc = 0x1A4AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ABCu;
            // 0x1a4ac0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AC4u; }
        if (ctx->pc != 0x1A4AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AC4u; }
        if (ctx->pc != 0x1A4AC4u) { return; }
    }
    ctx->pc = 0x1A4AC4u;
    // 0x1a4ac4: 0xa6120010  sh          $s2, 0x10($s0)
    ctx->pc = 0x1a4ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a4ac8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a4acc: 0xa6140012  sh          $s4, 0x12($s0)
    ctx->pc = 0x1a4accu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 20));
    // 0x1a4ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ad4: 0xa6110026  sh          $s1, 0x26($s0)
    ctx->pc = 0x1a4ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a4ad8: 0x24a540a8  addiu       $a1, $a1, 0x40A8
    ctx->pc = 0x1a4ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16552));
    // 0x1a4adc: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x1a4adcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1a4ae0: 0xe615002c  swc1        $f21, 0x2C($s0)
    ctx->pc = 0x1a4ae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a4ae4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a4ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a4ae8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1a4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1a4aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4af0: 0xa6170034  sh          $s7, 0x34($s0)
    ctx->pc = 0x1a4af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 23));
    // 0x1a4af4: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x1a4af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4af8: 0xa61e0036  sh          $fp, 0x36($s0)
    ctx->pc = 0x1a4af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 30));
    // 0x1a4afc: 0xa6150038  sh          $s5, 0x38($s0)
    ctx->pc = 0x1a4afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 21));
    // 0x1a4b00: 0xa616003a  sh          $s6, 0x3A($s0)
    ctx->pc = 0x1a4b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 22));
    // 0x1a4b04: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1A4B04u;
    SET_GPR_U32(ctx, 31, 0x1A4B0Cu);
    ctx->pc = 0x1A4B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B04u;
            // 0x1a4b08: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B0Cu; }
        if (ctx->pc != 0x1A4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B0Cu; }
        if (ctx->pc != 0x1A4B0Cu) { return; }
    }
    ctx->pc = 0x1A4B0Cu;
    // 0x1a4b0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a4b10: 0x26030023  addiu       $v1, $s0, 0x23
    ctx->pc = 0x1a4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 35));
    // 0x1a4b14: 0xa202003d  sb          $v0, 0x3D($s0)
    ctx->pc = 0x1a4b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4b18: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1a4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a4b1c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x1a4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a4b20: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a4b24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4b28: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x1a4b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a4b2c: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x1a4b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a4b30: 0x260a0021  addiu       $t2, $s0, 0x21
    ctx->pc = 0x1a4b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
    // 0x1a4b34: 0x260b0022  addiu       $t3, $s0, 0x22
    ctx->pc = 0x1a4b34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x1a4b38: 0xc0690b4  jal         func_1A42D0
    ctx->pc = 0x1A4B38u;
    SET_GPR_U32(ctx, 31, 0x1A4B40u);
    ctx->pc = 0x1A4B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B38u;
            // 0x1a4b3c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A42D0u;
    if (runtime->hasFunction(0x1A42D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B40u; }
        if (ctx->pc != 0x1A4B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A42D0_0x1a42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B40u; }
        if (ctx->pc != 0x1A4B40u) { return; }
    }
    ctx->pc = 0x1A4B40u;
    // 0x1a4b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b44: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a4b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a4b48: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a4b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a4b4c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a4b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a4b50: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a4b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a4b54: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a4b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a4b58: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a4b58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a4b5c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1a4b5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4b60: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1a4b60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4b64: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1a4b64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4b6c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1a4b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a4b70: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a4b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B74u;
            // 0x1a4b78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4B7Cu;
    // 0x1a4b7c: 0x0  nop
    ctx->pc = 0x1a4b7cu;
    // NOP
    // 0x1a4b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4b88: 0xc069caa  jal         func_1A72A8
    ctx->pc = 0x1A4B88u;
    SET_GPR_U32(ctx, 31, 0x1A4B90u);
    ctx->pc = 0x1A4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B88u;
            // 0x1a4b8c: 0x94840010  lhu         $a0, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72A8u;
    if (runtime->hasFunction(0x1A72A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A72A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B90u; }
        if (ctx->pc != 0x1A4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72A8_0x1a72a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B90u; }
        if (ctx->pc != 0x1A4B90u) { return; }
    }
    ctx->pc = 0x1A4B90u;
    // 0x1a4b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B94u;
            // 0x1a4b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4B9Cu;
    // 0x1a4b9c: 0x0  nop
    ctx->pc = 0x1a4b9cu;
    // NOP
}

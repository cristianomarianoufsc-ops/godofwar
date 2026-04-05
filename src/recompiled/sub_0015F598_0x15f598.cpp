#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F598
// Address: 0x15f598 - 0x160380
void sub_0015F598_0x15f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F598_0x15f598");
#endif

    ctx->pc = 0x15f598u;

    // 0x15f598: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15f59c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x15f5a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x15f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x15f5a4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x15f5a8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x15f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x15f5ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15f5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x15f5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x15f5b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15f5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x15f5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x15f5bc: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x15f5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x15f5c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x15f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x15f5c4: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x15f5c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15f5cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15f5d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x15f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x15f5d4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x15f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x15f5d8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x15f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x15f5dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15f5e0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x15f5e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15f5e4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x15f5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15f5e8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x15f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x15f5ec: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x15f5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f5f0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x15f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x15f5f4: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x15f5f8: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x15f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x15f5fc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x15f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15f600: 0xae660020  sw          $a2, 0x20($s3)
    ctx->pc = 0x15f600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 6));
    // 0x15f604: 0xa6670004  sh          $a3, 0x4($s3)
    ctx->pc = 0x15f604u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x15f608: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x15f608u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x15f60c: 0xc08e222  jal         func_238888
    ctx->pc = 0x15F60Cu;
    SET_GPR_U32(ctx, 31, 0x15F614u);
    ctx->pc = 0x15F610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F60Cu;
            // 0x15f610: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F614u; }
        if (ctx->pc != 0x15F614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F614u; }
        if (ctx->pc != 0x15F614u) { return; }
    }
    ctx->pc = 0x15F614u;
    // 0x15f614: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15f618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f620: 0xc08e222  jal         func_238888
    ctx->pc = 0x15F620u;
    SET_GPR_U32(ctx, 31, 0x15F628u);
    ctx->pc = 0x15F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F620u;
            // 0x15f624: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F628u; }
        if (ctx->pc != 0x15F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F628u; }
        if (ctx->pc != 0x15F628u) { return; }
    }
    ctx->pc = 0x15F628u;
    // 0x15f628: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15f62c: 0x26650034  addiu       $a1, $s3, 0x34
    ctx->pc = 0x15f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x15f630: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15f634: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x15f634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x15f638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f63c: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x15f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x15f640: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x15f640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x15f644: 0x26630024  addiu       $v1, $s3, 0x24
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x15f648: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15f64c: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x15f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x15f650: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f654: 0x2442c9e8  addiu       $v0, $v0, -0x3618
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953448));
    // 0x15f658: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x15f658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
    // 0x15f65c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f660: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x15f660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
    // 0x15f664: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x15f664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x15f668: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x15f668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x15f66c: 0x0  nop
    ctx->pc = 0x15f66cu;
    // NOP
label_15f670:
    // 0x15f670: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15f670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f674: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15f678:
    // 0x15f678: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x15f678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x15f67c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15f680: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x15f680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x15f684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f688: 0x0  nop
    ctx->pc = 0x15f688u;
    // NOP
    // 0x15f68c: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F68Cu;
    {
        const bool branch_taken_0x15f68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F68Cu;
            // 0x15f690: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f68c) {
            ctx->pc = 0x15F678u;
            runtime->cooperativeGuestYield();
            goto label_15f678;
        }
    }
    ctx->pc = 0x15F694u;
    // 0x15f694: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x15f698: 0x14c4fff5  bne         $a2, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15F698u;
    {
        const bool branch_taken_0x15f698 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x15F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F698u;
            // 0x15f69c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f698) {
            ctx->pc = 0x15F670u;
            runtime->cooperativeGuestYield();
            goto label_15f670;
        }
    }
    ctx->pc = 0x15F6A0u;
    // 0x15f6a0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x15f6a4: 0x8e02c29c  lw          $v0, -0x3D64($s0)
    ctx->pc = 0x15f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951580)));
    // 0x15f6a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F6A8u;
    {
        const bool branch_taken_0x15f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6A8u;
            // 0x15f6ac: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6a8) {
            ctx->pc = 0x15F6C8u;
            goto label_15f6c8;
        }
    }
    ctx->pc = 0x15F6B0u;
    // 0x15f6b0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F6B0u;
    SET_GPR_U32(ctx, 31, 0x15F6B8u);
    ctx->pc = 0x15F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6B0u;
            // 0x15f6b4: 0x2404081c  addiu       $a0, $zero, 0x81C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6B8u; }
        if (ctx->pc != 0x15F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6B8u; }
        if (ctx->pc != 0x15F6B8u) { return; }
    }
    ctx->pc = 0x15F6B8u;
    // 0x15f6b8: 0xc05aa0c  jal         func_16A830
    ctx->pc = 0x15F6B8u;
    SET_GPR_U32(ctx, 31, 0x15F6C0u);
    ctx->pc = 0x15F6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6B8u;
            // 0x15f6bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A830u;
    if (runtime->hasFunction(0x16A830u)) {
        auto targetFn = runtime->lookupFunction(0x16A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6C0u; }
        if (ctx->pc != 0x15F6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A830_0x16a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6C0u; }
        if (ctx->pc != 0x15F6C0u) { return; }
    }
    ctx->pc = 0x15F6C0u;
    // 0x15f6c0: 0xae02c29c  sw          $v0, -0x3D64($s0)
    ctx->pc = 0x15f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951580), GPR_U32(ctx, 2));
    // 0x15f6c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_15f6c8:
    // 0x15f6c8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x15f6cc: 0x245ec2a0  addiu       $fp, $v0, -0x3D60
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951584));
    // 0x15f6d0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F6D0u;
    SET_GPR_U32(ctx, 31, 0x15F6D8u);
    ctx->pc = 0x15F6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6D0u;
            // 0x15f6d4: 0x3c16002c  lui         $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6D8u; }
        if (ctx->pc != 0x15F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6D8u; }
        if (ctx->pc != 0x15F6D8u) { return; }
    }
    ctx->pc = 0x15F6D8u;
    // 0x15f6d8: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x15f6dc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F6DCu;
    SET_GPR_U32(ctx, 31, 0x15F6E4u);
    ctx->pc = 0x15F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6DCu;
            // 0x15f6e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6E4u; }
        if (ctx->pc != 0x15F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6E4u; }
        if (ctx->pc != 0x15F6E4u) { return; }
    }
    ctx->pc = 0x15F6E4u;
    // 0x15f6e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6ec: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15f6f0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15f6f4: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15f6f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15f6f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15f700:
    // 0x15f700: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f704: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f708: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f708u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f70c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15f70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f710: 0x0  nop
    ctx->pc = 0x15f710u;
    // NOP
    // 0x15f714: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F714u;
    {
        const bool branch_taken_0x15f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F714u;
            // 0x15f718: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f714) {
            ctx->pc = 0x15F700u;
            runtime->cooperativeGuestYield();
            goto label_15f700;
        }
    }
    ctx->pc = 0x15F71Cu;
    // 0x15f71c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15f720: 0x3c17002c  lui         $s7, 0x2C
    ctx->pc = 0x15f720u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)44 << 16));
    // 0x15f724: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15F724u;
    SET_GPR_U32(ctx, 31, 0x15F72Cu);
    ctx->pc = 0x15F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F724u;
            // 0x15f728: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F72Cu; }
        if (ctx->pc != 0x15F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F72Cu; }
        if (ctx->pc != 0x15F72Cu) { return; }
    }
    ctx->pc = 0x15F72Cu;
    // 0x15f72c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15f730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f734: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15F734u;
    SET_GPR_U32(ctx, 31, 0x15F73Cu);
    ctx->pc = 0x15F738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F734u;
            // 0x15f738: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F73Cu; }
        if (ctx->pc != 0x15F73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F73Cu; }
        if (ctx->pc != 0x15F73Cu) { return; }
    }
    ctx->pc = 0x15F73Cu;
    // 0x15f73c: 0x24432000  addiu       $v1, $v0, 0x2000
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x15f740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f744: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f748: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15f74c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15f750: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f754: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15F754u;
    SET_GPR_U32(ctx, 31, 0x15F75Cu);
    ctx->pc = 0x15F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F754u;
            // 0x15f758: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F75Cu; }
        if (ctx->pc != 0x15F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F75Cu; }
        if (ctx->pc != 0x15F75Cu) { return; }
    }
    ctx->pc = 0x15F75Cu;
    // 0x15f75c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f760: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15f764: 0x26e3fd10  addiu       $v1, $s7, -0x2F0
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15f768: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15f768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15f76c: 0x24451000  addiu       $a1, $v0, 0x1000
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x15f770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f774: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x15f774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x15f778: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x15f77c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x15f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15f780: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x15f780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x15f784: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x15f784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x15f788: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15f788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15f78c: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15f790: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f794: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F794u;
    SET_GPR_U32(ctx, 31, 0x15F79Cu);
    ctx->pc = 0x15F798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F794u;
            // 0x15f798: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F79Cu; }
        if (ctx->pc != 0x15F79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F79Cu; }
        if (ctx->pc != 0x15F79Cu) { return; }
    }
    ctx->pc = 0x15F79Cu;
    // 0x15f79c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7a4: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15f7a8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15f7ac: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15f7b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15f7b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15f7b8:
    // 0x15f7b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f7bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f7c0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f7c4: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15f7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f7c8: 0x0  nop
    ctx->pc = 0x15f7c8u;
    // NOP
    // 0x15f7cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F7CCu;
    {
        const bool branch_taken_0x15f7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7CCu;
            // 0x15f7d0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7cc) {
            ctx->pc = 0x15F7B8u;
            runtime->cooperativeGuestYield();
            goto label_15f7b8;
        }
    }
    ctx->pc = 0x15F7D4u;
    // 0x15f7d4: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15f7d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15F7D8u;
    SET_GPR_U32(ctx, 31, 0x15F7E0u);
    ctx->pc = 0x15F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7D8u;
            // 0x15f7dc: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7E0u; }
        if (ctx->pc != 0x15F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7E0u; }
        if (ctx->pc != 0x15F7E0u) { return; }
    }
    ctx->pc = 0x15F7E0u;
    // 0x15f7e0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15f7e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7e8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15F7E8u;
    SET_GPR_U32(ctx, 31, 0x15F7F0u);
    ctx->pc = 0x15F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7E8u;
            // 0x15f7ec: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7F0u; }
        if (ctx->pc != 0x15F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7F0u; }
        if (ctx->pc != 0x15F7F0u) { return; }
    }
    ctx->pc = 0x15F7F0u;
    // 0x15f7f0: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x15f7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f7fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15f800: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15f800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15f804: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f808: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15F808u;
    SET_GPR_U32(ctx, 31, 0x15F810u);
    ctx->pc = 0x15F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F808u;
            // 0x15f80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F810u; }
        if (ctx->pc != 0x15F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F810u; }
        if (ctx->pc != 0x15F810u) { return; }
    }
    ctx->pc = 0x15F810u;
    // 0x15f810: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f814: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x15f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15f818: 0x26e3fd10  addiu       $v1, $s7, -0x2F0
    ctx->pc = 0x15f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15f81c: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15f820: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x15f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x15f824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f828: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x15f828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x15f82c: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x15f830: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x15f830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15f834: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x15f834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x15f838: 0xae500024  sw          $s0, 0x24($s2)
    ctx->pc = 0x15f838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
    // 0x15f83c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15f840: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15f840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15f844: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f848: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F848u;
    SET_GPR_U32(ctx, 31, 0x15F850u);
    ctx->pc = 0x15F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F848u;
            // 0x15f84c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F850u; }
        if (ctx->pc != 0x15F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F850u; }
        if (ctx->pc != 0x15F850u) { return; }
    }
    ctx->pc = 0x15F850u;
    // 0x15f850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f858: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15f85c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15f860: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15f860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15f864: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15f864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f868: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x15f86c: 0x0  nop
    ctx->pc = 0x15f86cu;
    // NOP
label_15f870:
    // 0x15f870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f874: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f878: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f878u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f87c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f880: 0x0  nop
    ctx->pc = 0x15f880u;
    // NOP
    // 0x15f884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F884u;
    {
        const bool branch_taken_0x15f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F884u;
            // 0x15f888: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f884) {
            ctx->pc = 0x15F870u;
            runtime->cooperativeGuestYield();
            goto label_15f870;
        }
    }
    ctx->pc = 0x15F88Cu;
    // 0x15f88c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15f890: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15F890u;
    SET_GPR_U32(ctx, 31, 0x15F898u);
    ctx->pc = 0x15F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F890u;
            // 0x15f894: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F898u; }
        if (ctx->pc != 0x15F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F898u; }
        if (ctx->pc != 0x15F898u) { return; }
    }
    ctx->pc = 0x15F898u;
    // 0x15f898: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15f89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8a0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15F8A0u;
    SET_GPR_U32(ctx, 31, 0x15F8A8u);
    ctx->pc = 0x15F8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8A0u;
            // 0x15f8a4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8A8u; }
        if (ctx->pc != 0x15F8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8A8u; }
        if (ctx->pc != 0x15F8A8u) { return; }
    }
    ctx->pc = 0x15F8A8u;
    // 0x15f8a8: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x15f8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f8b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15f8b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15f8bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f8c0: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15F8C0u;
    SET_GPR_U32(ctx, 31, 0x15F8C8u);
    ctx->pc = 0x15F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8C0u;
            // 0x15f8c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8C8u; }
        if (ctx->pc != 0x15F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8C8u; }
        if (ctx->pc != 0x15F8C8u) { return; }
    }
    ctx->pc = 0x15F8C8u;
    // 0x15f8c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f8cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15f8d0: 0x26e3fd10  addiu       $v1, $s7, -0x2F0
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15f8d4: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15f8d8: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x15f8dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8e0: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x15f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x15f8e4: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x15f8e8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x15f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15f8ec: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x15f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x15f8f0: 0xae500028  sw          $s0, 0x28($s2)
    ctx->pc = 0x15f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 16));
    // 0x15f8f4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15f8f8: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15f8fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f900: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F900u;
    SET_GPR_U32(ctx, 31, 0x15F908u);
    ctx->pc = 0x15F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F900u;
            // 0x15f904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F908u; }
        if (ctx->pc != 0x15F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F908u; }
        if (ctx->pc != 0x15F908u) { return; }
    }
    ctx->pc = 0x15F908u;
    // 0x15f908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f910: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15f914: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15f918: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15f918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15f91c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15f91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f920: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15f920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x15f924: 0x0  nop
    ctx->pc = 0x15f924u;
    // NOP
label_15f928:
    // 0x15f928: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f92c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f930: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f930u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f934: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15f934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f938: 0x0  nop
    ctx->pc = 0x15f938u;
    // NOP
    // 0x15f93c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F93Cu;
    {
        const bool branch_taken_0x15f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F93Cu;
            // 0x15f940: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f93c) {
            ctx->pc = 0x15F928u;
            runtime->cooperativeGuestYield();
            goto label_15f928;
        }
    }
    ctx->pc = 0x15F944u;
    // 0x15f944: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15f944u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15f948: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15F948u;
    SET_GPR_U32(ctx, 31, 0x15F950u);
    ctx->pc = 0x15F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F948u;
            // 0x15f94c: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F950u; }
        if (ctx->pc != 0x15F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F950u; }
        if (ctx->pc != 0x15F950u) { return; }
    }
    ctx->pc = 0x15F950u;
    // 0x15f950: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15f950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15f954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f958: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15F958u;
    SET_GPR_U32(ctx, 31, 0x15F960u);
    ctx->pc = 0x15F95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F958u;
            // 0x15f95c: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F960u; }
        if (ctx->pc != 0x15F960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F960u; }
        if (ctx->pc != 0x15F960u) { return; }
    }
    ctx->pc = 0x15F960u;
    // 0x15f960: 0x24435000  addiu       $v1, $v0, 0x5000
    ctx->pc = 0x15f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20480));
    // 0x15f964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f96c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15f970: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15f970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15f974: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f978: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15F978u;
    SET_GPR_U32(ctx, 31, 0x15F980u);
    ctx->pc = 0x15F97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F978u;
            // 0x15f97c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F980u; }
        if (ctx->pc != 0x15F980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F980u; }
        if (ctx->pc != 0x15F980u) { return; }
    }
    ctx->pc = 0x15F980u;
    // 0x15f980: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f984: 0x24040a00  addiu       $a0, $zero, 0xA00
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x15f988: 0x26e3fd10  addiu       $v1, $s7, -0x2F0
    ctx->pc = 0x15f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15f98c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f990: 0x24452800  addiu       $a1, $v0, 0x2800
    ctx->pc = 0x15f990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x15f994: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15f994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15f998: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x15f998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x15f99c: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x15f9a0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x15f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15f9a4: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x15f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x15f9a8: 0xae50002c  sw          $s0, 0x2C($s2)
    ctx->pc = 0x15f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 16));
    // 0x15f9ac: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15f9b0: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15f9b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15f9b8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15F9B8u;
    SET_GPR_U32(ctx, 31, 0x15F9C0u);
    ctx->pc = 0x15F9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9B8u;
            // 0x15f9bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9C0u; }
        if (ctx->pc != 0x15F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9C0u; }
        if (ctx->pc != 0x15F9C0u) { return; }
    }
    ctx->pc = 0x15F9C0u;
    // 0x15f9c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15f9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9c8: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15f9cc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x15f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x15f9d0: 0xae220658  sw          $v0, 0x658($s1)
    ctx->pc = 0x15f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
    // 0x15f9d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15f9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9d8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x15f9dc: 0x0  nop
    ctx->pc = 0x15f9dcu;
    // NOP
label_15f9e0:
    // 0x15f9e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f9e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f9e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f9ec: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15f9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f9f0: 0x0  nop
    ctx->pc = 0x15f9f0u;
    // NOP
    // 0x15f9f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F9F4u;
    {
        const bool branch_taken_0x15f9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9F4u;
            // 0x15f9f8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9f4) {
            ctx->pc = 0x15F9E0u;
            runtime->cooperativeGuestYield();
            goto label_15f9e0;
        }
    }
    ctx->pc = 0x15F9FCu;
    // 0x15f9fc: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15f9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15fa00: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x15fa00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x15fa04: 0xfc800638  sd          $zero, 0x638($a0)
    ctx->pc = 0x15fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
    // 0x15fa08: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FA08u;
    SET_GPR_U32(ctx, 31, 0x15FA10u);
    ctx->pc = 0x15FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA08u;
            // 0x15fa0c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA10u; }
        if (ctx->pc != 0x15FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA10u; }
        if (ctx->pc != 0x15FA10u) { return; }
    }
    ctx->pc = 0x15FA10u;
    // 0x15fa10: 0x2695c2a4  addiu       $s5, $s4, -0x3D5C
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951588));
    // 0x15fa14: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15fa18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa1c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FA1Cu;
    SET_GPR_U32(ctx, 31, 0x15FA24u);
    ctx->pc = 0x15FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA1Cu;
            // 0x15fa20: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA24u; }
        if (ctx->pc != 0x15FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA24u; }
        if (ctx->pc != 0x15FA24u) { return; }
    }
    ctx->pc = 0x15FA24u;
    // 0x15fa24: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x15fa28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fa30: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x15fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x15fa34: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15fa38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x15fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x15fa3c: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15FA3Cu;
    SET_GPR_U32(ctx, 31, 0x15FA44u);
    ctx->pc = 0x15FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA3Cu;
            // 0x15fa40: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA44u; }
        if (ctx->pc != 0x15FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA44u; }
        if (ctx->pc != 0x15FA44u) { return; }
    }
    ctx->pc = 0x15FA44u;
    // 0x15fa44: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15fa48: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15fa4c: 0x3c028026  lui         $v0, 0x8026
    ctx->pc = 0x15fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32806 << 16));
    // 0x15fa50: 0x3c038013  lui         $v1, 0x8013
    ctx->pc = 0x15fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32787 << 16));
    // 0x15fa54: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x15fa54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fa58: 0xae250660  sw          $a1, 0x660($s1)
    ctx->pc = 0x15fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 5));
    // 0x15fa5c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x15fa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15fa60: 0x34631919  ori         $v1, $v1, 0x1919
    ctx->pc = 0x15fa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6425);
    // 0x15fa64: 0x34422626  ori         $v0, $v0, 0x2626
    ctx->pc = 0x15fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9766);
    // 0x15fa68: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x15fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x15fa6c: 0xae4b0004  sw          $t3, 0x4($s2)
    ctx->pc = 0x15fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 11));
    // 0x15fa70: 0x24c80400  addiu       $t0, $a2, 0x400
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x15fa74: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x15fa78: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15fa7c: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x15fa80: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x15fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x15fa84: 0x26e4fd10  addiu       $a0, $s7, -0x2F0
    ctx->pc = 0x15fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15fa88: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x15fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x15fa8c: 0xae2b0664  sw          $t3, 0x664($s1)
    ctx->pc = 0x15fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 11));
    // 0x15fa90: 0xfe490010  sd          $t1, 0x10($s2)
    ctx->pc = 0x15fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 9));
    // 0x15fa94: 0xfe4a0018  sd          $t2, 0x18($s2)
    ctx->pc = 0x15fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 10));
    // 0x15fa98: 0xae240658  sw          $a0, 0x658($s1)
    ctx->pc = 0x15fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 4));
    // 0x15fa9c: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x15fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x15faa0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x15faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x15faa4: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x15faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x15faa8: 0xae20066c  sw          $zero, 0x66C($s1)
    ctx->pc = 0x15faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 0));
    // 0x15faac: 0xae200668  sw          $zero, 0x668($s1)
    ctx->pc = 0x15faacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 0));
    // 0x15fab0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FAB0u;
    SET_GPR_U32(ctx, 31, 0x15FAB8u);
    ctx->pc = 0x15FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAB0u;
            // 0x15fab4: 0xafd20000  sw          $s2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAB8u; }
        if (ctx->pc != 0x15FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAB8u; }
        if (ctx->pc != 0x15FAB8u) { return; }
    }
    ctx->pc = 0x15FAB8u;
    // 0x15fab8: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x15fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x15fabc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15fac0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FAC0u;
    SET_GPR_U32(ctx, 31, 0x15FAC8u);
    ctx->pc = 0x15FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAC0u;
            // 0x15fac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAC8u; }
        if (ctx->pc != 0x15FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAC8u; }
        if (ctx->pc != 0x15FAC8u) { return; }
    }
    ctx->pc = 0x15FAC8u;
    // 0x15fac8: 0xc05a326  jal         func_168C98
    ctx->pc = 0x15FAC8u;
    SET_GPR_U32(ctx, 31, 0x15FAD0u);
    ctx->pc = 0x15FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAC8u;
            // 0x15facc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C98u;
    if (runtime->hasFunction(0x168C98u)) {
        auto targetFn = runtime->lookupFunction(0x168C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAD0u; }
        if (ctx->pc != 0x15FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C98_0x168c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAD0u; }
        if (ctx->pc != 0x15FAD0u) { return; }
    }
    ctx->pc = 0x15FAD0u;
    // 0x15fad0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x15fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x15fad4: 0xae024a48  sw          $v0, 0x4A48($s0)
    ctx->pc = 0x15fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19016), GPR_U32(ctx, 2));
    // 0x15fad8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FAD8u;
    SET_GPR_U32(ctx, 31, 0x15FAE0u);
    ctx->pc = 0x15FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAD8u;
            // 0x15fadc: 0xac4303ac  sw          $v1, 0x3AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAE0u; }
        if (ctx->pc != 0x15FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAE0u; }
        if (ctx->pc != 0x15FAE0u) { return; }
    }
    ctx->pc = 0x15FAE0u;
    // 0x15fae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15fae8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FAE8u;
    SET_GPR_U32(ctx, 31, 0x15FAF0u);
    ctx->pc = 0x15FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAE8u;
            // 0x15faec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAF0u; }
        if (ctx->pc != 0x15FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAF0u; }
        if (ctx->pc != 0x15FAF0u) { return; }
    }
    ctx->pc = 0x15FAF0u;
    // 0x15faf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15faf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15faf4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x15faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x15faf8: 0x2483caf0  addiu       $v1, $a0, -0x3510
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953712));
    // 0x15fafc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fb00: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x15fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x15fb04: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15fb08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fb0c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x15fb10: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x15fb14: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x15fb18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fb1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fb20:
    // 0x15fb20: 0x0  nop
    ctx->pc = 0x15fb20u;
    // NOP
    // 0x15fb24: 0x0  nop
    ctx->pc = 0x15fb24u;
    // NOP
    // 0x15fb28: 0x0  nop
    ctx->pc = 0x15fb28u;
    // NOP
    // 0x15fb2c: 0x0  nop
    ctx->pc = 0x15fb2cu;
    // NOP
    // 0x15fb30: 0x0  nop
    ctx->pc = 0x15fb30u;
    // NOP
    // 0x15fb34: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FB34u;
    {
        const bool branch_taken_0x15fb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fb34) {
            ctx->pc = 0x15FB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB34u;
            // 0x15fb38: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FB20u;
            runtime->cooperativeGuestYield();
            goto label_15fb20;
        }
    }
    ctx->pc = 0x15FB3Cu;
    // 0x15fb3c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15FB3Cu;
    SET_GPR_U32(ctx, 31, 0x15FB44u);
    ctx->pc = 0x15FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB3Cu;
            // 0x15fb40: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB44u; }
        if (ctx->pc != 0x15FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB44u; }
        if (ctx->pc != 0x15FB44u) { return; }
    }
    ctx->pc = 0x15FB44u;
    // 0x15fb44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb4c: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15fb50: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15fb54: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15fb58: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15fb58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15fb60:
    // 0x15fb60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fb64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15fb68: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15fb6c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15fb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15fb70: 0x0  nop
    ctx->pc = 0x15fb70u;
    // NOP
    // 0x15fb74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FB74u;
    {
        const bool branch_taken_0x15fb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB74u;
            // 0x15fb78: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb74) {
            ctx->pc = 0x15FB60u;
            runtime->cooperativeGuestYield();
            goto label_15fb60;
        }
    }
    ctx->pc = 0x15FB7Cu;
    // 0x15fb7c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15fb7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15fb80: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15fb80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15fb84: 0x48320800  qmfc2.ni    $s2, $vf1
    ctx->pc = 0x15fb84u;
    SET_GPR_VEC(ctx, 18, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15fb88: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FB88u;
    SET_GPR_U32(ctx, 31, 0x15FB90u);
    ctx->pc = 0x15FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB88u;
            // 0x15fb8c: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB90u; }
        if (ctx->pc != 0x15FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB90u; }
        if (ctx->pc != 0x15FB90u) { return; }
    }
    ctx->pc = 0x15FB90u;
    // 0x15fb90: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15fb94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb98: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FB98u;
    SET_GPR_U32(ctx, 31, 0x15FBA0u);
    ctx->pc = 0x15FB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB98u;
            // 0x15fb9c: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBA0u; }
        if (ctx->pc != 0x15FBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBA0u; }
        if (ctx->pc != 0x15FBA0u) { return; }
    }
    ctx->pc = 0x15FBA0u;
    // 0x15fba0: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x15fba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fba8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15fbac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fbb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15fbb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15fbb8: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15FBB8u;
    SET_GPR_U32(ctx, 31, 0x15FBC0u);
    ctx->pc = 0x15FBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBB8u;
            // 0x15fbbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBC0u; }
        if (ctx->pc != 0x15FBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBC0u; }
        if (ctx->pc != 0x15FBC0u) { return; }
    }
    ctx->pc = 0x15FBC0u;
    // 0x15fbc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fbc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fbc8: 0x26e3fd10  addiu       $v1, $s7, -0x2F0
    ctx->pc = 0x15fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15fbcc: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x15fbd0: 0x24451400  addiu       $a1, $v0, 0x1400
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
    // 0x15fbd4: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x15fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x15fbd8: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15fbdc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x15fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15fbe0: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x15fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    // 0x15fbe4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15fbe8: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15fbec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15fbf0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15fbf4: 0xae070664  sw          $a3, 0x664($s0)
    ctx->pc = 0x15fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 7));
    // 0x15fbf8: 0x7e320040  sq          $s2, 0x40($s1)
    ctx->pc = 0x15fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 18));
    // 0x15fbfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15fbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15fc00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15fc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fc04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15fc08: 0x7e320030  sq          $s2, 0x30($s1)
    ctx->pc = 0x15fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 18));
    // 0x15fc0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15fc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15fc10: 0x7e320020  sq          $s2, 0x20($s1)
    ctx->pc = 0x15fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 18));
    // 0x15fc14: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x15fc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15fc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15fc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc20: 0x8e85c2a4  lw          $a1, -0x3D5C($s4)
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951588)));
    // 0x15fc24: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x15fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x15fc28: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x15fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x15fc2c: 0xae270054  sw          $a3, 0x54($s1)
    ctx->pc = 0x15fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 7));
    // 0x15fc30: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x15fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x15fc34: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x15fc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x15fc38: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x15fc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x15fc3c: 0xfe200068  sd          $zero, 0x68($s1)
    ctx->pc = 0x15fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 0));
    // 0x15fc40: 0xae270070  sw          $a3, 0x70($s1)
    ctx->pc = 0x15fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 7));
    // 0x15fc44: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15fc48: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15fc4c: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x15fc4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x15fc50: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15fc54: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15fc58: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x15fc58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x15fc5c: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x15fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x15fc60: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15fc60u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15fc64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x15fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x15fc68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FC68u;
    {
        const bool branch_taken_0x15fc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC68u;
            // 0x15fc6c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc68) {
            ctx->pc = 0x15FC80u;
            goto label_15fc80;
        }
    }
    ctx->pc = 0x15FC70u;
    // 0x15fc70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fc74: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x15fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x15fc78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fc7c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_15fc80:
    // 0x15fc80: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x15fc84: 0x50470006  beql        $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FC84u;
    {
        const bool branch_taken_0x15fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x15fc84) {
            ctx->pc = 0x15FC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC84u;
            // 0x15fc88: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FCA0u;
            goto label_15fca0;
        }
    }
    ctx->pc = 0x15FC8Cu;
    // 0x15fc8c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fc90: 0xaca70054  sw          $a3, 0x54($a1)
    ctx->pc = 0x15fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 7));
    // 0x15fc94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fc98: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15fc9c: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_15fca0:
    // 0x15fca0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FCA0u;
    {
        const bool branch_taken_0x15fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fca0) {
            ctx->pc = 0x15FCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCA0u;
            // 0x15fca4: 0x78a20020  lq          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FCBCu;
            goto label_15fcbc;
        }
    }
    ctx->pc = 0x15FCA8u;
    // 0x15fca8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fcac: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x15fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x15fcb0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fcb4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15fcb8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x15fcb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_15fcbc:
    // 0x15fcbc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x15fcbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fcc0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x15fcc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15fcc4: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x15fcc4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15fcc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x15fccc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15fcd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15fcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15fcd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15fcd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15fcd8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FCD8u;
    {
        const bool branch_taken_0x15fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fcd8) {
            ctx->pc = 0x15FCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCD8u;
            // 0x15fcdc: 0xdca20068  ld          $v0, 0x68($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FCFCu;
            goto label_15fcfc;
        }
    }
    ctx->pc = 0x15FCE0u;
    // 0x15fce0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fce4: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x15fce4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x15fce8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fcec: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x15fcecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x15fcf0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15fcf4: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x15fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x15fcf8: 0xdca20068  ld          $v0, 0x68($a1)
    ctx->pc = 0x15fcf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 104)));
label_15fcfc:
    // 0x15fcfc: 0xe4a10060  swc1        $f1, 0x60($a1)
    ctx->pc = 0x15fcfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x15fd00: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x15fd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x15fd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FD04u;
    {
        const bool branch_taken_0x15fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD04u;
            // 0x15fd08: 0xaca0005c  sw          $zero, 0x5C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd04) {
            ctx->pc = 0x15FD1Cu;
            goto label_15fd1c;
        }
    }
    ctx->pc = 0x15FD0Cu;
    // 0x15fd0c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fd10: 0xfca00068  sd          $zero, 0x68($a1)
    ctx->pc = 0x15fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 0));
    // 0x15fd14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fd18: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_15fd1c:
    // 0x15fd1c: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x15fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x15fd20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FD20u;
    {
        const bool branch_taken_0x15fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd20) {
            ctx->pc = 0x15FD38u;
            goto label_15fd38;
        }
    }
    ctx->pc = 0x15FD28u;
    // 0x15fd28: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fd2c: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x15fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x15fd30: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fd34: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_15fd38:
    // 0x15fd38: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FD38u;
    SET_GPR_U32(ctx, 31, 0x15FD40u);
    ctx->pc = 0x15FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD38u;
            // 0x15fd3c: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD40u; }
        if (ctx->pc != 0x15FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD40u; }
        if (ctx->pc != 0x15FD40u) { return; }
    }
    ctx->pc = 0x15FD40u;
    // 0x15fd40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd44: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15fd48: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15fd4c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FD4Cu;
    SET_GPR_U32(ctx, 31, 0x15FD54u);
    ctx->pc = 0x15FD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD4Cu;
            // 0x15fd50: 0x26bec2a8  addiu       $fp, $s5, -0x3D58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD54u; }
        if (ctx->pc != 0x15FD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD54u; }
        if (ctx->pc != 0x15FD54u) { return; }
    }
    ctx->pc = 0x15FD54u;
    // 0x15fd54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd58: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x15fd5c: 0x24a4caf0  addiu       $a0, $a1, -0x3510
    ctx->pc = 0x15fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953712));
    // 0x15fd60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15fd64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fd68: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x15fd6c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x15fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x15fd70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fd74: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x15fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x15fd78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x15fd7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x15fd80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15fd84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fd88:
    // 0x15fd88: 0x0  nop
    ctx->pc = 0x15fd88u;
    // NOP
    // 0x15fd8c: 0x0  nop
    ctx->pc = 0x15fd8cu;
    // NOP
    // 0x15fd90: 0x0  nop
    ctx->pc = 0x15fd90u;
    // NOP
    // 0x15fd94: 0x0  nop
    ctx->pc = 0x15fd94u;
    // NOP
    // 0x15fd98: 0x0  nop
    ctx->pc = 0x15fd98u;
    // NOP
    // 0x15fd9c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FD9Cu;
    {
        const bool branch_taken_0x15fd9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD9Cu;
            // 0x15fda0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd9c) {
            ctx->pc = 0x15FD88u;
            runtime->cooperativeGuestYield();
            goto label_15fd88;
        }
    }
    ctx->pc = 0x15FDA4u;
    // 0x15fda4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15FDA4u;
    SET_GPR_U32(ctx, 31, 0x15FDACu);
    ctx->pc = 0x15FDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDA4u;
            // 0x15fda8: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDACu; }
        if (ctx->pc != 0x15FDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDACu; }
        if (ctx->pc != 0x15FDACu) { return; }
    }
    ctx->pc = 0x15FDACu;
    // 0x15fdac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdb4: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x15fdb8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x15fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x15fdbc: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15fdc0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15fdc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15fdc8:
    // 0x15fdc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fdcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15fdd0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15fdd4: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x15fdd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15fdd8: 0x0  nop
    ctx->pc = 0x15fdd8u;
    // NOP
    // 0x15fddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FDDCu;
    {
        const bool branch_taken_0x15fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDDCu;
            // 0x15fde0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fddc) {
            ctx->pc = 0x15FDC8u;
            runtime->cooperativeGuestYield();
            goto label_15fdc8;
        }
    }
    ctx->pc = 0x15FDE4u;
    // 0x15fde4: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x15fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x15fde8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x15fde8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fdec: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FDECu;
    SET_GPR_U32(ctx, 31, 0x15FDF4u);
    ctx->pc = 0x15FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDECu;
            // 0x15fdf0: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDF4u; }
        if (ctx->pc != 0x15FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDF4u; }
        if (ctx->pc != 0x15FDF4u) { return; }
    }
    ctx->pc = 0x15FDF4u;
    // 0x15fdf4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x15fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15fdf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdfc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FDFCu;
    SET_GPR_U32(ctx, 31, 0x15FE04u);
    ctx->pc = 0x15FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDFCu;
            // 0x15fe00: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE04u; }
        if (ctx->pc != 0x15FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE04u; }
        if (ctx->pc != 0x15FE04u) { return; }
    }
    ctx->pc = 0x15FE04u;
    // 0x15fe04: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x15fe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe0c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15fe10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fe14: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15fe18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15fe1c: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x15FE1Cu;
    SET_GPR_U32(ctx, 31, 0x15FE24u);
    ctx->pc = 0x15FE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE1Cu;
            // 0x15fe20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE24u; }
        if (ctx->pc != 0x15FE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE24u; }
        if (ctx->pc != 0x15FE24u) { return; }
    }
    ctx->pc = 0x15FE24u;
    // 0x15fe24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fe28: 0x26e2fd10  addiu       $v0, $s7, -0x2F0
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x15fe2c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x15fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x15fe30: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x15fe34: 0x24621400  addiu       $v0, $v1, 0x1400
    ctx->pc = 0x15fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x15fe38: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x15fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x15fe3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x15fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15fe40: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15fe44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15fe48: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x15fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    // 0x15fe4c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x15fe50: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x15fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15fe54: 0xae140664  sw          $s4, 0x664($s0)
    ctx->pc = 0x15fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 20));
    // 0x15fe58: 0x7e320040  sq          $s2, 0x40($s1)
    ctx->pc = 0x15fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 18));
    // 0x15fe5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15fe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15fe60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15fe60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15fe64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15fe68: 0x7e320030  sq          $s2, 0x30($s1)
    ctx->pc = 0x15fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 18));
    // 0x15fe6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15fe70: 0x7e320020  sq          $s2, 0x20($s1)
    ctx->pc = 0x15fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 18));
    // 0x15fe74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe78: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x15fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x15fe7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fe80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15fe84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15fe84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15fe88: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15fe8c: 0x8ea8c2a8  lw          $t0, -0x3D58($s5)
    ctx->pc = 0x15fe8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951592)));
    // 0x15fe90: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15fe90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15fe94: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x15fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x15fe98: 0xae340054  sw          $s4, 0x54($s1)
    ctx->pc = 0x15fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 20));
    // 0x15fe9c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x15fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x15fea0: 0xe6350060  swc1        $f21, 0x60($s1)
    ctx->pc = 0x15fea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x15fea4: 0xe6340064  swc1        $f20, 0x64($s1)
    ctx->pc = 0x15fea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x15fea8: 0xfe200068  sd          $zero, 0x68($s1)
    ctx->pc = 0x15fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 0));
    // 0x15feac: 0xae340070  sw          $s4, 0x70($s1)
    ctx->pc = 0x15feacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 20));
    // 0x15feb0: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x15FEB0u;
    SET_GPR_U32(ctx, 31, 0x15FEB8u);
    ctx->pc = 0x15FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEB0u;
            // 0x15feb4: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEB8u; }
        if (ctx->pc != 0x15FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEB8u; }
        if (ctx->pc != 0x15FEB8u) { return; }
    }
    ctx->pc = 0x15FEB8u;
    // 0x15feb8: 0x8ea3c2a8  lw          $v1, -0x3D58($s5)
    ctx->pc = 0x15feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951592)));
    // 0x15febc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x15febcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x15fec0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15fec4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x15fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15fec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FEC8u;
    {
        const bool branch_taken_0x15fec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEC8u;
            // 0x15fecc: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fec8) {
            ctx->pc = 0x15FEE0u;
            goto label_15fee0;
        }
    }
    ctx->pc = 0x15FED0u;
    // 0x15fed0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15fed4: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x15fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x15fed8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fedc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_15fee0:
    // 0x15fee0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x15fee4: 0x50540006  beql        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FEE4u;
    {
        const bool branch_taken_0x15fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x15fee4) {
            ctx->pc = 0x15FEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEE4u;
            // 0x15fee8: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FF00u;
            goto label_15ff00;
        }
    }
    ctx->pc = 0x15FEECu;
    // 0x15feec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15fef0: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x15fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
    // 0x15fef4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15fef8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15fefc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_15ff00:
    // 0x15ff00: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF00u;
    {
        const bool branch_taken_0x15ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x15ff00) {
            ctx->pc = 0x15FF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF00u;
            // 0x15ff04: 0x78620020  lq          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FF1Cu;
            goto label_15ff1c;
        }
    }
    ctx->pc = 0x15FF08u;
    // 0x15ff08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ff0c: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x15ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x15ff10: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15ff14: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15ff18: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15ff18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_15ff1c:
    // 0x15ff1c: 0x724210a8  pceqw       $v0, $s2, $v0
    ctx->pc = 0x15ff1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x15ff20: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x15ff20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15ff24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x15ff24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x15ff28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15ff28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15ff2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15ff30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15ff30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15ff34: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FF34u;
    {
        const bool branch_taken_0x15ff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff34) {
            ctx->pc = 0x15FF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF34u;
            // 0x15ff38: 0xdc620068  ld          $v0, 0x68($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FF58u;
            goto label_15ff58;
        }
    }
    ctx->pc = 0x15FF3Cu;
    // 0x15ff3c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ff40: 0x7c720040  sq          $s2, 0x40($v1)
    ctx->pc = 0x15ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 18));
    // 0x15ff44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15ff48: 0x7c720030  sq          $s2, 0x30($v1)
    ctx->pc = 0x15ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 18));
    // 0x15ff4c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15ff50: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x15ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x15ff54: 0xdc620068  ld          $v0, 0x68($v1)
    ctx->pc = 0x15ff54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
label_15ff58:
    // 0x15ff58: 0xe4750060  swc1        $f21, 0x60($v1)
    ctx->pc = 0x15ff58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x15ff5c: 0xe4740064  swc1        $f20, 0x64($v1)
    ctx->pc = 0x15ff5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x15ff60: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FF60u;
    {
        const bool branch_taken_0x15ff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF60u;
            // 0x15ff64: 0xac60005c  sw          $zero, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff60) {
            ctx->pc = 0x15FF78u;
            goto label_15ff78;
        }
    }
    ctx->pc = 0x15FF68u;
    // 0x15ff68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ff6c: 0xfc650068  sd          $a1, 0x68($v1)
    ctx->pc = 0x15ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 5));
    // 0x15ff70: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15ff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15ff74: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_15ff78:
    // 0x15ff78: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x15ff7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FF7Cu;
    {
        const bool branch_taken_0x15ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff7c) {
            ctx->pc = 0x15FF94u;
            goto label_15ff94;
        }
    }
    ctx->pc = 0x15FF84u;
    // 0x15ff84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ff88: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x15ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x15ff8c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15ff90: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_15ff94:
    // 0x15ff94: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15FF94u;
    SET_GPR_U32(ctx, 31, 0x15FF9Cu);
    ctx->pc = 0x15FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF94u;
            // 0x15ff98: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF9Cu; }
        if (ctx->pc != 0x15FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF9Cu; }
        if (ctx->pc != 0x15FF9Cu) { return; }
    }
    ctx->pc = 0x15FF9Cu;
    // 0x15ff9c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15ffa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffa4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ffa8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15FFA8u;
    SET_GPR_U32(ctx, 31, 0x15FFB0u);
    ctx->pc = 0x15FFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFA8u;
            // 0x15ffac: 0x26bec2ac  addiu       $fp, $s5, -0x3D54 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB0u; }
        if (ctx->pc != 0x15FFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB0u; }
        if (ctx->pc != 0x15FFB0u) { return; }
    }
    ctx->pc = 0x15FFB0u;
    // 0x15ffb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ffb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ffb8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15ffbc: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x15ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x15ffc0: 0x2443caf0  addiu       $v1, $v0, -0x3510
    ctx->pc = 0x15ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
    // 0x15ffc4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x15ffc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ffcc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x15ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x15ffd0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15ffd4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x15ffd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15ffdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ffe0:
    // 0x15ffe0: 0x0  nop
    ctx->pc = 0x15ffe0u;
    // NOP
    // 0x15ffe4: 0x0  nop
    ctx->pc = 0x15ffe4u;
    // NOP
    // 0x15ffe8: 0x0  nop
    ctx->pc = 0x15ffe8u;
    // NOP
    // 0x15ffec: 0x0  nop
    ctx->pc = 0x15ffecu;
    // NOP
    // 0x15fff0: 0x0  nop
    ctx->pc = 0x15fff0u;
    // NOP
    // 0x15fff4: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FFF4u;
    {
        const bool branch_taken_0x15fff4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFF4u;
            // 0x15fff8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fff4) {
            ctx->pc = 0x15FFE0u;
            runtime->cooperativeGuestYield();
            goto label_15ffe0;
        }
    }
    ctx->pc = 0x15FFFCu;
    // 0x15fffc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15FFFCu;
    SET_GPR_U32(ctx, 31, 0x160004u);
    ctx->pc = 0x160000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFFCu;
            // 0x160000: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160004u; }
        if (ctx->pc != 0x160004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160004u; }
        if (ctx->pc != 0x160004u) { return; }
    }
    ctx->pc = 0x160004u;
    // 0x160004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16000c: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x160010: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x160014: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x160014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x160018: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x160018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16001c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x16001cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_160020:
    // 0x160020: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x160024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160028: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x160028u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16002c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x16002cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x160030: 0x0  nop
    ctx->pc = 0x160030u;
    // NOP
    // 0x160034: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160034u;
    {
        const bool branch_taken_0x160034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160034u;
            // 0x160038: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160034) {
            ctx->pc = 0x160020u;
            runtime->cooperativeGuestYield();
            goto label_160020;
        }
    }
    ctx->pc = 0x16003Cu;
    // 0x16003c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x16003cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x160040: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x160040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160044: 0xc04f824  jal         func_13E090
    ctx->pc = 0x160044u;
    SET_GPR_U32(ctx, 31, 0x16004Cu);
    ctx->pc = 0x160048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160044u;
            // 0x160048: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16004Cu; }
        if (ctx->pc != 0x16004Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16004Cu; }
        if (ctx->pc != 0x16004Cu) { return; }
    }
    ctx->pc = 0x16004Cu;
    // 0x16004c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x16004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x160050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160054: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x160054u;
    SET_GPR_U32(ctx, 31, 0x16005Cu);
    ctx->pc = 0x160058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160054u;
            // 0x160058: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16005Cu; }
        if (ctx->pc != 0x16005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16005Cu; }
        if (ctx->pc != 0x16005Cu) { return; }
    }
    ctx->pc = 0x16005Cu;
    // 0x16005c: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x16005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x160060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160064: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x160064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x160068: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16006c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x16006cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x160070: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x160070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x160074: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x160074u;
    SET_GPR_U32(ctx, 31, 0x16007Cu);
    ctx->pc = 0x160078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160074u;
            // 0x160078: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16007Cu; }
        if (ctx->pc != 0x16007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16007Cu; }
        if (ctx->pc != 0x16007Cu) { return; }
    }
    ctx->pc = 0x16007Cu;
    // 0x16007c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160080: 0x26e2fd10  addiu       $v0, $s7, -0x2F0
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x160084: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x160084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x160088: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x16008c: 0x24621400  addiu       $v0, $v1, 0x1400
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x160090: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x160090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x160094: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x160094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160098: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x160098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16009c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16009cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1600a0: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x1600a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    // 0x1600a4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x1600a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x1600a8: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x1600a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x1600ac: 0xae140664  sw          $s4, 0x664($s0)
    ctx->pc = 0x1600acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 20));
    // 0x1600b0: 0x7e320040  sq          $s2, 0x40($s1)
    ctx->pc = 0x1600b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 18));
    // 0x1600b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1600b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1600b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1600b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1600bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1600c0: 0x7e320030  sq          $s2, 0x30($s1)
    ctx->pc = 0x1600c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 18));
    // 0x1600c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1600c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1600c8: 0x7e320020  sq          $s2, 0x20($s1)
    ctx->pc = 0x1600c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 18));
    // 0x1600cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1600ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d0: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x1600d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x1600d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1600d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1600dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1600dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1600e0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1600e4: 0x8ea8c2ac  lw          $t0, -0x3D54($s5)
    ctx->pc = 0x1600e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951596)));
    // 0x1600e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1600e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1600ec: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1600ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1600f0: 0xae340054  sw          $s4, 0x54($s1)
    ctx->pc = 0x1600f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 20));
    // 0x1600f4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1600f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1600f8: 0xe6350060  swc1        $f21, 0x60($s1)
    ctx->pc = 0x1600f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x1600fc: 0xe6340064  swc1        $f20, 0x64($s1)
    ctx->pc = 0x1600fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x160100: 0xfe200068  sd          $zero, 0x68($s1)
    ctx->pc = 0x160100u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 0));
    // 0x160104: 0xae340070  sw          $s4, 0x70($s1)
    ctx->pc = 0x160104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 20));
    // 0x160108: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x160108u;
    SET_GPR_U32(ctx, 31, 0x160110u);
    ctx->pc = 0x16010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160108u;
            // 0x16010c: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160110u; }
        if (ctx->pc != 0x160110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160110u; }
        if (ctx->pc != 0x160110u) { return; }
    }
    ctx->pc = 0x160110u;
    // 0x160110: 0x8ea3c2ac  lw          $v1, -0x3D54($s5)
    ctx->pc = 0x160110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951596)));
    // 0x160114: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x160114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x160118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160118u;
    {
        const bool branch_taken_0x160118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160118u;
            // 0x16011c: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160118) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x160120u;
    // 0x160120: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160124: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x160124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x160128: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16012c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x16012cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_160130:
    // 0x160130: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x160134: 0x50540006  beql        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x160134u;
    {
        const bool branch_taken_0x160134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x160134) {
            ctx->pc = 0x160138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160134u;
            // 0x160138: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160150u;
            goto label_160150;
        }
    }
    ctx->pc = 0x16013Cu;
    // 0x16013c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160140: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x160140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
    // 0x160144: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x160144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x160148: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x160148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x16014c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x16014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_160150:
    // 0x160150: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x160150u;
    {
        const bool branch_taken_0x160150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160150) {
            ctx->pc = 0x160154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160150u;
            // 0x160154: 0x78620020  lq          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16016Cu;
            goto label_16016c;
        }
    }
    ctx->pc = 0x160158u;
    // 0x160158: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16015c: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x16015cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x160160: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x160160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x160164: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x160164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x160168: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x160168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_16016c:
    // 0x16016c: 0x724210a8  pceqw       $v0, $s2, $v0
    ctx->pc = 0x16016cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x160170: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x160170u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x160174: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x160174u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x160178: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x160178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16017c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x16017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x160180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x160180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x160184: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160184) {
            ctx->pc = 0x160188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160184u;
            // 0x160188: 0xdc620068  ld          $v0, 0x68($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160190: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x160190u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x160194: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x160194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x160198: 0x7c720040  sq          $s2, 0x40($v1)
    ctx->pc = 0x160198u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 18));
    // 0x16019c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x16019cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1601a0: 0x7c720030  sq          $s2, 0x30($v1)
    ctx->pc = 0x1601a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 18));
    // 0x1601a4: 0xdc620068  ld          $v0, 0x68($v1)
    ctx->pc = 0x1601a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
label_1601a8:
    // 0x1601a8: 0xe4750060  swc1        $f21, 0x60($v1)
    ctx->pc = 0x1601a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x1601ac: 0xe4740064  swc1        $f20, 0x64($v1)
    ctx->pc = 0x1601acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x1601b0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1601B0u;
    {
        const bool branch_taken_0x1601b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1601B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1601B0u;
            // 0x1601b4: 0xac60005c  sw          $zero, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601b0) {
            ctx->pc = 0x1601C8u;
            goto label_1601c8;
        }
    }
    ctx->pc = 0x1601B8u;
    // 0x1601b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1601bc: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1601bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1601c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1601c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1601c4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1601c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_1601c8:
    // 0x1601c8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1601cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1601CCu;
    {
        const bool branch_taken_0x1601cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601cc) {
            ctx->pc = 0x1601E4u;
            goto label_1601e4;
        }
    }
    ctx->pc = 0x1601D4u;
    // 0x1601d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1601d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1601d8: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x1601d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x1601dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1601dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1601e0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1601e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_1601e4:
    // 0x1601e4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1601E4u;
    SET_GPR_U32(ctx, 31, 0x1601ECu);
    ctx->pc = 0x1601E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601E4u;
            // 0x1601e8: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601ECu; }
        if (ctx->pc != 0x1601ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601ECu; }
        if (ctx->pc != 0x1601ECu) { return; }
    }
    ctx->pc = 0x1601ECu;
    // 0x1601ec: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1601f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1601f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1601f8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1601F8u;
    SET_GPR_U32(ctx, 31, 0x160200u);
    ctx->pc = 0x1601FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601F8u;
            // 0x1601fc: 0x2654c2b0  addiu       $s4, $s2, -0x3D50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160200u; }
        if (ctx->pc != 0x160200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160200u; }
        if (ctx->pc != 0x160200u) { return; }
    }
    ctx->pc = 0x160200u;
    // 0x160200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x160200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160204: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x160208: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x16020c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160210: 0x2442cac8  addiu       $v0, $v0, -0x3538
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953672));
    // 0x160214: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x160214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x160218: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x160218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x16021c: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x16021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x160220: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x160220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x160224: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x160224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x160228: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x160228u;
    SET_GPR_U32(ctx, 31, 0x160230u);
    ctx->pc = 0x16022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160228u;
            // 0x16022c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160230u; }
        if (ctx->pc != 0x160230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160230u; }
        if (ctx->pc != 0x160230u) { return; }
    }
    ctx->pc = 0x160230u;
    // 0x160230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160238: 0x26c2fd30  addiu       $v0, $s6, -0x2D0
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966576));
    // 0x16023c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x160240: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x160240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x160244: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x160244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160248: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x160248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x16024c: 0x0  nop
    ctx->pc = 0x16024cu;
    // NOP
label_160250:
    // 0x160250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x160254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160258: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x160258u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16025c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x16025cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x160260: 0x0  nop
    ctx->pc = 0x160260u;
    // NOP
    // 0x160264: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160264u;
    {
        const bool branch_taken_0x160264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160264u;
            // 0x160268: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160264) {
            ctx->pc = 0x160250u;
            runtime->cooperativeGuestYield();
            goto label_160250;
        }
    }
    ctx->pc = 0x16026Cu;
    // 0x16026c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x16026cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x160270: 0xc04f824  jal         func_13E090
    ctx->pc = 0x160270u;
    SET_GPR_U32(ctx, 31, 0x160278u);
    ctx->pc = 0x160274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160270u;
            // 0x160274: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160278u; }
        if (ctx->pc != 0x160278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160278u; }
        if (ctx->pc != 0x160278u) { return; }
    }
    ctx->pc = 0x160278u;
    // 0x160278: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x160278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16027c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160280: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x160280u;
    SET_GPR_U32(ctx, 31, 0x160288u);
    ctx->pc = 0x160284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160280u;
            // 0x160284: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160288u; }
        if (ctx->pc != 0x160288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160288u; }
        if (ctx->pc != 0x160288u) { return; }
    }
    ctx->pc = 0x160288u;
    // 0x160288: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x160288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x16028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160290: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x160290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x160294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160298: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x160298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16029c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16029cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1602a0: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x1602A0u;
    SET_GPR_U32(ctx, 31, 0x1602A8u);
    ctx->pc = 0x1602A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602A0u;
            // 0x1602a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602A8u; }
        if (ctx->pc != 0x1602A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602A8u; }
        if (ctx->pc != 0x1602A8u) { return; }
    }
    ctx->pc = 0x1602A8u;
    // 0x1602a8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1602ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1602b0: 0xae030664  sw          $v1, 0x664($s0)
    ctx->pc = 0x1602b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 3));
    // 0x1602b4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x1602b8: 0xae020660  sw          $v0, 0x660($s0)
    ctx->pc = 0x1602b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 2));
    // 0x1602bc: 0x3508fffd  ori         $t0, $t0, 0xFFFD
    ctx->pc = 0x1602bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65533);
    // 0x1602c0: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x1602c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x1602c4: 0x26eafd10  addiu       $t2, $s7, -0x2F0
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966544));
    // 0x1602c8: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x1602c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x1602cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1602ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1602d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1602d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1602d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1602d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1602dc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1602dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1602e0: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x1602e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x1602e4: 0x24690400  addiu       $t1, $v1, 0x400
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1602e8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1602e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1602ec: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x1602ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x1602f0: 0x8e48c2b0  lw          $t0, -0x3D50($s2)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951600)));
    // 0x1602f4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1602f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1602f8: 0xae0a0658  sw          $t2, 0x658($s0)
    ctx->pc = 0x1602f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 10));
    // 0x1602fc: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x1602fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x160300: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x160300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x160304: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x160304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x160308: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x160308u;
    SET_GPR_U32(ctx, 31, 0x160310u);
    ctx->pc = 0x16030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160308u;
            // 0x16030c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160310u; }
        if (ctx->pc != 0x160310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160310u; }
        if (ctx->pc != 0x160310u) { return; }
    }
    ctx->pc = 0x160310u;
    // 0x160310: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160314: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x160318: 0xac40c298  sw          $zero, -0x3D68($v0)
    ctx->pc = 0x160318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951576), GPR_U32(ctx, 0));
    // 0x16031c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x16031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x160320: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x160320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160324: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x160328: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x16032c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x160330: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x160330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160334: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x160334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x160338: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x160338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16033c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16033cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160340: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x160340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160344: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x160344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160348: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x160348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16034c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16034cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160350: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x160350u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160358: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x160358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16035c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x16035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x160360: 0xac60c2b8  sw          $zero, -0x3D48($v1)
    ctx->pc = 0x160360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951608), GPR_U32(ctx, 0));
    // 0x160364: 0xac80c2bc  sw          $zero, -0x3D44($a0)
    ctx->pc = 0x160364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951612), GPR_U32(ctx, 0));
    // 0x160368: 0xaca0c2c0  sw          $zero, -0x3D40($a1)
    ctx->pc = 0x160368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294951616), GPR_U32(ctx, 0));
    // 0x16036c: 0xacc0c2c4  sw          $zero, -0x3D3C($a2)
    ctx->pc = 0x16036cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951620), GPR_U32(ctx, 0));
    // 0x160370: 0xace0c2c8  sw          $zero, -0x3D38($a3)
    ctx->pc = 0x160370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294951624), GPR_U32(ctx, 0));
    // 0x160374: 0x3e00008  jr          $ra
    ctx->pc = 0x160374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160374u;
            // 0x160378: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F670u: goto label_15f670;
            case 0x15F678u: goto label_15f678;
            case 0x15F6C8u: goto label_15f6c8;
            case 0x15F700u: goto label_15f700;
            case 0x15F7B8u: goto label_15f7b8;
            case 0x15F870u: goto label_15f870;
            case 0x15F928u: goto label_15f928;
            case 0x15F9E0u: goto label_15f9e0;
            case 0x15FB20u: goto label_15fb20;
            case 0x15FB60u: goto label_15fb60;
            case 0x15FC80u: goto label_15fc80;
            case 0x15FCA0u: goto label_15fca0;
            case 0x15FCBCu: goto label_15fcbc;
            case 0x15FCFCu: goto label_15fcfc;
            case 0x15FD1Cu: goto label_15fd1c;
            case 0x15FD38u: goto label_15fd38;
            case 0x15FD88u: goto label_15fd88;
            case 0x15FDC8u: goto label_15fdc8;
            case 0x15FEE0u: goto label_15fee0;
            case 0x15FF00u: goto label_15ff00;
            case 0x15FF1Cu: goto label_15ff1c;
            case 0x15FF58u: goto label_15ff58;
            case 0x15FF78u: goto label_15ff78;
            case 0x15FF94u: goto label_15ff94;
            case 0x15FFE0u: goto label_15ffe0;
            case 0x160020u: goto label_160020;
            case 0x160130u: goto label_160130;
            case 0x160150u: goto label_160150;
            case 0x16016Cu: goto label_16016c;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601C8u: goto label_1601c8;
            case 0x1601E4u: goto label_1601e4;
            case 0x160250u: goto label_160250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16037Cu;
    // 0x16037c: 0x0  nop
    ctx->pc = 0x16037cu;
    // NOP
}

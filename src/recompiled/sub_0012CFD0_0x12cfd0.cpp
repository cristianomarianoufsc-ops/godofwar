#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012CFD0
// Address: 0x12cfd0 - 0x12d170
void sub_0012CFD0_0x12cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CFD0_0x12cfd0");
#endif

    ctx->pc = 0x12cfd0u;

    // 0x12cfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12cfd4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x12cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x12cfd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12cfdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12cfdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12cfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12cfe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12cfe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12cfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12cff0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12cff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cff8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12CFF8u;
    SET_GPR_U32(ctx, 31, 0x12D000u);
    ctx->pc = 0x12CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFF8u;
            // 0x12cffc: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D000u; }
        if (ctx->pc != 0x12D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D000u; }
        if (ctx->pc != 0x12D000u) { return; }
    }
    ctx->pc = 0x12D000u;
    // 0x12d000: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12d004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12d004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12d008: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12d00c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12d010: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12D010u;
    SET_GPR_U32(ctx, 31, 0x12D018u);
    ctx->pc = 0x12D014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D010u;
            // 0x12d014: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D018u; }
        if (ctx->pc != 0x12D018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D018u; }
        if (ctx->pc != 0x12D018u) { return; }
    }
    ctx->pc = 0x12D018u;
    // 0x12d018: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12d01c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d020: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12d024: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12d024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12d028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12d028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12d02c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12d02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12d030: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12d030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12d034: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12d038: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12d038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12d03c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12d03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12d040: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x12d040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x12d044: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12d044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12d048: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12d04c: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x12d04cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x12d050: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x12d050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x12d054: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12d058: 0x8e25f168  lw          $a1, -0xE98($s1)
    ctx->pc = 0x12d058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12d05c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d060: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12d060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12d064: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x12d064u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x12d068: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x12d068u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x12d06c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d070: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12d074: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x12d074u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x12d078: 0x3529c000  ori         $t1, $t1, 0xC000
    ctx->pc = 0x12d078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)49152);
    // 0x12d07c: 0x8c44dd58  lw          $a0, -0x22A8($v0)
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x12d080: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d084: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x12d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x12d088: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x12d088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12d08c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12d090: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x12d090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12d094: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x12d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12d098: 0xfca90020  sd          $t1, 0x20($a1)
    ctx->pc = 0x12d098u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 9));
    // 0x12d09c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d0a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d0a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12d0a8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x12d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x12d0ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d0b0: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x12d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x12d0b4: 0xfca80038  sd          $t0, 0x38($a1)
    ctx->pc = 0x12d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 8));
    // 0x12d0b8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x12d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12d0bc: 0xfca60048  sd          $a2, 0x48($a1)
    ctx->pc = 0x12d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 6));
    // 0x12d0c0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x12d0c4: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x12d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x12d0c8: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x12d0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12d0cc: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x12d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x12d0d0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x12d0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12d0d4: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x12d0d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x12d0d8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x12d0d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x12d0dc: 0x843bc  dsll32      $t0, $t0, 14
    ctx->pc = 0x12d0dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 14));
    // 0x12d0e0: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x12d0e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12d0e4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x12d0e8: 0xfca70058  sd          $a3, 0x58($a1)
    ctx->pc = 0x12d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 7));
    // 0x12d0ec: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x12d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x12d0f0: 0xfca20050  sd          $v0, 0x50($a1)
    ctx->pc = 0x12d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    // 0x12d0f4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12d0f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12d0f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12d0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d0fc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12d0fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12d100: 0x9e620008  lwu         $v0, 0x8($s3)
    ctx->pc = 0x12d100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12d104: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x12d104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x12d108: 0xfcaa0068  sd          $t2, 0x68($a1)
    ctx->pc = 0x12d108u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 10));
    // 0x12d10c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x12d10cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x12d110: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12d114: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x12d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x12d118: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x12d118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x12d11c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x12d11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12d120: 0xae23f168  sw          $v1, -0xE98($s1)
    ctx->pc = 0x12d120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 3));
    // 0x12d124: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d128: 0x9d22f1a8  lwu         $v0, -0xE58($t1)
    ctx->pc = 0x12d128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294963624)));
    // 0x12d12c: 0xfca60078  sd          $a2, 0x78($a1)
    ctx->pc = 0x12d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 6));
    // 0x12d130: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12d134: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12d134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12d138: 0xc048222  jal         func_120888
    ctx->pc = 0x12D138u;
    SET_GPR_U32(ctx, 31, 0x12D140u);
    ctx->pc = 0x12D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D138u;
            // 0x12d13c: 0xfcb00070  sd          $s0, 0x70($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120888u;
    if (runtime->hasFunction(0x120888u)) {
        auto targetFn = runtime->lookupFunction(0x120888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D140u; }
        if (ctx->pc != 0x12D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120888_0x120888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D140u; }
        if (ctx->pc != 0x12D140u) { return; }
    }
    ctx->pc = 0x12D140u;
    // 0x12d140: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12D140u;
    SET_GPR_U32(ctx, 31, 0x12D148u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D148u; }
        if (ctx->pc != 0x12D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D148u; }
        if (ctx->pc != 0x12D148u) { return; }
    }
    ctx->pc = 0x12D148u;
    // 0x12d148: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12D148u;
    SET_GPR_U32(ctx, 31, 0x12D150u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D150u; }
        if (ctx->pc != 0x12D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D150u; }
        if (ctx->pc != 0x12D150u) { return; }
    }
    ctx->pc = 0x12D150u;
    // 0x12d150: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12d150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d154: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12d154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12d158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d15c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x12d15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d164: 0x3e00008  jr          $ra
    ctx->pc = 0x12D164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D164u;
            // 0x12d168: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D16Cu;
    // 0x12d16c: 0x0  nop
    ctx->pc = 0x12d16cu;
    // NOP
}

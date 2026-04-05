#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001421E0
// Address: 0x1421e0 - 0x1426c0
void sub_001421E0_0x1421e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001421E0_0x1421e0");
#endif

    ctx->pc = 0x1421e0u;

    // 0x1421e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1421e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1421e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1421e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1421e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1421ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1421ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1421f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1421f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1421f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1421f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1421f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1421f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1421fc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1421fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x142200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142204: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x142204u;
    SET_GPR_U32(ctx, 31, 0x14220Cu);
    ctx->pc = 0x142208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142204u;
            // 0x142208: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14220Cu; }
        if (ctx->pc != 0x14220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14220Cu; }
        if (ctx->pc != 0x14220Cu) { return; }
    }
    ctx->pc = 0x14220Cu;
    // 0x14220c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142210: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x142210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x142214: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142218: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x142218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14221c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x14221Cu;
    SET_GPR_U32(ctx, 31, 0x142224u);
    ctx->pc = 0x142220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14221Cu;
            // 0x142220: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142224u; }
        if (ctx->pc != 0x142224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142224u; }
        if (ctx->pc != 0x142224u) { return; }
    }
    ctx->pc = 0x142224u;
    // 0x142224: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142228: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x142228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14222c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x142230: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x142230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x142234: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x142238: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14223c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x14223cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x142240: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x142240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x142244: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x142244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x142248: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x142248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14224c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x14224cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x142250: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142254: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x142254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x142258: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x142258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x14225c: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x14225cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x142260: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x142260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x142264: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x142264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14226c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14226cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x142270: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x142270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x142274: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x142274u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x142278: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14227c: 0x3c0b0030  lui         $t3, 0x30
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
    // 0x142280: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x142284: 0x8d68dd58  lw          $t0, -0x22A8($t3)
    ctx->pc = 0x142284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294958424)));
    // 0x142288: 0x2682dd50  addiu       $v0, $s4, -0x22B0
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958416));
    // 0x14228c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142290: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142294: 0x89900  sll         $s3, $t0, 4
    ctx->pc = 0x142294u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x142298: 0x8e83dd50  lw          $v1, -0x22B0($s4)
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958416)));
    // 0x14229c: 0x266601ff  addiu       $a2, $s3, 0x1FF
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 511));
    // 0x1422a0: 0x266203fe  addiu       $v0, $s3, 0x3FE
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1022));
    // 0x1422a4: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1422a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1422ac: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x1422acu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1422b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1422b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1422b4: 0x2ca43  sra         $t9, $v0, 9
    ctx->pc = 0x1422b4u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1422b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1422b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1422bc: 0x279001a  div         $zero, $s3, $t9
    ctx->pc = 0x1422bcu;
    { int32_t divisor = GPR_S32(ctx, 25);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1422c0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1422c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1422c4: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1422c8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1422c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1422cc: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x1422ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1422d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1422d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1422d4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1422d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1422d8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1422dc: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1422e0: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1422e4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1422e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1422e8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1422e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1422ec: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1422f0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1422f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1422f4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1422f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1422f8: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1422fc: 0x240d0015  addiu       $t5, $zero, 0x15
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x142300: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x142300u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x142304: 0x84182  srl         $t0, $t0, 6
    ctx->pc = 0x142304u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x142308: 0xfc860038  sd          $a2, 0x38($a0)
    ctx->pc = 0x142308u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
    // 0x14230c: 0x3c0e0033  lui         $t6, 0x33
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)51 << 16));
    // 0x142310: 0xfc870048  sd          $a3, 0x48($a0)
    ctx->pc = 0x142310u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 7));
    // 0x142314: 0x3c0f0033  lui         $t7, 0x33
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)51 << 16));
    // 0x142318: 0xfc890058  sd          $t1, 0x58($a0)
    ctx->pc = 0x142318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 9));
    // 0x14231c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x14231cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x142320: 0xfc8a0060  sd          $t2, 0x60($a0)
    ctx->pc = 0x142320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 10));
    // 0x142324: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x142328: 0xfc910068  sd          $s1, 0x68($a0)
    ctx->pc = 0x142328u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 17));
    // 0x14232c: 0x83438  dsll        $a2, $t0, 16
    ctx->pc = 0x14232cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 16);
    // 0x142330: 0xfc8c0070  sd          $t4, 0x70($a0)
    ctx->pc = 0x142330u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 12));
    // 0x142334: 0x340aff00  ori         $t2, $zero, 0xFF00
    ctx->pc = 0x142334u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x142338: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x142338u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x14233c: 0xfc8d0078  sd          $t5, 0x78($a0)
    ctx->pc = 0x14233cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 13));
    // 0x142340: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x142340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x142344: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x142344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x142348: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x142348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
    // 0x14234c: 0xfc830040  sd          $v1, 0x40($a0)
    ctx->pc = 0x14234cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x142350: 0x3c122800  lui         $s2, 0x2800
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)10240 << 16));
    // 0x142354: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x142354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x142358: 0x340da000  ori         $t5, $zero, 0xA000
    ctx->pc = 0x142358u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x14235c: 0xd6cb8  dsll        $t5, $t5, 18
    ctx->pc = 0x14235cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 18);
    // 0x142360: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x142360u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x142364: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x142364u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142368: 0x118cf8  dsll        $s1, $s1, 19
    ctx->pc = 0x142368u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 19);
    // 0x14236c: 0x249800b0  addiu       $t8, $a0, 0xB0
    ctx->pc = 0x14236cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x142370: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x142374: 0x9dc2f1ac  lwu         $v0, -0xE54($t6)
    ctx->pc = 0x142374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 14), 4294963628)));
    // 0x142378: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14237c: 0x9de3f1a8  lwu         $v1, -0xE58($t7)
    ctx->pc = 0x14237cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 15), 4294963624)));
    // 0x142380: 0x256bdd58  addiu       $t3, $t3, -0x22A8
    ctx->pc = 0x142380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958424));
    // 0x142384: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x142384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x142388: 0xfc850088  sd          $a1, 0x88($a0)
    ctx->pc = 0x142388u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 5));
    // 0x14238c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x142390: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x142390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x142394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142398: 0xae18f168  sw          $t8, -0xE98($s0)
    ctx->pc = 0x142398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 24));
    // 0x14239c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x14239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1423a0: 0x3c05418b  lui         $a1, 0x418B
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16779 << 16));
    // 0x1423a4: 0xfc820080  sd          $v0, 0x80($a0)
    ctx->pc = 0x1423a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 2));
    // 0x1423a8: 0x248c00c0  addiu       $t4, $a0, 0xC0
    ctx->pc = 0x1423a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1423ac: 0x240a5353  addiu       $t2, $zero, 0x5353
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x1423b0: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1423b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1423b4: 0x8dc2f1ac  lw          $v0, -0xE54($t6)
    ctx->pc = 0x1423b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963628)));
    // 0x1423b8: 0x24150200  addiu       $s5, $zero, 0x200
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1423bc: 0x9de3f1a8  lwu         $v1, -0xE58($t7)
    ctx->pc = 0x1423bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 15), 4294963624)));
    // 0x1423c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1423c4: 0xfc870098  sd          $a3, 0x98($a0)
    ctx->pc = 0x1423c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 7));
    // 0x1423c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1423c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1423cc: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1423ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1423d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1423d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1423d4: 0xfc8900a0  sd          $t1, 0xA0($a0)
    ctx->pc = 0x1423d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 9));
    // 0x1423d8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1423d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1423dc: 0xfc8600a8  sd          $a2, 0xA8($a0)
    ctx->pc = 0x1423dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 6));
    // 0x1423e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1423e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1423e4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1423e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1423e8: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1423ec: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x1423f0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1423f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1423f4: 0x37100  sll         $t6, $v1, 4
    ctx->pc = 0x1423f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1423f8: 0xfc820090  sd          $v0, 0x90($a0)
    ctx->pc = 0x1423f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 2));
    // 0x1423fc: 0x9812  mflo        $s3
    ctx->pc = 0x1423fcu;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x142400: 0x53200001  beql        $t9, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142400u;
    {
        const bool branch_taken_0x142400 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x142400) {
            ctx->pc = 0x142404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142400u;
            // 0x142404: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142408u;
            goto label_142408;
        }
    }
    ctx->pc = 0x142408u;
label_142408:
    // 0x142408: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x142408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14240c: 0xac9900b0  sw          $t9, 0xB0($a0)
    ctx->pc = 0x14240cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 25));
    // 0x142410: 0xaf050004  sw          $a1, 0x4($t8)
    ctx->pc = 0x142410u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 5));
    // 0x142414: 0xaf0a0008  sw          $t2, 0x8($t8)
    ctx->pc = 0x142414u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 10));
    // 0x142418: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x142418u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x14241c: 0x1b200023  blez        $t9, . + 4 + (0x23 << 2)
    ctx->pc = 0x14241Cu;
    {
        const bool branch_taken_0x14241c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x142420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14241Cu;
            // 0x142420: 0xae0cf168  sw          $t4, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14241c) {
            ctx->pc = 0x1424ACu;
            goto label_1424ac;
        }
    }
    ctx->pc = 0x142424u;
    // 0x142424: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x142424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142428: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x14242c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14242cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x142430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142434: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x142434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_142438:
    // 0x142438: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14243c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x14243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x142440: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x142440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x142444: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142448: 0x1154021  addu        $t0, $t0, $s5
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    // 0x14244c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14244cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x142450: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x142450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x142454: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142458: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x142458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x14245c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142460: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x142464: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x142464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142468: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x142468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14246c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x142470: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x142470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x142474: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x142474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x142478: 0xac4a0020  sw          $t2, 0x20($v0)
    ctx->pc = 0x142478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 10));
    // 0x14247c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x142480: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142484: 0x1555021  addu        $t2, $t2, $s5
    ctx->pc = 0x142484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x142488: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x142488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x14248c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14248cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142490: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x142490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x142494: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x142498: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x142498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x14249c: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x14249cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x1424a0: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1424a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1424a4: 0x14e0ffe4  bnez        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1424A4u;
    {
        const bool branch_taken_0x1424a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1424A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424A4u;
            // 0x1424a8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424a4) {
            ctx->pc = 0x142438u;
            runtime->cooperativeGuestYield();
            goto label_142438;
        }
    }
    ctx->pc = 0x1424ACu;
label_1424ac:
    // 0x1424ac: 0x8e82dd50  lw          $v0, -0x22B0($s4)
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958416)));
    // 0x1424b0: 0x53200001  beql        $t9, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1424B0u;
    {
        const bool branch_taken_0x1424b0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424b0) {
            ctx->pc = 0x1424B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1424B0u;
            // 0x1424b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1424B8u;
            goto label_1424b8;
        }
    }
    ctx->pc = 0x1424B8u;
label_1424b8:
    // 0x1424b8: 0x2683dd50  addiu       $v1, $s4, -0x22B0
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958416));
    // 0x1424bc: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x1424bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x1424c0: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1424c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1424c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1424c8: 0x279001a  div         $zero, $s3, $t9
    ctx->pc = 0x1424c8u;
    { int32_t divisor = GPR_S32(ctx, 25);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1424cc: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x1424ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x1424d0: 0x37900  sll         $t7, $v1, 4
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1424d4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1424d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1424d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1424dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1424e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1424e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1424e4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1424e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1424e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1424ec: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1424f0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1424f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1424f4: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x1424f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1424f8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1424f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1424fc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1424fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142500: 0x3c06418b  lui         $a2, 0x418B
    ctx->pc = 0x142500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16779 << 16));
    // 0x142504: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x142508: 0x240a5353  addiu       $t2, $zero, 0x5353
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x14250c: 0x8e82dd50  lw          $v0, -0x22B0($s4)
    ctx->pc = 0x14250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958416)));
    // 0x142510: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x142510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x142514: 0x9c831074  lwu         $v1, 0x1074($a0)
    ctx->pc = 0x142514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4212)));
    // 0x142518: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x142518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x14251c: 0x9ce51070  lwu         $a1, 0x1070($a3)
    ctx->pc = 0x14251cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 4208)));
    // 0x142520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142524: 0x8da4f168  lw          $a0, -0xE98($t5)
    ctx->pc = 0x142524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x142528: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x142528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x14252c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x14252cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x142530: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142534: 0x24980020  addiu       $t8, $a0, 0x20
    ctx->pc = 0x142534u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x142538: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x142538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14253c: 0xac990020  sw          $t9, 0x20($a0)
    ctx->pc = 0x14253cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 25));
    // 0x142540: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x142540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x142544: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x142544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x142548: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x142548u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x14254c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x14254cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x142550: 0xaf060004  sw          $a2, 0x4($t8)
    ctx->pc = 0x142550u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 6));
    // 0x142554: 0xaf0a0008  sw          $t2, 0x8($t8)
    ctx->pc = 0x142554u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 10));
    // 0x142558: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x142558u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x14255c: 0x5812  mflo        $t3
    ctx->pc = 0x14255cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x142560: 0x1b200026  blez        $t9, . + 4 + (0x26 << 2)
    ctx->pc = 0x142560u;
    {
        const bool branch_taken_0x142560 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x142564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142560u;
            // 0x142564: 0xada2f168  sw          $v0, -0xE98($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142560) {
            ctx->pc = 0x1425FCu;
            goto label_1425fc;
        }
    }
    ctx->pc = 0x142568u;
    // 0x142568: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x142568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14256c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x14256cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142570: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x142574: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x142574u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142578: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x142578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14257c: 0x0  nop
    ctx->pc = 0x14257cu;
    // NOP
label_142580:
    // 0x142580: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x142580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x142584: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x142584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142588: 0x25e60008  addiu       $a2, $t7, 0x8
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x14258c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x142590: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x142590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x142594: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142598: 0x1354821  addu        $t1, $t1, $s5
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x14259c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14259cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1425a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1425a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1425a4: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x1425a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x1425a8: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x1425a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x1425ac: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1425acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1425b0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1425b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1425b4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1425b8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1425b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1425bc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1425c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1425c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1425c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1425c8: 0xac4c0020  sw          $t4, 0x20($v0)
    ctx->pc = 0x1425c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 12));
    // 0x1425cc: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1425d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1425d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1425d4: 0x1956021  addu        $t4, $t4, $s5
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x1425d8: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x1425d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x1425dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1425dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1425e0: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x1425e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x1425e4: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1425e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1425e8: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x1425e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1425ec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1425ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1425f0: 0xada5f168  sw          $a1, -0xE98($t5)
    ctx->pc = 0x1425f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 5));
    // 0x1425f4: 0x14e0ffe2  bnez        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1425F4u;
    {
        const bool branch_taken_0x1425f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1425F4u;
            // 0x1425f8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425f4) {
            ctx->pc = 0x142580u;
            runtime->cooperativeGuestYield();
            goto label_142580;
        }
    }
    ctx->pc = 0x1425FCu;
label_1425fc:
    // 0x1425fc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1425fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x142600: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x142600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x142604: 0x8cc2f168  lw          $v0, -0xE98($a2)
    ctx->pc = 0x142604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x142608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14260c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14260cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x142610: 0x340a8002  ori         $t2, $zero, 0x8002
    ctx->pc = 0x142610u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x142614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x142618: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x142618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x14261c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14261cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x142620: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x142620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x142624: 0x94bbc  dsll32      $t1, $t1, 14
    ctx->pc = 0x142624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 14));
    // 0x142628: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x142628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x14262c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x142630: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142634: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142638: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x142638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x14263c: 0x8cc2f168  lw          $v0, -0xE98($a2)
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x142640: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x142640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x142644: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x142644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x142648: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14264c: 0x24580020  addiu       $t8, $v0, 0x20
    ctx->pc = 0x14264cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142650: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x142650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x142654: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x142654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x142658: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x142658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x14265c: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x14265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x142660: 0xac4a0020  sw          $t2, 0x20($v0)
    ctx->pc = 0x142660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 10));
    // 0x142664: 0xac530040  sw          $s3, 0x40($v0)
    ctx->pc = 0x142664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 19));
    // 0x142668: 0xacc4f168  sw          $a0, -0xE98($a2)
    ctx->pc = 0x142668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 4));
    // 0x14266c: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x14266cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x142670: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x142670u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x142674: 0xaf050004  sw          $a1, 0x4($t8)
    ctx->pc = 0x142674u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 5));
    // 0x142678: 0xaf080008  sw          $t0, 0x8($t8)
    ctx->pc = 0x142678u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 8));
    // 0x14267c: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x14267cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x142680: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x142684: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x142684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x142688: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x142688u;
    SET_GPR_U32(ctx, 31, 0x142690u);
    ctx->pc = 0x14268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142688u;
            // 0x14268c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142690u; }
        if (ctx->pc != 0x142690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142690u; }
        if (ctx->pc != 0x142690u) { return; }
    }
    ctx->pc = 0x142690u;
    // 0x142690: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x142690u;
    SET_GPR_U32(ctx, 31, 0x142698u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142698u; }
        if (ctx->pc != 0x142698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142698u; }
        if (ctx->pc != 0x142698u) { return; }
    }
    ctx->pc = 0x142698u;
    // 0x142698: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x142698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14269c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14269cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1426a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1426a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1426a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1426a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1426a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1426a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1426ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1426acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1426b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1426b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1426B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426B4u;
            // 0x1426b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142408u: goto label_142408;
            case 0x142438u: goto label_142438;
            case 0x1424ACu: goto label_1424ac;
            case 0x1424B8u: goto label_1424b8;
            case 0x142580u: goto label_142580;
            case 0x1425FCu: goto label_1425fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1426BCu;
    // 0x1426bc: 0x0  nop
    ctx->pc = 0x1426bcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143620
// Address: 0x143620 - 0x1439a0
void sub_00143620_0x143620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143620_0x143620");
#endif

    ctx->pc = 0x143620u;

    // 0x143620: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x143624: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x143628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14362c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x143630: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x143630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x143634: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x143634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x143638: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x143638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14363c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143640: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x143640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x143644: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x143644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x143648: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x143648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x14364c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143650: 0xac62bfec  sw          $v0, -0x4014($v1)
    ctx->pc = 0x143650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950892), GPR_U32(ctx, 2));
    // 0x143654: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x143658: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14365c: 0x24e3ed68  addiu       $v1, $a3, -0x1298
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x143660: 0x8cc2ed60  lw          $v0, -0x12A0($a2)
    ctx->pc = 0x143660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962528)));
    // 0x143664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14366c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143678: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x14367c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14367cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_143680:
    // 0x143680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x143680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143688: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x143688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x14368c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x143690: 0x0  nop
    ctx->pc = 0x143690u;
    // NOP
    // 0x143694: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143694u;
    {
        const bool branch_taken_0x143694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143694u;
            // 0x143698: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143694) {
            ctx->pc = 0x143680u;
            runtime->cooperativeGuestYield();
            goto label_143680;
        }
    }
    ctx->pc = 0x14369Cu;
    // 0x14369c: 0x8cc2ed60  lw          $v0, -0x12A0($a2)
    ctx->pc = 0x14369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962528)));
    // 0x1436a0: 0x24e3ed68  addiu       $v1, $a3, -0x1298
    ctx->pc = 0x1436a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x1436a4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1436a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1436a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1436ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1436acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1436b0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1436B0u;
    SET_GPR_U32(ctx, 31, 0x1436B8u);
    ctx->pc = 0x1436B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436B0u;
            // 0x1436b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436B8u; }
        if (ctx->pc != 0x1436B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436B8u; }
        if (ctx->pc != 0x1436B8u) { return; }
    }
    ctx->pc = 0x1436B8u;
    // 0x1436b8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1436B8u;
    SET_GPR_U32(ctx, 31, 0x1436C0u);
    ctx->pc = 0x1436BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436B8u;
            // 0x1436bc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436C0u; }
        if (ctx->pc != 0x1436C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436C0u; }
        if (ctx->pc != 0x1436C0u) { return; }
    }
    ctx->pc = 0x1436C0u;
    // 0x1436c0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1436c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1436c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1436c8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1436c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1436cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1436ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1436d0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1436D0u;
    SET_GPR_U32(ctx, 31, 0x1436D8u);
    ctx->pc = 0x1436D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436D0u;
            // 0x1436d4: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436D8u; }
        if (ctx->pc != 0x1436D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436D8u; }
        if (ctx->pc != 0x1436D8u) { return; }
    }
    ctx->pc = 0x1436D8u;
    // 0x1436d8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1436dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1436dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1436e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1436e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1436e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1436e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1436e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1436ec: 0x3c190033  lui         $t9, 0x33
    ctx->pc = 0x1436ecu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)51 << 16));
    // 0x1436f0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1436f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1436f4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1436f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1436f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1436fc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1436fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x143700: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x143700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x143704: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x143704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x143708: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x14370c: 0x9c62f19c  lwu         $v0, -0xE64($v1)
    ctx->pc = 0x14370cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x143710: 0x9f23f1a0  lwu         $v1, -0xE60($t9)
    ctx->pc = 0x143710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 25), 4294963616)));
    // 0x143714: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x143714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x143718: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14371c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143720: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x143720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x143724: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x143724u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x143728: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x143728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x14372c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143730: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x143734: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x143734u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x143738: 0x354a1001  ori         $t2, $t2, 0x1001
    ctx->pc = 0x143738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4097);
    // 0x14373c: 0x8c4cdd50  lw          $t4, -0x22B0($v0)
    ctx->pc = 0x14373cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958416)));
    // 0x143740: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x143740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x143744: 0x2442dd50  addiu       $v0, $v0, -0x22B0
    ctx->pc = 0x143744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
    // 0x143748: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x143748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14374c: 0x8c4d0004  lw          $t5, 0x4($v0)
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x143750: 0x2583ffff  addiu       $v1, $t4, -0x1
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x143754: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x143754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x143758: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x14375c: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x143760: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x143764: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143768: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14376c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x143770: 0x35080064  ori         $t0, $t0, 0x64
    ctx->pc = 0x143770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)100);
    // 0x143774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143778: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x143778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x14377c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x14377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x143780: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x143780u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x143784: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x143784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x143788: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x143788u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x14378c: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x14378cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x143790: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x143790u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x143794: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143798: 0x240f0015  addiu       $t7, $zero, 0x15
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14379c: 0xfc8a0020  sd          $t2, 0x20($a0)
    ctx->pc = 0x14379cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 10));
    // 0x1437a0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1437a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1437a4: 0xfc860028  sd          $a2, 0x28($a0)
    ctx->pc = 0x1437a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 6));
    // 0x1437a8: 0x3412ff00  ori         $s2, $zero, 0xFF00
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1437ac: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x1437acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1437b0: 0xfc870038  sd          $a3, 0x38($a0)
    ctx->pc = 0x1437b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 7));
    // 0x1437b4: 0xc3182  srl         $a2, $t4, 6
    ctx->pc = 0x1437b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 6));
    // 0x1437b8: 0xfc850058  sd          $a1, 0x58($a0)
    ctx->pc = 0x1437b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 5));
    // 0x1437bc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1437c0: 0xfc880060  sd          $t0, 0x60($a0)
    ctx->pc = 0x1437c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 8));
    // 0x1437c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1437c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1437c8: 0xfc890068  sd          $t1, 0x68($a0)
    ctx->pc = 0x1437c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 9));
    // 0x1437cc: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x1437ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x1437d0: 0xfc8b0070  sd          $t3, 0x70($a0)
    ctx->pc = 0x1437d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 11));
    // 0x1437d4: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1437d8: 0xfc940078  sd          $s4, 0x78($a0)
    ctx->pc = 0x1437d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 20));
    // 0x1437dc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1437e0: 0xfc8e0080  sd          $t6, 0x80($a0)
    ctx->pc = 0x1437e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 14));
    // 0x1437e4: 0x3c160002  lui         $s6, 0x2
    ctx->pc = 0x1437e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)2 << 16));
    // 0x1437e8: 0x36d68000  ori         $s6, $s6, 0x8000
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32768);
    // 0x1437ec: 0xfc8f0088  sd          $t7, 0x88($a0)
    ctx->pc = 0x1437ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 15));
    // 0x1437f0: 0x3c172800  lui         $s7, 0x2800
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)10240 << 16));
    // 0x1437f4: 0xfc830040  sd          $v1, 0x40($a0)
    ctx->pc = 0x1437f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x1437f8: 0x248500b0  addiu       $a1, $a0, 0xB0
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1437fc: 0xfc820048  sd          $v0, 0x48($a0)
    ctx->pc = 0x1437fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 2));
    // 0x143800: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x143804: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x143804u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x143808: 0x3415a000  ori         $s5, $zero, 0xA000
    ctx->pc = 0x143808u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x14380c: 0x15acb8  dsll        $s5, $s5, 18
    ctx->pc = 0x14380cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 18);
    // 0x143810: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x143810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x143814: 0x24180e08  addiu       $t8, $zero, 0xE08
    ctx->pc = 0x143814u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3592));
    // 0x143818: 0x248800c0  addiu       $t0, $a0, 0xC0
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x14381c: 0x340e8002  ori         $t6, $zero, 0x8002
    ctx->pc = 0x14381cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x143820: 0x9e221074  lwu         $v0, 0x1074($s1)
    ctx->pc = 0x143820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4212)));
    // 0x143824: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x143824u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x143828: 0x14a4f8  dsll        $s4, $s4, 19
    ctx->pc = 0x143828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 19);
    // 0x14382c: 0x9ce31070  lwu         $v1, 0x1070($a3)
    ctx->pc = 0x14382cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4208)));
    // 0x143830: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x143830u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x143834: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x143838: 0xfc8a0098  sd          $t2, 0x98($a0)
    ctx->pc = 0x143838u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 10));
    // 0x14383c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x143840: 0x3c0741ab  lui         $a3, 0x41AB
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16811 << 16));
    // 0x143844: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143848: 0x240f5353  addiu       $t7, $zero, 0x5353
    ctx->pc = 0x143848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x14384c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x14384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x143850: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x143854: 0xfc820090  sd          $v0, 0x90($a0)
    ctx->pc = 0x143854u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 2));
    // 0x143858: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x143858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x14385c: 0xd9043  sra         $s2, $t5, 1
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 13), 1));
    // 0x143860: 0x248900d0  addiu       $t1, $a0, 0xD0
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x143864: 0x8f22f1a0  lw          $v0, -0xE60($t9)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294963616)));
    // 0x143868: 0x24112808  addiu       $s1, $zero, 0x2808
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10248));
    // 0x14386c: 0x9e63f1a8  lwu         $v1, -0xE58($s3)
    ctx->pc = 0x14386cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294963624)));
    // 0x143870: 0x248a00e0  addiu       $t2, $a0, 0xE0
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x143874: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x143874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x143878: 0xacab0010  sw          $t3, 0x10($a1)
    ctx->pc = 0x143878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 11));
    // 0x14387c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143880: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x143880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x143884: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x143884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x143888: 0xac8e00b0  sw          $t6, 0xB0($a0)
    ctx->pc = 0x143888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 14));
    // 0x14388c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x14388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x143890: 0xad180004  sw          $t8, 0x4($t0)
    ctx->pc = 0x143890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 24));
    // 0x143894: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143898: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x143898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x14389c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x14389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x1438a0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1438a4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x1438a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x1438a8: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x1438a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x1438ac: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1438acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1438b0: 0xacaf0008  sw          $t7, 0x8($a1)
    ctx->pc = 0x1438b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 15));
    // 0x1438b4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1438b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1438b8: 0x24081c08  addiu       $t0, $zero, 0x1C08
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7176));
    // 0x1438bc: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1438bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1438c0: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1438c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1438c4: 0xfc8600a8  sd          $a2, 0xA8($a0)
    ctx->pc = 0x1438c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 6));
    // 0x1438c8: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1438cc: 0xfc8200a0  sd          $v0, 0xA0($a0)
    ctx->pc = 0x1438ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 2));
    // 0x1438d0: 0x24860110  addiu       $a2, $a0, 0x110
    ctx->pc = 0x1438d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1438d4: 0xad320004  sw          $s2, 0x4($t1)
    ctx->pc = 0x1438d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 18));
    // 0x1438d8: 0x248200f0  addiu       $v0, $a0, 0xF0
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1438dc: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1438dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1438e0: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x1438e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1438e4: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1438e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1438e8: 0xacb10030  sw          $s1, 0x30($a1)
    ctx->pc = 0x1438e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 17));
    // 0x1438ec: 0x24890140  addiu       $t1, $a0, 0x140
    ctx->pc = 0x1438ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x1438f0: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x1438f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
    // 0x1438f4: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x1438f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x1438f8: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x1438f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x1438fc: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x1438fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x143900: 0xacac0040  sw          $t4, 0x40($a1)
    ctx->pc = 0x143900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 12));
    // 0x143904: 0xac4d0004  sw          $t5, 0x4($v0)
    ctx->pc = 0x143904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 13));
    // 0x143908: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x143908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14390c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14390cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x143910: 0xacab0050  sw          $t3, 0x50($a1)
    ctx->pc = 0x143910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 11));
    // 0x143914: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x143914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x143918: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x143918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14391c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x14391cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x143920: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x143920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x143924: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x143924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x143928: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x143928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14392c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14392cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x143930: 0xacb10070  sw          $s1, 0x70($a1)
    ctx->pc = 0x143930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 17));
    // 0x143934: 0xacf80004  sw          $t8, 0x4($a3)
    ctx->pc = 0x143934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 24));
    // 0x143938: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x143938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x14393c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x14393cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x143940: 0xacac0080  sw          $t4, 0x80($a1)
    ctx->pc = 0x143940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 12));
    // 0x143944: 0xae09f168  sw          $t1, -0xE98($s0)
    ctx->pc = 0x143944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 9));
    // 0x143948: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x143948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x14394c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x14394cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x143950: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x143950u;
    SET_GPR_U32(ctx, 31, 0x143958u);
    ctx->pc = 0x143954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143950u;
            // 0x143954: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143958u; }
        if (ctx->pc != 0x143958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143958u; }
        if (ctx->pc != 0x143958u) { return; }
    }
    ctx->pc = 0x143958u;
    // 0x143958: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x143958u;
    SET_GPR_U32(ctx, 31, 0x143960u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143960u; }
        if (ctx->pc != 0x143960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143960u; }
        if (ctx->pc != 0x143960u) { return; }
    }
    ctx->pc = 0x143960u;
    // 0x143960: 0xc05021e  jal         func_140878
    ctx->pc = 0x143960u;
    SET_GPR_U32(ctx, 31, 0x143968u);
    ctx->pc = 0x140878u;
    if (runtime->hasFunction(0x140878u)) {
        auto targetFn = runtime->lookupFunction(0x140878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143968u; }
        if (ctx->pc != 0x143968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140878_0x140878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143968u; }
        if (ctx->pc != 0x143968u) { return; }
    }
    ctx->pc = 0x143968u;
    // 0x143968: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x143968u;
    SET_GPR_U32(ctx, 31, 0x143970u);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143970u; }
        if (ctx->pc != 0x143970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143970u; }
        if (ctx->pc != 0x143970u) { return; }
    }
    ctx->pc = 0x143970u;
    // 0x143970: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x143970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x143974: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x143974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143978: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x143978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14397c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14397cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143984: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x143984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143988: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x143988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14398c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x14398cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143994: 0x3e00008  jr          $ra
    ctx->pc = 0x143994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143994u;
            // 0x143998: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143680u: goto label_143680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14399Cu;
    // 0x14399c: 0x0  nop
    ctx->pc = 0x14399cu;
    // NOP
}

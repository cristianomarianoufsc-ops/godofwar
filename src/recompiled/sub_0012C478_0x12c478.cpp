#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C478
// Address: 0x12c478 - 0x12c790
void sub_0012C478_0x12c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C478_0x12c478");
#endif

    ctx->pc = 0x12c478u;

    // 0x12c478: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12c47c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c480: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x12c484: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x12c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x12c488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c48c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12c48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c490: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x12c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x12c494: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x12c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x12c498: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12c49c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x12c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x12c4a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x12c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x12c4a4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x12c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x12c4a8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x12c4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x12c4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c4b0: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12C4B0u;
    SET_GPR_U32(ctx, 31, 0x12C4B8u);
    ctx->pc = 0x12C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4B0u;
            // 0x12c4b4: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4B8u; }
        if (ctx->pc != 0x12C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4B8u; }
        if (ctx->pc != 0x12C4B8u) { return; }
    }
    ctx->pc = 0x12C4B8u;
    // 0x12c4b8: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12c4bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12c4c0: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12c4c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12c4c8: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12C4C8u;
    SET_GPR_U32(ctx, 31, 0x12C4D0u);
    ctx->pc = 0x12C4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4C8u;
            // 0x12c4cc: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4D0u; }
        if (ctx->pc != 0x12C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4D0u; }
        if (ctx->pc != 0x12C4D0u) { return; }
    }
    ctx->pc = 0x12C4D0u;
    // 0x12c4d0: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12c4d4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12c4d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c4dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c4e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12c4e4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12c4e8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12c4ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12c4f0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12c4f4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12c4f8: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x12c4fc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12c500: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x12c500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12c504: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x12c504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x12c508: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x12c508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x12c50c: 0x8e45f168  lw          $a1, -0xE98($s2)
    ctx->pc = 0x12c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12c510: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12c510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12c514: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12c514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c518: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12c51c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12c520: 0xae42f168  sw          $v0, -0xE98($s2)
    ctx->pc = 0x12c520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
    // 0x12c524: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x12c524u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x12c528: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x12c528u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x12c52c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12c530: 0x8c48dd58  lw          $t0, -0x22A8($v0)
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x12c534: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x12c538: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x12c53c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12c53cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12c540: 0x82182  srl         $a0, $t0, 6
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x12c544: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12c548: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12c548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c54c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12c550: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12c550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12c554: 0x8b100  sll         $s6, $t0, 4
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x12c558: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x12c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x12c55c: 0x26c900ff  addiu       $t1, $s6, 0xFF
    ctx->pc = 0x12c55cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 255));
    // 0x12c560: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c564: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c568: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x12c56c: 0x69182a  slt         $v1, $v1, $t1
    ctx->pc = 0x12c56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x12c570: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c574: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x12c574u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x12c578: 0x26c201fe  addiu       $v0, $s6, 0x1FE
    ctx->pc = 0x12c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 510));
    // 0x12c57c: 0x3c062800  lui         $a2, 0x2800
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10240 << 16));
    // 0x12c580: 0x123100b  movn        $v0, $t1, $v1
    ctx->pc = 0x12c580u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x12c584: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12c584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12c588: 0x2ca03  sra         $t9, $v0, 8
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 2), 8));
    // 0x12c58c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x12c58cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x12c590: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x12c590u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x12c594: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x12c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12c598: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x12c59c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x12c59cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x12c5a0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x12c5a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c5a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c5a8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x12c5ac: 0x7a940  sll         $s5, $a3, 5
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x12c5b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12c5b4: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x12c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x12c5b8: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x12c5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x12c5bc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x12c5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x12c5c0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x12c5c4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12c5c8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c5c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c5cc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x12c5ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x12c5d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12c5d4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12c5d8: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x12c5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x12c5dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12c5e0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12c5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12c5e4: 0x37248000  ori         $a0, $t9, 0x8000
    ctx->pc = 0x12c5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)32768);
    // 0x12c5e8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x12c5ec: 0x8443a  dsrl        $t0, $t0, 16
    ctx->pc = 0x12c5ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x12c5f0: 0xaca400b0  sw          $a0, 0xB0($a1)
    ctx->pc = 0x12c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 4));
    // 0x12c5f4: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x12c5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x12c5f8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c5f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c5fc: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x12c5fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c600: 0x3c06418b  lui         $a2, 0x418B
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16779 << 16));
    // 0x12c604: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x12c604u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x12c608: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x12c60c: 0x24b400c0  addiu       $s4, $a1, 0xC0
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x12c610: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12c614: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x12c614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12c618: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c61c: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x12c61cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12c620: 0xe7638  dsll        $t6, $t6, 24
    ctx->pc = 0x12c620u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 24);
    // 0x12c624: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x12c624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x12c628: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12c628u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12c62c: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x12c62cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x12c630: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12c630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12c634: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x12c634u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x12c638: 0x240b003b  addiu       $t3, $zero, 0x3B
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x12c63c: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x12c63cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12c640: 0x240d0015  addiu       $t5, $zero, 0x15
    ctx->pc = 0x12c640u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c644: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c648: 0x2412004d  addiu       $s2, $zero, 0x4D
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12c64c: 0x24135353  addiu       $s3, $zero, 0x5353
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12c650: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x12c650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x12c654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c658: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12c658u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c65c: 0xfca40028  sd          $a0, 0x28($a1)
    ctx->pc = 0x12c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 4));
    // 0x12c660: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12c664: 0xfca70038  sd          $a3, 0x38($a1)
    ctx->pc = 0x12c664u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 7));
    // 0x12c668: 0xfca80040  sd          $t0, 0x40($a1)
    ctx->pc = 0x12c668u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 8));
    // 0x12c66c: 0xfcaa0048  sd          $t2, 0x48($a1)
    ctx->pc = 0x12c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 10));
    // 0x12c670: 0xfca90050  sd          $t1, 0x50($a1)
    ctx->pc = 0x12c670u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 9));
    // 0x12c674: 0xfca30058  sd          $v1, 0x58($a1)
    ctx->pc = 0x12c674u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 3));
    // 0x12c678: 0xfcae0060  sd          $t6, 0x60($a1)
    ctx->pc = 0x12c678u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 14));
    // 0x12c67c: 0xfcab0068  sd          $t3, 0x68($a1)
    ctx->pc = 0x12c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 11));
    // 0x12c680: 0xfcac0078  sd          $t4, 0x78($a1)
    ctx->pc = 0x12c680u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 12));
    // 0x12c684: 0xfcad0088  sd          $t5, 0x88($a1)
    ctx->pc = 0x12c684u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 136), GPR_U64(ctx, 13));
    // 0x12c688: 0xfcb00090  sd          $s0, 0x90($a1)
    ctx->pc = 0x12c688u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 16));
    // 0x12c68c: 0xfcaf0098  sd          $t7, 0x98($a1)
    ctx->pc = 0x12c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 152), GPR_U64(ctx, 15));
    // 0x12c690: 0xfcb100a0  sd          $s1, 0xA0($a1)
    ctx->pc = 0x12c690u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 160), GPR_U64(ctx, 17));
    // 0x12c694: 0xfcb200a8  sd          $s2, 0xA8($a1)
    ctx->pc = 0x12c694u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 168), GPR_U64(ctx, 18));
    // 0x12c698: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x12c698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x12c69c: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x12c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x12c6a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12c6a4: 0xafd4f168  sw          $s4, -0xE98($fp)
    ctx->pc = 0x12c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 20));
    // 0x12c6a8: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x12c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x12c6ac: 0xfca00070  sd          $zero, 0x70($a1)
    ctx->pc = 0x12c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 0));
    // 0x12c6b0: 0x1b200026  blez        $t9, . + 4 + (0x26 << 2)
    ctx->pc = 0x12C6B0u;
    {
        const bool branch_taken_0x12c6b0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x12C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6B0u;
            // 0x12c6b4: 0xfca00080  sd          $zero, 0x80($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6b0) {
            ctx->pc = 0x12C74Cu;
            goto label_12c74c;
        }
    }
    ctx->pc = 0x12C6B8u;
    // 0x12c6b8: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x12c6b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6bc: 0x0  nop
    ctx->pc = 0x12c6bcu;
    // NOP
label_12c6c0:
    // 0x12c6c0: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x12c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x12c6c4: 0x26e30008  addiu       $v1, $s7, 0x8
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x12c6c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12c6cc: 0x27070008  addiu       $a3, $t8, 0x8
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x12c6d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12c6d4: 0x27080080  addiu       $t0, $t8, 0x80
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x12c6d8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12c6dc: 0x27180100  addiu       $t8, $t8, 0x100
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
    // 0x12c6e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12c6e4: 0x2d8182a  slt         $v1, $s6, $t8
    ctx->pc = 0x12c6e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x12c6e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12c6ec: 0x26e50080  addiu       $a1, $s7, 0x80
    ctx->pc = 0x12c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x12c6f0: 0x2c3c00b  movn        $t8, $s6, $v1
    ctx->pc = 0x12c6f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 22));
    // 0x12c6f4: 0x26a60008  addiu       $a2, $s5, 0x8
    ctx->pc = 0x12c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x12c6f8: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x12c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x12c6fc: 0x26f70100  addiu       $s7, $s7, 0x100
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x12c700: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12c700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12c704: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x12c704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x12c708: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12c70c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12c710: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x12c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12c714: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12c718: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12c71c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12c720: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x12c720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x12c724: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x12c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c728: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x12c728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x12c72c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12c730: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12c730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12c734: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x12c734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x12c738: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12c738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12c73c: 0xafc5f168  sw          $a1, -0xE98($fp)
    ctx->pc = 0x12c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 5));
    // 0x12c740: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x12c740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x12c744: 0x1520ffde  bnez        $t1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12C744u;
    {
        const bool branch_taken_0x12c744 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C744u;
            // 0x12c748: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c744) {
            ctx->pc = 0x12C6C0u;
            runtime->cooperativeGuestYield();
            goto label_12c6c0;
        }
    }
    ctx->pc = 0x12C74Cu;
label_12c74c:
    // 0x12c74c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12C74Cu;
    SET_GPR_U32(ctx, 31, 0x12C754u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C754u; }
        if (ctx->pc != 0x12C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C754u; }
        if (ctx->pc != 0x12C754u) { return; }
    }
    ctx->pc = 0x12C754u;
    // 0x12c754: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12C754u;
    SET_GPR_U32(ctx, 31, 0x12C75Cu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C75Cu; }
        if (ctx->pc != 0x12C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C75Cu; }
        if (ctx->pc != 0x12C75Cu) { return; }
    }
    ctx->pc = 0x12C75Cu;
    // 0x12c75c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x12c75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c760: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12c760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c764: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12c764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c768: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x12c768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c76c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12c76cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c770: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x12c770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c774: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x12c774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c778: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x12c778u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c77c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x12c77cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c784: 0x3e00008  jr          $ra
    ctx->pc = 0x12C784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C784u;
            // 0x12c788: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C6C0u: goto label_12c6c0;
            case 0x12C74Cu: goto label_12c74c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C78Cu;
    // 0x12c78c: 0x0  nop
    ctx->pc = 0x12c78cu;
    // NOP
}

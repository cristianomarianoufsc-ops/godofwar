#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160478
// Address: 0x160478 - 0x160700
void sub_00160478_0x160478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160478_0x160478");
#endif

    ctx->pc = 0x160478u;

    // 0x160478: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16047c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160480: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x160480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x160484: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x160484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x160488: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x160488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x16048c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x16048cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160490: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x160490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x160494: 0xe8b821  addu        $s7, $a3, $t0
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x160498: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x160498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16049c: 0x8c44c2b8  lw          $a0, -0x3D48($v0)
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951608)));
    // 0x1604a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1604a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1604a4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1604a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1604a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1604a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1604ac: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1604acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1604b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1604b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1604b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1604b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1604b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1604b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1604bc: 0xc05a2e4  jal         func_168B90
    ctx->pc = 0x1604BCu;
    SET_GPR_U32(ctx, 31, 0x1604C4u);
    ctx->pc = 0x1604C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604BCu;
            // 0x1604c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168B90u;
    if (runtime->hasFunction(0x168B90u)) {
        auto targetFn = runtime->lookupFunction(0x168B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604C4u; }
        if (ctx->pc != 0x1604C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_168b90_0x168bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604C4u; }
        if (ctx->pc != 0x1604C4u) { return; }
    }
    ctx->pc = 0x1604C4u;
    // 0x1604c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1604C4u;
    {
        const bool branch_taken_0x1604c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604C4u;
            // 0x1604c8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604c4) {
            ctx->pc = 0x1604E4u;
            goto label_1604e4;
        }
    }
    ctx->pc = 0x1604CCu;
    // 0x1604cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604d0: 0x8c44c2bc  lw          $a0, -0x3D44($v0)
    ctx->pc = 0x1604d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951612)));
    // 0x1604d4: 0xc05a2e4  jal         func_168B90
    ctx->pc = 0x1604D4u;
    SET_GPR_U32(ctx, 31, 0x1604DCu);
    ctx->pc = 0x1604D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604D4u;
            // 0x1604d8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168B90u;
    if (runtime->hasFunction(0x168B90u)) {
        auto targetFn = runtime->lookupFunction(0x168B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604DCu; }
        if (ctx->pc != 0x1604DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_168b90_0x168bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604DCu; }
        if (ctx->pc != 0x1604DCu) { return; }
    }
    ctx->pc = 0x1604DCu;
    // 0x1604dc: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1604DCu;
    {
        const bool branch_taken_0x1604dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604DCu;
            // 0x1604e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604dc) {
            ctx->pc = 0x1606D0u;
            goto label_1606d0;
        }
    }
    ctx->pc = 0x1604E4u;
label_1604e4:
    // 0x1604e4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1604e8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1604e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1604ec: 0x8c64c2a0  lw          $a0, -0x3D60($v1)
    ctx->pc = 0x1604ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951584)));
    // 0x1604f0: 0xc04b45c  jal         func_12D170
    ctx->pc = 0x1604F0u;
    SET_GPR_U32(ctx, 31, 0x1604F8u);
    ctx->pc = 0x1604F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604F0u;
            // 0x1604f4: 0x3c111000  lui         $s1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D170u;
    if (runtime->hasFunction(0x12D170u)) {
        auto targetFn = runtime->lookupFunction(0x12D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604F8u; }
        if (ctx->pc != 0x1604F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D170_0x12d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604F8u; }
        if (ctx->pc != 0x1604F8u) { return; }
    }
    ctx->pc = 0x1604F8u;
    // 0x1604f8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1604F8u;
    SET_GPR_U32(ctx, 31, 0x160500u);
    ctx->pc = 0x1604FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604F8u;
            // 0x1604fc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160500u; }
        if (ctx->pc != 0x160500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160500u; }
        if (ctx->pc != 0x160500u) { return; }
    }
    ctx->pc = 0x160500u;
    // 0x160500: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160504: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x160504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x160508: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16050c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x160510: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x160510u;
    SET_GPR_U32(ctx, 31, 0x160518u);
    ctx->pc = 0x160514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160510u;
            // 0x160514: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160518u; }
        if (ctx->pc != 0x160518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160518u; }
        if (ctx->pc != 0x160518u) { return; }
    }
    ctx->pc = 0x160518u;
    // 0x160518: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16051c: 0x34038005  ori         $v1, $zero, 0x8005
    ctx->pc = 0x16051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x160520: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x160524: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x160528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x160528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16052c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x16052cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x160530: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x160530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x160534: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x160534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x160538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x160538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x16053c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x16053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x160540: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x160544: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x160544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x160548: 0x9c82f19c  lwu         $v0, -0xE64($a0)
    ctx->pc = 0x160548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963612)));
    // 0x16054c: 0x9ca3f1a0  lwu         $v1, -0xE60($a1)
    ctx->pc = 0x16054cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294963616)));
    // 0x160550: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x160550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x160554: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x160554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160558: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x160558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16055c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x16055cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x160560: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x160560u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x160564: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x160564u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x160568: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x160568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x16056c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16056cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160570: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x160570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160574: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x160574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x160578: 0x34c60068  ori         $a2, $a2, 0x68
    ctx->pc = 0x160578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)104);
    // 0x16057c: 0x8c83dd58  lw          $v1, -0x22A8($a0)
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958424)));
    // 0x160580: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x160584: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x160588: 0xfca60030  sd          $a2, 0x30($a1)
    ctx->pc = 0x160588u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 6));
    // 0x16058c: 0xfca70038  sd          $a3, 0x38($a1)
    ctx->pc = 0x16058cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 7));
    // 0x160590: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x160590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x160594: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x160594u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x160598: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x16059c: 0xfca40028  sd          $a0, 0x28($a1)
    ctx->pc = 0x16059cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 4));
    // 0x1605a0: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x1605a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x1605a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1605a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1605a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1605ac: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x1605acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x1605b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1605b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1605b4: 0x9e82f1ac  lwu         $v0, -0xE54($s4)
    ctx->pc = 0x1605b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294963628)));
    // 0x1605b8: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1605b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1605bc: 0x9ea4f1a8  lwu         $a0, -0xE58($s5)
    ctx->pc = 0x1605bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 4294963624)));
    // 0x1605c0: 0x24a70060  addiu       $a3, $a1, 0x60
    ctx->pc = 0x1605c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1605c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1605c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1605c8: 0x2413004c  addiu       $s3, $zero, 0x4C
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1605cc: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1605ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1605d0: 0x24120046  addiu       $s2, $zero, 0x46
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1605d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1605d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1605d8: 0xae07f168  sw          $a3, -0xE98($s0)
    ctx->pc = 0x1605d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 7));
    // 0x1605dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1605dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1605e0: 0xfcb30048  sd          $s3, 0x48($a1)
    ctx->pc = 0x1605e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 19));
    // 0x1605e4: 0xfca00050  sd          $zero, 0x50($a1)
    ctx->pc = 0x1605e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 0));
    // 0x1605e8: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x1605e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x1605ec: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1605ECu;
    SET_GPR_U32(ctx, 31, 0x1605F4u);
    ctx->pc = 0x1605F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1605ECu;
            // 0x1605f0: 0xfcb20058  sd          $s2, 0x58($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605F4u; }
        if (ctx->pc != 0x1605F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605F4u; }
        if (ctx->pc != 0x1605F4u) { return; }
    }
    ctx->pc = 0x1605F4u;
    // 0x1605f4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1605F4u;
    SET_GPR_U32(ctx, 31, 0x1605FCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605FCu; }
        if (ctx->pc != 0x1605FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605FCu; }
        if (ctx->pc != 0x1605FCu) { return; }
    }
    ctx->pc = 0x1605FCu;
    // 0x1605fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160600: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x160600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160604: 0x8c44c2b8  lw          $a0, -0x3D48($v0)
    ctx->pc = 0x160604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951608)));
    // 0x160608: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x160608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16060c: 0xc05a280  jal         func_168A00
    ctx->pc = 0x16060Cu;
    SET_GPR_U32(ctx, 31, 0x160614u);
    ctx->pc = 0x160610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16060Cu;
            // 0x160610: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168A00u;
    if (runtime->hasFunction(0x168A00u)) {
        auto targetFn = runtime->lookupFunction(0x168A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160614u; }
        if (ctx->pc != 0x160614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168A00_0x168a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160614u; }
        if (ctx->pc != 0x160614u) { return; }
    }
    ctx->pc = 0x160614u;
    // 0x160614: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160618: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x160618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16061c: 0x8c44c2bc  lw          $a0, -0x3D44($v0)
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951612)));
    // 0x160620: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x160620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160624: 0xc05a280  jal         func_168A00
    ctx->pc = 0x160624u;
    SET_GPR_U32(ctx, 31, 0x16062Cu);
    ctx->pc = 0x160628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160624u;
            // 0x160628: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168A00u;
    if (runtime->hasFunction(0x168A00u)) {
        auto targetFn = runtime->lookupFunction(0x168A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16062Cu; }
        if (ctx->pc != 0x16062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168A00_0x168a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16062Cu; }
        if (ctx->pc != 0x16062Cu) { return; }
    }
    ctx->pc = 0x16062Cu;
    // 0x16062c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x16062Cu;
    SET_GPR_U32(ctx, 31, 0x160634u);
    ctx->pc = 0x160630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16062Cu;
            // 0x160630: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160634u; }
        if (ctx->pc != 0x160634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160634u; }
        if (ctx->pc != 0x160634u) { return; }
    }
    ctx->pc = 0x160634u;
    // 0x160634: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160638: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x160638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x16063c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160640: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x160640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x160644: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x160644u;
    SET_GPR_U32(ctx, 31, 0x16064Cu);
    ctx->pc = 0x160648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160644u;
            // 0x160648: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16064Cu; }
        if (ctx->pc != 0x16064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16064Cu; }
        if (ctx->pc != 0x16064Cu) { return; }
    }
    ctx->pc = 0x16064Cu;
    // 0x16064c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160650: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x160650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x160654: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x160658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16065c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x16065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x160660: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x160660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x160664: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x160664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x160668: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x160668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x16066c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160670: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x160670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160674: 0x8c82dd58  lw          $v0, -0x22A8($a0)
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958424)));
    // 0x160678: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x160678u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x16067c: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x160680: 0xfcb20018  sd          $s2, 0x18($a1)
    ctx->pc = 0x160680u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 18));
    // 0x160684: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x160688: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x160688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16068c: 0xae07f168  sw          $a3, -0xE98($s0)
    ctx->pc = 0x16068cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 7));
    // 0x160690: 0x9e84f1ac  lwu         $a0, -0xE54($s4)
    ctx->pc = 0x160690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294963628)));
    // 0x160694: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x160694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x160698: 0x9ea3f1a8  lwu         $v1, -0xE58($s5)
    ctx->pc = 0x160698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294963624)));
    // 0x16069c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x16069cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1606a0: 0xfcb30028  sd          $s3, 0x28($a1)
    ctx->pc = 0x1606a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 19));
    // 0x1606a4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1606a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1606a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1606a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1606ac: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1606ACu;
    SET_GPR_U32(ctx, 31, 0x1606B4u);
    ctx->pc = 0x1606B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606ACu;
            // 0x1606b0: 0xfca40020  sd          $a0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B4u; }
        if (ctx->pc != 0x1606B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B4u; }
        if (ctx->pc != 0x1606B4u) { return; }
    }
    ctx->pc = 0x1606B4u;
    // 0x1606b4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1606B4u;
    SET_GPR_U32(ctx, 31, 0x1606BCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606BCu; }
        if (ctx->pc != 0x1606BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606BCu; }
        if (ctx->pc != 0x1606BCu) { return; }
    }
    ctx->pc = 0x1606BCu;
    // 0x1606bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1606c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606c4: 0xc04b56a  jal         func_12D5A8
    ctx->pc = 0x1606C4u;
    SET_GPR_U32(ctx, 31, 0x1606CCu);
    ctx->pc = 0x1606C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606C4u;
            // 0x1606c8: 0x8c44c2a0  lw          $a0, -0x3D60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D5A8u;
    if (runtime->hasFunction(0x12D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x12D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606CCu; }
        if (ctx->pc != 0x1606CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D5A8_0x12d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606CCu; }
        if (ctx->pc != 0x1606CCu) { return; }
    }
    ctx->pc = 0x1606CCu;
    // 0x1606cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1606ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1606d0:
    // 0x1606d0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1606d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1606d4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1606d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1606d8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1606d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1606dc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1606dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1606e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1606e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1606e4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1606e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1606e8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1606e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1606ec: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1606ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1606f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1606f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1606f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1606F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1606F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1606F4u;
            // 0x1606f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1604E4u: goto label_1604e4;
            case 0x1606D0u: goto label_1606d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1606FCu;
    // 0x1606fc: 0x0  nop
    ctx->pc = 0x1606fcu;
    // NOP
}

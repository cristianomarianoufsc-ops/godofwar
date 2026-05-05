#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C4B8
// Address: 0x26c4b8 - 0x26c5e8
void sub_0026C4B8_0x26c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4B8_0x26c4b8");
#endif

    ctx->pc = 0x26c4b8u;

    // 0x26c4b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26c4bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x26c4c0: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x26c4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x26c4c4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x26c4c8: 0x8e421378  lw          $v0, 0x1378($s2)
    ctx->pc = 0x26c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4984)));
    // 0x26c4cc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x26c4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x26c4d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x26c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x26c4d4: 0x26231358  addiu       $v1, $s1, 0x1358
    ctx->pc = 0x26c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x26c4d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x26c4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c4e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26c4e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c4ec: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x26c4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x26c4f0: 0x26841370  addiu       $a0, $s4, 0x1370
    ctx->pc = 0x26c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4976));
    // 0x26c4f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c4f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26c4fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c500: 0xc09af10  jal         func_26BC40
    ctx->pc = 0x26C500u;
    SET_GPR_U32(ctx, 31, 0x26C508u);
    ctx->pc = 0x26C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C500u;
            // 0x26c504: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC40u;
    if (runtime->hasFunction(0x26BC40u)) {
        auto targetFn = runtime->lookupFunction(0x26BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C508u; }
        if (ctx->pc != 0x26C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BC40_0x26bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C508u; }
        if (ctx->pc != 0x26C508u) { return; }
    }
    ctx->pc = 0x26C508u;
    // 0x26c508: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26C508u;
    {
        const bool branch_taken_0x26c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C508u;
            // 0x26c50c: 0x3c130030  lui         $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c508) {
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C510u;
label_26c510:
    // 0x26c510: 0x8c4213b0  lw          $v0, 0x13B0($v0)
    ctx->pc = 0x26c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x26c514: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C514u;
    {
        const bool branch_taken_0x26c514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C514u;
            // 0x26c518: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c514) {
            ctx->pc = 0x26C524u;
            goto label_26c524;
        }
    }
    ctx->pc = 0x26C51Cu;
    // 0x26c51c: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26C51Cu;
    SET_GPR_U32(ctx, 31, 0x26C524u);
    ctx->pc = 0x26C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C51Cu;
            // 0x26c520: 0x24843e40  addiu       $a0, $a0, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C524u; }
        if (ctx->pc != 0x26C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C524u; }
        if (ctx->pc != 0x26C524u) { return; }
    }
    ctx->pc = 0x26C524u;
label_26c524:
    // 0x26c524: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26C524u;
    SET_GPR_U32(ctx, 31, 0x26C52Cu);
    ctx->pc = 0x26C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C524u;
            // 0x26c528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C52Cu; }
        if (ctx->pc != 0x26C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C52Cu; }
        if (ctx->pc != 0x26C52Cu) { return; }
    }
    ctx->pc = 0x26C52Cu;
    // 0x26c52c: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x26c52cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
label_26c530:
    // 0x26c530: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x26C530u;
    SET_GPR_U32(ctx, 31, 0x26C538u);
    ctx->pc = 0x26C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C530u;
            // 0x26c534: 0x266455c8  addiu       $a0, $s3, 0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C538u; }
        if (ctx->pc != 0x26C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C538u; }
        if (ctx->pc != 0x26C538u) { return; }
    }
    ctx->pc = 0x26C538u;
    // [PASSO 16] sub_0026C4B8: loop label_26c530 esperando entry_297670(0x3055C8)==0.
    // entry_297670 verifica busy-flag em READ32(READ32(0x3055C8)+0x10).
    // Sem IOP real, esse flag nunca zera -> loop eterno. Forcamos v0=0 para liberar.
    {
        uint32_t _p16_v0 = GPR_U32(ctx, 2);
        if (_p16_v0 != 0) {
            std::cerr << "[PASSO 16] sub_0026C4B8: entry_297670 retornou v0=0x" << std::hex << _p16_v0
                      << " (SIF client ocupado) — forcando v0=0 (simula SIF client livre)\n" << std::dec;
            SET_GPR_S32(ctx, 2, 0);
        }
    }
    // 0x26c538: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x26C538u;
    {
        const bool branch_taken_0x26c538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C538u;
            // 0x26c53c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c538) {
            ctx->pc = 0x26C510u;
            runtime->cooperativeGuestYield();
            goto label_26c510;
        }
    }
    ctx->pc = 0x26C540u;
    // 0x26c540: 0x8e421378  lw          $v0, 0x1378($s2)
    ctx->pc = 0x26c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4984)));
    // 0x26c544: 0x26311358  addiu       $s1, $s1, 0x1358
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x26c548: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x26c548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x26c54c: 0x26851370  addiu       $a1, $s4, 0x1370
    ctx->pc = 0x26c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4976));
    // 0x26c550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c554: 0x26101360  addiu       $s0, $s0, 0x1360
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
    // 0x26c558: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x26c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26c55c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x26c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26c560: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x26c560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c564: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26c568: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c56c: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x26c56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x26c570: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x26c570u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26c574: 0x266455c8  addiu       $a0, $s3, 0x55C8
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21960));
    // 0x26c578: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x26c578u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c57c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x26c57cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x26c580: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x26c584: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c588: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x26c588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x26c58c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x26c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x26c590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c594: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x26C594u;
    SET_GPR_U32(ctx, 31, 0x26C59Cu);
    ctx->pc = 0x26C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C594u;
            // 0x26c598: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C59Cu; }
        if (ctx->pc != 0x26C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C59Cu; }
        if (ctx->pc != 0x26C59Cu) { return; }
    }
    ctx->pc = 0x26C59Cu;
    // 0x26c59c: 0x8e421378  lw          $v0, 0x1378($s2)
    ctx->pc = 0x26c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4984)));
    // 0x26c5a0: 0x24040ffc  addiu       $a0, $zero, 0xFFC
    ctx->pc = 0x26c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4092));
    // 0x26c5a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26c5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c5a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26c5ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26c5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c5b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26c5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c5bc: 0xae421378  sw          $v0, 0x1378($s2)
    ctx->pc = 0x26c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4984), GPR_U32(ctx, 2));
    // 0x26c5c0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x26c5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x26c5c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26c5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c5c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26c5cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26c5d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26c5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c5d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26c5d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26c5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c5dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26c5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5E0u;
            // 0x26c5e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C510u: goto label_26c510;
            case 0x26C524u: goto label_26c524;
            case 0x26C530u: goto label_26c530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C5E8u;
}

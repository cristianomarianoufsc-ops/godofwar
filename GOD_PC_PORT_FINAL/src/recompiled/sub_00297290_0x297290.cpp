#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297290
// Address: 0x297290 - 0x297470
void sub_00297290_0x297290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297290_0x297290");
#endif

    ctx->pc = 0x297290u;

    // 0x297290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x297294: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x297294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x297298: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x297298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x29729c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29729cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2972a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2972a4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2972a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2972a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2972a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2972ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2972acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2972b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2972b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2972b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2972b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2972bc: 0x248492c0  addiu       $a0, $a0, -0x6D40
    ctx->pc = 0x2972bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x2972c0: 0xc0a5b84  jal         func_296E10
    ctx->pc = 0x2972C0u;
    SET_GPR_U32(ctx, 31, 0x2972C8u);
    ctx->pc = 0x2972C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2972C0u;
            // 0x2972c4: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E10u;
    if (runtime->hasFunction(0x296E10u)) {
        auto targetFn = runtime->lookupFunction(0x296E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972C8u; }
        if (ctx->pc != 0x2972C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E10_0x296e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2972C8u; }
        if (ctx->pc != 0x2972C8u) { return; }
    }
    ctx->pc = 0x2972C8u;
    // 0x2972c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972cc: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2972CCu;
    {
        const bool branch_taken_0x2972cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972CCu;
            // 0x2972d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972cc) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x2972D4u;
    // 0x2972d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2972d8: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2972d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2972dc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2972dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2972e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2972e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2972e4: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x2972e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x2972e8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x2972e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x2972ec: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2972ECu;
    {
        const bool branch_taken_0x2972ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2972F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972ECu;
            // 0x2972f0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972ec) {
            ctx->pc = 0x297384u;
            goto label_297384;
        }
    }
    ctx->pc = 0x2972F4u;
    // 0x2972f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2972f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2972f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2972f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2972fc: 0x24426a58  addiu       $v0, $v0, 0x6A58
    ctx->pc = 0x2972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27224));
    // 0x297300: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x297300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x297304: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x297304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x297308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29730c: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x29730Cu;
    SET_GPR_U32(ctx, 31, 0x297314u);
    ctx->pc = 0x297310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29730Cu;
            // 0x297310: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297314u; }
        if (ctx->pc != 0x297314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297314u; }
        if (ctx->pc != 0x297314u) { return; }
    }
    ctx->pc = 0x297314u;
    // 0x297314: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297314u;
    {
        const bool branch_taken_0x297314 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x297318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297314u;
            // 0x297318: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297314) {
            ctx->pc = 0x29732Cu;
            goto label_29732c;
        }
    }
    ctx->pc = 0x29731Cu;
    // 0x29731c: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x29731Cu;
    SET_GPR_U32(ctx, 31, 0x297324u);
    ctx->pc = 0x297320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29731Cu;
            // 0x297320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297324u; }
        if (ctx->pc != 0x297324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297324u; }
        if (ctx->pc != 0x297324u) { return; }
    }
    ctx->pc = 0x297324u;
    // 0x297324: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x297324u;
    {
        const bool branch_taken_0x297324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297324u;
            // 0x297328: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297324) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x29732Cu;
label_29732c:
    // 0x29732c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x29732cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297334: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x297338: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x297338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29733c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29733cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x297340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297344: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x297344u;
    SET_GPR_U32(ctx, 31, 0x29734Cu);
    ctx->pc = 0x297348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297344u;
            // 0x297348: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29734Cu; }
        if (ctx->pc != 0x29734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2969d0_0x296a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29734Cu; }
        if (ctx->pc != 0x29734Cu) { return; }
    }
    ctx->pc = 0x29734Cu;
    // 0x29734c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29734Cu;
    {
        const bool branch_taken_0x29734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29734c) {
            ctx->pc = 0x29736Cu;
            goto label_29736c;
        }
    }
    ctx->pc = 0x297354u;
    // 0x297354: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x297354u;
    SET_GPR_U32(ctx, 31, 0x29735Cu);
    ctx->pc = 0x297358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297354u;
            // 0x297358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29735Cu; }
        if (ctx->pc != 0x29735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29735Cu; }
        if (ctx->pc != 0x29735Cu) { return; }
    }
    ctx->pc = 0x29735Cu;
    // 0x29735c: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x29735Cu;
    SET_GPR_U32(ctx, 31, 0x297364u);
    ctx->pc = 0x297360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29735Cu;
            // 0x297360: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297364u; }
        if (ctx->pc != 0x297364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297364u; }
        if (ctx->pc != 0x297364u) { return; }
    }
    ctx->pc = 0x297364u;
    // 0x297364: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x297364u;
    {
        const bool branch_taken_0x297364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297364u;
            // 0x297368: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297364) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x29736Cu;
label_29736c:
    // 0x29736c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x29736Cu;
    SET_GPR_U32(ctx, 31, 0x297374u);
    ctx->pc = 0x297370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29736Cu;
            // 0x297370: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297374u; }
        if (ctx->pc != 0x297374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297374u; }
        if (ctx->pc != 0x297374u) { return; }
    }
    ctx->pc = 0x297374u;
    // 0x297374: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x297374u;
    SET_GPR_U32(ctx, 31, 0x29737Cu);
    ctx->pc = 0x297378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297374u;
            // 0x297378: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29737Cu; }
        if (ctx->pc != 0x29737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29737Cu; }
        if (ctx->pc != 0x29737Cu) { return; }
    }
    ctx->pc = 0x29737Cu;
    // 0x29737c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29737Cu;
    {
        const bool branch_taken_0x29737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29737Cu;
            // 0x297380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            // Bug Y fix: WaitSema+DeleteSema concluíram — bind IOP está completo.
            // Original retorna $v0=0, mas entry_298910@0x29895c trata 0 como "não pronto"
            // e entra no spin-loop de 1M iters (~1.7s). Dois problemas:
            // 1) $v0 deve ser >= 0 E != 0 para sair do beqz@0x29895c
            // 2) *(s1+0x24) deve ser != 0 (campo que o IOP preencheria via DMA na resposta)
            // Simulamos o DMA de confirmação do IOP: *(s1+0x24) = 1, $v0 = 1.
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), 1u); // *(s1+0x24) = 1 — ack IOP simulado
        SET_GPR_U64(ctx, 2, 1u);                  // $v0 = 1 — sucesso (não 0)
        ctx->in_delay_slot = false;
        if (branch_taken_0x29737c) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x297384u;
label_297384:
    // 0x297384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297388: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x29738c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29738cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x297390: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x297390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x297394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297398: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x297398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29739c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29739cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2973a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973a4: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x2973A4u;
    SET_GPR_U32(ctx, 31, 0x2973ACu);
    ctx->pc = 0x2973A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2973A4u;
            // 0x2973a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973ACu; }
        if (ctx->pc != 0x2973ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2969d0_0x296a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973ACu; }
        if (ctx->pc != 0x2973ACu) { return; }
    }
    ctx->pc = 0x2973ACu;
    // 0x2973ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2973ACu;
    {
        const bool branch_taken_0x2973ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2973B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973ACu;
            // 0x2973b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            // Bug Y fix (path label_297384): callback 0x2969d0 retornou não-zero →
            // bind completo no caminho $s2&1. Mesmo fix: *(s1+0x24)=1, $v0=1.
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), 1u); // *(s1+0x24) = 1 — ack IOP simulado
        SET_GPR_U64(ctx, 2, 1u);                  // $v0 = 1 — sucesso (não 0)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973ac) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x2973B4u;
    // 0x2973b4: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2973B4u;
    SET_GPR_U32(ctx, 31, 0x2973BCu);
    ctx->pc = 0x2973B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2973B4u;
            // 0x2973b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973BCu; }
        if (ctx->pc != 0x2973BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973BCu; }
        if (ctx->pc != 0x2973BCu) { return; }
    }
    ctx->pc = 0x2973BCu;
    // 0x2973bc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2973c0:
    // 0x2973c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2973c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2973c4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2973c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2973c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2973c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2973cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2973ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2973d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2973d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2973d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2973D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2973D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973D4u;
            // 0x2973d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29732Cu: goto label_29732c;
            case 0x29736Cu: goto label_29736c;
            case 0x297384u: goto label_297384;
            case 0x2973C0u: goto label_2973c0;
            case 0x2973FCu: goto label_2973fc;
            case 0x297400u: goto label_297400;
            case 0x297464u: goto label_297464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2973DCu;
    // 0x2973dc: 0x0  nop
    ctx->pc = 0x2973dcu;
    // NOP
    // 0x2973e0: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2973e4: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x2973e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2973e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2973e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2973ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2973ECu;
    {
        const bool branch_taken_0x2973ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2973ec) {
            ctx->pc = 0x2973F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2973ECu;
            // 0x2973f0: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2973FCu;
            goto label_2973fc;
        }
    }
    ctx->pc = 0x2973F4u;
    // 0x2973f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2973F4u;
    {
        const bool branch_taken_0x2973f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973F4u;
            // 0x2973f8: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973f4) {
            ctx->pc = 0x297400u;
            goto label_297400;
        }
    }
    ctx->pc = 0x2973FCu;
label_2973fc:
    // 0x2973fc: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x2973fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_297400:
    // 0x297400: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x297400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x297404: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x297404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x297408: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x297408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29740c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x29740cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x297410: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x297410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x297414: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x297414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x297418: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x297418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x29741c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x297420: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x297420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x297424: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x297424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x297428: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x297428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x29742c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x29742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x297430: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x297430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x297434: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x297434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x297438: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x297438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x29743c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x29743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x297440: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x297440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x297444: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x297444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x297448: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297448u;
    {
        const bool branch_taken_0x297448 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x297448) {
            ctx->pc = 0x297464u;
            goto label_297464;
        }
    }
    ctx->pc = 0x297450u;
    // 0x297450: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x297450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x297454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297454u;
    {
        const bool branch_taken_0x297454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297454) {
            ctx->pc = 0x297464u;
            goto label_297464;
        }
    }
    ctx->pc = 0x29745Cu;
    // 0x29745c: 0x80a5264  j           func_294990
    ctx->pc = 0x29745Cu;
    ctx->pc = 0x294990u;
    if (runtime->hasFunction(0x294990u)) {
        auto targetFn = runtime->lookupFunction(0x294990u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00294990_0x294990(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297464u;
label_297464:
    // 0x297464: 0x3e00008  jr          $ra
    ctx->pc = 0x297464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29732Cu: goto label_29732c;
            case 0x29736Cu: goto label_29736c;
            case 0x297384u: goto label_297384;
            case 0x2973C0u: goto label_2973c0;
            case 0x2973FCu: goto label_2973fc;
            case 0x297400u: goto label_297400;
            case 0x297464u: goto label_297464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29746Cu;
    // 0x29746c: 0x0  nop
    ctx->pc = 0x29746cu;
    // NOP
}

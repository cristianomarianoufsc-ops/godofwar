#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C950
// Address: 0x14c950 - 0x14cae8
void sub_0014C950_0x14c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C950_0x14c950");
#endif

    ctx->pc = 0x14c950u;

    // 0x14c950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14c958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c964: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x14c968: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c96c: 0x9205002b  lbu         $a1, 0x2B($s0)
    ctx->pc = 0x14c96cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x14c970: 0x9606001e  lhu         $a2, 0x1E($s0)
    ctx->pc = 0x14c970u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x14c974: 0x96070010  lhu         $a3, 0x10($s0)
    ctx->pc = 0x14c974u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14c978: 0xc0530f2  jal         func_14C3C8
    ctx->pc = 0x14C978u;
    SET_GPR_U32(ctx, 31, 0x14C980u);
    ctx->pc = 0x14C97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C978u;
            // 0x14c97c: 0x96080018  lhu         $t0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C3C8u;
    if (runtime->hasFunction(0x14C3C8u)) {
        auto targetFn = runtime->lookupFunction(0x14C3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C980u; }
        if (ctx->pc != 0x14C980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C3C8_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C980u; }
        if (ctx->pc != 0x14C980u) { return; }
    }
    ctx->pc = 0x14C980u;
    // 0x14c980: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x14c980u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x14c984: 0x9603002e  lhu         $v1, 0x2E($s0)
    ctx->pc = 0x14c984u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x14c988: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x14c988u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x14c98c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x14c98cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14c990: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14c990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c994: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x14c994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14c998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c99c: 0x643818  mult        $a3, $v1, $a0
    ctx->pc = 0x14c99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x14c9a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14c9a4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x14c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c9a8: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x14c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x14c9ac: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x14c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x14c9b0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x14c9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14c9b4: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x14c9b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14c9b8: 0x8e27f168  lw          $a3, -0xE98($s1)
    ctx->pc = 0x14c9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14c9bc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x14c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x14c9c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C9C0u;
    {
        const bool branch_taken_0x14c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9C0u;
            // 0x14c9c4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9c0) {
            ctx->pc = 0x14C9ECu;
            goto label_14c9ec;
        }
    }
    ctx->pc = 0x14C9C8u;
    // 0x14c9c8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x14c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x14c9cc: 0x0  nop
    ctx->pc = 0x14c9ccu;
    // NOP
label_14c9d0:
    // 0x14c9d0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14c9d4: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x14c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x14c9d8: 0x0  nop
    ctx->pc = 0x14c9d8u;
    // NOP
    // 0x14c9dc: 0x0  nop
    ctx->pc = 0x14c9dcu;
    // NOP
    // 0x14c9e0: 0x0  nop
    ctx->pc = 0x14c9e0u;
    // NOP
    // 0x14c9e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14C9E4u;
    {
        const bool branch_taken_0x14c9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c9e4) {
            ctx->pc = 0x14C9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9E4u;
            // 0x14c9e8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C9D0u;
            runtime->cooperativeGuestYield();
            goto label_14c9d0;
        }
    }
    ctx->pc = 0x14C9ECu;
label_14c9ec:
    // 0x14c9ec: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x14c9ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x14c9f0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x14c9f4: 0x9603002e  lhu         $v1, 0x2E($s0)
    ctx->pc = 0x14c9f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x14c9f8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x14c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14c9fc: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14ca00: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x14ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x14ca04: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x14ca04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14ca08: 0xae24f168  sw          $a0, -0xE98($s1)
    ctx->pc = 0x14ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 4));
    // 0x14ca0c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x14ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x14ca10: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x14ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x14ca14: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14ca18: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x14ca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x14ca1c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14CA1Cu;
    {
        const bool branch_taken_0x14ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA1Cu;
            // 0x14ca20: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca1c) {
            ctx->pc = 0x14CAD4u;
            goto label_14cad4;
        }
    }
    ctx->pc = 0x14CA24u;
    // 0x14ca24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ca28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca2c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ca30: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca34: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x14ca34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x14ca38: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x14ca3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ca40: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x14ca40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ca44: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x14CA44u;
    SET_GPR_U32(ctx, 31, 0x14CA4Cu);
    ctx->pc = 0x14CA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA44u;
            // 0x14ca48: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA4Cu; }
        if (ctx->pc != 0x14CA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA4Cu; }
        if (ctx->pc != 0x14CA4Cu) { return; }
    }
    ctx->pc = 0x14CA4Cu;
    // 0x14ca4c: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x14ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14ca50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14ca54: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x14ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14ca58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14ca5c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x14CA5Cu;
    SET_GPR_U32(ctx, 31, 0x14CA64u);
    ctx->pc = 0x14CA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA5Cu;
            // 0x14ca60: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA64u; }
        if (ctx->pc != 0x14CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA64u; }
        if (ctx->pc != 0x14CA64u) { return; }
    }
    ctx->pc = 0x14CA64u;
    // 0x14ca64: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x14ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14ca68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x14ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14ca6c: 0x36038000  ori         $v1, $s0, 0x8000
    ctx->pc = 0x14ca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x14ca70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x14ca74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14ca78: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x14ca7c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x14ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x14ca80: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14ca84: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x14ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14ca88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14ca8c: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x14CA8Cu;
    {
        const bool branch_taken_0x14ca8c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA8Cu;
            // 0x14ca90: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca8c) {
            ctx->pc = 0x14CAC4u;
            goto label_14cac4;
        }
    }
    ctx->pc = 0x14CA94u;
    // 0x14ca94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ca94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ca98:
    // 0x14ca98: 0x8e23f168  lw          $v1, -0xE98($s1)
    ctx->pc = 0x14ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14ca9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14caa0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14caa4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x14caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x14caa8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14caac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x14caacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x14cab0: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x14cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x14cab4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14cab8: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x14cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x14cabc: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x14CABCu;
    {
        const bool branch_taken_0x14cabc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CABCu;
            // 0x14cac0: 0xae23f168  sw          $v1, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cabc) {
            ctx->pc = 0x14CA98u;
            runtime->cooperativeGuestYield();
            goto label_14ca98;
        }
    }
    ctx->pc = 0x14CAC4u;
label_14cac4:
    // 0x14cac4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x14CAC4u;
    SET_GPR_U32(ctx, 31, 0x14CACCu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CACCu; }
        if (ctx->pc != 0x14CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CACCu; }
        if (ctx->pc != 0x14CACCu) { return; }
    }
    ctx->pc = 0x14CACCu;
    // 0x14cacc: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x14CACCu;
    SET_GPR_U32(ctx, 31, 0x14CAD4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD4u; }
        if (ctx->pc != 0x14CAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD4u; }
        if (ctx->pc != 0x14CAD4u) { return; }
    }
    ctx->pc = 0x14CAD4u;
label_14cad4:
    // 0x14cad4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14cad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14cad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cae0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAE0u;
            // 0x14cae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C9D0u: goto label_14c9d0;
            case 0x14C9ECu: goto label_14c9ec;
            case 0x14CA98u: goto label_14ca98;
            case 0x14CAC4u: goto label_14cac4;
            case 0x14CAD4u: goto label_14cad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CAE8u;
}

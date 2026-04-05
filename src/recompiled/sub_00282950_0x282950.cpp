#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282950
// Address: 0x282950 - 0x282ae8
void sub_00282950_0x282950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282950_0x282950");
#endif

    ctx->pc = 0x282950u;

    // 0x282950: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x282950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x282954: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282958: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28295c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28295cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282960: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x282960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x282964: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282968: 0x24712748  addiu       $s1, $v1, 0x2748
    ctx->pc = 0x282968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x28296c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x28296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x282970: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x282970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x282974: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x282974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x282978: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x282978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28297c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28297cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282980: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282984: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x282984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282988: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28298c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28298cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282990: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x282990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x282994: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x282994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x282998: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28299c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x28299cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829a0: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x2829A0u;
    SET_GPR_U32(ctx, 31, 0x2829A8u);
    ctx->pc = 0x2829A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2829A0u;
            // 0x2829a4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829A8u; }
        if (ctx->pc != 0x2829A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829A8u; }
        if (ctx->pc != 0x2829A8u) { return; }
    }
    ctx->pc = 0x2829A8u;
    // 0x2829a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2829ac: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2829ACu;
    {
        const bool branch_taken_0x2829ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2829B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829ACu;
            // 0x2829b0: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829ac) {
            ctx->pc = 0x282A60u;
            goto label_282a60;
        }
    }
    ctx->pc = 0x2829B4u;
    // 0x2829b4: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x2829b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x2829b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2829b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829bc: 0x24082080  addiu       $t0, $zero, 0x2080
    ctx->pc = 0x2829bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2829c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2829c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829c4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2829c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2829c8: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x2829c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2829cc: 0x264227c0  addiu       $v0, $s2, 0x27C0
    ctx->pc = 0x2829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10176));
    // 0x2829d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2829d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2829d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2829d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829d8: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x2829d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x2829dc: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2829dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2829e0: 0xae5627c0  sw          $s6, 0x27C0($s2)
    ctx->pc = 0x2829e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10176), GPR_U32(ctx, 22));
    // 0x2829e4: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x2829e8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2829e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2829ec: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2829ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2829f0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2829f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x2829f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2829f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2829f8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2829f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2829fc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2829fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a00: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x282a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x282a04: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    // 0x282a08: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x282a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x282a0c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x282a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282a10: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x282a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x282a14: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x282a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x282a18: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x282a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x282a1c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282A1Cu;
    SET_GPR_U32(ctx, 31, 0x282A24u);
    ctx->pc = 0x282A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A1Cu;
            // 0x282a20: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A24u; }
        if (ctx->pc != 0x282A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A24u; }
        if (ctx->pc != 0x282A24u) { return; }
    }
    ctx->pc = 0x282A24u;
    // 0x282a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282a28: 0xae033624  sw          $v1, 0x3624($s0)
    ctx->pc = 0x282a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 3));
    // 0x282a2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x282a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_282a30:
    // 0x282a30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a34: 0x8e053624  lw          $a1, 0x3624($s0)
    ctx->pc = 0x282a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x282a38: 0x264727c0  addiu       $a3, $s2, 0x27C0
    ctx->pc = 0x282a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 10176));
    // 0x282a3c: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x282A3Cu;
    SET_GPR_U32(ctx, 31, 0x282A44u);
    ctx->pc = 0x282A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A3Cu;
            // 0x282a40: 0x26a82118  addiu       $t0, $s5, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A44u; }
        if (ctx->pc != 0x282A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A44u; }
        if (ctx->pc != 0x282A44u) { return; }
    }
    ctx->pc = 0x282A44u;
    // 0x282a44: 0x5453fffa  bnel        $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x282A44u;
    {
        const bool branch_taken_0x282a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x282a44) {
            ctx->pc = 0x282A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282A44u;
            // 0x282a48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282A30u;
            runtime->cooperativeGuestYield();
            goto label_282a30;
        }
    }
    ctx->pc = 0x282A4Cu;
    // 0x282a4c: 0xc0a0830  jal         func_2820C0
    ctx->pc = 0x282A4Cu;
    SET_GPR_U32(ctx, 31, 0x282A54u);
    ctx->pc = 0x2820C0u;
    if (runtime->hasFunction(0x2820C0u)) {
        auto targetFn = runtime->lookupFunction(0x2820C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A54u; }
        if (ctx->pc != 0x282A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002820C0_0x2820c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A54u; }
        if (ctx->pc != 0x282A54u) { return; }
    }
    ctx->pc = 0x282A54u;
    // 0x282a54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x282a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282a58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A58u;
    {
        const bool branch_taken_0x282a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A58u;
            // 0x282a5c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a58) {
            ctx->pc = 0x282A68u;
            goto label_282a68;
        }
    }
    ctx->pc = 0x282A60u;
label_282a60:
    // 0x282a60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x282A60u;
    {
        const bool branch_taken_0x282a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A60u;
            // 0x282a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a60) {
            ctx->pc = 0x282AB8u;
            goto label_282ab8;
        }
    }
    ctx->pc = 0x282A68u;
label_282a68:
    // 0x282a68: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x282a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a6c: 0x1a800011  blez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x282A6Cu;
    {
        const bool branch_taken_0x282a6c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x282A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A6Cu;
            // 0x282a70: 0x245148c0  addiu       $s1, $v0, 0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a6c) {
            ctx->pc = 0x282AB4u;
            goto label_282ab4;
        }
    }
    ctx->pc = 0x282A74u;
    // 0x282a74: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282a78: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x282a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a7c: 0x245327c0  addiu       $s3, $v0, 0x27C0
    ctx->pc = 0x282a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10176));
label_282a80:
    // 0x282a80: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x282a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x282a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x282a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x282a8c: 0xc0a5118  jal         func_294460
    ctx->pc = 0x282A8Cu;
    SET_GPR_U32(ctx, 31, 0x282A94u);
    ctx->pc = 0x282A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A8Cu;
            // 0x282a90: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A94u; }
        if (ctx->pc != 0x282A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A94u; }
        if (ctx->pc != 0x282A94u) { return; }
    }
    ctx->pc = 0x282A94u;
    // 0x282a94: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x282a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a9c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x282A9Cu;
    SET_GPR_U32(ctx, 31, 0x282AA4u);
    ctx->pc = 0x282AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A9Cu;
            // 0x282aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AA4u; }
        if (ctx->pc != 0x282AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AA4u; }
        if (ctx->pc != 0x282AA4u) { return; }
    }
    ctx->pc = 0x282AA4u;
    // 0x282aa4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x282aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x282aa8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x282aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x282aac: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x282AACu;
    {
        const bool branch_taken_0x282aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x282AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AACu;
            // 0x282ab0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aac) {
            ctx->pc = 0x282A80u;
            runtime->cooperativeGuestYield();
            goto label_282a80;
        }
    }
    ctx->pc = 0x282AB4u;
label_282ab4:
    // 0x282ab4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x282ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_282ab8:
    // 0x282ab8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x282ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282abc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x282abcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282ac0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x282ac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282ac4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x282ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282ac8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282acc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282ad0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282ad4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ad8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282adc: 0x3e00008  jr          $ra
    ctx->pc = 0x282ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282ADCu;
            // 0x282ae0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282A30u: goto label_282a30;
            case 0x282A60u: goto label_282a60;
            case 0x282A68u: goto label_282a68;
            case 0x282A80u: goto label_282a80;
            case 0x282AB4u: goto label_282ab4;
            case 0x282AB8u: goto label_282ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282AE4u;
    // 0x282ae4: 0x0  nop
    ctx->pc = 0x282ae4u;
    // NOP
}

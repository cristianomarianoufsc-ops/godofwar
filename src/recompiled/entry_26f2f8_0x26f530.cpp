#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26f2f8
// Address: 0x26f2f8 - 0x26f530
void entry_26f2f8_0x26f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26f2f8_0x26f530");
#endif

    ctx->pc = 0x26f2f8u;

    // 0x26f2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f2fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26f2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26f300: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26f304: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26f304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f30c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26f30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f310: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26f310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f314: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26f318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f31c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26f320: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x26F320u;
    SET_GPR_U32(ctx, 31, 0x26F328u);
    ctx->pc = 0x26F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F320u;
            // 0x26f324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F328u; }
        if (ctx->pc != 0x26F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F328u; }
        if (ctx->pc != 0x26F328u) { return; }
    }
    ctx->pc = 0x26F328u;
    // 0x26f328: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x26f32c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x26f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x26f330: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26f334: 0x2508023  subu        $s0, $s2, $s0
    ctx->pc = 0x26f334u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26f338: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26f33c: 0x28c219a0  slti        $v0, $a2, 0x19A0
    ctx->pc = 0x26f33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6560) ? 1 : 0);
    // 0x26f340: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F340u;
    {
        const bool branch_taken_0x26f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F340u;
            // 0x26f344: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f340) {
            ctx->pc = 0x26F35Cu;
            goto label_26f35c;
        }
    }
    ctx->pc = 0x26F348u;
    // 0x26f348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f34c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x26F34Cu;
    SET_GPR_U32(ctx, 31, 0x26F354u);
    ctx->pc = 0x26F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F34Cu;
            // 0x26f350: 0x24a54318  addiu       $a1, $a1, 0x4318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F354u; }
        if (ctx->pc != 0x26F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F354u; }
        if (ctx->pc != 0x26F354u) { return; }
    }
    ctx->pc = 0x26F354u;
    // 0x26f354: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x26F354u;
    {
        const bool branch_taken_0x26f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F354u;
            // 0x26f358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f354) {
            ctx->pc = 0x26F514u;
            goto label_26f514;
        }
    }
    ctx->pc = 0x26F35Cu;
label_26f35c:
    // 0x26f35c: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x26f35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x26f360: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x26f360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x26f364: 0x24c6e660  addiu       $a2, $a2, -0x19A0
    ctx->pc = 0x26f364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960736));
    // 0x26f368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f36c: 0x264519a0  addiu       $a1, $s2, 0x19A0
    ctx->pc = 0x26f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6560));
    // 0x26f370: 0xc09c096  jal         func_270258
    ctx->pc = 0x26F370u;
    SET_GPR_U32(ctx, 31, 0x26F378u);
    ctx->pc = 0x26F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F370u;
            // 0x26f374: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270258u;
    if (runtime->hasFunction(0x270258u)) {
        auto targetFn = runtime->lookupFunction(0x270258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F378u; }
        if (ctx->pc != 0x26F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270258_0x270270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F378u; }
        if (ctx->pc != 0x26F378u) { return; }
    }
    ctx->pc = 0x26F378u;
    // 0x26f378: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x26f378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x26f37c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f380: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x26f380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x26f384: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x26f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x26f388: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x26f388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x26f38c: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
    // 0x26f390: 0x24630300  addiu       $v1, $v1, 0x300
    ctx->pc = 0x26f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x26f394: 0x25080328  addiu       $t0, $t0, 0x328
    ctx->pc = 0x26f394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 808));
    // 0x26f398: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x26f398u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x26f39c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x26f39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26f3a0: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x26f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x26f3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3a8: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x26f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x26f3ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3b0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x26f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x26f3b4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26f3b8: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x26f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x26f3bc: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x26f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x26f3c0: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x26f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x26f3c4: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x26f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x26f3c8: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x26f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x26f3cc: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x26f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x26f3d0: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x26f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x26f3d4: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x26f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x26f3d8: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x26f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x26f3dc: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x26f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x26f3e0: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x26f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x26f3e4: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x26f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x26f3e8: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x26f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x26f3ec: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x26f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x26f3f0: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x26f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x26f3f4: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x26f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x26f3f8: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x26f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x26f3fc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x26f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x26f400: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x26f400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x26f404: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x26f404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x26f408: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x26f408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x26f40c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x26f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x26f410: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x26f410u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x26f414: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x26f414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x26f418: 0xc09c0a4  jal         func_270290
    ctx->pc = 0x26F418u;
    SET_GPR_U32(ctx, 31, 0x26F420u);
    ctx->pc = 0x26F41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F418u;
            // 0x26f41c: 0xae480030  sw          $t0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270290u;
    if (runtime->hasFunction(0x270290u)) {
        auto targetFn = runtime->lookupFunction(0x270290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F420u; }
        if (ctx->pc != 0x26F420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270290_0x270290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F420u; }
        if (ctx->pc != 0x26F420u) { return; }
    }
    ctx->pc = 0x26F420u;
    // 0x26f420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f424: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x26f424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x26f428: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x26f428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x26f42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f430: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x26f430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x26f434: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x26f434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x26f438: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x26f438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x26f43c: 0xfe400090  sd          $zero, 0x90($s2)
    ctx->pc = 0x26f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 0));
    // 0x26f440: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x26f440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x26f444: 0xfe4000a0  sd          $zero, 0xA0($s2)
    ctx->pc = 0x26f444u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x26f448: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x26f448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x26f44c: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x26f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x26f450: 0xae5000a8  sw          $s0, 0xA8($s2)
    ctx->pc = 0x26f450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 16));
    // 0x26f454: 0xae5000ac  sw          $s0, 0xAC($s2)
    ctx->pc = 0x26f454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 16));
    // 0x26f458: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x26f458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x26f45c: 0xae530868  sw          $s3, 0x868($s2)
    ctx->pc = 0x26f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2152), GPR_U32(ctx, 19));
    // 0x26f460: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x26f460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x26f464: 0xc09bc8a  jal         func_26F228
    ctx->pc = 0x26F464u;
    SET_GPR_U32(ctx, 31, 0x26F46Cu);
    ctx->pc = 0x26F468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F464u;
            // 0x26f468: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F228u;
    if (runtime->hasFunction(0x26F228u)) {
        auto targetFn = runtime->lookupFunction(0x26F228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F46Cu; }
        if (ctx->pc != 0x26F46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f228_0x26f2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F46Cu; }
        if (ctx->pc != 0x26F46Cu) { return; }
    }
    ctx->pc = 0x26F46Cu;
    // 0x26f46c: 0xc09bfbc  jal         func_26FEF0
    ctx->pc = 0x26F46Cu;
    SET_GPR_U32(ctx, 31, 0x26F474u);
    ctx->pc = 0x26F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F46Cu;
            // 0x26f470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FEF0u;
    if (runtime->hasFunction(0x26FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x26FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F474u; }
        if (ctx->pc != 0x26F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FEF0_0x26fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F474u; }
        if (ctx->pc != 0x26F474u) { return; }
    }
    ctx->pc = 0x26F474u;
    // 0x26f474: 0xc09c042  jal         func_270108
    ctx->pc = 0x26F474u;
    SET_GPR_U32(ctx, 31, 0x26F47Cu);
    ctx->pc = 0x26F478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F474u;
            // 0x26f478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270108u;
    if (runtime->hasFunction(0x270108u)) {
        auto targetFn = runtime->lookupFunction(0x270108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F47Cu; }
        if (ctx->pc != 0x26F47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270108_0x270188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F47Cu; }
        if (ctx->pc != 0x26F47Cu) { return; }
    }
    ctx->pc = 0x26F47Cu;
    // 0x26f47c: 0x264301f8  addiu       $v1, $s2, 0x1F8
    ctx->pc = 0x26f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x26f480: 0x26420260  addiu       $v0, $s2, 0x260
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x26f484: 0x264502c8  addiu       $a1, $s2, 0x2C8
    ctx->pc = 0x26f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x26f488: 0x26460330  addiu       $a2, $s2, 0x330
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x26f48c: 0x26470398  addiu       $a3, $s2, 0x398
    ctx->pc = 0x26f48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x26f490: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x26f490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x26f494: 0x26490468  addiu       $t1, $s2, 0x468
    ctx->pc = 0x26f494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x26f498: 0x264a04d0  addiu       $t2, $s2, 0x4D0
    ctx->pc = 0x26f498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x26f49c: 0x264b0538  addiu       $t3, $s2, 0x538
    ctx->pc = 0x26f49cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x26f4a0: 0xae4301c8  sw          $v1, 0x1C8($s2)
    ctx->pc = 0x26f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 3));
    // 0x26f4a4: 0xae4201cc  sw          $v0, 0x1CC($s2)
    ctx->pc = 0x26f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
    // 0x26f4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f4ac: 0xae4501d4  sw          $a1, 0x1D4($s2)
    ctx->pc = 0x26f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 5));
    // 0x26f4b0: 0xae4601d8  sw          $a2, 0x1D8($s2)
    ctx->pc = 0x26f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 6));
    // 0x26f4b4: 0xae4701dc  sw          $a3, 0x1DC($s2)
    ctx->pc = 0x26f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 7));
    // 0x26f4b8: 0xae4801e4  sw          $t0, 0x1E4($s2)
    ctx->pc = 0x26f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 8));
    // 0x26f4bc: 0xae4901e8  sw          $t1, 0x1E8($s2)
    ctx->pc = 0x26f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 9));
    // 0x26f4c0: 0xae4a01ec  sw          $t2, 0x1EC($s2)
    ctx->pc = 0x26f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 10));
    // 0x26f4c4: 0xc09c09c  jal         func_270270
    ctx->pc = 0x26F4C4u;
    SET_GPR_U32(ctx, 31, 0x26F4CCu);
    ctx->pc = 0x26F4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4C4u;
            // 0x26f4c8: 0xae4b01f4  sw          $t3, 0x1F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270270u;
    if (runtime->hasFunction(0x270270u)) {
        auto targetFn = runtime->lookupFunction(0x270270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4CCu; }
        if (ctx->pc != 0x26F4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270270_0x270280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4CCu; }
        if (ctx->pc != 0x26F4CCu) { return; }
    }
    ctx->pc = 0x26F4CCu;
    // 0x26f4cc: 0xae500860  sw          $s0, 0x860($s2)
    ctx->pc = 0x26f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2144), GPR_U32(ctx, 16));
    // 0x26f4d0: 0x3246003c  andi        $a2, $s2, 0x3C
    ctx->pc = 0x26f4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)60);
    // 0x26f4d4: 0xae40085c  sw          $zero, 0x85C($s2)
    ctx->pc = 0x26f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2140), GPR_U32(ctx, 0));
    // 0x26f4d8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F4D8u;
    {
        const bool branch_taken_0x26f4d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4D8u;
            // 0x26f4dc: 0xae400864  sw          $zero, 0x864($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4d8) {
            ctx->pc = 0x26F4F0u;
            goto label_26f4f0;
        }
    }
    ctx->pc = 0x26F4E0u;
    // 0x26f4e0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x26f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x26f4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f4e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26F4E8u;
    {
        const bool branch_taken_0x26f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4E8u;
            // 0x26f4ec: 0x24a542c8  addiu       $a1, $a1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4e8) {
            ctx->pc = 0x26F500u;
            goto label_26f500;
        }
    }
    ctx->pc = 0x26F4F0u;
label_26f4f0:
    // 0x26f4f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F4F0u;
    {
        const bool branch_taken_0x26f4f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4F0u;
            // 0x26f4f4: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4f0) {
            ctx->pc = 0x26F510u;
            goto label_26f510;
        }
    }
    ctx->pc = 0x26F4F8u;
    // 0x26f4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f4fc: 0x24a542f0  addiu       $a1, $a1, 0x42F0
    ctx->pc = 0x26f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17136));
label_26f500:
    // 0x26f500: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x26F500u;
    SET_GPR_U32(ctx, 31, 0x26F508u);
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F508u; }
        if (ctx->pc != 0x26F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F508u; }
        if (ctx->pc != 0x26F508u) { return; }
    }
    ctx->pc = 0x26F508u;
    // 0x26f508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F508u;
    {
        const bool branch_taken_0x26f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F508u;
            // 0x26f50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f508) {
            ctx->pc = 0x26F514u;
            goto label_26f514;
        }
    }
    ctx->pc = 0x26F510u;
label_26f510:
    // 0x26f510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f514:
    // 0x26f514: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f518: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26f518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f51c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26f51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f520: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26f520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f528: 0x3e00008  jr          $ra
    ctx->pc = 0x26F528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F528u;
            // 0x26f52c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F35Cu: goto label_26f35c;
            case 0x26F4F0u: goto label_26f4f0;
            case 0x26F500u: goto label_26f500;
            case 0x26F510u: goto label_26f510;
            case 0x26F514u: goto label_26f514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F530u;
}

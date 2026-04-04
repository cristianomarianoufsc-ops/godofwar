#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_296518
// Address: 0x296518 - 0x296798
void entry_296518_0x296798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_296518_0x296798");
#endif

    ctx->pc = 0x296518u;

    // 0x296518: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x296518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29651c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x296520: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x296520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296524: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x296524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29652c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296530: 0xc0a648c  jal         func_299230
    ctx->pc = 0x296530u;
    SET_GPR_U32(ctx, 31, 0x296538u);
    ctx->pc = 0x296534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296530u;
            // 0x296534: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296538u; }
        if (ctx->pc != 0x296538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296538u; }
        if (ctx->pc != 0x296538u) { return; }
    }
    ctx->pc = 0x296538u;
    // 0x296538: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x29653c: 0x8d424ab8  lw          $v0, 0x4AB8($t2)
    ctx->pc = 0x29653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19128)));
    // 0x296540: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296540u;
    {
        const bool branch_taken_0x296540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296540u;
            // 0x296544: 0x3c130032  lui         $s3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296540) {
            ctx->pc = 0x296568u;
            goto label_296568;
        }
    }
    ctx->pc = 0x296548u;
    // 0x296548: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29654c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29654cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296550: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x296550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296554: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296558: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29655c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29655cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296560: 0x80a64a0  j           func_299280
    ctx->pc = 0x296560u;
    ctx->pc = 0x296564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296560u;
            // 0x296564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x296568u;
label_296568:
    // 0x296568: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x29656c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x296570: 0x24a57840  addiu       $a1, $a1, 0x7840
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30784));
    // 0x296574: 0x266677c0  addiu       $a2, $s3, 0x77C0
    ctx->pc = 0x296574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
    // 0x296578: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x29657c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29657cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x296580: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x296580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x296584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296588: 0x3c090032  lui         $t1, 0x32
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50 << 16));
    // 0x29658c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x29658cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x296590: 0x26427898  addiu       $v0, $s2, 0x7898
    ctx->pc = 0x296590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30872));
    // 0x296594: 0xad434ab8  sw          $v1, 0x4AB8($t2)
    ctx->pc = 0x296594u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 19128), GPR_U32(ctx, 3));
    // 0x296598: 0x24847a40  addiu       $a0, $a0, 0x7A40
    ctx->pc = 0x296598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
    // 0x29659c: 0x252878c0  addiu       $t0, $t1, 0x78C0
    ctx->pc = 0x29659cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 30912));
    // 0x2965a0: 0xae467898  sw          $a2, 0x7898($s2)
    ctx->pc = 0x2965a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30872), GPR_U32(ctx, 6));
    // 0x2965a4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2965a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2965a8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2965a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2965ac: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2965acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2965b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2965b4: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x2965b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x2965b8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x2965b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2965bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2965bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2965c0: 0x3c140032  lui         $s4, 0x32
    ctx->pc = 0x2965c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
    // 0x2965c4: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x2965c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x2965c8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2965c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2965cc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2965ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2965d0:
    // 0x2965d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2965d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2965d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2965d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2965d8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2965d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2965dc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2965dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2965e0: 0x0  nop
    ctx->pc = 0x2965e0u;
    // NOP
    // 0x2965e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2965E4u;
    {
        const bool branch_taken_0x2965e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965e4) {
            ctx->pc = 0x2965D0u;
            runtime->cooperativeGuestYield();
            goto label_2965d0;
        }
    }
    ctx->pc = 0x2965ECu;
    // 0x2965ec: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2965f0: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x2965f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2965f4: 0x24427a40  addiu       $v0, $v0, 0x7A40
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31296));
    // 0x2965f8: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x2965f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x2965fc: 0x0  nop
    ctx->pc = 0x2965fcu;
    // NOP
label_296600:
    // 0x296600: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x296600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x296604: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x296608: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x29660c: 0x0  nop
    ctx->pc = 0x29660cu;
    // NOP
    // 0x296610: 0x0  nop
    ctx->pc = 0x296610u;
    // NOP
    // 0x296614: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296614u;
    {
        const bool branch_taken_0x296614 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x296614) {
            ctx->pc = 0x296600u;
            runtime->cooperativeGuestYield();
            goto label_296600;
        }
    }
    ctx->pc = 0x29661Cu;
    // 0x29661c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x29661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x296620: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x296620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x296624: 0x244264e0  addiu       $v0, $v0, 0x64E0
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25824));
    // 0x296628: 0x252478c0  addiu       $a0, $t1, 0x78C0
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 30912));
    // 0x29662c: 0x246364c0  addiu       $v1, $v1, 0x64C0
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25792));
    // 0x296630: 0x26517898  addiu       $s1, $s2, 0x7898
    ctx->pc = 0x296630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 30872));
    // 0x296634: 0xad2278c0  sw          $v0, 0x78C0($t1)
    ctx->pc = 0x296634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 30912), GPR_U32(ctx, 2));
    // 0x296638: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29663c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x29663cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x296640: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x296640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x296644: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296644u;
    SET_GPR_U32(ctx, 31, 0x29664Cu);
    ctx->pc = 0x296648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296644u;
            // 0x296648: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29664Cu; }
        if (ctx->pc != 0x29664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29664Cu; }
        if (ctx->pc != 0x29664Cu) { return; }
    }
    ctx->pc = 0x29664Cu;
    // 0x29664c: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x29664Cu;
    SET_GPR_U32(ctx, 31, 0x296654u);
    ctx->pc = 0x296650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29664Cu;
            // 0x296650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296654u; }
        if (ctx->pc != 0x296654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296654u; }
        if (ctx->pc != 0x296654u) { return; }
    }
    ctx->pc = 0x296654u;
    // 0x296654: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x296658: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x296658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x29665c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296660: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x296660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x296664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296664u;
    {
        const bool branch_taken_0x296664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296664u;
            // 0x296668: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296664) {
            ctx->pc = 0x296678u;
            goto label_296678;
        }
    }
    ctx->pc = 0x29666Cu;
    // 0x29666c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x296670: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x296670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 16));
    // 0x296674: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_296678:
    // 0x296678: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x296678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29667c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296680: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x296680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x296684: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296684u;
    {
        const bool branch_taken_0x296684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296684u;
            // 0x296688: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296684) {
            ctx->pc = 0x296698u;
            goto label_296698;
        }
    }
    ctx->pc = 0x29668Cu;
    // 0x29668c: 0xc0a5000  jal         func_294000
    ctx->pc = 0x29668Cu;
    SET_GPR_U32(ctx, 31, 0x296694u);
    ctx->pc = 0x294000u;
    if (runtime->hasFunction(0x294000u)) {
        auto targetFn = runtime->lookupFunction(0x294000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296694u; }
        if (ctx->pc != 0x296694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294000_0x294020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296694u; }
        if (ctx->pc != 0x296694u) { return; }
    }
    ctx->pc = 0x296694u;
    // 0x296694: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_296698:
    // 0x296698: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29669c: 0x24a56a50  addiu       $a1, $a1, 0x6A50
    ctx->pc = 0x29669cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    // 0x2966a0: 0xc0a4e4c  jal         func_293930
    ctx->pc = 0x2966A0u;
    SET_GPR_U32(ctx, 31, 0x2966A8u);
    ctx->pc = 0x2966A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2966A0u;
            // 0x2966a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293930u;
    if (runtime->hasFunction(0x293930u)) {
        auto targetFn = runtime->lookupFunction(0x293930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966A8u; }
        if (ctx->pc != 0x2966A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293930_0x293940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966A8u; }
        if (ctx->pc != 0x2966A8u) { return; }
    }
    ctx->pc = 0x2966A8u;
    // 0x2966a8: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2966a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2966ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2966acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2966b0: 0xc0a51d8  jal         func_294760
    ctx->pc = 0x2966B0u;
    SET_GPR_U32(ctx, 31, 0x2966B8u);
    ctx->pc = 0x2966B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2966B0u;
            // 0x2966b4: 0xac627894  sw          $v0, 0x7894($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294760u;
    if (runtime->hasFunction(0x294760u)) {
        auto targetFn = runtime->lookupFunction(0x294760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966B8u; }
        if (ctx->pc != 0x2966B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294760_0x294760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966B8u; }
        if (ctx->pc != 0x2966B8u) { return; }
    }
    ctx->pc = 0x2966B8u;
    // 0x2966b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2966bc: 0xc0a500c  jal         func_294030
    ctx->pc = 0x2966BCu;
    SET_GPR_U32(ctx, 31, 0x2966C4u);
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966C4u; }
        if (ctx->pc != 0x2966C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966C4u; }
        if (ctx->pc != 0x2966C4u) { return; }
    }
    ctx->pc = 0x2966C4u;
    // 0x2966c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2966C4u;
    {
        const bool branch_taken_0x2966c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2966C4u;
            // 0x2966c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966c4) {
            ctx->pc = 0x29670Cu;
            goto label_29670c;
        }
    }
    ctx->pc = 0x2966CCu;
    // 0x2966cc: 0x26857880  addiu       $a1, $s4, 0x7880
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30848));
    // 0x2966d0: 0x266277c0  addiu       $v0, $s3, 0x77C0
    ctx->pc = 0x2966d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
    // 0x2966d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2966d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2966d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2966dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2966dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966e0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2966e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2966e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2966e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2966e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2966e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2966ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2966f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2966f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2966f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2966f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2966f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2966fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296700: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x296700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x296704: 0x80a5a74  j           func_2969D0
    ctx->pc = 0x296704u;
    ctx->pc = 0x296708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296704u;
            // 0x296708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2969d0_0x296a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29670Cu;
label_29670c:
    // 0x29670c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x29670cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_296710:
    // 0x296710: 0xc0a500c  jal         func_294030
    ctx->pc = 0x296710u;
    SET_GPR_U32(ctx, 31, 0x296718u);
    ctx->pc = 0x296714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296710u;
            // 0x296714: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296718u; }
        if (ctx->pc != 0x296718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296718u; }
        if (ctx->pc != 0x296718u) { return; }
    }
    ctx->pc = 0x296718u;
    // 0x296718: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x296718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x29671c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x29671Cu;
    {
        const bool branch_taken_0x29671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29671Cu;
            // 0x296720: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29671c) {
            ctx->pc = 0x296710u;
            runtime->cooperativeGuestYield();
            goto label_296710;
        }
    }
    ctx->pc = 0x296724u;
    // 0x296724: 0xc0a500c  jal         func_294030
    ctx->pc = 0x296724u;
    SET_GPR_U32(ctx, 31, 0x29672Cu);
    ctx->pc = 0x296728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296724u;
            // 0x296728: 0x26507898  addiu       $s0, $s2, 0x7898 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 30872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29672Cu; }
        if (ctx->pc != 0x29672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29672Cu; }
        if (ctx->pc != 0x29672Cu) { return; }
    }
    ctx->pc = 0x29672Cu;
    // 0x29672c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x296730: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296734: 0xc0a5008  jal         func_294020
    ctx->pc = 0x296734u;
    SET_GPR_U32(ctx, 31, 0x29673Cu);
    ctx->pc = 0x296738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296734u;
            // 0x296738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29673Cu; }
        if (ctx->pc != 0x29673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29673Cu; }
        if (ctx->pc != 0x29673Cu) { return; }
    }
    ctx->pc = 0x29673Cu;
    // 0x29673c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x29673cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296744: 0xc0a5008  jal         func_294020
    ctx->pc = 0x296744u;
    SET_GPR_U32(ctx, 31, 0x29674Cu);
    ctx->pc = 0x296748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296744u;
            // 0x296748: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29674Cu; }
        if (ctx->pc != 0x29674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29674Cu; }
        if (ctx->pc != 0x29674Cu) { return; }
    }
    ctx->pc = 0x29674Cu;
    // 0x29674c: 0x26837880  addiu       $v1, $s4, 0x7880
    ctx->pc = 0x29674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 30848));
    // 0x296750: 0x266277c0  addiu       $v0, $s3, 0x77C0
    ctx->pc = 0x296750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
    // 0x296754: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x296758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x296758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29675c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29675cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296760: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x296760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x296764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296768: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x296768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x29676c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29676cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296770: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x296770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x296774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29677c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29677cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296784: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x296784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x296788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29678c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x29678cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x296790: 0x80a5a74  j           func_2969D0
    ctx->pc = 0x296790u;
    ctx->pc = 0x296794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296790u;
            // 0x296794: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2969d0_0x296a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x296798u;
}

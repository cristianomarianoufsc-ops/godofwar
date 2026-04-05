#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154830
// Address: 0x154830 - 0x154c08
void sub_00154830_0x154830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154830_0x154830");
#endif

    ctx->pc = 0x154830u;

    // 0x154830: 0x27bdef60  addiu       $sp, $sp, -0x10A0
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963040));
    // 0x154834: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x154838: 0x7fb01090  sq          $s0, 0x1090($sp)
    ctx->pc = 0x154838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4240), GPR_VEC(ctx, 16));
    // 0x15483c: 0x7fb11080  sq          $s1, 0x1080($sp)
    ctx->pc = 0x15483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4224), GPR_VEC(ctx, 17));
    // 0x154840: 0x7fb21070  sq          $s2, 0x1070($sp)
    ctx->pc = 0x154840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 18));
    // 0x154844: 0x7fb31060  sq          $s3, 0x1060($sp)
    ctx->pc = 0x154844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 19));
    // 0x154848: 0x7fb41050  sq          $s4, 0x1050($sp)
    ctx->pc = 0x154848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 20));
    // 0x15484c: 0x7fb51040  sq          $s5, 0x1040($sp)
    ctx->pc = 0x15484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 21));
    // 0x154850: 0x7fb61030  sq          $s6, 0x1030($sp)
    ctx->pc = 0x154850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 22));
    // 0x154854: 0x7fb71020  sq          $s7, 0x1020($sp)
    ctx->pc = 0x154854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 23));
    // 0x154858: 0x7fbe1010  sq          $fp, 0x1010($sp)
    ctx->pc = 0x154858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 30));
    // 0x15485c: 0xffbf1000  sd          $ra, 0x1000($sp)
    ctx->pc = 0x15485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4096), GPR_U64(ctx, 31));
    // 0x154860: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x154860u;
    SET_GPR_U32(ctx, 31, 0x154868u);
    ctx->pc = 0x154864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154860u;
            // 0x154864: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154868u; }
        if (ctx->pc != 0x154868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154868u; }
        if (ctx->pc != 0x154868u) { return; }
    }
    ctx->pc = 0x154868u;
    // 0x154868: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x154868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15486c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154870: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x154874: 0x24d10018  addiu       $s1, $a2, 0x18
    ctx->pc = 0x154874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x154878: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x15487c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x15487cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x154880: 0xacc20658  sw          $v0, 0x658($a2)
    ctx->pc = 0x154880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1624), GPR_U32(ctx, 2));
    // 0x154884: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x154884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154888:
    // 0x154888: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15488c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x154890: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x154890u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x154894: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x154894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x154898: 0x0  nop
    ctx->pc = 0x154898u;
    // NOP
    // 0x15489c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15489Cu;
    {
        const bool branch_taken_0x15489c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15489Cu;
            // 0x1548a0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15489c) {
            ctx->pc = 0x154888u;
            runtime->cooperativeGuestYield();
            goto label_154888;
        }
    }
    ctx->pc = 0x1548A4u;
    // 0x1548a4: 0xfe200638  sd          $zero, 0x638($s1)
    ctx->pc = 0x1548a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1592), GPR_U64(ctx, 0));
    // 0x1548a8: 0xfe200630  sd          $zero, 0x630($s1)
    ctx->pc = 0x1548a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1584), GPR_U64(ctx, 0));
    // 0x1548ac: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x1548acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x1548b0: 0x26021000  addiu       $v0, $s0, 0x1000
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x1548b4: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1548b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1548b8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1548b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1548bc: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x1548bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x1548c0: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x1548c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x1548c4: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x1548c8: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1548c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1548cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1548ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1548d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1548D0u;
    {
        const bool branch_taken_0x1548d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1548D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548D0u;
            // 0x1548d4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548d0) {
            ctx->pc = 0x154900u;
            goto label_154900;
        }
    }
    ctx->pc = 0x1548D8u;
    // 0x1548d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1548dc: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1548e0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1548e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1548e8: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x1548ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1548f0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1548f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1548f4: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x1548f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1548f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1548fc: 0x0  nop
    ctx->pc = 0x1548fcu;
    // NOP
label_154900:
    // 0x154900: 0x2445ed68  addiu       $a1, $v0, -0x1298
    ctx->pc = 0x154900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x154904: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x154904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154908: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15490c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x154910: 0xaee3ed60  sw          $v1, -0x12A0($s7)
    ctx->pc = 0x154910u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 3));
    // 0x154914: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154918: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x154918u;
    SET_GPR_U32(ctx, 31, 0x154920u);
    ctx->pc = 0x15491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154918u;
            // 0x15491c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154920u; }
        if (ctx->pc != 0x154920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154920u; }
        if (ctx->pc != 0x154920u) { return; }
    }
    ctx->pc = 0x154920u;
    // 0x154920: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x154924: 0x2464bb98  addiu       $a0, $v1, -0x4468
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
    // 0x154928: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15492c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x154930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154934: 0x8e70f168  lw          $s0, -0xE98($s3)
    ctx->pc = 0x154934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x154938: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15493c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x15493cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x154940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154944: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x154944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x154948: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x154948u;
    {
        const bool branch_taken_0x154948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154948u;
            // 0x15494c: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154948) {
            ctx->pc = 0x154974u;
            goto label_154974;
        }
    }
    ctx->pc = 0x154950u;
    // 0x154950: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x154950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x154954: 0x0  nop
    ctx->pc = 0x154954u;
    // NOP
label_154958:
    // 0x154958: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x15495c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x15495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x154960: 0x0  nop
    ctx->pc = 0x154960u;
    // NOP
    // 0x154964: 0x0  nop
    ctx->pc = 0x154964u;
    // NOP
    // 0x154968: 0x0  nop
    ctx->pc = 0x154968u;
    // NOP
    // 0x15496c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15496Cu;
    {
        const bool branch_taken_0x15496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15496c) {
            ctx->pc = 0x154970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15496Cu;
            // 0x154970: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154958u;
            runtime->cooperativeGuestYield();
            goto label_154958;
        }
    }
    ctx->pc = 0x154974u;
label_154974:
    // 0x154974: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x154978: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x15497c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x15497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x154980: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x154984: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x154984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x154988: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15498c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x15498cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x154990: 0xae64f168  sw          $a0, -0xE98($s3)
    ctx->pc = 0x154990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 4));
    // 0x154994: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x154994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x154998: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x154998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15499c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15499cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1549a0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1549a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1549a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1549a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1549a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1549a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549ac: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x1549b0: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x1549B0u;
    SET_GPR_U32(ctx, 31, 0x1549B8u);
    ctx->pc = 0x1549B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1549B0u;
            // 0x1549b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549B8u; }
        if (ctx->pc != 0x1549B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549B8u; }
        if (ctx->pc != 0x1549B8u) { return; }
    }
    ctx->pc = 0x1549B8u;
    // 0x1549b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1549bc: 0x8e63f168  lw          $v1, -0xE98($s3)
    ctx->pc = 0x1549bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x1549c0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1549c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1549c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1549c8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1549cc: 0xac441010  sw          $a0, 0x1010($v0)
    ctx->pc = 0x1549ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 4));
    // 0x1549d0: 0xaca31014  sw          $v1, 0x1014($a1)
    ctx->pc = 0x1549d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 3));
    // 0x1549d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1549d8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1549d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1549dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1549dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1549e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1549e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1549e4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1549e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1549e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1549e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1549ec: 0x8e62f168  lw          $v0, -0xE98($s3)
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x1549f0: 0x24031234  addiu       $v1, $zero, 0x1234
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4660));
    // 0x1549f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1549f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1549f8: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1549f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1549fc: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x1549fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x154a00: 0x24034567  addiu       $v1, $zero, 0x4567
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17767));
    // 0x154a04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x154a08: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x154a08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x154a0c: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x154a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x154a10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154a14: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x154a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x154a18: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x154a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x154a1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x154a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x154a20: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x154a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x154a24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154a28: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x154a28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x154a2c: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x154a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
    // 0x154a30: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x154a34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x154a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x154a38: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x154a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x154a3c: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x154a40: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x154a40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x154a44: 0xfc440048  sd          $a0, 0x48($v0)
    ctx->pc = 0x154a44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 4));
    // 0x154a48: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x154a4c: 0x3463360b  ori         $v1, $v1, 0x360B
    ctx->pc = 0x154a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13835);
    // 0x154a50: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x154a54: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x154a54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x154a58: 0xfc440058  sd          $a0, 0x58($v0)
    ctx->pc = 0x154a58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
    // 0x154a5c: 0xfc400060  sd          $zero, 0x60($v0)
    ctx->pc = 0x154a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 0));
    // 0x154a60: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x154a64: 0xfc430068  sd          $v1, 0x68($v0)
    ctx->pc = 0x154a64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 3));
    // 0x154a68: 0xfc400070  sd          $zero, 0x70($v0)
    ctx->pc = 0x154a68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 0));
    // 0x154a6c: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x154a70: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x154a74: 0xfc430078  sd          $v1, 0x78($v0)
    ctx->pc = 0x154a74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 3));
    // 0x154a78: 0x90b023  subu        $s6, $a0, $s0
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x154a7c: 0xfc400080  sd          $zero, 0x80($v0)
    ctx->pc = 0x154a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 0));
    // 0x154a80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x154a84: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x154a84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x154a88: 0xfc400090  sd          $zero, 0x90($v0)
    ctx->pc = 0x154a88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 144), GPR_U64(ctx, 0));
    // 0x154a8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x154a90: 0xfc430098  sd          $v1, 0x98($v0)
    ctx->pc = 0x154a90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 152), GPR_U64(ctx, 3));
    // 0x154a94: 0xfc4000a0  sd          $zero, 0xA0($v0)
    ctx->pc = 0x154a94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 0));
    // 0x154a98: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x154a9c: 0xfc4300a8  sd          $v1, 0xA8($v0)
    ctx->pc = 0x154a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 3));
    // 0x154aa0: 0xfc4000b0  sd          $zero, 0xB0($v0)
    ctx->pc = 0x154aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 0));
    // 0x154aa4: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x154aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x154aa8: 0xfc4300b8  sd          $v1, 0xB8($v0)
    ctx->pc = 0x154aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 3));
    // 0x154aac: 0xfc4000c0  sd          $zero, 0xC0($v0)
    ctx->pc = 0x154aacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 0));
    // 0x154ab0: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x154ab4: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x154ab8: 0xfc4300c8  sd          $v1, 0xC8($v0)
    ctx->pc = 0x154ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 3));
    // 0x154abc: 0x90a823  subu        $s5, $a0, $s0
    ctx->pc = 0x154abcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x154ac0: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x154AC0u;
    SET_GPR_U32(ctx, 31, 0x154AC8u);
    ctx->pc = 0x154AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154AC0u;
            // 0x154ac4: 0xae64f168  sw          $a0, -0xE98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AC8u; }
        if (ctx->pc != 0x154AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AC8u; }
        if (ctx->pc != 0x154AC8u) { return; }
    }
    ctx->pc = 0x154AC8u;
    // 0x154ac8: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x154AC8u;
    SET_GPR_U32(ctx, 31, 0x154AD0u);
    ctx->pc = 0x154ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154AC8u;
            // 0x154acc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AD0u; }
        if (ctx->pc != 0x154AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AD0u; }
        if (ctx->pc != 0x154AD0u) { return; }
    }
    ctx->pc = 0x154AD0u;
    // 0x154ad0: 0x8e63f168  lw          $v1, -0xE98($s3)
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x154ad4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x154ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x154ad8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x154AD8u;
    {
        const bool branch_taken_0x154ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154AD8u;
            // 0x154adc: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ad8) {
            ctx->pc = 0x154B08u;
            goto label_154b08;
        }
    }
    ctx->pc = 0x154AE0u;
    // 0x154ae0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x154ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x154ae4: 0x0  nop
    ctx->pc = 0x154ae4u;
    // NOP
label_154ae8:
    // 0x154ae8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154aec: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x154aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x154af0: 0x0  nop
    ctx->pc = 0x154af0u;
    // NOP
    // 0x154af4: 0x0  nop
    ctx->pc = 0x154af4u;
    // NOP
    // 0x154af8: 0x0  nop
    ctx->pc = 0x154af8u;
    // NOP
    // 0x154afc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154AFCu;
    {
        const bool branch_taken_0x154afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154afc) {
            ctx->pc = 0x154B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154AFCu;
            // 0x154b00: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154AE8u;
            runtime->cooperativeGuestYield();
            goto label_154ae8;
        }
    }
    ctx->pc = 0x154B04u;
    // 0x154b04: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_154b08:
    // 0x154b08: 0xae63f168  sw          $v1, -0xE98($s3)
    ctx->pc = 0x154b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 3));
    // 0x154b0c: 0x8e11101c  lw          $s1, 0x101C($s0)
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4124)));
    // 0x154b10: 0x718823  subu        $s1, $v1, $s1
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154b14: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x154B14u;
    SET_GPR_U32(ctx, 31, 0x154B1Cu);
    ctx->pc = 0x154B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B14u;
            // 0x154b18: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B1Cu; }
        if (ctx->pc != 0x154B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B1Cu; }
        if (ctx->pc != 0x154B1Cu) { return; }
    }
    ctx->pc = 0x154B1Cu;
    // 0x154b1c: 0x118902  srl         $s1, $s1, 4
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x154b20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b24: 0x8e05101c  lw          $a1, 0x101C($s0)
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4124)));
    // 0x154b28: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x154b2c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B2Cu;
            // 0x154b30: 0x113100  sll         $a2, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B34u; }
        if (ctx->pc != 0x154B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B34u; }
        if (ctx->pc != 0x154B34u) { return; }
    }
    ctx->pc = 0x154B34u;
    // 0x154b34: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x154b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x154b38: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x154b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x154b3c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x154b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
    // 0x154b40: 0xae5e0010  sw          $fp, 0x10($s2)
    ctx->pc = 0x154b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 30));
    // 0x154b44: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x154b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x154b48: 0x8e64f168  lw          $a0, -0xE98($s3)
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x154b4c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x154b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x154b50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x154B50u;
    {
        const bool branch_taken_0x154b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B50u;
            // 0x154b54: 0x8ee2ed60  lw          $v0, -0x12A0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b50) {
            ctx->pc = 0x154B80u;
            goto label_154b80;
        }
    }
    ctx->pc = 0x154B58u;
    // 0x154b58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x154b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x154b5c: 0x0  nop
    ctx->pc = 0x154b5cu;
    // NOP
label_154b60:
    // 0x154b60: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x154b64: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x154b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x154b68: 0x0  nop
    ctx->pc = 0x154b68u;
    // NOP
    // 0x154b6c: 0x0  nop
    ctx->pc = 0x154b6cu;
    // NOP
    // 0x154b70: 0x0  nop
    ctx->pc = 0x154b70u;
    // NOP
    // 0x154b74: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154B74u;
    {
        const bool branch_taken_0x154b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b74) {
            ctx->pc = 0x154B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154B74u;
            // 0x154b78: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154B60u;
            runtime->cooperativeGuestYield();
            goto label_154b60;
        }
    }
    ctx->pc = 0x154B7Cu;
    // 0x154b7c: 0x8ee2ed60  lw          $v0, -0x12A0($s7)
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
label_154b80:
    // 0x154b80: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x154b84: 0x2465ed68  addiu       $a1, $v1, -0x1298
    ctx->pc = 0x154b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962536));
    // 0x154b88: 0xae64f168  sw          $a0, -0xE98($s3)
    ctx->pc = 0x154b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 4));
    // 0x154b8c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154b90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x154b94: 0xaee6ed60  sw          $a2, -0x12A0($s7)
    ctx->pc = 0x154b94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 6));
    // 0x154b98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154b9c: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x154b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x154ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154ba4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154BA4u;
    {
        const bool branch_taken_0x154ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BA4u;
            // 0x154ba8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ba4) {
            ctx->pc = 0x154BBCu;
            goto label_154bbc;
        }
    }
    ctx->pc = 0x154BACu;
    // 0x154bac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x154bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x154bb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154bb4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x154BB4u;
    SET_GPR_U32(ctx, 31, 0x154BBCu);
    ctx->pc = 0x154BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BB4u;
            // 0x154bb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BBCu; }
        if (ctx->pc != 0x154BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BBCu; }
        if (ctx->pc != 0x154BBCu) { return; }
    }
    ctx->pc = 0x154BBCu;
label_154bbc:
    // 0x154bbc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x154bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x154bc0: 0x2444bb98  addiu       $a0, $v0, -0x4468
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x154bc4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154bc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154bd0: 0x7bb01090  lq          $s0, 0x1090($sp)
    ctx->pc = 0x154bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4240)));
    // 0x154bd4: 0x7bb11080  lq          $s1, 0x1080($sp)
    ctx->pc = 0x154bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4224)));
    // 0x154bd8: 0x7bb21070  lq          $s2, 0x1070($sp)
    ctx->pc = 0x154bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x154bdc: 0x7bb31060  lq          $s3, 0x1060($sp)
    ctx->pc = 0x154bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x154be0: 0x7bb41050  lq          $s4, 0x1050($sp)
    ctx->pc = 0x154be0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x154be4: 0x7bb51040  lq          $s5, 0x1040($sp)
    ctx->pc = 0x154be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x154be8: 0x7bb61030  lq          $s6, 0x1030($sp)
    ctx->pc = 0x154be8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x154bec: 0x7bb71020  lq          $s7, 0x1020($sp)
    ctx->pc = 0x154becu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x154bf0: 0x7bbe1010  lq          $fp, 0x1010($sp)
    ctx->pc = 0x154bf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x154bf4: 0xdfbf1000  ld          $ra, 0x1000($sp)
    ctx->pc = 0x154bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x154bf8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x154bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x154bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x154BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BFCu;
            // 0x154c00: 0x27bd10a0  addiu       $sp, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154888u: goto label_154888;
            case 0x154900u: goto label_154900;
            case 0x154958u: goto label_154958;
            case 0x154974u: goto label_154974;
            case 0x154AE8u: goto label_154ae8;
            case 0x154B08u: goto label_154b08;
            case 0x154B60u: goto label_154b60;
            case 0x154B80u: goto label_154b80;
            case 0x154BBCu: goto label_154bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154C04u;
    // 0x154c04: 0x0  nop
    ctx->pc = 0x154c04u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148458
// Address: 0x148458 - 0x149168
void sub_00148458_0x148458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148458_0x148458");
#endif

    ctx->pc = 0x148458u;

    // 0x148458: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
    // 0x14845c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x14845cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x148460: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x148460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
    // 0x148464: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x148464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
    // 0x148468: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x148468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14846c: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x14846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
    // 0x148470: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x148470u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148474: 0x7fb704a0  sq          $s7, 0x4A0($sp)
    ctx->pc = 0x148474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 23));
    // 0x148478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14847c: 0x7fbe0490  sq          $fp, 0x490($sp)
    ctx->pc = 0x14847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 30));
    // 0x148480: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x148480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148484: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x148484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
    // 0x148488: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x148488u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14848c: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x14848cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
    // 0x148490: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x148490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
    // 0x148494: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x148494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
    // 0x148498: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x148498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x14849c: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x14849cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
    // 0x1484a0: 0xc0526c4  jal         func_149B10
    ctx->pc = 0x1484A0u;
    SET_GPR_U32(ctx, 31, 0x1484A8u);
    ctx->pc = 0x1484A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1484A0u;
            // 0x1484a4: 0xafa60460  sw          $a2, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B10u;
    if (runtime->hasFunction(0x149B10u)) {
        auto targetFn = runtime->lookupFunction(0x149B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A8u; }
        if (ctx->pc != 0x1484A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149B10_0x149b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A8u; }
        if (ctx->pc != 0x1484A8u) { return; }
    }
    ctx->pc = 0x1484A8u;
    // 0x1484a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1484a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484ac: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x1484acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1484b0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1484b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1484b4: 0xafa30464  sw          $v1, 0x464($sp)
    ctx->pc = 0x1484b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 3));
    // 0x1484b8: 0x8c640cd0  lw          $a0, 0xCD0($v1)
    ctx->pc = 0x1484b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
    // 0x1484bc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1484BCu;
    {
        const bool branch_taken_0x1484bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1484C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1484BCu;
            // 0x1484c0: 0xafa40468  sw          $a0, 0x468($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484bc) {
            ctx->pc = 0x148524u;
            goto label_148524;
        }
    }
    ctx->pc = 0x1484C4u;
    // 0x1484c4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1484c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1484c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1484c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1484cc: 0x50430016  beql        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1484CCu;
    {
        const bool branch_taken_0x1484cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1484cc) {
            ctx->pc = 0x1484D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1484CCu;
            // 0x1484d0: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x148528u;
            goto label_148528;
        }
    }
    ctx->pc = 0x1484D4u;
    // 0x1484d4: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x1484d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1484d8: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1484D8u;
    {
        const bool branch_taken_0x1484d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1484DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1484D8u;
            // 0x1484dc: 0x8fa60468  lw          $a2, 0x468($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484d8) {
            ctx->pc = 0x148524u;
            goto label_148524;
        }
    }
    ctx->pc = 0x1484E0u;
    // 0x1484e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1484e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484e4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1484e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1484e8: 0x27a703e4  addiu       $a3, $sp, 0x3E4
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
    // 0x1484ec: 0x8cc5005c  lw          $a1, 0x5C($a2)
    ctx->pc = 0x1484ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x1484f0: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x1484f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1484f4: 0xc051288  jal         func_144A20
    ctx->pc = 0x1484F4u;
    SET_GPR_U32(ctx, 31, 0x1484FCu);
    ctx->pc = 0x1484F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1484F4u;
            // 0x1484f8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144A20u;
    if (runtime->hasFunction(0x144A20u)) {
        auto targetFn = runtime->lookupFunction(0x144A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484FCu; }
        if (ctx->pc != 0x1484FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144A20_0x144a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484FCu; }
        if (ctx->pc != 0x1484FCu) { return; }
    }
    ctx->pc = 0x1484FCu;
    // 0x1484fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1484FCu;
    {
        const bool branch_taken_0x1484fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1484FCu;
            // 0x148500: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484fc) {
            ctx->pc = 0x148524u;
            goto label_148524;
        }
    }
    ctx->pc = 0x148504u;
    // 0x148504: 0x8fa70468  lw          $a3, 0x468($sp)
    ctx->pc = 0x148504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x148508: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x148508u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14850c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14850cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148510: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x148514: 0x96c70002  lhu         $a3, 0x2($s6)
    ctx->pc = 0x148514u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x148518: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14851c: 0xc0512fa  jal         func_144BE8
    ctx->pc = 0x14851Cu;
    SET_GPR_U32(ctx, 31, 0x148524u);
    ctx->pc = 0x148520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14851Cu;
            // 0x148520: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144BE8u;
    if (runtime->hasFunction(0x144BE8u)) {
        auto targetFn = runtime->lookupFunction(0x144BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148524u; }
        if (ctx->pc != 0x148524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144BE8_0x144be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148524u; }
        if (ctx->pc != 0x148524u) { return; }
    }
    ctx->pc = 0x148524u;
label_148524:
    // 0x148524: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x148524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_148528:
    // 0x148528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14852c: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x14852cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x148530: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x148530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x148534: 0x2c700001  sltiu       $s0, $v1, 0x1
    ctx->pc = 0x148534u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x148538: 0x10a202da  beq         $a1, $v0, . + 4 + (0x2DA << 2)
    ctx->pc = 0x148538u;
    {
        const bool branch_taken_0x148538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148538u;
            // 0x14853c: 0xae840010  sw          $a0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148538) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x148540u;
    // 0x148540: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x148540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x148544: 0x504002d8  beql        $v0, $zero, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x148544u;
    {
        const bool branch_taken_0x148544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148544) {
            ctx->pc = 0x148548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148544u;
            // 0x148548: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1490A8u;
            goto label_1490a8;
        }
    }
    ctx->pc = 0x14854Cu;
    // 0x14854c: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x14854cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x148550: 0x104002d4  beqz        $v0, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x148550u;
    {
        const bool branch_taken_0x148550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148550u;
            // 0x148554: 0x8fab0468  lw          $t3, 0x468($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148550) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x148558u;
    // 0x148558: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x148558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14855c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148560: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x148560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x148564: 0x8d65005c  lw          $a1, 0x5C($t3)
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 92)));
    // 0x148568: 0x27a703e4  addiu       $a3, $sp, 0x3E4
    ctx->pc = 0x148568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
    // 0x14856c: 0xc051288  jal         func_144A20
    ctx->pc = 0x14856Cu;
    SET_GPR_U32(ctx, 31, 0x148574u);
    ctx->pc = 0x148570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14856Cu;
            // 0x148570: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144A20u;
    if (runtime->hasFunction(0x144A20u)) {
        auto targetFn = runtime->lookupFunction(0x144A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148574u; }
        if (ctx->pc != 0x148574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144A20_0x144a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148574u; }
        if (ctx->pc != 0x148574u) { return; }
    }
    ctx->pc = 0x148574u;
    // 0x148574: 0x544002cc  bnel        $v0, $zero, . + 4 + (0x2CC << 2)
    ctx->pc = 0x148574u;
    {
        const bool branch_taken_0x148574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148574) {
            ctx->pc = 0x148578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148574u;
            // 0x148578: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1490A8u;
            goto label_1490a8;
        }
    }
    ctx->pc = 0x14857Cu;
    // 0x14857c: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x14857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x148580: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x148580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148584: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x148584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x148588: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x148588u;
    {
        const bool branch_taken_0x148588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148588u;
            // 0x14858c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148588) {
            ctx->pc = 0x1486D0u;
            goto label_1486d0;
        }
    }
    ctx->pc = 0x148590u;
    // 0x148590: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x148590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x148594: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148598: 0x24421c40  addiu       $v0, $v0, 0x1C40
    ctx->pc = 0x148598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7232));
    // 0x14859c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1485a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1485a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1485a4: 0x400008  jr          $v0
    ctx->pc = 0x1485A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1485ACu: goto label_1485ac;
            case 0x148654u: goto label_148654;
            case 0x148688u: goto label_148688;
            case 0x1486ACu: goto label_1486ac;
            case 0x1486D0u: goto label_1486d0;
            case 0x1490A4u: goto label_1490a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1485ACu;
label_1485ac:
    // 0x1485ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1485ACu;
    {
        const bool branch_taken_0x1485ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485ACu;
            // 0x1485b0: 0x8fa403e4  lw          $a0, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485ac) {
            ctx->pc = 0x1485D4u;
            goto label_1485d4;
        }
    }
    ctx->pc = 0x1485B4u;
    // 0x1485b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1485B4u;
    {
        const bool branch_taken_0x1485b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485b4) {
            ctx->pc = 0x1485C4u;
            goto label_1485c4;
        }
    }
    ctx->pc = 0x1485BCu;
    // 0x1485bc: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1485BCu;
    {
        const bool branch_taken_0x1485bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485BCu;
            // 0x1485c0: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485bc) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x1485C4u;
label_1485c4:
    // 0x1485c4: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1485C4u;
    SET_GPR_U32(ctx, 31, 0x1485CCu);
    ctx->pc = 0x1485C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1485C4u;
            // 0x1485c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485CCu; }
        if (ctx->pc != 0x1485CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485CCu; }
        if (ctx->pc != 0x1485CCu) { return; }
    }
    ctx->pc = 0x1485CCu;
    // 0x1485cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1485CCu;
    {
        const bool branch_taken_0x1485cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485cc) {
            ctx->pc = 0x148634u;
            goto label_148634;
        }
    }
    ctx->pc = 0x1485D4u;
label_1485d4:
    // 0x1485d4: 0x8fa503e4  lw          $a1, 0x3E4($sp)
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
    // 0x1485d8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1485D8u;
    {
        const bool branch_taken_0x1485d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1485DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485D8u;
            // 0x1485dc: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485d8) {
            ctx->pc = 0x1485F8u;
            goto label_1485f8;
        }
    }
    ctx->pc = 0x1485E0u;
    // 0x1485e0: 0x108002b1  beqz        $a0, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x1485E0u;
    {
        const bool branch_taken_0x1485e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485E0u;
            // 0x1485e4: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485e0) {
            ctx->pc = 0x1490A8u;
            goto label_1490a8;
        }
    }
    ctx->pc = 0x1485E8u;
    // 0x1485e8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1485E8u;
    SET_GPR_U32(ctx, 31, 0x1485F0u);
    ctx->pc = 0x1485ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1485E8u;
            // 0x1485ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485F0u; }
        if (ctx->pc != 0x1485F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485F0u; }
        if (ctx->pc != 0x1485F0u) { return; }
    }
    ctx->pc = 0x1485F0u;
    // 0x1485f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1485F0u;
    {
        const bool branch_taken_0x1485f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485F0u;
            // 0x1485f4: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485f0) {
            ctx->pc = 0x1486D0u;
            goto label_1486d0;
        }
    }
    ctx->pc = 0x1485F8u;
label_1485f8:
    // 0x1485f8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1485F8u;
    {
        const bool branch_taken_0x1485f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485f8) {
            ctx->pc = 0x14860Cu;
            goto label_14860c;
        }
    }
    ctx->pc = 0x148600u;
    // 0x148600: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x148600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148604: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148604u;
    {
        const bool branch_taken_0x148604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148604u;
            // 0x148608: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148604) {
            ctx->pc = 0x14862Cu;
            goto label_14862c;
        }
    }
    ctx->pc = 0x14860Cu;
label_14860c:
    // 0x14860c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x14860Cu;
    SET_GPR_U32(ctx, 31, 0x148614u);
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148614u; }
        if (ctx->pc != 0x148614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148614u; }
        if (ctx->pc != 0x148614u) { return; }
    }
    ctx->pc = 0x148614u;
    // 0x148614: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x148614u;
    {
        const bool branch_taken_0x148614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148614u;
            // 0x148618: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148614) {
            ctx->pc = 0x1486D4u;
            goto label_1486d4;
        }
    }
    ctx->pc = 0x14861Cu;
    // 0x14861c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x14861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x148620: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x148620u;
    SET_GPR_U32(ctx, 31, 0x148628u);
    ctx->pc = 0x148624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148620u;
            // 0x148624: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148628u; }
        if (ctx->pc != 0x148628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148628u; }
        if (ctx->pc != 0x148628u) { return; }
    }
    ctx->pc = 0x148628u;
    // 0x148628: 0x8fa403e4  lw          $a0, 0x3E4($sp)
    ctx->pc = 0x148628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_14862c:
    // 0x14862c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14862Cu;
    SET_GPR_U32(ctx, 31, 0x148634u);
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148634u; }
        if (ctx->pc != 0x148634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148634u; }
        if (ctx->pc != 0x148634u) { return; }
    }
    ctx->pc = 0x148634u;
label_148634:
    // 0x148634: 0xc050f16  jal         func_143C58
    ctx->pc = 0x148634u;
    SET_GPR_U32(ctx, 31, 0x14863Cu);
    ctx->pc = 0x148638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148634u;
            // 0x148638: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C58u;
    if (runtime->hasFunction(0x143C58u)) {
        auto targetFn = runtime->lookupFunction(0x143C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14863Cu; }
        if (ctx->pc != 0x14863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C58_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14863Cu; }
        if (ctx->pc != 0x14863Cu) { return; }
    }
    ctx->pc = 0x14863Cu;
    // 0x14863c: 0x8fa503e4  lw          $a1, 0x3E4($sp)
    ctx->pc = 0x14863cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
    // 0x148640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148644: 0xc0a2644  jal         func_289910
    ctx->pc = 0x148644u;
    SET_GPR_U32(ctx, 31, 0x14864Cu);
    ctx->pc = 0x148648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148644u;
            // 0x148648: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14864Cu; }
        if (ctx->pc != 0x14864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14864Cu; }
        if (ctx->pc != 0x14864Cu) { return; }
    }
    ctx->pc = 0x14864Cu;
    // 0x14864c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14864Cu;
    {
        const bool branch_taken_0x14864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14864Cu;
            // 0x148650: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14864c) {
            ctx->pc = 0x1486D4u;
            goto label_1486d4;
        }
    }
    ctx->pc = 0x148654u;
label_148654:
    // 0x148654: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x148654u;
    {
        const bool branch_taken_0x148654 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148654u;
            // 0x148658: 0x8fa203e4  lw          $v0, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148654) {
            ctx->pc = 0x14867Cu;
            goto label_14867c;
        }
    }
    ctx->pc = 0x14865Cu;
    // 0x14865c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x14865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148660: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148664: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x148664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148668: 0x0  nop
    ctx->pc = 0x148668u;
    // NOP
    // 0x14866c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14866Cu;
    {
        const bool branch_taken_0x14866c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14866Cu;
            // 0x148670: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14866c) {
            ctx->pc = 0x148680u;
            goto label_148680;
        }
    }
    ctx->pc = 0x148674u;
    // 0x148674: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148678: 0x8fa203e4  lw          $v0, 0x3E4($sp)
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_14867c:
    // 0x14867c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148680:
    // 0x148680: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148680u;
    {
        const bool branch_taken_0x148680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148680u;
            // 0x148684: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148680) {
            ctx->pc = 0x1486D0u;
            goto label_1486d0;
        }
    }
    ctx->pc = 0x148688u;
label_148688:
    // 0x148688: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148688u;
    {
        const bool branch_taken_0x148688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148688u;
            // 0x14868c: 0x8fa203e4  lw          $v0, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148688) {
            ctx->pc = 0x1486A4u;
            goto label_1486a4;
        }
    }
    ctx->pc = 0x148690u;
    // 0x148690: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x148694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148698: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x148698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x14869c: 0x3882b  sltu        $s1, $zero, $v1
    ctx->pc = 0x14869cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1486a0: 0x8fa203e4  lw          $v0, 0x3E4($sp)
    ctx->pc = 0x1486a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_1486a4:
    // 0x1486a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1486A4u;
    {
        const bool branch_taken_0x1486a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486A4u;
            // 0x1486a8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486a4) {
            ctx->pc = 0x1486CCu;
            goto label_1486cc;
        }
    }
    ctx->pc = 0x1486ACu;
label_1486ac:
    // 0x1486ac: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1486ACu;
    {
        const bool branch_taken_0x1486ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1486B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486ACu;
            // 0x1486b0: 0x8fa203e4  lw          $v0, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486ac) {
            ctx->pc = 0x1486C8u;
            goto label_1486c8;
        }
    }
    ctx->pc = 0x1486B4u;
    // 0x1486b4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1486b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1486b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1486b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1486bc: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1486bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1486c0: 0x3882b  sltu        $s1, $zero, $v1
    ctx->pc = 0x1486c0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1486c4: 0x8fa203e4  lw          $v0, 0x3E4($sp)
    ctx->pc = 0x1486c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_1486c8:
    // 0x1486c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1486c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1486cc:
    // 0x1486cc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1486ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_1486d0:
    // 0x1486d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1486d4:
    // 0x1486d4: 0x8c45bffc  lw          $a1, -0x4004($v0)
    ctx->pc = 0x1486d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950908)));
    // 0x1486d8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1486D8u;
    {
        const bool branch_taken_0x1486d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486D8u;
            // 0x1486dc: 0x8fac0468  lw          $t4, 0x468($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486d8) {
            ctx->pc = 0x14870Cu;
            goto label_14870c;
        }
    }
    ctx->pc = 0x1486E0u;
    // 0x1486e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1486e4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1486e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1486e8: 0x8d84005c  lw          $a0, 0x5C($t4)
    ctx->pc = 0x1486e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 92)));
    // 0x1486ec: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1486ECu;
    SET_GPR_U32(ctx, 31, 0x1486F4u);
    ctx->pc = 0x1486F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1486ECu;
            // 0x1486f0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486F4u; }
        if (ctx->pc != 0x1486F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486F4u; }
        if (ctx->pc != 0x1486F4u) { return; }
    }
    ctx->pc = 0x1486F4u;
    // 0x1486f4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1486f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1486f8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1486fc: 0x8c82c004  lw          $v0, -0x3FFC($a0)
    ctx->pc = 0x1486fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950916)));
    // 0x148700: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148700u;
    {
        const bool branch_taken_0x148700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148700u;
            // 0x148704: 0xae03c008  sw          $v1, -0x3FF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950920), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148700) {
            ctx->pc = 0x14870Cu;
            goto label_14870c;
        }
    }
    ctx->pc = 0x148708u;
    // 0x148708: 0xac83c004  sw          $v1, -0x3FFC($a0)
    ctx->pc = 0x148708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950916), GPR_U32(ctx, 3));
label_14870c:
    // 0x14870c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x14870Cu;
    {
        const bool branch_taken_0x14870c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x148710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14870Cu;
            // 0x148710: 0x8fa403e0  lw          $a0, 0x3E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14870c) {
            ctx->pc = 0x148784u;
            goto label_148784;
        }
    }
    ctx->pc = 0x148714u;
    // 0x148714: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148714u;
    {
        const bool branch_taken_0x148714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x148718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148714u;
            // 0x148718: 0x8fb003e4  lw          $s0, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148714) {
            ctx->pc = 0x148730u;
            goto label_148730;
        }
    }
    ctx->pc = 0x14871Cu;
    // 0x14871c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14871Cu;
    {
        const bool branch_taken_0x14871c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14871Cu;
            // 0x148720: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14871c) {
            ctx->pc = 0x148740u;
            goto label_148740;
        }
    }
    ctx->pc = 0x148724u;
    // 0x148724: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x148728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148728u;
    {
        const bool branch_taken_0x148728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148728u;
            // 0x14872c: 0x24501300  addiu       $s0, $v0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148728) {
            ctx->pc = 0x148740u;
            goto label_148740;
        }
    }
    ctx->pc = 0x148730u;
label_148730:
    // 0x148730: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x148730u;
    SET_GPR_U32(ctx, 31, 0x148738u);
    ctx->pc = 0x148734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148730u;
            // 0x148734: 0x8fa503e4  lw          $a1, 0x3E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    }
    ctx->pc = 0x148738u;
    // 0x148738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14873c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_148740:
    // 0x148740: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x148740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148744: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x148744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148748: 0xc0524fa  jal         func_1493E8
    ctx->pc = 0x148748u;
    SET_GPR_U32(ctx, 31, 0x148750u);
    ctx->pc = 0x14874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148748u;
            // 0x14874c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1493E8u;
    if (runtime->hasFunction(0x1493E8u)) {
        auto targetFn = runtime->lookupFunction(0x1493E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148750u; }
        if (ctx->pc != 0x148750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001493E8_0x1493e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148750u; }
        if (ctx->pc != 0x148750u) { return; }
    }
    ctx->pc = 0x148750u;
    // 0x148750: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x148754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148754u;
    {
        const bool branch_taken_0x148754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148754u;
            // 0x148758: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148754) {
            ctx->pc = 0x148768u;
            goto label_148768;
        }
    }
    ctx->pc = 0x14875Cu;
    // 0x14875c: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x14875Cu;
    SET_GPR_U32(ctx, 31, 0x148764u);
    ctx->pc = 0x148760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14875Cu;
            // 0x148760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148764u; }
        if (ctx->pc != 0x148764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148764u; }
        if (ctx->pc != 0x148764u) { return; }
    }
    ctx->pc = 0x148764u;
    // 0x148764: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_148768:
    // 0x148768: 0x8c42c008  lw          $v0, -0x3FF8($v0)
    ctx->pc = 0x148768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950920)));
    // 0x14876c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14876Cu;
    {
        const bool branch_taken_0x14876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14876Cu;
            // 0x148770: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14876c) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148774u;
    // 0x148774: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x148778: 0xac40c010  sw          $zero, -0x3FF0($v0)
    ctx->pc = 0x148778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950928), GPR_U32(ctx, 0));
    // 0x14877c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14877Cu;
    {
        const bool branch_taken_0x14877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14877Cu;
            // 0x148780: 0xac60c014  sw          $zero, -0x3FEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14877c) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148784u;
label_148784:
    // 0x148784: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x148788: 0x8c42c008  lw          $v0, -0x3FF8($v0)
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950920)));
    // 0x14878c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14878Cu;
    {
        const bool branch_taken_0x14878c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14878Cu;
            // 0x148790: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14878c) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148794u;
    // 0x148794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x148798: 0xc441c64c  lwc1        $f1, -0x39B4($v0)
    ctx->pc = 0x148798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14879c: 0xc460c014  lwc1        $f0, -0x3FEC($v1)
    ctx->pc = 0x14879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1487a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1487a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1487a4: 0xac40c010  sw          $zero, -0x3FF0($v0)
    ctx->pc = 0x1487a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950928), GPR_U32(ctx, 0));
    // 0x1487a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1487a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1487ac: 0xe460c014  swc1        $f0, -0x3FEC($v1)
    ctx->pc = 0x1487acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950932), bits); }
label_1487b0:
    // 0x1487b0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1487b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1487b4: 0x1040023b  beqz        $v0, . + 4 + (0x23B << 2)
    ctx->pc = 0x1487B4u;
    {
        const bool branch_taken_0x1487b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487B4u;
            // 0x1487b8: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487b4) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x1487BCu;
    // 0x1487bc: 0x8e42c00c  lw          $v0, -0x3FF4($s2)
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950924)));
    // 0x1487c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1487C0u;
    {
        const bool branch_taken_0x1487c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1487C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487C0u;
            // 0x1487c4: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487c0) {
            ctx->pc = 0x1487ECu;
            goto label_1487ec;
        }
    }
    ctx->pc = 0x1487C8u;
    // 0x1487c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1487cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1487d0: 0xc440c018  lwc1        $f0, -0x3FE8($v0)
    ctx->pc = 0x1487d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1487d4: 0xc461c014  lwc1        $f1, -0x3FEC($v1)
    ctx->pc = 0x1487d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1487d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1487d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1487dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1487dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1487e0: 0xe7a1046c  swc1        $f1, 0x46C($sp)
    ctx->pc = 0x1487e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1132), bits); }
    // 0x1487e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1487E4u;
    {
        const bool branch_taken_0x1487e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487E4u;
            // 0x1487e8: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487e4) {
            ctx->pc = 0x1487F4u;
            goto label_1487f4;
        }
    }
    ctx->pc = 0x1487ECu;
label_1487ec:
    // 0x1487ec: 0xafa2046c  sw          $v0, 0x46C($sp)
    ctx->pc = 0x1487ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 2));
    // 0x1487f0: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x1487f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_1487f4:
    // 0x1487f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1487f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1487f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1487fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_148800:
    // 0x148800: 0x0  nop
    ctx->pc = 0x148800u;
    // NOP
    // 0x148804: 0x0  nop
    ctx->pc = 0x148804u;
    // NOP
    // 0x148808: 0x0  nop
    ctx->pc = 0x148808u;
    // NOP
    // 0x14880c: 0x0  nop
    ctx->pc = 0x14880cu;
    // NOP
    // 0x148810: 0x0  nop
    ctx->pc = 0x148810u;
    // NOP
    // 0x148814: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148814u;
    {
        const bool branch_taken_0x148814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148814u;
            // 0x148818: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148814) {
            ctx->pc = 0x148800u;
            runtime->cooperativeGuestYield();
            goto label_148800;
        }
    }
    ctx->pc = 0x14881Cu;
    // 0x14881c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x14881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x148820: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x148824: 0x92d20008  lbu         $s2, 0x8($s6)
    ctx->pc = 0x148824u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x148828: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x148828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x14882c: 0x25a02  srl         $t3, $v0, 8
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x148830: 0x23c02  srl         $a3, $v0, 16
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x148834: 0x86e90000  lh          $t1, 0x0($s7)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x148838: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x148838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14883c: 0x86ea0002  lh          $t2, 0x2($s7)
    ctx->pc = 0x14883cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x148840: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x148840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x148844: 0x86e80004  lh          $t0, 0x4($s7)
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x148848: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x148848u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x14884c: 0x86f30006  lh          $s3, 0x6($s7)
    ctx->pc = 0x14884cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x148850: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x148854: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x148854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x148858: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14885c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148860: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148864: 0x9071c01c  lbu         $s1, -0x3FE4($v1)
    ctx->pc = 0x148864u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950940)));
    // 0x148868: 0xe92018  mult        $a0, $a3, $t1
    ctx->pc = 0x148868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14886c: 0x90b0c01d  lbu         $s0, -0x3FE3($a1)
    ctx->pc = 0x14886cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950941)));
    // 0x148870: 0x16a1818  mult        $v1, $t3, $t2
    ctx->pc = 0x148870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x148874: 0x90cfc01e  lbu         $t7, -0x3FE2($a2)
    ctx->pc = 0x148874u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294950942)));
    // 0x148878: 0x2482818  mult        $a1, $s2, $t0
    ctx->pc = 0x148878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14887c: 0x533018  mult        $a2, $v0, $s3
    ctx->pc = 0x14887cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x148880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148884: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148888: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x14888c: 0x2296818  mult        $t5, $s1, $t1
    ctx->pc = 0x14888cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x148890: 0x20a7018  mult        $t6, $s0, $t2
    ctx->pc = 0x148890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x148894: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x148898: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x14889c: 0x1e86018  mult        $t4, $t7, $t0
    ctx->pc = 0x14889cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1488a0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x1488a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1488a4: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1488a8: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x1488a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1488ac: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x1488acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1488b0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1488b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1488b4: 0xa7ab0002  sh          $t3, 0x2($sp)
    ctx->pc = 0x1488b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x1488b8: 0xd6a03  sra         $t5, $t5, 8
    ctx->pc = 0x1488b8u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 8));
    // 0x1488bc: 0xa7b20004  sh          $s2, 0x4($sp)
    ctx->pc = 0x1488bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x1488c0: 0xc6203  sra         $t4, $t4, 8
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 8));
    // 0x1488c4: 0xa7a40040  sh          $a0, 0x40($sp)
    ctx->pc = 0x1488c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x1488c8: 0xe7203  sra         $t6, $t6, 8
    ctx->pc = 0x1488c8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 8));
    // 0x1488cc: 0xa7a30042  sh          $v1, 0x42($sp)
    ctx->pc = 0x1488ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x1488d0: 0xa7a50044  sh          $a1, 0x44($sp)
    ctx->pc = 0x1488d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 5));
    // 0x1488d4: 0xa7a60046  sh          $a2, 0x46($sp)
    ctx->pc = 0x1488d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 6));
    // 0x1488d8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1488d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1488dc: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x1488dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1488e0: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x1488e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1488e4: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1488e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1488e8: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1488e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1488ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1488ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1488f0: 0x6bb20037  ldl         $s2, 0x37($sp)
    ctx->pc = 0x1488f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x1488f4: 0x6fb20030  ldr         $s2, 0x30($sp)
    ctx->pc = 0x1488f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x1488f8: 0xb3b20017  sdl         $s2, 0x17($sp)
    ctx->pc = 0x1488f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1488fc: 0xb7b20010  sdr         $s2, 0x10($sp)
    ctx->pc = 0x1488fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148900: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x148904: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x148904u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x148908: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x148908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x14890c: 0xa7ac0064  sh          $t4, 0x64($sp)
    ctx->pc = 0x14890cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 12));
    // 0x148910: 0xa7ad0060  sh          $t5, 0x60($sp)
    ctx->pc = 0x148910u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 13));
    // 0x148914: 0xa7ae0062  sh          $t6, 0x62($sp)
    ctx->pc = 0x148914u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 14));
    // 0x148918: 0xa7b10000  sh          $s1, 0x0($sp)
    ctx->pc = 0x148918u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x14891c: 0xa7b00002  sh          $s0, 0x2($sp)
    ctx->pc = 0x14891cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x148920: 0xa7af0004  sh          $t7, 0x4($sp)
    ctx->pc = 0x148920u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x148924: 0xa7b30066  sh          $s3, 0x66($sp)
    ctx->pc = 0x148924u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 102), (uint16_t)GPR_U32(ctx, 19));
    // 0x148928: 0x6bac0067  ldl         $t4, 0x67($sp)
    ctx->pc = 0x148928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x14892c: 0x6fac0060  ldr         $t4, 0x60($sp)
    ctx->pc = 0x14892cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x148930: 0xb3ac0057  sdl         $t4, 0x57($sp)
    ctx->pc = 0x148930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148934: 0xb7ac0050  sdr         $t4, 0x50($sp)
    ctx->pc = 0x148934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148938: 0x6bab0057  ldl         $t3, 0x57($sp)
    ctx->pc = 0x148938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x14893c: 0x6fab0050  ldr         $t3, 0x50($sp)
    ctx->pc = 0x14893cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x148940: 0xb3ab001f  sdl         $t3, 0x1F($sp)
    ctx->pc = 0x148940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148944: 0xb7ab0018  sdr         $t3, 0x18($sp)
    ctx->pc = 0x148944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148948: 0xa7a60006  sh          $a2, 0x6($sp)
    ctx->pc = 0x148948u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x14894c: 0x90a2c024  lbu         $v0, -0x3FDC($a1)
    ctx->pc = 0x14894cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950948)));
    // 0x148950: 0x9063c025  lbu         $v1, -0x3FDB($v1)
    ctx->pc = 0x148950u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950949)));
    // 0x148954: 0x9084c026  lbu         $a0, -0x3FDA($a0)
    ctx->pc = 0x148954u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950950)));
    // 0x148958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14895c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148960: 0x494818  mult        $t1, $v0, $t1
    ctx->pc = 0x148960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x148964: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x148964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x148968: 0x6a5018  mult        $t2, $v1, $t2
    ctx->pc = 0x148968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x14896c: 0x884018  mult        $t0, $a0, $t0
    ctx->pc = 0x14896cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x148970: 0xa7b30086  sh          $s3, 0x86($sp)
    ctx->pc = 0x148970u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 134), (uint16_t)GPR_U32(ctx, 19));
    // 0x148974: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x148974u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x148978: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x148978u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x14897c: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x14897cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x148980: 0xa5203  sra         $t2, $t2, 8
    ctx->pc = 0x148980u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 8));
    // 0x148984: 0xa7a90080  sh          $t1, 0x80($sp)
    ctx->pc = 0x148984u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 9));
    // 0x148988: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x14898c: 0xa7aa0082  sh          $t2, 0x82($sp)
    ctx->pc = 0x14898cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 10));
    // 0x148990: 0xa7a80084  sh          $t0, 0x84($sp)
    ctx->pc = 0x148990u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 8));
    // 0x148994: 0xa7a40004  sh          $a0, 0x4($sp)
    ctx->pc = 0x148994u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x148998: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x148998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14899c: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x14899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1489a0: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x1489a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1489a4: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x1489a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1489a8: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x1489a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1489ac: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x1489acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1489b0: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1489b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1489b4: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1489b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1489b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1489bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1489bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1489c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1489c4: 0x0  nop
    ctx->pc = 0x1489c4u;
    // NOP
label_1489c8:
    // 0x1489c8: 0x0  nop
    ctx->pc = 0x1489c8u;
    // NOP
    // 0x1489cc: 0x0  nop
    ctx->pc = 0x1489ccu;
    // NOP
    // 0x1489d0: 0x0  nop
    ctx->pc = 0x1489d0u;
    // NOP
    // 0x1489d4: 0x0  nop
    ctx->pc = 0x1489d4u;
    // NOP
    // 0x1489d8: 0x0  nop
    ctx->pc = 0x1489d8u;
    // NOP
    // 0x1489dc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1489DCu;
    {
        const bool branch_taken_0x1489dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1489E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1489DCu;
            // 0x1489e0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489dc) {
            ctx->pc = 0x1489C8u;
            runtime->cooperativeGuestYield();
            goto label_1489c8;
        }
    }
    ctx->pc = 0x1489E4u;
    // 0x1489e4: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x1489e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1489e8: 0x4be6033c  vmove.xyzw  $vf6, $vf0
    ctx->pc = 0x1489e8u;
    ctx->vu0_vf[6] = ctx->vu0_vf[0];
    // 0x1489ec: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1489ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x1489f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1489f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1489f4: 0x4be5333d  vmr32.xyzw  $vf5, $vf6
    ctx->pc = 0x1489f4u;
    ctx->vu0_vf[5] = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,1));
    // 0x1489f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1489f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1489fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1489fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148a00: 0x4be12b3d  vmr32.xyzw  $vf1, $vf5
    ctx->pc = 0x148a00u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,1));
    // 0x148a04: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x148a04u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x148a08: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x148a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148a0c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x148a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148a10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x148a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x148a14: 0xfba60190  sqc2        $vf6, 0x190($sp)
    ctx->pc = 0x148a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x148a18: 0xfba501a0  sqc2        $vf5, 0x1A0($sp)
    ctx->pc = 0x148a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148a1c: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x148a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148a20: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x148a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x148a24: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x148a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148a28: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x148a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148a2c: 0xfba600c0  sqc2        $vf6, 0xC0($sp)
    ctx->pc = 0x148a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x148a30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x148a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a34: 0x70651389  pcpyld      $v0, $v1, $a1
    ctx->pc = 0x148a34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x148a38: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x148a3c: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x148a40: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x148a40u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x148a44: 0x706224c8  ppacw       $a0, $v1, $v0
    ctx->pc = 0x148a44u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x148a48: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x148a48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x148a4c: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x148a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148a50: 0xfba203f0  sqc2        $vf2, 0x3F0($sp)
    ctx->pc = 0x148a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148a54: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x148a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x148a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a5c: 0x70a71389  pcpyld      $v0, $a1, $a3
    ctx->pc = 0x148a5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x148a60: 0x70625cc8  ppacw       $t3, $v1, $v0
    ctx->pc = 0x148a60u;
    SET_GPR_VEC(ctx, 11, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x148a64: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x148a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x148a68: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x148a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148a6c: 0xfba10400  sqc2        $vf1, 0x400($sp)
    ctx->pc = 0x148a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148a70: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x148a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148a74: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x148a74u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148a78: 0xdaa90010  lqc2        $vf9, 0x10($s5)
    ctx->pc = 0x148a78u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x148a7c: 0xdaaa0020  lqc2        $vf10, 0x20($s5)
    ctx->pc = 0x148a7cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x148a80: 0xdaa30030  lqc2        $vf3, 0x30($s5)
    ctx->pc = 0x148a80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x148a84: 0x4be241bc  vmulax.xyzw $ACC, $vf8, $vf2x
    ctx->pc = 0x148a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148a88: 0x4be248bd  vmadday.xyzw $ACC, $vf9, $vf2y
    ctx->pc = 0x148a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148a8c: 0x4be250be  vmaddaz.xyzw $ACC, $vf10, $vf2z
    ctx->pc = 0x148a8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148a90: 0x4be21acb  vmaddw.xyzw $vf11, $vf3, $vf2w
    ctx->pc = 0x148a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148a94: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x148a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148a98: 0xfbab0230  sqc2        $vf11, 0x230($sp)
    ctx->pc = 0x148a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148a9c: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x148a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148aa0: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x148aa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148aa4: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x148aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148aa8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x148aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148aac: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x148aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148ab0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x148ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148ab4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x148ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148ab8: 0x4be519cb  vmaddw.xyzw $vf7, $vf3, $vf5w
    ctx->pc = 0x148ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148abc: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x148abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148ac0: 0xfba70250  sqc2        $vf7, 0x250($sp)
    ctx->pc = 0x148ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148ac4: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x148ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148ac8: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x148ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148acc: 0x4be6190b  vmaddw.xyzw $vf4, $vf3, $vf6w
    ctx->pc = 0x148accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148ad0: 0xfba40260  sqc2        $vf4, 0x260($sp)
    ctx->pc = 0x148ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148ad4: 0xfbab01f0  sqc2        $vf11, 0x1F0($sp)
    ctx->pc = 0x148ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148ad8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x148adc: 0xc440c020  lwc1        $f0, -0x3FE0($v0)
    ctx->pc = 0x148adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ae0: 0xfbab00d0  sqc2        $vf11, 0xD0($sp)
    ctx->pc = 0x148ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148ae4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148ae4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148ae8: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x148ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148aec: 0xfba700f0  sqc2        $vf7, 0xF0($sp)
    ctx->pc = 0x148aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148af0: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x148af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148af4: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x148af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148af8: 0xfba70210  sqc2        $vf7, 0x210($sp)
    ctx->pc = 0x148af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148afc: 0xfba40220  sqc2        $vf4, 0x220($sp)
    ctx->pc = 0x148afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148b00: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x148b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x148b04: 0x70ac1389  pcpyld      $v0, $a1, $t4
    ctx->pc = 0x148b04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 12)));
    // 0x148b08: 0x706294c8  ppacw       $s2, $v1, $v0
    ctx->pc = 0x148b08u;
    SET_GPR_VEC(ctx, 18, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x148b0c: 0x48b20800  qmtc2.ni    $s2, $vf1
    ctx->pc = 0x148b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 18));
    // 0x148b10: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x148b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b14: 0xfba10410  sqc2        $vf1, 0x410($sp)
    ctx->pc = 0x148b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b18: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x148b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b1c: 0x4be241bc  vmulax.xyzw $ACC, $vf8, $vf2x
    ctx->pc = 0x148b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148b20: 0x4be248bd  vmadday.xyzw $ACC, $vf9, $vf2y
    ctx->pc = 0x148b20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b24: 0x4be250be  vmaddaz.xyzw $ACC, $vf10, $vf2z
    ctx->pc = 0x148b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b28: 0x4be21acb  vmaddw.xyzw $vf11, $vf3, $vf2w
    ctx->pc = 0x148b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148b2c: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x148b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148b30: 0xfbab02c0  sqc2        $vf11, 0x2C0($sp)
    ctx->pc = 0x148b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148b34: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x148b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b38: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x148b38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b3c: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x148b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148b40: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x148b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148b44: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x148b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b48: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x148b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b4c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x148b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b50: 0x4be519cb  vmaddw.xyzw $vf7, $vf3, $vf5w
    ctx->pc = 0x148b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148b54: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x148b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148b58: 0xfba702e0  sqc2        $vf7, 0x2E0($sp)
    ctx->pc = 0x148b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148b5c: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x148b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b60: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x148b60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148b64: 0x4be6190b  vmaddw.xyzw $vf4, $vf3, $vf6w
    ctx->pc = 0x148b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148b68: 0xfba402f0  sqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x148b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148b6c: 0xfbab0280  sqc2        $vf11, 0x280($sp)
    ctx->pc = 0x148b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148b70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x148b74: 0xc440c028  lwc1        $f0, -0x3FD8($v0)
    ctx->pc = 0x148b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148b78: 0xfbab0110  sqc2        $vf11, 0x110($sp)
    ctx->pc = 0x148b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x148b7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148b7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148b80: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x148b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b84: 0xfba70130  sqc2        $vf7, 0x130($sp)
    ctx->pc = 0x148b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148b88: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x148b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148b8c: 0xfba10290  sqc2        $vf1, 0x290($sp)
    ctx->pc = 0x148b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148b90: 0xfba702a0  sqc2        $vf7, 0x2A0($sp)
    ctx->pc = 0x148b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148b94: 0xfba402b0  sqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x148b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148b98: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x148b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x148b9c: 0x70a71389  pcpyld      $v0, $a1, $a3
    ctx->pc = 0x148b9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x148ba0: 0x70625cc8  ppacw       $t3, $v1, $v0
    ctx->pc = 0x148ba0u;
    SET_GPR_VEC(ctx, 11, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x148ba4: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x148ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x148ba8: 0xfba10300  sqc2        $vf1, 0x300($sp)
    ctx->pc = 0x148ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148bac: 0xfba10420  sqc2        $vf1, 0x420($sp)
    ctx->pc = 0x148bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148bb0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x148bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148bb4: 0x4be241bc  vmulax.xyzw $ACC, $vf8, $vf2x
    ctx->pc = 0x148bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148bb8: 0x4be248bd  vmadday.xyzw $ACC, $vf9, $vf2y
    ctx->pc = 0x148bb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bbc: 0x4be250be  vmaddaz.xyzw $ACC, $vf10, $vf2z
    ctx->pc = 0x148bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bc0: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x148bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148bc4: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x148bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148bc8: 0xfba20350  sqc2        $vf2, 0x350($sp)
    ctx->pc = 0x148bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148bcc: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x148bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bd0: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x148bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bd4: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x148bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148bd8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x148bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148bdc: 0xfba10360  sqc2        $vf1, 0x360($sp)
    ctx->pc = 0x148bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148be0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x148be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148be4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x148be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148be8: 0x4be5194b  vmaddw.xyzw $vf5, $vf3, $vf5w
    ctx->pc = 0x148be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148bec: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x148becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148bf0: 0xfba50370  sqc2        $vf5, 0x370($sp)
    ctx->pc = 0x148bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148bf4: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x148bf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bf8: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x148bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148bfc: 0x4be618cb  vmaddw.xyzw $vf3, $vf3, $vf6w
    ctx->pc = 0x148bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148c00: 0xfba30380  sqc2        $vf3, 0x380($sp)
    ctx->pc = 0x148c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x148c04: 0xfba20310  sqc2        $vf2, 0x310($sp)
    ctx->pc = 0x148c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148c08: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x148c0c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x148c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x148c10: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x148c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148c14: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x148c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148c18: 0xfba50170  sqc2        $vf5, 0x170($sp)
    ctx->pc = 0x148c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148c1c: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x148c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x148c20: 0xfba10320  sqc2        $vf1, 0x320($sp)
    ctx->pc = 0x148c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148c24: 0xfba50330  sqc2        $vf5, 0x330($sp)
    ctx->pc = 0x148c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148c28: 0xfba30340  sqc2        $vf3, 0x340($sp)
    ctx->pc = 0x148c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x148c2c: 0x8fac0464  lw          $t4, 0x464($sp)
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
    // 0x148c30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x148c30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148c34: 0x8d830cd0  lw          $v1, 0xCD0($t4)
    ctx->pc = 0x148c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 3280)));
    // 0x148c38: 0x96c40004  lhu         $a0, 0x4($s6)
    ctx->pc = 0x148c38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x148c3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x148c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x148c40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x148c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x148c44: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x148c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148c48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148c4c: 0xc7c10030  lwc1        $f1, 0x30($fp)
    ctx->pc = 0x148c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148c50: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x148c50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x148c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x148c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148c58: 0x8fca002c  lw          $t2, 0x2C($fp)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x148c5c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x148c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x148c60: 0x1463024  and         $a2, $t2, $a2
    ctx->pc = 0x148c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x148c64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148c68: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x148c68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x148c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x148c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148c74: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x148c74u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148c78: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x148c78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148c7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148c80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x148c84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x148c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x148c88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x148c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x148c8c: 0x10c00070  beqz        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x148C8Cu;
    {
        const bool branch_taken_0x148c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C8Cu;
            // 0x148c90: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c8c) {
            ctx->pc = 0x148E50u;
            goto label_148e50;
        }
    }
    ctx->pc = 0x148C94u;
    // 0x148c94: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x148c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x148c98: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x148c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x148c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x148c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148ca0: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x148ca0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x148ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148ca8: 0x0  nop
    ctx->pc = 0x148ca8u;
    // NOP
    // 0x148cac: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x148CACu;
    {
        const bool branch_taken_0x148cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148CACu;
            // 0x148cb0: 0xa3c02  srl         $a3, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cac) {
            ctx->pc = 0x148E50u;
            goto label_148e50;
        }
    }
    ctx->pc = 0x148CB4u;
    // 0x148cb4: 0xa4202  srl         $t0, $t2, 8
    ctx->pc = 0x148cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x148cb8: 0x314900ff  andi        $t1, $t2, 0xFF
    ctx->pc = 0x148cb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x148cbc: 0xa1602  srl         $v0, $t2, 24
    ctx->pc = 0x148cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x148cc0: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x148cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x148cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148cc8: 0x86e60002  lh          $a2, 0x2($s7)
    ctx->pc = 0x148cc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x148ccc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x148cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x148cd0: 0x86e40004  lh          $a0, 0x4($s7)
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x148cd4: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x148cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x148cd8: 0x86ea0006  lh          $t2, 0x6($s7)
    ctx->pc = 0x148cd8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x148cdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x148ce0: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x148ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x148ce4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x148ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x148ce8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x148ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x148cec: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x148cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x148cf0: 0x1063018  mult        $a2, $t0, $a2
    ctx->pc = 0x148cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x148cf4: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x148cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x148cf8: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x148cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x148cfc: 0xa7a80002  sh          $t0, 0x2($sp)
    ctx->pc = 0x148cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x148d00: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x148d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x148d04: 0xa7a90004  sh          $t1, 0x4($sp)
    ctx->pc = 0x148d04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x148d08: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x148d08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x148d0c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x148d10: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x148d14: 0xa7a303a0  sh          $v1, 0x3A0($sp)
    ctx->pc = 0x148d14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 928), (uint16_t)GPR_U32(ctx, 3));
    // 0x148d18: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x148d18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x148d1c: 0xa7a603a2  sh          $a2, 0x3A2($sp)
    ctx->pc = 0x148d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 930), (uint16_t)GPR_U32(ctx, 6));
    // 0x148d20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x148d24: 0xa7a403a4  sh          $a0, 0x3A4($sp)
    ctx->pc = 0x148d24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 932), (uint16_t)GPR_U32(ctx, 4));
    // 0x148d28: 0xa7a203a6  sh          $v0, 0x3A6($sp)
    ctx->pc = 0x148d28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 934), (uint16_t)GPR_U32(ctx, 2));
    // 0x148d2c: 0x8cb2c010  lw          $s2, -0x3FF0($a1)
    ctx->pc = 0x148d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950928)));
    // 0x148d30: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x148d34: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x148d38: 0x6ba303a7  ldl         $v1, 0x3A7($sp)
    ctx->pc = 0x148d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148d3c: 0x6fa303a0  ldr         $v1, 0x3A0($sp)
    ctx->pc = 0x148d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148d40: 0xb3a30397  sdl         $v1, 0x397($sp)
    ctx->pc = 0x148d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148d44: 0xb7a30390  sdr         $v1, 0x390($sp)
    ctx->pc = 0x148d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148d48: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x148D48u;
    {
        const bool branch_taken_0x148d48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x148D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D48u;
            // 0x148d4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d48) {
            ctx->pc = 0x148E48u;
            goto label_148e48;
        }
    }
    ctx->pc = 0x148D50u;
    // 0x148d50: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x148d54: 0x8fc2c004  lw          $v0, -0x3FFC($fp)
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950916)));
    // 0x148d58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148D58u;
    {
        const bool branch_taken_0x148d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D58u;
            // 0x148d5c: 0x8fa7046c  lw          $a3, 0x46C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d58) {
            ctx->pc = 0x148D7Cu;
            goto label_148d7c;
        }
    }
    ctx->pc = 0x148D60u;
    // 0x148d60: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x148d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x148d64: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x148D64u;
    {
        const bool branch_taken_0x148d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D64u;
            // 0x148d68: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d64) {
            ctx->pc = 0x148E4Cu;
            goto label_148e4c;
        }
    }
    ctx->pc = 0x148D6Cu;
    // 0x148d6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_148d70:
    // 0x148d70: 0x8c62c010  lw          $v0, -0x3FF0($v1)
    ctx->pc = 0x148d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950928)));
    // 0x148d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148d78: 0xac62c010  sw          $v0, -0x3FF0($v1)
    ctx->pc = 0x148d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950928), GPR_U32(ctx, 2));
label_148d7c:
    // 0x148d7c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x148d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148d80: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x148d80u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148d84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x148d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148d90: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x148d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x148d94: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x148d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x148d98: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x148d98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x148d9c: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x148d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x148da0: 0x716c1b89  pcpyld      $v1, $t3, $t4
    ctx->pc = 0x148da0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x148da4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x148da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x148da8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x148dac: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x148dacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x148db0: 0xdaa10010  lqc2        $vf1, 0x10($s5)
    ctx->pc = 0x148db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x148db4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x148db4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x148db8: 0xdaa30000  lqc2        $vf3, 0x0($s5)
    ctx->pc = 0x148db8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148dbc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x148dbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x148dc0: 0xfba20430  sqc2        $vf2, 0x430($sp)
    ctx->pc = 0x148dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148dc4: 0x4be219bc  vmulax.xyzw $ACC, $vf3, $vf2x
    ctx->pc = 0x148dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148dc8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x148dc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148dcc: 0xdaa10020  lqc2        $vf1, 0x20($s5)
    ctx->pc = 0x148dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x148dd0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x148dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148dd4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x148dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x148dd8: 0xdaa10030  lqc2        $vf1, 0x30($s5)
    ctx->pc = 0x148dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x148ddc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x148ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148de0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x148de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148de4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x148de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x148de8: 0xfba203b0  sqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x148de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148dec: 0xf8410100  sqc2        $vf1, 0x100($v0)
    ctx->pc = 0x148decu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148df0: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x148df0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x148df4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x148df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x148df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148dfc: 0x27a80390  addiu       $t0, $sp, 0x390
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x148e00: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x148e04: 0x8fa50464  lw          $a1, 0x464($sp)
    ctx->pc = 0x148e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
    // 0x148e08: 0x8fa60460  lw          $a2, 0x460($sp)
    ctx->pc = 0x148e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x148e0c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x148e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x148e10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148e14: 0xc0527e8  jal         func_149FA0
    ctx->pc = 0x148E14u;
    SET_GPR_U32(ctx, 31, 0x148E1Cu);
    ctx->pc = 0x148E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E14u;
            // 0x148e18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FA0u;
    if (runtime->hasFunction(0x149FA0u)) {
        auto targetFn = runtime->lookupFunction(0x149FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E1Cu; }
        if (ctx->pc != 0x148E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149FA0_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E1Cu; }
        if (ctx->pc != 0x148E1Cu) { return; }
    }
    ctx->pc = 0x148E1Cu;
    // 0x148e1c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x148e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x148e20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x148e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x148e24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148E24u;
    {
        const bool branch_taken_0x148e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E24u;
            // 0x148e28: 0x8fc2c004  lw          $v0, -0x3FFC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e24) {
            ctx->pc = 0x148E48u;
            goto label_148e48;
        }
    }
    ctx->pc = 0x148E2Cu;
    // 0x148e2c: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x148E2Cu;
    {
        const bool branch_taken_0x148e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E2Cu;
            // 0x148e30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e2c) {
            ctx->pc = 0x148D7Cu;
            runtime->cooperativeGuestYield();
            goto label_148d7c;
        }
    }
    ctx->pc = 0x148E34u;
    // 0x148e34: 0x8fa5046c  lw          $a1, 0x46C($sp)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
    // 0x148e38: 0x8c42c010  lw          $v0, -0x3FF0($v0)
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950928)));
    // 0x148e3c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x148e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x148e40: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x148E40u;
    {
        const bool branch_taken_0x148e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E40u;
            // 0x148e44: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e40) {
            ctx->pc = 0x148D70u;
            runtime->cooperativeGuestYield();
            goto label_148d70;
        }
    }
    ctx->pc = 0x148E48u;
label_148e48:
    // 0x148e48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_148e4c:
    // 0x148e4c: 0xac52c010  sw          $s2, -0x3FF0($v0)
    ctx->pc = 0x148e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950928), GPR_U32(ctx, 18));
label_148e50:
    // 0x148e50: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x148e54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e58: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x148E58u;
    {
        const bool branch_taken_0x148e58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x148E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E58u;
            // 0x148e5c: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e58) {
            ctx->pc = 0x148F6Cu;
            goto label_148f6c;
        }
    }
    ctx->pc = 0x148E60u;
    // 0x148e60: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x148e64: 0x8e42c004  lw          $v0, -0x3FFC($s2)
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950916)));
    // 0x148e68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148E68u;
    {
        const bool branch_taken_0x148e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E68u;
            // 0x148e6c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e68) {
            ctx->pc = 0x148E9Cu;
            goto label_148e9c;
        }
    }
    ctx->pc = 0x148E70u;
    // 0x148e70: 0x8fa6046c  lw          $a2, 0x46C($sp)
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
    // 0x148e74: 0x8c42c010  lw          $v0, -0x3FF0($v0)
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950928)));
    // 0x148e78: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x148e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x148e7c: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x148E7Cu;
    {
        const bool branch_taken_0x148e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e7c) {
            ctx->pc = 0x148E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148E7Cu;
            // 0x148e80: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x148F6Cu;
            goto label_148f6c;
        }
    }
    ctx->pc = 0x148E84u;
    // 0x148e84: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_148e88:
    // 0x148e88: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148e8c: 0x8c62c010  lw          $v0, -0x3FF0($v1)
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950928)));
    // 0x148e90: 0xafa70470  sw          $a3, 0x470($sp)
    ctx->pc = 0x148e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 7));
    // 0x148e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148e98: 0xac62c010  sw          $v0, -0x3FF0($v1)
    ctx->pc = 0x148e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950928), GPR_U32(ctx, 2));
label_148e9c:
    // 0x148e9c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x148e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148ea0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x148ea0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148ea4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x148eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148eb0: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x148eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x148eb4: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x148eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x148eb8: 0x716c1b89  pcpyld      $v1, $t3, $t4
    ctx->pc = 0x148eb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x148ebc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x148ec0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x148ec4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x148ec4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x148ec8: 0xdaa10010  lqc2        $vf1, 0x10($s5)
    ctx->pc = 0x148ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x148ecc: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x148eccu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x148ed0: 0xdaa30000  lqc2        $vf3, 0x0($s5)
    ctx->pc = 0x148ed0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148ed4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x148ed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x148ed8: 0xfba20440  sqc2        $vf2, 0x440($sp)
    ctx->pc = 0x148ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148edc: 0x4be219bc  vmulax.xyzw $ACC, $vf3, $vf2x
    ctx->pc = 0x148edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148ee0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x148ee0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148ee4: 0xdaa10020  lqc2        $vf1, 0x20($s5)
    ctx->pc = 0x148ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x148ee8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x148ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148eec: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x148ef0: 0xdaa10030  lqc2        $vf1, 0x30($s5)
    ctx->pc = 0x148ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x148ef4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148ef8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x148ef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148efc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x148efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x148f00: 0xfba203c0  sqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x148f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148f04: 0xf8410100  sqc2        $vf1, 0x100($v0)
    ctx->pc = 0x148f04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148f08: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x148f0c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x148f10: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x148f14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148f18: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x148f18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x148f1c: 0x8fa50464  lw          $a1, 0x464($sp)
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
    // 0x148f20: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x148f24: 0x8fa60460  lw          $a2, 0x460($sp)
    ctx->pc = 0x148f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x148f28: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x148f2c: 0xc0527e8  jal         func_149FA0
    ctx->pc = 0x148F2Cu;
    SET_GPR_U32(ctx, 31, 0x148F34u);
    ctx->pc = 0x148F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F2Cu;
            // 0x148f30: 0x684021  addu        $t0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FA0u;
    if (runtime->hasFunction(0x149FA0u)) {
        auto targetFn = runtime->lookupFunction(0x149FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F34u; }
        if (ctx->pc != 0x148F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149FA0_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F34u; }
        if (ctx->pc != 0x148F34u) { return; }
    }
    ctx->pc = 0x148F34u;
    // 0x148f34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148f38: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x148f3c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x148f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x148f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x148F40u;
    {
        const bool branch_taken_0x148f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F40u;
            // 0x148f44: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f40) {
            ctx->pc = 0x148F68u;
            goto label_148f68;
        }
    }
    ctx->pc = 0x148F48u;
    // 0x148f48: 0x8e42c004  lw          $v0, -0x3FFC($s2)
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950916)));
    // 0x148f4c: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x148F4Cu;
    {
        const bool branch_taken_0x148f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F4Cu;
            // 0x148f50: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f4c) {
            ctx->pc = 0x148E9Cu;
            runtime->cooperativeGuestYield();
            goto label_148e9c;
        }
    }
    ctx->pc = 0x148F54u;
    // 0x148f54: 0x8fa5046c  lw          $a1, 0x46C($sp)
    ctx->pc = 0x148f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
    // 0x148f58: 0x8c42c010  lw          $v0, -0x3FF0($v0)
    ctx->pc = 0x148f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950928)));
    // 0x148f5c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x148f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x148f60: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x148F60u;
    {
        const bool branch_taken_0x148f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F60u;
            // 0x148f64: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f60) {
            ctx->pc = 0x148E88u;
            runtime->cooperativeGuestYield();
            goto label_148e88;
        }
    }
    ctx->pc = 0x148F68u;
label_148f68:
    // 0x148f68: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_148f6c:
    // 0x148f6c: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x148f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x148f70: 0x2221826  xor         $v1, $s1, $v0
    ctx->pc = 0x148f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x148f74: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x148f74u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x148f78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148f7c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x148f80: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x148f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148f84: 0x18600038  blez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x148F84u;
    {
        const bool branch_taken_0x148f84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x148F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F84u;
            // 0x148f88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f84) {
            ctx->pc = 0x149068u;
            goto label_149068;
        }
    }
    ctx->pc = 0x148F8Cu;
    // 0x148f8c: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x148f90: 0x8fc2c004  lw          $v0, -0x3FFC($fp)
    ctx->pc = 0x148f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950916)));
    // 0x148f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148F94u;
    {
        const bool branch_taken_0x148f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F94u;
            // 0x148f98: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f94) {
            ctx->pc = 0x148FB8u;
            goto label_148fb8;
        }
    }
    ctx->pc = 0x148F9Cu;
    // 0x148f9c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x148F9Cu;
    {
        const bool branch_taken_0x148f9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x148f9c) {
            ctx->pc = 0x148FB8u;
            goto label_148fb8;
        }
    }
    ctx->pc = 0x148FA4u;
    // 0x148fa4: 0x8fa60470  lw          $a2, 0x470($sp)
    ctx->pc = 0x148fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x148fa8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x148fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x148fac: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x148FACu;
    {
        const bool branch_taken_0x148fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148fac) {
            ctx->pc = 0x148FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148FACu;
            // 0x148fb0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14906Cu;
            goto label_14906c;
        }
    }
    ctx->pc = 0x148FB4u;
    // 0x148fb4: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x148fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_148fb8:
    // 0x148fb8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x148fb8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148fbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148fc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x148fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148fc8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x148fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x148fcc: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x148fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x148fd0: 0x70eb1b89  pcpyld      $v1, $a3, $t3
    ctx->pc = 0x148fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x148fd4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x148fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x148fd8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x148fdc: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x148fdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x148fe0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x148fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148fe4: 0x704364c8  ppacw       $t4, $v0, $v1
    ctx->pc = 0x148fe4u;
    SET_GPR_VEC(ctx, 12, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x148fe8: 0xdaa30010  lqc2        $vf3, 0x10($s5)
    ctx->pc = 0x148fe8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x148fec: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x148fecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x148ff0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x148ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148ff4: 0xdaa40020  lqc2        $vf4, 0x20($s5)
    ctx->pc = 0x148ff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x148ff8: 0xdaa10030  lqc2        $vf1, 0x30($s5)
    ctx->pc = 0x148ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x148ffc: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x148ffcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149000: 0x4be220be  vmaddaz.xyzw $ACC, $vf4, $vf2z
    ctx->pc = 0x149000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149004: 0xfba203d0  sqc2        $vf2, 0x3D0($sp)
    ctx->pc = 0x149004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149008: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x149008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14900c: 0xfba20450  sqc2        $vf2, 0x450($sp)
    ctx->pc = 0x14900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149010: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x149010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149014: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x149014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149018: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x149018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14901c: 0x8fa60460  lw          $a2, 0x460($sp)
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x149020: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x149020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149024: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x149028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14902c: 0xc051bee  jal         func_146FB8
    ctx->pc = 0x14902Cu;
    SET_GPR_U32(ctx, 31, 0x149034u);
    ctx->pc = 0x149030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14902Cu;
            // 0x149030: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146FB8u;
    if (runtime->hasFunction(0x146FB8u)) {
        auto targetFn = runtime->lookupFunction(0x146FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149034u; }
        if (ctx->pc != 0x149034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146FB8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149034u; }
        if (ctx->pc != 0x149034u) { return; }
    }
    ctx->pc = 0x149034u;
    // 0x149034: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x149038: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x149038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14903c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14903Cu;
    {
        const bool branch_taken_0x14903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14903Cu;
            // 0x149040: 0x8fc2c004  lw          $v0, -0x3FFC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14903c) {
            ctx->pc = 0x149068u;
            goto label_149068;
        }
    }
    ctx->pc = 0x149044u;
    // 0x149044: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x149044u;
    {
        const bool branch_taken_0x149044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149044u;
            // 0x149048: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149044) {
            ctx->pc = 0x148FB8u;
            runtime->cooperativeGuestYield();
            goto label_148fb8;
        }
    }
    ctx->pc = 0x14904Cu;
    // 0x14904c: 0x1640ffda  bnez        $s2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x14904Cu;
    {
        const bool branch_taken_0x14904c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14904c) {
            ctx->pc = 0x148FB8u;
            runtime->cooperativeGuestYield();
            goto label_148fb8;
        }
    }
    ctx->pc = 0x149054u;
    // 0x149054: 0x8fa30470  lw          $v1, 0x470($sp)
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x149058: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14905c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x14905Cu;
    {
        const bool branch_taken_0x14905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14905c) {
            ctx->pc = 0x149060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14905Cu;
            // 0x149060: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x148FB8u;
            runtime->cooperativeGuestYield();
            goto label_148fb8;
        }
    }
    ctx->pc = 0x149064u;
    // 0x149064: 0x0  nop
    ctx->pc = 0x149064u;
    // NOP
label_149068:
    // 0x149068: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_14906c:
    // 0x14906c: 0x8e02c004  lw          $v0, -0x3FFC($s0)
    ctx->pc = 0x14906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950916)));
    // 0x149070: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149070u;
    {
        const bool branch_taken_0x149070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149070u;
            // 0x149074: 0x8fa50468  lw          $a1, 0x468($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149070) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x149078u;
    // 0x149078: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x149078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14907c: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x14907cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149080: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x149084: 0x8c45c000  lw          $a1, -0x4000($v0)
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950912)));
    // 0x149088: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x149088u;
    SET_GPR_U32(ctx, 31, 0x149090u);
    ctx->pc = 0x14908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149088u;
            // 0x14908c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149090u; }
        if (ctx->pc != 0x149090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149090u; }
        if (ctx->pc != 0x149090u) { return; }
    }
    ctx->pc = 0x149090u;
    // 0x149090: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x149090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x149094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149094u;
    {
        const bool branch_taken_0x149094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149094u;
            // 0x149098: 0xae02c004  sw          $v0, -0x3FFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149094) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x14909Cu;
    // 0x14909c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1490a0: 0xacd2c00c  sw          $s2, -0x3FF4($a2)
    ctx->pc = 0x1490a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950924), GPR_U32(ctx, 18));
label_1490a4:
    // 0x1490a4: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x1490a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_1490a8:
    // 0x1490a8: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x1490a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1490ac: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x1490acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1490b0: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x1490b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1490b4: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1490b8: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x1490b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1490bc: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x1490bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1490c0: 0x7bb704a0  lq          $s7, 0x4A0($sp)
    ctx->pc = 0x1490c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1490c4: 0x7bbe0490  lq          $fp, 0x490($sp)
    ctx->pc = 0x1490c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1490c8: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x1490c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1490cc: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x1490ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1490d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1490D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490D0u;
            // 0x1490d4: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148524u: goto label_148524;
            case 0x148528u: goto label_148528;
            case 0x1485ACu: goto label_1485ac;
            case 0x1485C4u: goto label_1485c4;
            case 0x1485D4u: goto label_1485d4;
            case 0x1485F8u: goto label_1485f8;
            case 0x14860Cu: goto label_14860c;
            case 0x14862Cu: goto label_14862c;
            case 0x148634u: goto label_148634;
            case 0x148654u: goto label_148654;
            case 0x14867Cu: goto label_14867c;
            case 0x148680u: goto label_148680;
            case 0x148688u: goto label_148688;
            case 0x1486A4u: goto label_1486a4;
            case 0x1486ACu: goto label_1486ac;
            case 0x1486C8u: goto label_1486c8;
            case 0x1486CCu: goto label_1486cc;
            case 0x1486D0u: goto label_1486d0;
            case 0x1486D4u: goto label_1486d4;
            case 0x14870Cu: goto label_14870c;
            case 0x148730u: goto label_148730;
            case 0x148740u: goto label_148740;
            case 0x148768u: goto label_148768;
            case 0x148784u: goto label_148784;
            case 0x1487B0u: goto label_1487b0;
            case 0x1487ECu: goto label_1487ec;
            case 0x1487F4u: goto label_1487f4;
            case 0x148800u: goto label_148800;
            case 0x1489C8u: goto label_1489c8;
            case 0x148D70u: goto label_148d70;
            case 0x148D7Cu: goto label_148d7c;
            case 0x148E48u: goto label_148e48;
            case 0x148E4Cu: goto label_148e4c;
            case 0x148E50u: goto label_148e50;
            case 0x148E88u: goto label_148e88;
            case 0x148E9Cu: goto label_148e9c;
            case 0x148F68u: goto label_148f68;
            case 0x148F6Cu: goto label_148f6c;
            case 0x148FB8u: goto label_148fb8;
            case 0x149068u: goto label_149068;
            case 0x14906Cu: goto label_14906c;
            case 0x1490A4u: goto label_1490a4;
            case 0x1490A8u: goto label_1490a8;
            case 0x149118u: goto label_149118;
            case 0x149138u: goto label_149138;
            case 0x149150u: goto label_149150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1490D8u;
    // 0x1490d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1490d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1490dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1490dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1490e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1490e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1490e4: 0x2442f480  addiu       $v0, $v0, -0xB80
    ctx->pc = 0x1490e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964352));
    // 0x1490e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1490e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1490ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1490ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1490f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1490f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1490f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1490f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1490f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1490fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1490FCu;
    {
        const bool branch_taken_0x1490fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490FCu;
            // 0x149100: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490fc) {
            ctx->pc = 0x149118u;
            goto label_149118;
        }
    }
    ctx->pc = 0x149104u;
    // 0x149104: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x149104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x149108: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149108u;
    {
        const bool branch_taken_0x149108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x149108) {
            ctx->pc = 0x149118u;
            goto label_149118;
        }
    }
    ctx->pc = 0x149110u;
    // 0x149110: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x149110u;
    SET_GPR_U32(ctx, 31, 0x149118u);
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149118u; }
        if (ctx->pc != 0x149118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149118u; }
        if (ctx->pc != 0x149118u) { return; }
    }
    ctx->pc = 0x149118u;
label_149118:
    // 0x149118: 0xc0524d0  jal         func_149340
    ctx->pc = 0x149118u;
    SET_GPR_U32(ctx, 31, 0x149120u);
    ctx->pc = 0x14911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149118u;
            // 0x14911c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149340u;
    if (runtime->hasFunction(0x149340u)) {
        auto targetFn = runtime->lookupFunction(0x149340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149120u; }
        if (ctx->pc != 0x149120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149340_0x149340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149120u; }
        if (ctx->pc != 0x149120u) { return; }
    }
    ctx->pc = 0x149120u;
    // 0x149120: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x149124: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149124u;
    {
        const bool branch_taken_0x149124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149124u;
            // 0x149128: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149124) {
            ctx->pc = 0x149138u;
            goto label_149138;
        }
    }
    ctx->pc = 0x14912Cu;
    // 0x14912c: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x14912Cu;
    SET_GPR_U32(ctx, 31, 0x149134u);
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149134u; }
        if (ctx->pc != 0x149134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149134u; }
        if (ctx->pc != 0x149134u) { return; }
    }
    ctx->pc = 0x149134u;
    // 0x149134: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_149138:
    // 0x149138: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14913c: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x149140: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149140u;
    {
        const bool branch_taken_0x149140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149140u;
            // 0x149144: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149140) {
            ctx->pc = 0x149150u;
            goto label_149150;
        }
    }
    ctx->pc = 0x149148u;
    // 0x149148: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x149148u;
    SET_GPR_U32(ctx, 31, 0x149150u);
    ctx->pc = 0x14914Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149148u;
            // 0x14914c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149150u; }
        if (ctx->pc != 0x149150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149150u; }
        if (ctx->pc != 0x149150u) { return; }
    }
    ctx->pc = 0x149150u;
label_149150:
    // 0x149150: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14915c: 0x3e00008  jr          $ra
    ctx->pc = 0x14915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14915Cu;
            // 0x149160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148524u: goto label_148524;
            case 0x148528u: goto label_148528;
            case 0x1485ACu: goto label_1485ac;
            case 0x1485C4u: goto label_1485c4;
            case 0x1485D4u: goto label_1485d4;
            case 0x1485F8u: goto label_1485f8;
            case 0x14860Cu: goto label_14860c;
            case 0x14862Cu: goto label_14862c;
            case 0x148634u: goto label_148634;
            case 0x148654u: goto label_148654;
            case 0x14867Cu: goto label_14867c;
            case 0x148680u: goto label_148680;
            case 0x148688u: goto label_148688;
            case 0x1486A4u: goto label_1486a4;
            case 0x1486ACu: goto label_1486ac;
            case 0x1486C8u: goto label_1486c8;
            case 0x1486CCu: goto label_1486cc;
            case 0x1486D0u: goto label_1486d0;
            case 0x1486D4u: goto label_1486d4;
            case 0x14870Cu: goto label_14870c;
            case 0x148730u: goto label_148730;
            case 0x148740u: goto label_148740;
            case 0x148768u: goto label_148768;
            case 0x148784u: goto label_148784;
            case 0x1487B0u: goto label_1487b0;
            case 0x1487ECu: goto label_1487ec;
            case 0x1487F4u: goto label_1487f4;
            case 0x148800u: goto label_148800;
            case 0x1489C8u: goto label_1489c8;
            case 0x148D70u: goto label_148d70;
            case 0x148D7Cu: goto label_148d7c;
            case 0x148E48u: goto label_148e48;
            case 0x148E4Cu: goto label_148e4c;
            case 0x148E50u: goto label_148e50;
            case 0x148E88u: goto label_148e88;
            case 0x148E9Cu: goto label_148e9c;
            case 0x148F68u: goto label_148f68;
            case 0x148F6Cu: goto label_148f6c;
            case 0x148FB8u: goto label_148fb8;
            case 0x149068u: goto label_149068;
            case 0x14906Cu: goto label_14906c;
            case 0x1490A4u: goto label_1490a4;
            case 0x1490A8u: goto label_1490a8;
            case 0x149118u: goto label_149118;
            case 0x149138u: goto label_149138;
            case 0x149150u: goto label_149150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149164u;
    // 0x149164: 0x0  nop
    ctx->pc = 0x149164u;
    // NOP
}

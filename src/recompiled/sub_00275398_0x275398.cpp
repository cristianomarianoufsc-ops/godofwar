#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275398
// Address: 0x275398 - 0x2755b8
void sub_00275398_0x275398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275398_0x275398");
#endif

    ctx->pc = 0x275398u;

    // 0x275398: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x275398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27539c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x27539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2753a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2753a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2753a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2753a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2753a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2753a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2753ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2753acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2753b0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2753b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2753b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753b8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2753b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2753bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2753bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2753c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2753c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2753c4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2753c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2753c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2753cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2753ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2753d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2753d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2753d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2753d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2753d8: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x2753d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
    // 0x2753dc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2753DCu;
    {
        const bool branch_taken_0x2753dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2753DCu;
            // 0x2753e0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753dc) {
            ctx->pc = 0x27547Cu;
            goto label_27547c;
        }
    }
    ctx->pc = 0x2753E4u;
    // 0x2753e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2753e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2753e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2753e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2753ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2753ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2753f0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2753F0u;
    {
        const bool branch_taken_0x2753f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2753F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2753F0u;
            // 0x2753f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753f0) {
            ctx->pc = 0x27548Cu;
            goto label_27548c;
        }
    }
    ctx->pc = 0x2753F8u;
    // 0x2753f8: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    // 0x2753fc: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x2753fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
    // 0x275400: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x275400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x275404: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
    // 0x275408: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x275408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
    // 0x27540c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_275410:
    // 0x275410: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x275414: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x275414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x275418: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x275418u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x27541c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x27541cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x275420: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x275420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x275424: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x275428: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x27542c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x27542cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x275430: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x275430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x275434: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x275434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x275438: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x275438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x27543c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275440: 0x60f809  jalr        $v1
    ctx->pc = 0x275440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275448u);
        ctx->pc = 0x275444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275440u;
            // 0x275444: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x275448u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275410u: goto label_275410;
            case 0x27547Cu: goto label_27547c;
            case 0x27548Cu: goto label_27548c;
            case 0x275498u: goto label_275498;
            case 0x27549Cu: goto label_27549c;
            case 0x2754D0u: goto label_2754d0;
            case 0x275530u: goto label_275530;
            case 0x275574u: goto label_275574;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x275448u; }
            if (ctx->pc != 0x275448u) { return; }
        }
        }
    }
    ctx->pc = 0x275448u;
    // 0x275448: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x275448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x27544c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x27544cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
    // 0x275450: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275454: 0x40f809  jalr        $v0
    ctx->pc = 0x275454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27545Cu);
        ctx->pc = 0x275458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275454u;
            // 0x275458: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27545Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275410u: goto label_275410;
            case 0x27547Cu: goto label_27547c;
            case 0x27548Cu: goto label_27548c;
            case 0x275498u: goto label_275498;
            case 0x27549Cu: goto label_27549c;
            case 0x2754D0u: goto label_2754d0;
            case 0x275530u: goto label_275530;
            case 0x275574u: goto label_275574;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27545Cu; }
            if (ctx->pc != 0x27545Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27545Cu;
    // 0x27545c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x275460: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x275460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x275464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275468: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x275468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27546c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x27546Cu;
    {
        const bool branch_taken_0x27546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27546Cu;
            // 0x275470: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27546c) {
            ctx->pc = 0x275410u;
            runtime->cooperativeGuestYield();
            goto label_275410;
        }
    }
    ctx->pc = 0x275474u;
    // 0x275474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x275474u;
    {
        const bool branch_taken_0x275474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275474u;
            // 0x275478: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275474) {
            ctx->pc = 0x27549Cu;
            goto label_27549c;
        }
    }
    ctx->pc = 0x27547Cu;
label_27547c:
    // 0x27547c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x27547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    // 0x275480: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
    // 0x275484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275484u;
    {
        const bool branch_taken_0x275484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275484u;
            // 0x275488: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275484) {
            ctx->pc = 0x275498u;
            goto label_275498;
        }
    }
    ctx->pc = 0x27548Cu;
label_27548c:
    // 0x27548c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x27548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    // 0x275490: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
    // 0x275494: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x275494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_275498:
    // 0x275498: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x275498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27549c:
    // 0x27549c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2754a0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2754a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2754a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2754a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2754a8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2754a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2754ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2754acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2754b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2754B0u;
    {
        const bool branch_taken_0x2754b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754B0u;
            // 0x2754b4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754b0) {
            ctx->pc = 0x2754D0u;
            goto label_2754d0;
        }
    }
    ctx->pc = 0x2754B8u;
    // 0x2754b8: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x2754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
    // 0x2754bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2754BCu;
    {
        const bool branch_taken_0x2754bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754BCu;
            // 0x2754c0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754bc) {
            ctx->pc = 0x2754D0u;
            goto label_2754d0;
        }
    }
    ctx->pc = 0x2754C4u;
    // 0x2754c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2754c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754c8: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2754C8u;
    SET_GPR_U32(ctx, 31, 0x2754D0u);
    ctx->pc = 0x2754CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2754C8u;
            // 0x2754cc: 0x24a545b8  addiu       $a1, $a1, 0x45B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754D0u; }
        if (ctx->pc != 0x2754D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754D0u; }
        if (ctx->pc != 0x2754D0u) { return; }
    }
    ctx->pc = 0x2754D0u;
label_2754d0:
    // 0x2754d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2754d4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2754d8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2754d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2754dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2754e0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2754e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2754e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2754e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2754E8u;
    {
        const bool branch_taken_0x2754e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754E8u;
            // 0x2754ec: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754e8) {
            ctx->pc = 0x275530u;
            goto label_275530;
        }
    }
    ctx->pc = 0x2754F0u;
    // 0x2754f0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x2754f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x2754f4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2754f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2754f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2754f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2754fc: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x2754fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
    // 0x275500: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x275500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275504: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x275504u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275508: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x275508u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27550c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27550cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275510: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x275510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275514: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x275514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275518: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x275518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27551c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27551cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275520: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x275520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275524: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x275524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275528: 0x809dbaa  j           func_276EA8
    ctx->pc = 0x275528u;
    ctx->pc = 0x27552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275528u;
            // 0x27552c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276EA8u;
    if (runtime->hasFunction(0x276EA8u)) {
        auto targetFn = runtime->lookupFunction(0x276EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_276ea8_0x276f68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x275530u;
label_275530:
    // 0x275530: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x275530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
    // 0x275534: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x275534u;
    {
        const bool branch_taken_0x275534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275534u;
            // 0x275538: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275534) {
            ctx->pc = 0x275574u;
            goto label_275574;
        }
    }
    ctx->pc = 0x27553Cu;
    // 0x27553c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275540: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x275540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
    // 0x275544: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275548: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x275548u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27554c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27554cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275550: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x275550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275554: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x275554u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275558: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x275558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27555c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27555cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275560: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x275560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275564: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x275564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275568: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x275568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27556c: 0x809dbaa  j           func_276EA8
    ctx->pc = 0x27556Cu;
    ctx->pc = 0x275570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27556Cu;
            // 0x275570: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276EA8u;
    if (runtime->hasFunction(0x276EA8u)) {
        auto targetFn = runtime->lookupFunction(0x276EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_276ea8_0x276f68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x275574u;
label_275574:
    // 0x275574: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x275574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x275578: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x275578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
    // 0x27557c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275580: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x275580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
    // 0x275584: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x275584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275588: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x275588u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27558c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27558cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275590: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x275590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275594: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x275594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275598: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x275598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27559c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27559cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2755a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2755a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2755a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2755a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2755a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2755a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2755ac: 0x809db6e  j           func_276DB8
    ctx->pc = 0x2755ACu;
    ctx->pc = 0x2755B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2755ACu;
            // 0x2755b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276DB8u;
    if (runtime->hasFunction(0x276DB8u)) {
        auto targetFn = runtime->lookupFunction(0x276DB8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_276db8_0x276ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2755B4u;
    // 0x2755b4: 0x0  nop
    ctx->pc = 0x2755b4u;
    // NOP
}

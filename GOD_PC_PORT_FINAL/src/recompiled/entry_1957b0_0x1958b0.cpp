#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1957b0
// Address: 0x1957b0 - 0x1958b0
void entry_1957b0_0x1958b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1957b0_0x1958b0");
#endif

    ctx->pc = 0x1957b0u;

    // 0x1957b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1957b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1957b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1957bc: 0x8c44e184  lw          $a0, -0x1E7C($v0)
    ctx->pc = 0x1957bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959492)));
    // 0x1957c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1957c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1957c4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1957C4u;
    SET_GPR_U32(ctx, 31, 0x1957CCu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957CCu; }
        if (ctx->pc != 0x1957CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957CCu; }
        if (ctx->pc != 0x1957CCu) { return; }
    }
    ctx->pc = 0x1957CCu;
    // 0x1957cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1957ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1957D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1957D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957D0u;
            // 0x1957d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195818u: goto label_195818;
            case 0x195844u: goto label_195844;
            case 0x195880u: goto label_195880;
            case 0x195884u: goto label_195884;
            case 0x1958A0u: goto label_1958a0;
            case 0x1958A4u: goto label_1958a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1957D8u;
    // 0x1957d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1957d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1957dc: 0x8c4477b4  lw          $a0, 0x77B4($v0)
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1957e0: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1957E0u;
    {
        const bool branch_taken_0x1957e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957E0u;
            // 0x1957e4: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957e0) {
            ctx->pc = 0x1958A0u;
            goto label_1958a0;
        }
    }
    ctx->pc = 0x1957E8u;
    // 0x1957e8: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1957ec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1957ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1957f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1957f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1957f4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1957F4u;
    {
        const bool branch_taken_0x1957f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957F4u;
            // 0x1957f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957f4) {
            ctx->pc = 0x1958A4u;
            goto label_1958a4;
        }
    }
    ctx->pc = 0x1957FCu;
    // 0x1957fc: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1957fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x195800: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x195800u;
    {
        const bool branch_taken_0x195800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195800u;
            // 0x195804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195800) {
            ctx->pc = 0x195844u;
            goto label_195844;
        }
    }
    ctx->pc = 0x195808u;
    // 0x195808: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x195808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19580c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195810: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x195810u;
    {
        const bool branch_taken_0x195810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x195814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195810u;
            // 0x195814: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195810) {
            ctx->pc = 0x195844u;
            goto label_195844;
        }
    }
    ctx->pc = 0x195818u;
label_195818:
    // 0x195818: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x195818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19581c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19581cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195820: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x195820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x195824: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x195824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x195828: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x195828u;
    {
        const bool branch_taken_0x195828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195828) {
            ctx->pc = 0x19582Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195828u;
            // 0x19582c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195844u;
            goto label_195844;
        }
    }
    ctx->pc = 0x195830u;
    // 0x195830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195834: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195838: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x195838u;
    {
        const bool branch_taken_0x195838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195838u;
            // 0x19583c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195838) {
            ctx->pc = 0x195818u;
            runtime->cooperativeGuestYield();
            goto label_195818;
        }
    }
    ctx->pc = 0x195840u;
    // 0x195840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195844:
    // 0x195844: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x195844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x195848: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x195848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x19584c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19584Cu;
    {
        const bool branch_taken_0x19584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19584Cu;
            // 0x195850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19584c) {
            ctx->pc = 0x195884u;
            goto label_195884;
        }
    }
    ctx->pc = 0x195854u;
    // 0x195854: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195858: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x19585c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19585cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x195860: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x195864: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x195868: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19586c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195874: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x195874u;
    {
        const bool branch_taken_0x195874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x195878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195874u;
            // 0x195878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195874) {
            ctx->pc = 0x195880u;
            goto label_195880;
        }
    }
    ctx->pc = 0x19587Cu;
    // 0x19587c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x19587cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_195880:
    // 0x195880: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x195880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195884:
    // 0x195884: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x195888: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x195888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19588c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x195890: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x195890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x195894: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195894u;
    {
        const bool branch_taken_0x195894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195894u;
            // 0x195898: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195894) {
            ctx->pc = 0x1958A4u;
            goto label_1958a4;
        }
    }
    ctx->pc = 0x19589Cu;
    // 0x19589c: 0x0  nop
    ctx->pc = 0x19589cu;
    // NOP
label_1958a0:
    // 0x1958a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1958a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1958a4:
    // 0x1958a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1958A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958A4u;
            // 0x1958a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195818u: goto label_195818;
            case 0x195844u: goto label_195844;
            case 0x195880u: goto label_195880;
            case 0x195884u: goto label_195884;
            case 0x1958A0u: goto label_1958a0;
            case 0x1958A4u: goto label_1958a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1958ACu;
    // 0x1958ac: 0x0  nop
    ctx->pc = 0x1958acu;
    // NOP
}

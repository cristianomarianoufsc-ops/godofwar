#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107390
// Address: 0x107390 - 0x107440
void sub_00107390_0x107390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107390_0x107390");
#endif

    ctx->pc = 0x107390u;

    // 0x107390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x107394: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x107394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x107398: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x107398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10739c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10739cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073a0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1073a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1073a4: 0x24950014  addiu       $s5, $a0, 0x14
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1073a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1073a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1073ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1073acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1073b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1073b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1073b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1073b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1073b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1073b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1073bc: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x1073bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1073c0: 0x12550014  beq         $s2, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x1073C0u;
    {
        const bool branch_taken_0x1073c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1073C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1073C0u;
            // 0x1073c4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073c0) {
            ctx->pc = 0x107414u;
            goto label_107414;
        }
    }
    ctx->pc = 0x1073C8u;
    // 0x1073c8: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x1073c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1073cc: 0x0  nop
    ctx->pc = 0x1073ccu;
    // NOP
label_1073d0:
    // 0x1073d0: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x1073d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1073d4: 0x5233000d  beql        $s1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1073D4u;
    {
        const bool branch_taken_0x1073d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x1073d4) {
            ctx->pc = 0x1073D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1073D4u;
            // 0x1073d8: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10740Cu;
            goto label_10740c;
        }
    }
    ctx->pc = 0x1073DCu;
    // 0x1073dc: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x1073dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1073e0:
    // 0x1073e0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1073E0u;
    {
        const bool branch_taken_0x1073e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073e0) {
            ctx->pc = 0x1073E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1073E0u;
            // 0x1073e4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107400u;
            goto label_107400;
        }
    }
    ctx->pc = 0x1073E8u;
    // 0x1073e8: 0xc04f870  jal         func_13E1C0
    ctx->pc = 0x1073E8u;
    SET_GPR_U32(ctx, 31, 0x1073F0u);
    ctx->pc = 0x1073ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1073E8u;
            // 0x1073ec: 0x8ed00074  lw          $s0, 0x74($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C0u;
    if (runtime->hasFunction(0x13E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1073F0u; }
        if (ctx->pc != 0x1073F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1c0_0x13e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1073F0u; }
        if (ctx->pc != 0x1073F0u) { return; }
    }
    ctx->pc = 0x1073F0u;
    // 0x1073f0: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1073f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1073f4: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x1073f4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1073f8: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x1073f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x1073fc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1073fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_107400:
    // 0x107400: 0x5633fff7  bnel        $s1, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x107400u;
    {
        const bool branch_taken_0x107400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x107400) {
            ctx->pc = 0x107404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107400u;
            // 0x107404: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1073E0u;
            runtime->cooperativeGuestYield();
            goto label_1073e0;
        }
    }
    ctx->pc = 0x107408u;
    // 0x107408: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x107408u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10740c:
    // 0x10740c: 0x5655fff0  bnel        $s2, $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10740Cu;
    {
        const bool branch_taken_0x10740c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x10740c) {
            ctx->pc = 0x107410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10740Cu;
            // 0x107410: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1073D0u;
            runtime->cooperativeGuestYield();
            goto label_1073d0;
        }
    }
    ctx->pc = 0x107414u;
label_107414:
    // 0x107414: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x107414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107418: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x107418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10741c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10741cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107420: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x107420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107424: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x107424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107428: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x107428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10742c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10742cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107430: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x107430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107438: 0x3e00008  jr          $ra
    ctx->pc = 0x107438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107438u;
            // 0x10743c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1073D0u: goto label_1073d0;
            case 0x1073E0u: goto label_1073e0;
            case 0x107400u: goto label_107400;
            case 0x10740Cu: goto label_10740c;
            case 0x107414u: goto label_107414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107440u;
}

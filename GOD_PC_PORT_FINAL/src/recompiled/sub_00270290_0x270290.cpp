#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270290
// Address: 0x270290 - 0x270350
void sub_00270290_0x270290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270290_0x270290");
#endif

    ctx->pc = 0x270290u;

    // 0x270290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270294: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x270294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27029c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27029Cu;
    {
        const bool branch_taken_0x27029c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x27029c) {
            ctx->pc = 0x2702A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27029Cu;
            // 0x2702a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2702A4u;
            goto label_2702a4;
        }
    }
    ctx->pc = 0x2702A4u;
label_2702a4:
    // 0x2702a4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2702a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2702a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2702a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2702ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2702acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2702b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2702b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2702b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2702b8: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x2702b8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2702bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2702bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2702c0: 0x1012  mflo        $v0
    ctx->pc = 0x2702c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2702c4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2702c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2702c8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2702c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2702cc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2702ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2702d0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2702D0u;
    {
        const bool branch_taken_0x2702d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2702d0) {
            ctx->pc = 0x2702D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2702D0u;
            // 0x2702d4: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2702E0u;
            goto label_2702e0;
        }
    }
    ctx->pc = 0x2702D8u;
    // 0x2702d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2702D8u;
    {
        const bool branch_taken_0x2702d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2702D8u;
            // 0x2702dc: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702d8) {
            ctx->pc = 0x2702F0u;
            goto label_2702f0;
        }
    }
    ctx->pc = 0x2702E0u;
label_2702e0:
    // 0x2702e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2702e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702e4: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2702E4u;
    SET_GPR_U32(ctx, 31, 0x2702ECu);
    ctx->pc = 0x2702E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2702E4u;
            // 0x2702e8: 0x24a54438  addiu       $a1, $a1, 0x4438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702ECu; }
        if (ctx->pc != 0x2702ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702ECu; }
        if (ctx->pc != 0x2702ECu) { return; }
    }
    ctx->pc = 0x2702ECu;
    // 0x2702ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2702ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2702f0:
    // 0x2702f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2702f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2702f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2702F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2702F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2702F4u;
            // 0x2702f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2702A4u: goto label_2702a4;
            case 0x2702E0u: goto label_2702e0;
            case 0x2702F0u: goto label_2702f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2702FCu;
    // 0x2702fc: 0x0  nop
    ctx->pc = 0x2702fcu;
    // NOP
    // 0x270300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270308: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x270308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x27030c: 0xc09e4ba  jal         func_2792E8
    ctx->pc = 0x27030Cu;
    SET_GPR_U32(ctx, 31, 0x270314u);
    ctx->pc = 0x270310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27030Cu;
            // 0x270310: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2792E8u;
    if (runtime->hasFunction(0x2792E8u)) {
        auto targetFn = runtime->lookupFunction(0x2792E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270314u; }
        if (ctx->pc != 0x270314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002792E8_0x2792e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270314u; }
        if (ctx->pc != 0x270314u) { return; }
    }
    ctx->pc = 0x270314u;
    // 0x270314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27031c: 0x3e00008  jr          $ra
    ctx->pc = 0x27031Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27031Cu;
            // 0x270320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2702A4u: goto label_2702a4;
            case 0x2702E0u: goto label_2702e0;
            case 0x2702F0u: goto label_2702f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270324u;
    // 0x270324: 0x0  nop
    ctx->pc = 0x270324u;
    // NOP
    // 0x270328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27032c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270330: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x270330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x270334: 0xc09e4f4  jal         func_2793D0
    ctx->pc = 0x270334u;
    SET_GPR_U32(ctx, 31, 0x27033Cu);
    ctx->pc = 0x270338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270334u;
            // 0x270338: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2793D0u;
    if (runtime->hasFunction(0x2793D0u)) {
        auto targetFn = runtime->lookupFunction(0x2793D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27033Cu; }
        if (ctx->pc != 0x27033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002793D0_0x2793d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27033Cu; }
        if (ctx->pc != 0x27033Cu) { return; }
    }
    ctx->pc = 0x27033Cu;
    // 0x27033c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270344: 0x3e00008  jr          $ra
    ctx->pc = 0x270344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270344u;
            // 0x270348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2702A4u: goto label_2702a4;
            case 0x2702E0u: goto label_2702e0;
            case 0x2702F0u: goto label_2702f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27034Cu;
    // 0x27034c: 0x0  nop
    ctx->pc = 0x27034cu;
    // NOP
}

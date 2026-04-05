#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001752E8
// Address: 0x1752e8 - 0x175380
void sub_001752E8_0x1752e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001752E8_0x1752e8");
#endif

    ctx->pc = 0x1752e8u;

    // 0x1752e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1752e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1752ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1752ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1752f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1752f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1752f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1752f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1752f8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1752F8u;
    SET_GPR_U32(ctx, 31, 0x175300u);
    ctx->pc = 0x1752FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752F8u;
            // 0x1752fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175300u; }
        if (ctx->pc != 0x175300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175300u; }
        if (ctx->pc != 0x175300u) { return; }
    }
    ctx->pc = 0x175300u;
    // 0x175300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175304: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x175304u;
    {
        const bool branch_taken_0x175304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x175308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175304u;
            // 0x175308: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175304) {
            ctx->pc = 0x175358u;
            goto label_175358;
        }
    }
    ctx->pc = 0x17530Cu;
    // 0x17530c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x17530Cu;
    SET_GPR_U32(ctx, 31, 0x175314u);
    ctx->pc = 0x175310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17530Cu;
            // 0x175310: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175314u; }
        if (ctx->pc != 0x175314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175314u; }
        if (ctx->pc != 0x175314u) { return; }
    }
    ctx->pc = 0x175314u;
    // 0x175314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175318: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x175318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17531c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175320: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x175320u;
    SET_GPR_U32(ctx, 31, 0x175328u);
    ctx->pc = 0x175324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175320u;
            // 0x175324: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175328u; }
        if (ctx->pc != 0x175328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175328u; }
        if (ctx->pc != 0x175328u) { return; }
    }
    ctx->pc = 0x175328u;
    // 0x175328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17532c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175330: 0xc05cd30  jal         func_1734C0
    ctx->pc = 0x175330u;
    SET_GPR_U32(ctx, 31, 0x175338u);
    ctx->pc = 0x175334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175330u;
            // 0x175334: 0xa3a00017  sb          $zero, 0x17($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734C0u;
    if (runtime->hasFunction(0x1734C0u)) {
        auto targetFn = runtime->lookupFunction(0x1734C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175338u; }
        if (ctx->pc != 0x175338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001734C0_0x1734c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175338u; }
        if (ctx->pc != 0x175338u) { return; }
    }
    ctx->pc = 0x175338u;
    // 0x175338: 0xc05d656  jal         func_175958
    ctx->pc = 0x175338u;
    SET_GPR_U32(ctx, 31, 0x175340u);
    ctx->pc = 0x17533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175338u;
            // 0x17533c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175340u; }
        if (ctx->pc != 0x175340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175340u; }
        if (ctx->pc != 0x175340u) { return; }
    }
    ctx->pc = 0x175340u;
    // 0x175340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175348: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x175348u;
    SET_GPR_U32(ctx, 31, 0x175350u);
    ctx->pc = 0x17534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175348u;
            // 0x17534c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175350u; }
        if (ctx->pc != 0x175350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175350u; }
        if (ctx->pc != 0x175350u) { return; }
    }
    ctx->pc = 0x175350u;
    // 0x175350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175354: 0x0  nop
    ctx->pc = 0x175354u;
    // NOP
label_175358:
    // 0x175358: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17535c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17535cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175364: 0x3e00008  jr          $ra
    ctx->pc = 0x175364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175364u;
            // 0x175368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175358u: goto label_175358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17536Cu;
    // 0x17536c: 0x0  nop
    ctx->pc = 0x17536cu;
    // NOP
    // 0x175370: 0x3e00008  jr          $ra
    ctx->pc = 0x175370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175358u: goto label_175358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175378u;
    // 0x175378: 0x3e00008  jr          $ra
    ctx->pc = 0x175378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175358u: goto label_175358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175380u;
}

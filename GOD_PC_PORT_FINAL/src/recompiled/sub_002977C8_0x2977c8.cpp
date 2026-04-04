#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002977C8
// Address: 0x2977c8 - 0x2978b8
void sub_002977C8_0x2977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002977C8_0x2977c8");
#endif

    ctx->pc = 0x2977c8u;

    // 0x2977c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2977cc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2977ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2977d0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2977d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2977d4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2977d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977d8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2977d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2977dc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2977dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977e0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2977e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2977e4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2977e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2977e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2977ec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2977ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977f0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2977f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2977f4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2977f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2977f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2977fc: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2977fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297800: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x297800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x297804: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x297804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297808: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x297808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x29780c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29780cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297810: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x297810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297814: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x297814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x297818: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x297818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x29781c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_297820:
    // 0x297820: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x297820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x297824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297828: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x297828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29782c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x29782cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x297830: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x297830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297834: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x297834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x297838: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x297838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29783c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x29783cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297840: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x297840u;
    SET_GPR_U32(ctx, 31, 0x297848u);
    ctx->pc = 0x297844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297840u;
            // 0x297844: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297848u; }
        if (ctx->pc != 0x297848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297848u; }
        if (ctx->pc != 0x297848u) { return; }
    }
    ctx->pc = 0x297848u;
    // 0x297848: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29784c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29784Cu;
    {
        const bool branch_taken_0x29784c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29784Cu;
            // 0x297850: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29784c) {
            ctx->pc = 0x297880u;
            goto label_297880;
        }
    }
    ctx->pc = 0x297854u;
    // 0x297854: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x297854u;
    {
        const bool branch_taken_0x297854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297854u;
            // 0x297858: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297854) {
            ctx->pc = 0x297880u;
            goto label_297880;
        }
    }
    ctx->pc = 0x29785Cu;
    // 0x29785c: 0xc0a528c  jal         func_294A30
    ctx->pc = 0x29785Cu;
    SET_GPR_U32(ctx, 31, 0x297864u);
    ctx->pc = 0x297860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29785Cu;
            // 0x297860: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x294A30u;
    if (runtime->hasFunction(0x294A30u)) {
        auto targetFn = runtime->lookupFunction(0x294A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297864u; }
        if (ctx->pc != 0x297864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294a30_0x294af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297864u; }
        if (ctx->pc != 0x297864u) { return; }
    }
    ctx->pc = 0x297864u;
    // 0x297864: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x297864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x297868: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297868u;
    {
        const bool branch_taken_0x297868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297868) {
            ctx->pc = 0x29786Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297868u;
            // 0x29786c: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297870u;
            goto label_297870;
        }
    }
    ctx->pc = 0x297870u;
label_297870:
    // 0x297870: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x297874: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x297874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x297878: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x297878u;
    {
        const bool branch_taken_0x297878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297878u;
            // 0x29787c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297878) {
            ctx->pc = 0x297820u;
            runtime->cooperativeGuestYield();
            goto label_297820;
        }
    }
    ctx->pc = 0x297880u;
label_297880:
    // 0x297880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297884: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x297884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297888: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x297888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29788c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x29788cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297890: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x297890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297894: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x297894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297898: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x297898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29789c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x29789cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2978a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2978a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2978a4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2978a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2978a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2978a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2978ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2978B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978ACu;
            // 0x2978b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297820u: goto label_297820;
            case 0x297870u: goto label_297870;
            case 0x297880u: goto label_297880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2978B4u;
    // 0x2978b4: 0x0  nop
    ctx->pc = 0x2978b4u;
    // NOP
}

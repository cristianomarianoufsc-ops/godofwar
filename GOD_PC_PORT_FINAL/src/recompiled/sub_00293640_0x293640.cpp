#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00293640
// Address: 0x293640 - 0x293708
void sub_00293640_0x293640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293640_0x293640");
#endif

    ctx->pc = 0x293640u;

    // 0x293640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x293640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x293644: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x293644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x293648: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x293648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29364c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29364cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293650: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x293650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293654: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29365c: 0xc0a4cca  jal         func_293328
    ctx->pc = 0x29365Cu;
    SET_GPR_U32(ctx, 31, 0x293664u);
    ctx->pc = 0x293660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29365Cu;
            // 0x293660: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293328u;
    if (runtime->hasFunction(0x293328u)) {
        auto targetFn = runtime->lookupFunction(0x293328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293664u; }
        if (ctx->pc != 0x293664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293328_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293664u; }
        if (ctx->pc != 0x293664u) { return; }
    }
    ctx->pc = 0x293664u;
    // 0x293664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293668: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x293668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x29366c: 0xc0a4cca  jal         func_293328
    ctx->pc = 0x29366Cu;
    SET_GPR_U32(ctx, 31, 0x293674u);
    ctx->pc = 0x293670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29366Cu;
            // 0x293670: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293328u;
    if (runtime->hasFunction(0x293328u)) {
        auto targetFn = runtime->lookupFunction(0x293328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293674u; }
        if (ctx->pc != 0x293674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293328_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293674u; }
        if (ctx->pc != 0x293674u) { return; }
    }
    ctx->pc = 0x293674u;
    // 0x293674: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x293674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x293678: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x293678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29367c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x29367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293680: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x293680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293684: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x293684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x293688: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x293688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29368c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29368cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x293690: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x293694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293698: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293698u;
    {
        const bool branch_taken_0x293698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293698u;
            // 0x29369c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293698) {
            ctx->pc = 0x2936C0u;
            goto label_2936c0;
        }
    }
    ctx->pc = 0x2936A0u;
    // 0x2936a0: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x2936a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2936a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2936a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2936a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2936a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2936ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2936acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2936b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2936b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2936b4: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x2936b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x2936b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2936B8u;
    {
        const bool branch_taken_0x2936b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2936BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936B8u;
            // 0x2936bc: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936b8) {
            ctx->pc = 0x2936DCu;
            goto label_2936dc;
        }
    }
    ctx->pc = 0x2936C0u;
label_2936c0:
    // 0x2936c0: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x2936c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2936c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2936c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2936c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2936c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2936cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2936ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2936d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2936d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2936d4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2936d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2936d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2936d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2936dc:
    // 0x2936dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2936dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936e0: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x2936E0u;
    SET_GPR_U32(ctx, 31, 0x2936E8u);
    ctx->pc = 0x2936E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2936E0u;
            // 0x2936e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936E8u; }
        if (ctx->pc != 0x2936E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936E8u; }
        if (ctx->pc != 0x2936E8u) { return; }
    }
    ctx->pc = 0x2936E8u;
    // 0x2936e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2936e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2936ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2936ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2936f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2936f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2936f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2936f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2936f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2936F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2936FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936F8u;
            // 0x2936fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2936C0u: goto label_2936c0;
            case 0x2936DCu: goto label_2936dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293700u;
    // 0x293700: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x293700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293704: 0x0  nop
    ctx->pc = 0x293704u;
    // NOP
}

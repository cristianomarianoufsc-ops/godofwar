#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002801D0
// Address: 0x2801d0 - 0x2803c0
void sub_002801D0_0x2801d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002801D0_0x2801d0");
#endif

    ctx->pc = 0x2801d0u;

    // 0x2801d0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2801d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x2801d4: 0xffb70300  sd          $s7, 0x300($sp)
    ctx->pc = 0x2801d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 23));
    // 0x2801d8: 0xffb302c0  sd          $s3, 0x2C0($sp)
    ctx->pc = 0x2801d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 19));
    // 0x2801dc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2801dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801e0: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x2801e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x2801e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2801e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801e8: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x2801e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2801ec: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2801ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2801f0: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x2801f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x2801f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2801f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2801f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2801fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280200: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x280200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x280204: 0xffbe0310  sd          $fp, 0x310($sp)
    ctx->pc = 0x280204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 30));
    // 0x280208: 0xffb602f0  sd          $s6, 0x2F0($sp)
    ctx->pc = 0x280208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 22));
    // 0x28020c: 0xffb502e0  sd          $s5, 0x2E0($sp)
    ctx->pc = 0x28020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 21));
    // 0x280210: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x280210u;
    SET_GPR_U32(ctx, 31, 0x280218u);
    ctx->pc = 0x280214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280210u;
            // 0x280214: 0xffb402d0  sd          $s4, 0x2D0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280218u; }
        if (ctx->pc != 0x280218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280218u; }
        if (ctx->pc != 0x280218u) { return; }
    }
    ctx->pc = 0x280218u;
    // 0x280218: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x280218u;
    {
        const bool branch_taken_0x280218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280218u;
            // 0x28021c: 0xdfbf0320  ld          $ra, 0x320($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280218) {
            ctx->pc = 0x280394u;
            goto label_280394;
        }
    }
    ctx->pc = 0x280220u;
    // 0x280220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280224: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x280224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280228: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x280228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28022c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28022cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280230: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x280230u;
    SET_GPR_U32(ctx, 31, 0x280238u);
    ctx->pc = 0x280234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280230u;
            // 0x280234: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280238u; }
        if (ctx->pc != 0x280238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280238u; }
        if (ctx->pc != 0x280238u) { return; }
    }
    ctx->pc = 0x280238u;
    // 0x280238: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x280238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x28023c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x28023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x280240: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x280240u;
    {
        const bool branch_taken_0x280240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280240u;
            // 0x280244: 0xdfbf0320  ld          $ra, 0x320($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280240) {
            ctx->pc = 0x280394u;
            goto label_280394;
        }
    }
    ctx->pc = 0x280248u;
    // 0x280248: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x280248u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28024c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x28024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x280250: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280250u;
    {
        const bool branch_taken_0x280250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280250) {
            ctx->pc = 0x280264u;
            goto label_280264;
        }
    }
    ctx->pc = 0x280258u;
    // 0x280258: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x280258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x28025c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28025Cu;
    {
        const bool branch_taken_0x28025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28025c) {
            ctx->pc = 0x280260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28025Cu;
            // 0x280260: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x280270u;
            goto label_280270;
        }
    }
    ctx->pc = 0x280264u;
label_280264:
    // 0x280264: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280268: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x280268u;
    {
        const bool branch_taken_0x280268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280268u;
            // 0x28026c: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280268) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x280270u;
label_280270:
    // 0x280270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280270u;
    {
        const bool branch_taken_0x280270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280270u;
            // 0x280274: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280270) {
            ctx->pc = 0x280284u;
            goto label_280284;
        }
    }
    ctx->pc = 0x280278u;
    // 0x280278: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x28027c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28027Cu;
    {
        const bool branch_taken_0x28027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28027Cu;
            // 0x280280: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28027c) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x280284u;
label_280284:
    // 0x280284: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x280284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x280288: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280288u;
    {
        const bool branch_taken_0x280288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280288u;
            // 0x28028c: 0x901823  subu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280288) {
            ctx->pc = 0x2802D0u;
            goto label_2802d0;
        }
    }
    ctx->pc = 0x280290u;
    // 0x280290: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280294: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x280294u;
    {
        const bool branch_taken_0x280294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280294u;
            // 0x280298: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280294) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x28029Cu;
label_28029c:
    // 0x28029c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2802a0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2802A0u;
    {
        const bool branch_taken_0x2802a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802A0u;
            // 0x2802a4: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802a0) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x2802A8u;
label_2802a8:
    // 0x2802a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2802a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802ac: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2802ACu;
    SET_GPR_U32(ctx, 31, 0x2802B4u);
    ctx->pc = 0x2802B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802ACu;
            // 0x2802b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802B4u; }
        if (ctx->pc != 0x2802B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802B4u; }
        if (ctx->pc != 0x2802B4u) { return; }
    }
    ctx->pc = 0x2802B4u;
    // 0x2802b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2802B4u;
    {
        const bool branch_taken_0x2802b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802B4u;
            // 0x2802b8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802b4) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x2802BCu;
label_2802bc:
    // 0x2802bc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2802BCu;
    {
        const bool branch_taken_0x2802bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802BCu;
            // 0x2802c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802bc) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x2802C4u;
label_2802c4:
    // 0x2802c4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2802c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2802c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2802C8u;
    {
        const bool branch_taken_0x2802c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802C8u;
            // 0x2802cc: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802c8) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x2802D0u;
label_2802d0:
    // 0x2802d0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2802d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802d4: 0x72900a  movz        $s2, $v1, $s2
    ctx->pc = 0x2802d4u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x2802d8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2802dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2802dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2802e0: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x2802e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x2802e4: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x2802e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802e8: 0x13c00028  beqz        $fp, . + 4 + (0x28 << 2)
    ctx->pc = 0x2802E8u;
    {
        const bool branch_taken_0x2802e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2802E8u;
            // 0x2802ec: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802e8) {
            ctx->pc = 0x28038Cu;
            goto label_28038c;
        }
    }
    ctx->pc = 0x2802F0u;
    // 0x2802f0: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2802f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2802f4: 0x3c157fff  lui         $s5, 0x7FFF
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32767 << 16));
    // 0x2802f8: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x2802f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x2802fc: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x2802fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_280300:
    // 0x280300: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x280300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x280304: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x280304u;
    {
        const bool branch_taken_0x280304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280304u;
            // 0x280308: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280304) {
            ctx->pc = 0x28035Cu;
            goto label_28035c;
        }
    }
    ctx->pc = 0x28030Cu;
    // 0x28030c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280310: 0x2453db00  addiu       $s3, $v0, -0x2500
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x280314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x280318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28031c: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x28031Cu;
    SET_GPR_U32(ctx, 31, 0x280324u);
    ctx->pc = 0x280320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28031Cu;
            // 0x280320: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280324u; }
        if (ctx->pc != 0x280324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280324u; }
        if (ctx->pc != 0x280324u) { return; }
    }
    ctx->pc = 0x280324u;
    // 0x280324: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x280324u;
    {
        const bool branch_taken_0x280324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280324u;
            // 0x280328: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280324) {
            ctx->pc = 0x28029Cu;
            runtime->cooperativeGuestYield();
            goto label_28029c;
        }
    }
    ctx->pc = 0x28032Cu;
    // 0x28032c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x280330: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x280334: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x280334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x280338: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x280338u;
    {
        const bool branch_taken_0x280338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280338u;
            // 0x28033c: 0x2132821  addu        $a1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280338) {
            ctx->pc = 0x2802A8u;
            runtime->cooperativeGuestYield();
            goto label_2802a8;
        }
    }
    ctx->pc = 0x280340u;
    // 0x280340: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x280340u;
    SET_GPR_U32(ctx, 31, 0x280348u);
    ctx->pc = 0x280344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280340u;
            // 0x280344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280348u; }
        if (ctx->pc != 0x280348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280348u; }
        if (ctx->pc != 0x280348u) { return; }
    }
    ctx->pc = 0x280348u;
    // 0x280348: 0x26830400  addiu       $v1, $s4, 0x400
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x28034c: 0x2642fc00  addiu       $v0, $s2, -0x400
    ctx->pc = 0x28034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x280350: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x280350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x280354: 0x70a023  subu        $s4, $v1, $s0
    ctx->pc = 0x280354u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x280358: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28035c:
    // 0x28035c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280360: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x280360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280364: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x280364u;
    SET_GPR_U32(ctx, 31, 0x28036Cu);
    ctx->pc = 0x280368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280364u;
            // 0x280368: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28036Cu; }
        if (ctx->pc != 0x28036Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28036Cu; }
        if (ctx->pc != 0x28036Cu) { return; }
    }
    ctx->pc = 0x28036Cu;
    // 0x28036c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x280370: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x280370u;
    {
        const bool branch_taken_0x280370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280370u;
            // 0x280374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280370) {
            ctx->pc = 0x2802BCu;
            runtime->cooperativeGuestYield();
            goto label_2802bc;
        }
    }
    ctx->pc = 0x280378u;
    // 0x280378: 0x1236ffd2  beq         $s1, $s6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x280378u;
    {
        const bool branch_taken_0x280378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x28037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280378u;
            // 0x28037c: 0x2358824  and         $s1, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280378) {
            ctx->pc = 0x2802C4u;
            runtime->cooperativeGuestYield();
            goto label_2802c4;
        }
    }
    ctx->pc = 0x280380u;
    // 0x280380: 0x2602fc00  addiu       $v0, $s0, -0x400
    ctx->pc = 0x280380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x280384: 0x1640ffde  bnez        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x280384u;
    {
        const bool branch_taken_0x280384 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x280388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280384u;
            // 0x280388: 0x50800b  movn        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280384) {
            ctx->pc = 0x280300u;
            runtime->cooperativeGuestYield();
            goto label_280300;
        }
    }
    ctx->pc = 0x28038Cu;
label_28038c:
    // 0x28038c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x28038cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_280390:
    // 0x280390: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x280390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_280394:
    // 0x280394: 0xdfbe0310  ld          $fp, 0x310($sp)
    ctx->pc = 0x280394u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x280398: 0xdfb70300  ld          $s7, 0x300($sp)
    ctx->pc = 0x280398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x28039c: 0xdfb602f0  ld          $s6, 0x2F0($sp)
    ctx->pc = 0x28039cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2803a0: 0xdfb502e0  ld          $s5, 0x2E0($sp)
    ctx->pc = 0x2803a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2803a4: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x2803a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2803a8: 0xdfb302c0  ld          $s3, 0x2C0($sp)
    ctx->pc = 0x2803a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2803ac: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2803acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2803b0: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x2803b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2803b4: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x2803b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2803b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2803B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2803BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2803B8u;
            // 0x2803bc: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280264u: goto label_280264;
            case 0x280270u: goto label_280270;
            case 0x280284u: goto label_280284;
            case 0x28029Cu: goto label_28029c;
            case 0x2802A8u: goto label_2802a8;
            case 0x2802BCu: goto label_2802bc;
            case 0x2802C4u: goto label_2802c4;
            case 0x2802D0u: goto label_2802d0;
            case 0x280300u: goto label_280300;
            case 0x28035Cu: goto label_28035c;
            case 0x28038Cu: goto label_28038c;
            case 0x280390u: goto label_280390;
            case 0x280394u: goto label_280394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2803C0u;
}

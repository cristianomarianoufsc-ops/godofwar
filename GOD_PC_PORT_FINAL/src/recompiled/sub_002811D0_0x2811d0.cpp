#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002811D0
// Address: 0x2811d0 - 0x2812a0
void sub_002811D0_0x2811d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002811D0_0x2811d0");
#endif

    ctx->pc = 0x2811d0u;

    // 0x2811d0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x2811d4: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2811d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2811d8: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x2811d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x2811dc: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x2811dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2811e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2811e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2811e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811e8: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x2811e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x2811ec: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x2811ECu;
    SET_GPR_U32(ctx, 31, 0x2811F4u);
    ctx->pc = 0x2811F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2811ECu;
            // 0x2811f0: 0xffb102a0  sd          $s1, 0x2A0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811F4u; }
        if (ctx->pc != 0x2811F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811F4u; }
        if (ctx->pc != 0x2811F4u) { return; }
    }
    ctx->pc = 0x2811F4u;
    // 0x2811f4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2811F4u;
    {
        const bool branch_taken_0x2811f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2811F4u;
            // 0x2811f8: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811f4) {
            ctx->pc = 0x281288u;
            goto label_281288;
        }
    }
    ctx->pc = 0x2811FCu;
    // 0x2811fc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2811fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x281204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28120c: 0x27a70280  addiu       $a3, $sp, 0x280
    ctx->pc = 0x28120cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x281210: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x281210u;
    SET_GPR_U32(ctx, 31, 0x281218u);
    ctx->pc = 0x281214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281210u;
            // 0x281214: 0x27a80284  addiu       $t0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281218u; }
        if (ctx->pc != 0x281218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281218u; }
        if (ctx->pc != 0x281218u) { return; }
    }
    ctx->pc = 0x281218u;
    // 0x281218: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x281218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x28121c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x28121cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281220: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x281220u;
    {
        const bool branch_taken_0x281220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x281224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281220u;
            // 0x281224: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281220) {
            ctx->pc = 0x281288u;
            goto label_281288;
        }
    }
    ctx->pc = 0x281228u;
    // 0x281228: 0x97a30080  lhu         $v1, 0x80($sp)
    ctx->pc = 0x281228u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28122c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x28122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x281230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281230u;
    {
        const bool branch_taken_0x281230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281230u;
            // 0x281234: 0x3063e7f0  andi        $v1, $v1, 0xE7F0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)59376);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281230) {
            ctx->pc = 0x281244u;
            goto label_281244;
        }
    }
    ctx->pc = 0x281238u;
    // 0x281238: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x28123c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28123Cu;
    {
        const bool branch_taken_0x28123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28123Cu;
            // 0x281240: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28123c) {
            ctx->pc = 0x281288u;
            goto label_281288;
        }
    }
    ctx->pc = 0x281244u;
label_281244:
    // 0x281244: 0x3242180f  andi        $v0, $s2, 0x180F
    ctx->pc = 0x281244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6159);
    // 0x281248: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28124c: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x28124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x281250: 0x8fa70284  lw          $a3, 0x284($sp)
    ctx->pc = 0x281250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x281254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281258: 0xa7a30080  sh          $v1, 0x80($sp)
    ctx->pc = 0x281258u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x28125c: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x28125Cu;
    SET_GPR_U32(ctx, 31, 0x281264u);
    ctx->pc = 0x281260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28125Cu;
            // 0x281260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281264u; }
        if (ctx->pc != 0x281264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281264u; }
        if (ctx->pc != 0x281264u) { return; }
    }
    ctx->pc = 0x281264u;
    // 0x281264: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281264u;
    {
        const bool branch_taken_0x281264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281264u;
            // 0x281268: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281264) {
            ctx->pc = 0x281288u;
            goto label_281288;
        }
    }
    ctx->pc = 0x28126Cu;
    // 0x28126c: 0xc0a0618  jal         func_281860
    ctx->pc = 0x28126Cu;
    SET_GPR_U32(ctx, 31, 0x281274u);
    ctx->pc = 0x281270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28126Cu;
            // 0x281270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281274u; }
        if (ctx->pc != 0x281274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281274u; }
        if (ctx->pc != 0x281274u) { return; }
    }
    ctx->pc = 0x281274u;
    // 0x281274: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x281278: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x281278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x28127c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x28127cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x281280: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281284: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x281284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_281288:
    // 0x281288: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x281288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x28128c: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x28128cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x281290: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x281290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x281294: 0x3e00008  jr          $ra
    ctx->pc = 0x281294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281294u;
            // 0x281298: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281244u: goto label_281244;
            case 0x281288u: goto label_281288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28129Cu;
    // 0x28129c: 0x0  nop
    ctx->pc = 0x28129cu;
    // NOP
}

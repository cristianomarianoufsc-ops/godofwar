#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156400
// Address: 0x156400 - 0x156558
void sub_00156400_0x156400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156400_0x156400");
#endif

    ctx->pc = 0x156400u;

    // 0x156400: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x156404: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x156404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
    // 0x156408: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x156408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
    // 0x15640c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15640cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156410: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x156410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
    // 0x156414: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x156414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156418: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x156418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
    // 0x15641c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x15641cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156420: 0x7fb60440  sq          $s6, 0x440($sp)
    ctx->pc = 0x156420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 22));
    // 0x156424: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x156424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156428: 0x7fb70430  sq          $s7, 0x430($sp)
    ctx->pc = 0x156428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 23));
    // 0x15642c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15642cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156430: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x156430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
    // 0x156434: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x156434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156438: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x156438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
    // 0x15643c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x15643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x156440: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x156440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156444: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x156444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x156448: 0x8c46e868  lw          $a2, -0x1798($v0)
    ctx->pc = 0x156448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961256)));
    // 0x15644c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156450: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x156450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x156454: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x156458: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x156458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x15645c: 0x40f809  jalr        $v0
    ctx->pc = 0x15645Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156464u);
        ctx->pc = 0x156460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15645Cu;
            // 0x156460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x156464u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156478u: goto label_156478;
            case 0x1564A0u: goto label_1564a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x156464u; }
            if (ctx->pc != 0x156464u) { return; }
        }
        }
    }
    ctx->pc = 0x156464u;
    // 0x156464: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x156468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15646c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x15646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x156470: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x156474: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_156478:
    // 0x156478: 0x0  nop
    ctx->pc = 0x156478u;
    // NOP
    // 0x15647c: 0x0  nop
    ctx->pc = 0x15647cu;
    // NOP
    // 0x156480: 0x0  nop
    ctx->pc = 0x156480u;
    // NOP
    // 0x156484: 0x0  nop
    ctx->pc = 0x156484u;
    // NOP
    // 0x156488: 0x0  nop
    ctx->pc = 0x156488u;
    // NOP
    // 0x15648c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15648Cu;
    {
        const bool branch_taken_0x15648c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15648Cu;
            // 0x156490: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15648c) {
            ctx->pc = 0x156478u;
            runtime->cooperativeGuestYield();
            goto label_156478;
        }
    }
    ctx->pc = 0x156494u;
    // 0x156494: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x156498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15649c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1564a0:
    // 0x1564a0: 0x0  nop
    ctx->pc = 0x1564a0u;
    // NOP
    // 0x1564a4: 0x0  nop
    ctx->pc = 0x1564a4u;
    // NOP
    // 0x1564a8: 0x0  nop
    ctx->pc = 0x1564a8u;
    // NOP
    // 0x1564ac: 0x0  nop
    ctx->pc = 0x1564acu;
    // NOP
    // 0x1564b0: 0x0  nop
    ctx->pc = 0x1564b0u;
    // NOP
    // 0x1564b4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1564B4u;
    {
        const bool branch_taken_0x1564b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1564B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564B4u;
            // 0x1564b8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564b4) {
            ctx->pc = 0x1564A0u;
            runtime->cooperativeGuestYield();
            goto label_1564a0;
        }
    }
    ctx->pc = 0x1564BCu;
    // 0x1564bc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1564bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1564c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1564c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1564c4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1564c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1564c8: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1564c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1564cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1564ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1564d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1564d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1564d4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1564d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1564d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1564D8u;
    SET_GPR_U32(ctx, 31, 0x1564E0u);
    ctx->pc = 0x1564DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564D8u;
            // 0x1564dc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E0u; }
        if (ctx->pc != 0x1564E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E0u; }
        if (ctx->pc != 0x1564E0u) { return; }
    }
    ctx->pc = 0x1564E0u;
    // 0x1564e0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1564e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1564e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1564e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1564e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564ec: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1564ECu;
    SET_GPR_U32(ctx, 31, 0x1564F4u);
    ctx->pc = 0x1564F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564ECu;
            // 0x1564f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564F4u; }
        if (ctx->pc != 0x1564F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564F4u; }
        if (ctx->pc != 0x1564F4u) { return; }
    }
    ctx->pc = 0x1564F4u;
    // 0x1564f4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564f8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1564f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156500: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156504: 0xc0558a2  jal         func_156288
    ctx->pc = 0x156504u;
    SET_GPR_U32(ctx, 31, 0x15650Cu);
    ctx->pc = 0x156508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156504u;
            // 0x156508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156288u;
    if (runtime->hasFunction(0x156288u)) {
        auto targetFn = runtime->lookupFunction(0x156288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15650Cu; }
        if (ctx->pc != 0x15650Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156288_0x156288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15650Cu; }
        if (ctx->pc != 0x15650Cu) { return; }
    }
    ctx->pc = 0x15650Cu;
    // 0x15650c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15650cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156510: 0xafb60410  sw          $s6, 0x410($sp)
    ctx->pc = 0x156510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 22));
    // 0x156514: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x156514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x156518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15651c: 0xc08c996  jal         func_232658
    ctx->pc = 0x15651Cu;
    SET_GPR_U32(ctx, 31, 0x156524u);
    ctx->pc = 0x156520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15651Cu;
            // 0x156520: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232658u;
    if (runtime->hasFunction(0x232658u)) {
        auto targetFn = runtime->lookupFunction(0x232658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156524u; }
        if (ctx->pc != 0x156524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232658_0x232658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156524u; }
        if (ctx->pc != 0x156524u) { return; }
    }
    ctx->pc = 0x156524u;
    // 0x156524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156528: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x156528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x15652c: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x15652cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x156530: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x156530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x156534: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x156534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x156538: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x156538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x15653c: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x15653cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x156540: 0x7bb60440  lq          $s6, 0x440($sp)
    ctx->pc = 0x156540u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x156544: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x156544u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x156548: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x156548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x15654c: 0x3e00008  jr          $ra
    ctx->pc = 0x15654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15654Cu;
            // 0x156550: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156478u: goto label_156478;
            case 0x1564A0u: goto label_1564a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156554u;
    // 0x156554: 0x0  nop
    ctx->pc = 0x156554u;
    // NOP
}

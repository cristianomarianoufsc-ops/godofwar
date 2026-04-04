#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D2F0
// Address: 0x19d2f0 - 0x19d960
void sub_0019D2F0_0x19d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D2F0_0x19d2f0");
#endif

    ctx->pc = 0x19d2f0u;

    // 0x19d2f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d2f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d2f8: 0x8c45c9d8  lw          $a1, -0x3628($v0)
    ctx->pc = 0x19d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953432)));
    // 0x19d2fc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19D2FCu;
    {
        const bool branch_taken_0x19d2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2FCu;
            // 0x19d300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2fc) {
            ctx->pc = 0x19D340u;
            goto label_19d340;
        }
    }
    ctx->pc = 0x19D304u;
    // 0x19d304: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x19d304u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19d308: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x19d308u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d30c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19d30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19d310: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x19d310u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d314: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19d318: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x19d31c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d324: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d328: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d32c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19d330: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19d334: 0x40f809  jalr        $v0
    ctx->pc = 0x19D334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D33Cu);
        ctx->pc = 0x19D338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D334u;
            // 0x19d338: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D33Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D33Cu; }
            if (ctx->pc != 0x19D33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19D33Cu;
    // 0x19d33c: 0x0  nop
    ctx->pc = 0x19d33cu;
    // NOP
label_19d340:
    // 0x19d340: 0xc06749e  jal         func_19D278
    ctx->pc = 0x19D340u;
    SET_GPR_U32(ctx, 31, 0x19D348u);
    ctx->pc = 0x19D278u;
    if (runtime->hasFunction(0x19D278u)) {
        auto targetFn = runtime->lookupFunction(0x19D278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D348u; }
        if (ctx->pc != 0x19D348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D278_0x19d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D348u; }
        if (ctx->pc != 0x19D348u) { return; }
    }
    ctx->pc = 0x19D348u;
    // 0x19d348: 0xc0891de  jal         func_224778
    ctx->pc = 0x19D348u;
    SET_GPR_U32(ctx, 31, 0x19D350u);
    ctx->pc = 0x19D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D348u;
            // 0x19d34c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D350u; }
        if (ctx->pc != 0x19D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D350u; }
        if (ctx->pc != 0x19D350u) { return; }
    }
    ctx->pc = 0x19D350u;
    // 0x19d350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d354: 0x3e00008  jr          $ra
    ctx->pc = 0x19D354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D354u;
            // 0x19d358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D35Cu;
    // 0x19d35c: 0x0  nop
    ctx->pc = 0x19d35cu;
    // NOP
    // 0x19d360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d368: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19d36c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19d36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d374: 0x0  nop
    ctx->pc = 0x19d374u;
    // NOP
label_19d378:
    // 0x19d378: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x19d378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19d37c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19d380: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x19d380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19d384: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x19d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x19d388: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d38c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d390: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D390u;
    {
        const bool branch_taken_0x19d390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D390u;
            // 0x19d394: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d390) {
            ctx->pc = 0x19D3A0u;
            goto label_19d3a0;
        }
    }
    ctx->pc = 0x19D398u;
    // 0x19d398: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19D398u;
    SET_GPR_U32(ctx, 31, 0x19D3A0u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3A0u; }
        if (ctx->pc != 0x19D3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3A0u; }
        if (ctx->pc != 0x19D3A0u) { return; }
    }
    ctx->pc = 0x19D3A0u;
label_19d3a0:
    // 0x19d3a0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x19d3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d3a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19D3A4u;
    {
        const bool branch_taken_0x19d3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3A4u;
            // 0x19d3a8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3a4) {
            ctx->pc = 0x19D378u;
            runtime->cooperativeGuestYield();
            goto label_19d378;
        }
    }
    ctx->pc = 0x19D3ACu;
    // 0x19d3ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d3b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19d3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d3b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3bc: 0xac40c9d8  sw          $zero, -0x3628($v0)
    ctx->pc = 0x19d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953432), GPR_U32(ctx, 0));
    // 0x19d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3C0u;
            // 0x19d3c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D3C8u;
    // 0x19d3c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19d3cc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19d3d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19d3d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19d3d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x19d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x19d3dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19d3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x19d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x19d3e4: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x19d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x19d3e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x19d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x19d3ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x19d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x19d3f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x19d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x19d3f4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x19d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x19d3f8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x19d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x19d3fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d400: 0x8c63c9c0  lw          $v1, -0x3640($v1)
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953408)));
    // 0x19d404: 0x146000d5  bnez        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x19D404u;
    {
        const bool branch_taken_0x19d404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D404u;
            // 0x19d408: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d404) {
            ctx->pc = 0x19D75Cu;
            goto label_19d75c;
        }
    }
    ctx->pc = 0x19D40Cu;
    // 0x19d40c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19d40cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19d410: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19d414: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x19D414u;
    SET_GPR_U32(ctx, 31, 0x19D41Cu);
    ctx->pc = 0x19D418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D414u;
            // 0x19d418: 0x8e04cd58  lw          $a0, -0x32A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D41Cu; }
        if (ctx->pc != 0x19D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D41Cu; }
        if (ctx->pc != 0x19D41Cu) { return; }
    }
    ctx->pc = 0x19D41Cu;
    // 0x19d41c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19d420: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x19d420u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d424: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19d424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x19d428: 0x8ee5cd58  lw          $a1, -0x32A8($s7)
    ctx->pc = 0x19d428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954328)));
    // 0x19d42c: 0x2463e1e8  addiu       $v1, $v1, -0x1E18
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959592));
    // 0x19d430: 0x96a40044  lhu         $a0, 0x44($s5)
    ctx->pc = 0x19d430u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x19d434: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d438: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x19d438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x19d43c: 0x1480007e  bnez        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x19D43Cu;
    {
        const bool branch_taken_0x19d43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D43Cu;
            // 0x19d440: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d43c) {
            ctx->pc = 0x19D638u;
            goto label_19d638;
        }
    }
    ctx->pc = 0x19D444u;
    // 0x19d444: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19d448: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19d44c: 0xa6a20044  sh          $v0, 0x44($s5)
    ctx->pc = 0x19d44cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d450: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x19D450u;
    {
        const bool branch_taken_0x19d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D450u;
            // 0x19d454: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d450) {
            ctx->pc = 0x19D5F0u;
            goto label_19d5f0;
        }
    }
    ctx->pc = 0x19D458u;
label_19d458:
    // 0x19d458: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19d458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19d45c: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x19d460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d468: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x19d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19d46c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D46Cu;
            // 0x19d470: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D480u;
            goto label_19d480;
        }
    }
    ctx->pc = 0x19D474u;
    // 0x19d474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19D474u;
    {
        const bool branch_taken_0x19d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D474u;
            // 0x19d478: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d474) {
            ctx->pc = 0x19D484u;
            goto label_19d484;
        }
    }
    ctx->pc = 0x19D47Cu;
    // 0x19d47c: 0x0  nop
    ctx->pc = 0x19d47cu;
    // NOP
label_19d480:
    // 0x19d480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d484:
    // 0x19d484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D484u;
    {
        const bool branch_taken_0x19d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d484) {
            ctx->pc = 0x19D494u;
            goto label_19d494;
        }
    }
    ctx->pc = 0x19D48Cu;
    // 0x19d48c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19d490: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x19d490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_19d494:
    // 0x19d494: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x19d494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x19d498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19d4a4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x19d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x19d4a8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x19D4A8u;
    SET_GPR_U32(ctx, 31, 0x19D4B0u);
    ctx->pc = 0x19D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4A8u;
            // 0x19d4ac: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4B0u; }
        if (ctx->pc != 0x19D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4B0u; }
        if (ctx->pc != 0x19D4B0u) { return; }
    }
    ctx->pc = 0x19D4B0u;
    // 0x19d4b0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x19d4b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19d4b4: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x19d4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x19d4b8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x19d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d4bc: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x19d4bcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d4c4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x19d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x19d4c8: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x19d4c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19d4cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19d4d0: 0xdd06bdf8  ld          $a2, -0x4208($t0)
    ctx->pc = 0x19d4d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x19d4d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19d4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d4dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d4e0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x19d4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x19d4e4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x19d4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19d4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d4ec: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x19d4ecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x19d4f0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x19d4f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19d4f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19d4f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19d4f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x19d4fc: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x19d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x19d500: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x19d504: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x19d504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19d508: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19d508u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19d50c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x19d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x19d510: 0xc3480a  movz        $t1, $a2, $v1
    ctx->pc = 0x19d510u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x19d514: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19d514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19d518: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x19d518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d51c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x19d51cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19d520: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x19d520u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x19d524: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19d524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x19d528: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x19d528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x19d52c: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x19d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x19d530: 0xfd06bdf8  sd          $a2, -0x4208($t0)
    ctx->pc = 0x19d530u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 6));
    // 0x19d534: 0xfce30068  sd          $v1, 0x68($a3)
    ctx->pc = 0x19d534u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
    // 0x19d538: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x19d538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x19d53c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x19d53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x19d540: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x19D540u;
    SET_GPR_U32(ctx, 31, 0x19D548u);
    ctx->pc = 0x19D544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D540u;
            // 0x19d544: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D548u; }
        if (ctx->pc != 0x19D548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D548u; }
        if (ctx->pc != 0x19D548u) { return; }
    }
    ctx->pc = 0x19D548u;
    // 0x19d548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d54c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19d54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19d550: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19d550u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19d554: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d558: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x19d558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x19d55c: 0x8e890014  lw          $t1, 0x14($s4)
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x19d560: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x19d560u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19d564: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x19d564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x19d568: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19d56c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19d570: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19d570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19d574: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x19d574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d578: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x19d578u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d57c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d580: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x19d580u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d584: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19d584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x19d588: 0x2472e848  addiu       $s2, $v1, -0x17B8
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x19d58c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d590: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19d594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d598: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d59c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19d59cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19d5a0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19d5a4: 0x40f809  jalr        $v0
    ctx->pc = 0x19D5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D5ACu);
        ctx->pc = 0x19D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5A4u;
            // 0x19d5a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D5ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D5ACu; }
            if (ctx->pc != 0x19D5ACu) { return; }
        }
        }
    }
    ctx->pc = 0x19D5ACu;
    // 0x19d5ac: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x19d5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x19d5b0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19D5B0u;
    {
        const bool branch_taken_0x19d5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d5b0) {
            ctx->pc = 0x19D5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5B0u;
            // 0x19d5b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D5F0u;
            goto label_19d5f0;
        }
    }
    ctx->pc = 0x19D5B8u;
    // 0x19d5b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d5bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x19d5bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d5c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d5c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19d5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d5cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d5d0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19d5d4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19d5d8: 0x40f809  jalr        $v0
    ctx->pc = 0x19D5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D5E0u);
        ctx->pc = 0x19D5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5D8u;
            // 0x19d5dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D5E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D5E0u; }
            if (ctx->pc != 0x19D5E0u) { return; }
        }
        }
    }
    ctx->pc = 0x19D5E0u;
    // 0x19d5e0: 0x8ee4cd58  lw          $a0, -0x32A8($s7)
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954328)));
    // 0x19d5e4: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x19D5E4u;
    SET_GPR_U32(ctx, 31, 0x19D5ECu);
    ctx->pc = 0x19D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5E4u;
            // 0x19d5e8: 0xc68c0004  lwc1        $f12, 0x4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5ECu; }
        if (ctx->pc != 0x19D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5ECu; }
        if (ctx->pc != 0x19D5ECu) { return; }
    }
    ctx->pc = 0x19D5ECu;
    // 0x19d5ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19d5f0:
    // 0x19d5f0: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x19d5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d5f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19D5F4u;
    {
        const bool branch_taken_0x19d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5F4u;
            // 0x19d5f8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5f4) {
            ctx->pc = 0x19D630u;
            goto label_19d630;
        }
    }
    ctx->pc = 0x19D5FCu;
    // 0x19d5fc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19d600: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x19d600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19d604: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x19d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x19d608: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x19d608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d60c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d610: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19D610u;
    {
        const bool branch_taken_0x19d610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d610) {
            ctx->pc = 0x19D614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D610u;
            // 0x19d614: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D5F0u;
            runtime->cooperativeGuestYield();
            goto label_19d5f0;
        }
    }
    ctx->pc = 0x19D618u;
    // 0x19d618: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d61c: 0xc04c992  jal         func_132648
    ctx->pc = 0x19D61Cu;
    SET_GPR_U32(ctx, 31, 0x19D624u);
    ctx->pc = 0x19D620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D61Cu;
            // 0x19d620: 0x8c44c9cc  lw          $a0, -0x3634($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D624u; }
        if (ctx->pc != 0x19D624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D624u; }
        if (ctx->pc != 0x19D624u) { return; }
    }
    ctx->pc = 0x19D624u;
    // 0x19d624: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19d624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d628: 0x1460ff8b  bnez        $v1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x19D628u;
    {
        const bool branch_taken_0x19d628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D628u;
            // 0x19d62c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d628) {
            ctx->pc = 0x19D458u;
            runtime->cooperativeGuestYield();
            goto label_19d458;
        }
    }
    ctx->pc = 0x19D630u;
label_19d630:
    // 0x19d630: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d634: 0xac40c9c8  sw          $zero, -0x3638($v0)
    ctx->pc = 0x19d634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953416), GPR_U32(ctx, 0));
label_19d638:
    // 0x19d638: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x19d63c: 0xc68c0018  lwc1        $f12, 0x18($s4)
    ctx->pc = 0x19d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19d640: 0x8ec4cd58  lw          $a0, -0x32A8($s6)
    ctx->pc = 0x19d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954328)));
    // 0x19d644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d64c: 0xc076798  jal         func_1D9E60
    ctx->pc = 0x19D64Cu;
    SET_GPR_U32(ctx, 31, 0x19D654u);
    ctx->pc = 0x19D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D64Cu;
            // 0x19d650: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E60u;
    if (runtime->hasFunction(0x1D9E60u)) {
        auto targetFn = runtime->lookupFunction(0x1D9E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D654u; }
        if (ctx->pc != 0x19D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9E60_0x1d9e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D654u; }
        if (ctx->pc != 0x19D654u) { return; }
    }
    ctx->pc = 0x19D654u;
    // 0x19d654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19d654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d658: 0x5a600018  blezl       $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x19D658u;
    {
        const bool branch_taken_0x19d658 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x19d658) {
            ctx->pc = 0x19D65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D658u;
            // 0x19d65c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D6BCu;
            goto label_19d6bc;
        }
    }
    ctx->pc = 0x19D660u;
    // 0x19d660: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19d664: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x19D664u;
    {
        const bool branch_taken_0x19d664 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x19D668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D664u;
            // 0x19d668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d664) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D66Cu;
    // 0x19d66c: 0x0  nop
    ctx->pc = 0x19d66cu;
    // NOP
label_19d670:
    // 0x19d670: 0x8ec4cd58  lw          $a0, -0x32A8($s6)
    ctx->pc = 0x19d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954328)));
    // 0x19d674: 0xc0767cc  jal         func_1D9F30
    ctx->pc = 0x19D674u;
    SET_GPR_U32(ctx, 31, 0x19D67Cu);
    ctx->pc = 0x19D678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D674u;
            // 0x19d678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F30u;
    if (runtime->hasFunction(0x1D9F30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D67Cu; }
        if (ctx->pc != 0x19D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d9f30_0x1d9f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D67Cu; }
        if (ctx->pc != 0x19D67Cu) { return; }
    }
    ctx->pc = 0x19D67Cu;
    // 0x19d67c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x19d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19d680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d684: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x19d684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19d688: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19d68c: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x19d690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d694: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19d698: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19D698u;
    {
        const bool branch_taken_0x19d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d698) {
            ctx->pc = 0x19D69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D698u;
            // 0x19d69c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D6A0u;
            goto label_19d6a0;
        }
    }
    ctx->pc = 0x19D6A0u;
label_19d6a0:
    // 0x19d6a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d6a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d6a8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x19d6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x19d6ac: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x19d6acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19d6b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19D6B0u;
    {
        const bool branch_taken_0x19d6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6B0u;
            // 0x19d6b4: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6b0) {
            ctx->pc = 0x19D670u;
            runtime->cooperativeGuestYield();
            goto label_19d670;
        }
    }
    ctx->pc = 0x19D6B8u;
label_19d6b8:
    // 0x19d6b8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19d6bc:
    // 0x19d6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c0: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x19D6C0u;
    {
        const bool branch_taken_0x19d6c0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x19D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6C0u;
            // 0x19d6c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6c0) {
            ctx->pc = 0x19D6FCu;
            goto label_19d6fc;
        }
    }
    ctx->pc = 0x19D6C8u;
label_19d6c8:
    // 0x19d6c8: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19d6cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19d6d0: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x19d6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x19d6d4: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x19d6d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d6dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x19d6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19d6e0: 0xc0672fa  jal         func_19CBE8
    ctx->pc = 0x19D6E0u;
    SET_GPR_U32(ctx, 31, 0x19D6E8u);
    ctx->pc = 0x19D6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6E0u;
            // 0x19d6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CBE8u;
    if (runtime->hasFunction(0x19CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x19CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6E8u; }
        if (ctx->pc != 0x19D6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CBE8_0x19cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6E8u; }
        if (ctx->pc != 0x19D6E8u) { return; }
    }
    ctx->pc = 0x19D6E8u;
    // 0x19d6e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d6ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19d6f0: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x19d6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x19d6f4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x19D6F4u;
    {
        const bool branch_taken_0x19d6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6F4u;
            // 0x19d6f8: 0x44900b  movn        $s2, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6f4) {
            ctx->pc = 0x19D6C8u;
            runtime->cooperativeGuestYield();
            goto label_19d6c8;
        }
    }
    ctx->pc = 0x19D6FCu;
label_19d6fc:
    // 0x19d6fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19d700: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d704: 0xc460c9c8  lwc1        $f0, -0x3638($v1)
    ctx->pc = 0x19d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d708: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x19d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d70c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x19d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d710: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19d710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19d714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d718: 0x0  nop
    ctx->pc = 0x19d718u;
    // NOP
    // 0x19d71c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19D71Cu;
    {
        const bool branch_taken_0x19d71c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D71Cu;
            // 0x19d720: 0xe460c9c8  swc1        $f0, -0x3638($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d71c) {
            ctx->pc = 0x19D72Cu;
            goto label_19d72c;
        }
    }
    ctx->pc = 0x19D724u;
    // 0x19d724: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D724u;
    {
        const bool branch_taken_0x19d724 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D724u;
            // 0x19d728: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d724) {
            ctx->pc = 0x19D76Cu;
            goto label_19d76c;
        }
    }
    ctx->pc = 0x19D72Cu;
label_19d72c:
    // 0x19d72c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d730: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19d734: 0x0  nop
    ctx->pc = 0x19d734u;
    // NOP
label_19d738:
    // 0x19d738: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x19d738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x19d73c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x19d73cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19d740: 0x2484e250  addiu       $a0, $a0, -0x1DB0
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
    // 0x19d744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d748: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19D748u;
    SET_GPR_U32(ctx, 31, 0x19D750u);
    ctx->pc = 0x19D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D748u;
            // 0x19d74c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D750u; }
        if (ctx->pc != 0x19D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D750u; }
        if (ctx->pc != 0x19D750u) { return; }
    }
    ctx->pc = 0x19D750u;
    // 0x19d750: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x19d750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d754: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D754u;
    {
        const bool branch_taken_0x19d754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D754u;
            // 0x19d758: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d754) {
            ctx->pc = 0x19D738u;
            runtime->cooperativeGuestYield();
            goto label_19d738;
        }
    }
    ctx->pc = 0x19D75Cu;
label_19d75c:
    // 0x19d75c: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x19d75cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x19d760: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19d764: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x19d764u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d768: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x19d768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19d76c:
    // 0x19d76c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x19d76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d770: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x19d770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d774: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x19d774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d778: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x19d778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d77c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19d77cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d780: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x19d780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d784: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x19d784u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d788: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D78Cu;
            // 0x19d790: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D794u;
    // 0x19d794: 0x0  nop
    ctx->pc = 0x19d794u;
    // NOP
    // 0x19d798: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19d79c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19d7a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19d7a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19d7a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19d7ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d7b0: 0xc06749e  jal         func_19D278
    ctx->pc = 0x19D7B0u;
    SET_GPR_U32(ctx, 31, 0x19D7B8u);
    ctx->pc = 0x19D7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7B0u;
            // 0x19d7b4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D278u;
    if (runtime->hasFunction(0x19D278u)) {
        auto targetFn = runtime->lookupFunction(0x19D278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D7B8u; }
        if (ctx->pc != 0x19D7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D278_0x19d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D7B8u; }
        if (ctx->pc != 0x19D7B8u) { return; }
    }
    ctx->pc = 0x19D7B8u;
    // 0x19d7b8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19d7b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d7bc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x19d7c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d7c4: 0x2644e848  addiu       $a0, $s2, -0x17B8
    ctx->pc = 0x19d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x19d7c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19d7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d7d4: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19d7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19d7d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d7dc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19d7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19d7e0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19d7e4: 0x40f809  jalr        $v0
    ctx->pc = 0x19D7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D7ECu);
        ctx->pc = 0x19D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7E4u;
            // 0x19d7e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D7ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D7ECu; }
            if (ctx->pc != 0x19D7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x19D7ECu;
    // 0x19d7ec: 0x8e22c9d8  lw          $v0, -0x3628($s1)
    ctx->pc = 0x19d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953432)));
    // 0x19d7f0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D7F0u;
    {
        const bool branch_taken_0x19d7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7F0u;
            // 0x19d7f4: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7f0) {
            ctx->pc = 0x19D860u;
            goto label_19d860;
        }
    }
    ctx->pc = 0x19D7F8u;
    // 0x19d7f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7fc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19d800:
    // 0x19d800: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x19d804: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x19d804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19d808: 0x2484e250  addiu       $a0, $a0, -0x1DB0
    ctx->pc = 0x19d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
    // 0x19d80c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d810: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19D810u;
    SET_GPR_U32(ctx, 31, 0x19D818u);
    ctx->pc = 0x19D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D810u;
            // 0x19d814: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D818u; }
        if (ctx->pc != 0x19D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D818u; }
        if (ctx->pc != 0x19D818u) { return; }
    }
    ctx->pc = 0x19D818u;
    // 0x19d818: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x19d818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d81c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D81Cu;
    {
        const bool branch_taken_0x19d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D81Cu;
            // 0x19d820: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d81c) {
            ctx->pc = 0x19D800u;
            runtime->cooperativeGuestYield();
            goto label_19d800;
        }
    }
    ctx->pc = 0x19D824u;
    // 0x19d824: 0x8e25c9d8  lw          $a1, -0x3628($s1)
    ctx->pc = 0x19d824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953432)));
    // 0x19d828: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x19d828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19d82c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x19d82cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d830: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19d830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19d834: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x19d834u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d838: 0x2642e848  addiu       $v0, $s2, -0x17B8
    ctx->pc = 0x19d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x19d83c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d848: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d84c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19d84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19d850: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19d854: 0x40f809  jalr        $v0
    ctx->pc = 0x19D854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D85Cu);
        ctx->pc = 0x19D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D854u;
            // 0x19d858: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D85Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D85Cu; }
            if (ctx->pc != 0x19D85Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19D85Cu;
    // 0x19d85c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_19d860:
    // 0x19d860: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19d864: 0x2442d3c8  addiu       $v0, $v0, -0x2C38
    ctx->pc = 0x19d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955976));
    // 0x19d868: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d86c: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x19d86cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x19d870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19d870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d874: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19d874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19d878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d87c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x19d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x19d880: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19d880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19d884: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x19d884u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d888: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x19d888u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d88c: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x19d88cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
label_19d890:
    // 0x19d890: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19d890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d894: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x19d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19d898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d89c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19d8a0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x19d8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d8a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19D8A4u;
    {
        const bool branch_taken_0x19d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8A4u;
            // 0x19d8a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8a4) {
            ctx->pc = 0x19D890u;
            runtime->cooperativeGuestYield();
            goto label_19d890;
        }
    }
    ctx->pc = 0x19D8ACu;
    // 0x19d8ac: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x19d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x19d8b0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x19d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x19d8b4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x19d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x19d8b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19d8bc: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x19d8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x19d8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8c4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x19d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19d8c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d8cc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x19d8ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19d8d0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19d8d4: 0x40f809  jalr        $v0
    ctx->pc = 0x19D8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D8DCu);
        ctx->pc = 0x19D8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8D4u;
            // 0x19d8d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D8DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D8DCu; }
            if (ctx->pc != 0x19D8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x19D8DCu;
    // 0x19d8dc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x19d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19d8e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D8E0u;
    {
        const bool branch_taken_0x19d8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8E0u;
            // 0x19d8e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8e0) {
            ctx->pc = 0x19D8F0u;
            goto label_19d8f0;
        }
    }
    ctx->pc = 0x19D8E8u;
    // 0x19d8e8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x19D8E8u;
    SET_GPR_U32(ctx, 31, 0x19D8F0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8F0u; }
        if (ctx->pc != 0x19D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8F0u; }
        if (ctx->pc != 0x19D8F0u) { return; }
    }
    ctx->pc = 0x19D8F0u;
label_19d8f0:
    // 0x19d8f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19d8f4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19d8f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d8f8: 0xac70c9d8  sw          $s0, -0x3628($v1)
    ctx->pc = 0x19d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953432), GPR_U32(ctx, 16));
    // 0x19d8fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d900: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19d904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d90c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d910: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19d914: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19d918: 0x40f809  jalr        $v0
    ctx->pc = 0x19D918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D920u);
        ctx->pc = 0x19D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D918u;
            // 0x19d91c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D920u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D920u; }
            if (ctx->pc != 0x19D920u) { return; }
        }
        }
    }
    ctx->pc = 0x19D920u;
    // 0x19d920: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x19d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x19d924: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19d928: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19d928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19d92c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x19d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19d930: 0x40f809  jalr        $v0
    ctx->pc = 0x19D930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D938u);
        ctx->pc = 0x19D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D930u;
            // 0x19d934: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19D938u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19D938u; }
            if (ctx->pc != 0x19D938u) { return; }
        }
        }
    }
    ctx->pc = 0x19D938u;
    // 0x19d938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d93c: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x19d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d940: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19d940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d944: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19d944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d948: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19d948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d94c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19d94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d954: 0x3e00008  jr          $ra
    ctx->pc = 0x19D954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D954u;
            // 0x19d958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D340u: goto label_19d340;
            case 0x19D378u: goto label_19d378;
            case 0x19D3A0u: goto label_19d3a0;
            case 0x19D458u: goto label_19d458;
            case 0x19D480u: goto label_19d480;
            case 0x19D484u: goto label_19d484;
            case 0x19D494u: goto label_19d494;
            case 0x19D5F0u: goto label_19d5f0;
            case 0x19D630u: goto label_19d630;
            case 0x19D638u: goto label_19d638;
            case 0x19D670u: goto label_19d670;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6BCu: goto label_19d6bc;
            case 0x19D6C8u: goto label_19d6c8;
            case 0x19D6FCu: goto label_19d6fc;
            case 0x19D72Cu: goto label_19d72c;
            case 0x19D738u: goto label_19d738;
            case 0x19D75Cu: goto label_19d75c;
            case 0x19D76Cu: goto label_19d76c;
            case 0x19D800u: goto label_19d800;
            case 0x19D860u: goto label_19d860;
            case 0x19D890u: goto label_19d890;
            case 0x19D8F0u: goto label_19d8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D95Cu;
    // 0x19d95c: 0x0  nop
    ctx->pc = 0x19d95cu;
    // NOP
}

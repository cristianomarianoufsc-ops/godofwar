#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7410
// Address: 0x1d7410 - 0x1d7830
void sub_001D7410_0x1d7410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7410_0x1d7410");
#endif

    ctx->pc = 0x1d7410u;

    // 0x1d7410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7414: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d7418: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d7418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d741c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d741cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d7420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d7424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7428: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d7428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d742c: 0x144000fa  bnez        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x1D742Cu;
    {
        const bool branch_taken_0x1d742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D742Cu;
            // 0x1d7430: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d742c) {
            ctx->pc = 0x1D7818u;
            goto label_1d7818;
        }
    }
    ctx->pc = 0x1D7434u;
    // 0x1d7434: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1d7434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7438: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d7438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d743c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d743cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d7440: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1d7444: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D744Cu);
        ctx->pc = 0x1D7448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7444u;
            // 0x1d7448: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D744Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74A0u: goto label_1d74a0;
            case 0x1D74E0u: goto label_1d74e0;
            case 0x1D7500u: goto label_1d7500;
            case 0x1D750Cu: goto label_1d750c;
            case 0x1D7538u: goto label_1d7538;
            case 0x1D753Cu: goto label_1d753c;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D75CCu: goto label_1d75cc;
            case 0x1D75F0u: goto label_1d75f0;
            case 0x1D7608u: goto label_1d7608;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7638u: goto label_1d7638;
            case 0x1D7680u: goto label_1d7680;
            case 0x1D7690u: goto label_1d7690;
            case 0x1D76BCu: goto label_1d76bc;
            case 0x1D76C4u: goto label_1d76c4;
            case 0x1D76C8u: goto label_1d76c8;
            case 0x1D76F4u: goto label_1d76f4;
            case 0x1D76F8u: goto label_1d76f8;
            case 0x1D7728u: goto label_1d7728;
            case 0x1D7758u: goto label_1d7758;
            case 0x1D7770u: goto label_1d7770;
            case 0x1D7790u: goto label_1d7790;
            case 0x1D77D8u: goto label_1d77d8;
            case 0x1D77E8u: goto label_1d77e8;
            case 0x1D780Cu: goto label_1d780c;
            case 0x1D7814u: goto label_1d7814;
            case 0x1D7818u: goto label_1d7818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D744Cu; }
            if (ctx->pc != 0x1D744Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D744Cu;
    // 0x1d744c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d744cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7450: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7454: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d7458: 0x3442e008  ori         $v0, $v0, 0xE008
    ctx->pc = 0x1d7458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57352);
    // 0x1d745c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7460: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D7460u;
    SET_GPR_U32(ctx, 31, 0x1D7468u);
    ctx->pc = 0x1D7464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7460u;
            // 0x1d7464: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7468u; }
        if (ctx->pc != 0x1D7468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7468u; }
        if (ctx->pc != 0x1D7468u) { return; }
    }
    ctx->pc = 0x1D7468u;
    // 0x1d7468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7468u;
    {
        const bool branch_taken_0x1d7468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7468u;
            // 0x1d746c: 0x3c040010  lui         $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7468) {
            ctx->pc = 0x1D74A0u;
            goto label_1d74a0;
        }
    }
    ctx->pc = 0x1D7470u;
    // 0x1d7470: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d7474: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7478: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d747c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1d747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1d7480: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d7480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7484: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d7484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d7488: 0x506000e3  beql        $v1, $zero, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1D7488u;
    {
        const bool branch_taken_0x1d7488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7488) {
            ctx->pc = 0x1D748Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7488u;
            // 0x1d748c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7818u;
            goto label_1d7818;
        }
    }
    ctx->pc = 0x1D7490u;
    // 0x1d7490: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7494: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d7494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1d7498: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1D7498u;
    {
        const bool branch_taken_0x1d7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7498u;
            // 0x1d749c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7498) {
            ctx->pc = 0x1D7814u;
            goto label_1d7814;
        }
    }
    ctx->pc = 0x1D74A0u;
label_1d74a0:
    // 0x1d74a0: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1d74a4: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1d74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1d74a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D74A8u;
    {
        const bool branch_taken_0x1d74a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74A8u;
            // 0x1d74ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74a8) {
            ctx->pc = 0x1D7538u;
            goto label_1d7538;
        }
    }
    ctx->pc = 0x1D74B0u;
    // 0x1d74b0: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D74B0u;
    SET_GPR_U32(ctx, 31, 0x1D74B8u);
    ctx->pc = 0x1D74B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74B0u;
            // 0x1d74b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B8u; }
        if (ctx->pc != 0x1D74B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B8u; }
        if (ctx->pc != 0x1D74B8u) { return; }
    }
    ctx->pc = 0x1D74B8u;
    // 0x1d74b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d74bc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d74c0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1d74c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1d74c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D74C4u;
    {
        const bool branch_taken_0x1d74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d74c4) {
            ctx->pc = 0x1D74C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74C4u;
            // 0x1d74c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D74E0u;
            goto label_1d74e0;
        }
    }
    ctx->pc = 0x1D74CCu;
    // 0x1d74cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d74d0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1d74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1d74d4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d74d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d74d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d74dc: 0x0  nop
    ctx->pc = 0x1d74dcu;
    // NOP
label_1d74e0:
    // 0x1d74e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d74e4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1d74e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1d74e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74E8u;
    {
        const bool branch_taken_0x1d74e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d74e8) {
            ctx->pc = 0x1D74ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74E8u;
            // 0x1d74ec: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7500u;
            goto label_1d7500;
        }
    }
    ctx->pc = 0x1D74F0u;
    // 0x1d74f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1d74f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1d74f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74F4u;
    {
        const bool branch_taken_0x1d74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d74f4) {
            ctx->pc = 0x1D74F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74F4u;
            // 0x1d74f8: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D750Cu;
            goto label_1d750c;
        }
    }
    ctx->pc = 0x1D74FCu;
    // 0x1d74fc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1d7500:
    // 0x1d7500: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1d7500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1d7504: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d7504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d7508: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1d750c:
    // 0x1d750c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d7510: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7510u;
    {
        const bool branch_taken_0x1d7510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7510) {
            ctx->pc = 0x1D7514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7510u;
            // 0x1d7514: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D753Cu;
            goto label_1d753c;
        }
    }
    ctx->pc = 0x1D7518u;
    // 0x1d7518: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d751c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7520: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1d7520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1d7524: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7524u;
    {
        const bool branch_taken_0x1d7524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7524) {
            ctx->pc = 0x1D7528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7524u;
            // 0x1d7528: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D753Cu;
            goto label_1d753c;
        }
    }
    ctx->pc = 0x1D752Cu;
    // 0x1d752c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7530: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1d7530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1d7534: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d7534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1d7538:
    // 0x1d7538: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1d753c:
    // 0x1d753c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1d753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1d7540: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D7540u;
    {
        const bool branch_taken_0x1d7540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7540u;
            // 0x1d7544: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7540) {
            ctx->pc = 0x1D75CCu;
            goto label_1d75cc;
        }
    }
    ctx->pc = 0x1D7548u;
    // 0x1d7548: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d7548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d754c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1d7550: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d7554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d7558: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7558u;
    {
        const bool branch_taken_0x1d7558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7558) {
            ctx->pc = 0x1D755Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7558u;
            // 0x1d755c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7570u;
            goto label_1d7570;
        }
    }
    ctx->pc = 0x1D7560u;
    // 0x1d7560: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7564: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d7564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d7568: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d7568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d756c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d7570:
    // 0x1d7570: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d7574: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d7578: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7580u);
        ctx->pc = 0x1D757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7578u;
            // 0x1d757c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7580u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74A0u: goto label_1d74a0;
            case 0x1D74E0u: goto label_1d74e0;
            case 0x1D7500u: goto label_1d7500;
            case 0x1D750Cu: goto label_1d750c;
            case 0x1D7538u: goto label_1d7538;
            case 0x1D753Cu: goto label_1d753c;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D75CCu: goto label_1d75cc;
            case 0x1D75F0u: goto label_1d75f0;
            case 0x1D7608u: goto label_1d7608;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7638u: goto label_1d7638;
            case 0x1D7680u: goto label_1d7680;
            case 0x1D7690u: goto label_1d7690;
            case 0x1D76BCu: goto label_1d76bc;
            case 0x1D76C4u: goto label_1d76c4;
            case 0x1D76C8u: goto label_1d76c8;
            case 0x1D76F4u: goto label_1d76f4;
            case 0x1D76F8u: goto label_1d76f8;
            case 0x1D7728u: goto label_1d7728;
            case 0x1D7758u: goto label_1d7758;
            case 0x1D7770u: goto label_1d7770;
            case 0x1D7790u: goto label_1d7790;
            case 0x1D77D8u: goto label_1d77d8;
            case 0x1D77E8u: goto label_1d77e8;
            case 0x1D780Cu: goto label_1d780c;
            case 0x1D7814u: goto label_1d7814;
            case 0x1D7818u: goto label_1d7818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7580u; }
            if (ctx->pc != 0x1D7580u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7580u;
    // 0x1d7580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d7580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7584: 0x8c620384  lw          $v0, 0x384($v1)
    ctx->pc = 0x1d7584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 900)));
    // 0x1d7588: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d758c: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D758Cu;
    {
        const bool branch_taken_0x1d758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d758c) {
            ctx->pc = 0x1D7590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D758Cu;
            // 0x1d7590: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D7594u;
    // 0x1d7594: 0x8c630374  lw          $v1, 0x374($v1)
    ctx->pc = 0x1d7594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
    // 0x1d7598: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d759c: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D759Cu;
    {
        const bool branch_taken_0x1d759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d759c) {
            ctx->pc = 0x1D75A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D759Cu;
            // 0x1d75a0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D75A4u;
    // 0x1d75a4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d75a8: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D75A8u;
    {
        const bool branch_taken_0x1d75a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d75a8) {
            ctx->pc = 0x1D75ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75A8u;
            // 0x1d75ac: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D75B0u;
    // 0x1d75b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75b4: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D75B4u;
    SET_GPR_U32(ctx, 31, 0x1D75BCu);
    ctx->pc = 0x1D75B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75B4u;
            // 0x1d75b8: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75BCu; }
        if (ctx->pc != 0x1D75BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75BCu; }
        if (ctx->pc != 0x1D75BCu) { return; }
    }
    ctx->pc = 0x1D75BCu;
    // 0x1d75bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d75c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d75c4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1D75C4u;
    {
        const bool branch_taken_0x1d75c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75C4u;
            // 0x1d75c8: 0xac62cd9c  sw          $v0, -0x3264($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75c4) {
            ctx->pc = 0x1D76F4u;
            goto label_1d76f4;
        }
    }
    ctx->pc = 0x1D75CCu;
label_1d75cc:
    // 0x1d75cc: 0x8c82cd9c  lw          $v0, -0x3264($a0)
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954396)));
    // 0x1d75d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D75D0u;
    {
        const bool branch_taken_0x1d75d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75D0u;
            // 0x1d75d4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d0) {
            ctx->pc = 0x1D7608u;
            goto label_1d7608;
        }
    }
    ctx->pc = 0x1D75D8u;
    // 0x1d75d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D75D8u;
    {
        const bool branch_taken_0x1d75d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d75d8) {
            ctx->pc = 0x1D75DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75D8u;
            // 0x1d75dc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D75F0u;
            goto label_1d75f0;
        }
    }
    ctx->pc = 0x1D75E0u;
    // 0x1d75e0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d75e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D75E4u;
    {
        const bool branch_taken_0x1d75e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75e4) {
            ctx->pc = 0x1D75E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75E4u;
            // 0x1d75e8: 0xac80cd9c  sw          $zero, -0x3264($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7608u;
            goto label_1d7608;
        }
    }
    ctx->pc = 0x1D75ECu;
    // 0x1d75ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d75f0:
    // 0x1d75f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d75f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d75f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75f8: 0xc05efc8  jal         func_17BF20
    ctx->pc = 0x1D75F8u;
    SET_GPR_U32(ctx, 31, 0x1D7600u);
    ctx->pc = 0x1D75FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75F8u;
            // 0x1d75fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (runtime->hasFunction(0x17BF20u)) {
        auto targetFn = runtime->lookupFunction(0x17BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7600u; }
        if (ctx->pc != 0x1D7600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bf20_0x17bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7600u; }
        if (ctx->pc != 0x1D7600u) { return; }
    }
    ctx->pc = 0x1D7600u;
    // 0x1d7600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7600u;
    {
        const bool branch_taken_0x1d7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7600u;
            // 0x1d7604: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7600) {
            ctx->pc = 0x1D7610u;
            goto label_1d7610;
        }
    }
    ctx->pc = 0x1D7608u;
label_1d7608:
    // 0x1d7608: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d760c: 0x0  nop
    ctx->pc = 0x1d760cu;
    // NOP
label_1d7610:
    // 0x1d7610: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1d7614: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7618: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d761c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D761Cu;
    {
        const bool branch_taken_0x1d761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d761c) {
            ctx->pc = 0x1D7620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D761Cu;
            // 0x1d7620: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D7624u;
    // 0x1d7624: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7628: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1d7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1d762c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d762cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d7630: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d7634: 0x0  nop
    ctx->pc = 0x1d7634u;
    // NOP
label_1d7638:
    // 0x1d7638: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d763c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d7640: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1d7640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1d7644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d7644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7648: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d7648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d764c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D764Cu;
    {
        const bool branch_taken_0x1d764c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D764Cu;
            // 0x1d7650: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d764c) {
            ctx->pc = 0x1D7690u;
            goto label_1d7690;
        }
    }
    ctx->pc = 0x1D7654u;
    // 0x1d7654: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7658: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d765c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d7660: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d7664: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D766Cu);
        ctx->pc = 0x1D7668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7664u;
            // 0x1d7668: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D766Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74A0u: goto label_1d74a0;
            case 0x1D74E0u: goto label_1d74e0;
            case 0x1D7500u: goto label_1d7500;
            case 0x1D750Cu: goto label_1d750c;
            case 0x1D7538u: goto label_1d7538;
            case 0x1D753Cu: goto label_1d753c;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D75CCu: goto label_1d75cc;
            case 0x1D75F0u: goto label_1d75f0;
            case 0x1D7608u: goto label_1d7608;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7638u: goto label_1d7638;
            case 0x1D7680u: goto label_1d7680;
            case 0x1D7690u: goto label_1d7690;
            case 0x1D76BCu: goto label_1d76bc;
            case 0x1D76C4u: goto label_1d76c4;
            case 0x1D76C8u: goto label_1d76c8;
            case 0x1D76F4u: goto label_1d76f4;
            case 0x1D76F8u: goto label_1d76f8;
            case 0x1D7728u: goto label_1d7728;
            case 0x1D7758u: goto label_1d7758;
            case 0x1D7770u: goto label_1d7770;
            case 0x1D7790u: goto label_1d7790;
            case 0x1D77D8u: goto label_1d77d8;
            case 0x1D77E8u: goto label_1d77e8;
            case 0x1D780Cu: goto label_1d780c;
            case 0x1D7814u: goto label_1d7814;
            case 0x1D7818u: goto label_1d7818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D766Cu; }
            if (ctx->pc != 0x1D766Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D766Cu;
    // 0x1d766c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d7670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7670u;
    {
        const bool branch_taken_0x1d7670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7670u;
            // 0x1d7674: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7670) {
            ctx->pc = 0x1D7680u;
            goto label_1d7680;
        }
    }
    ctx->pc = 0x1D7678u;
    // 0x1d7678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d767c: 0xac62cd98  sw          $v0, -0x3268($v1)
    ctx->pc = 0x1d767cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954392), GPR_U32(ctx, 2));
label_1d7680:
    // 0x1d7680: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7684: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1d7688: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D7688u;
    {
        const bool branch_taken_0x1d7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7688u;
            // 0x1d768c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7688) {
            ctx->pc = 0x1D76C4u;
            goto label_1d76c4;
        }
    }
    ctx->pc = 0x1D7690u;
label_1d7690:
    // 0x1d7690: 0x8c62cd98  lw          $v0, -0x3268($v1)
    ctx->pc = 0x1d7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954392)));
    // 0x1d7694: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D7694u;
    {
        const bool branch_taken_0x1d7694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7694) {
            ctx->pc = 0x1D7698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7694u;
            // 0x1d7698: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D76C8u;
            goto label_1d76c8;
        }
    }
    ctx->pc = 0x1D769Cu;
    // 0x1d769c: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1d76a0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1d76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1d76a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D76A4u;
    {
        const bool branch_taken_0x1d76a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76A4u;
            // 0x1d76a8: 0x8c62cd98  lw          $v0, -0x3268($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76a4) {
            ctx->pc = 0x1D76BCu;
            goto label_1d76bc;
        }
    }
    ctx->pc = 0x1D76ACu;
    // 0x1d76ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d76b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1d76b4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d76b8: 0x8c62cd98  lw          $v0, -0x3268($v1)
    ctx->pc = 0x1d76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954392)));
label_1d76bc:
    // 0x1d76bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d76c0: 0xac62cd98  sw          $v0, -0x3268($v1)
    ctx->pc = 0x1d76c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954392), GPR_U32(ctx, 2));
label_1d76c4:
    // 0x1d76c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d76c8:
    // 0x1d76c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d76cc: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1d76d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d76d4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1d76d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1d76d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d76d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d76dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d76dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d76e0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D76E0u;
    {
        const bool branch_taken_0x1d76e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d76e0) {
            ctx->pc = 0x1D76E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76E0u;
            // 0x1d76e4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D76E8u;
    // 0x1d76e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d76ec: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1d76ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1d76f0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1d76f4:
    // 0x1d76f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d76f8:
    // 0x1d76f8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d76fc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1d76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1d7700: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d7704: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1d7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1d7708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d770c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d7710: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7710u;
    {
        const bool branch_taken_0x1d7710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7710) {
            ctx->pc = 0x1D7714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7710u;
            // 0x1d7714: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7728u;
            goto label_1d7728;
        }
    }
    ctx->pc = 0x1D7718u;
    // 0x1d7718: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d771c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1d771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1d7720: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d7720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d7724: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1d7728:
    // 0x1d7728: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x1d7728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1d772c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D772Cu;
    {
        const bool branch_taken_0x1d772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d772c) {
            ctx->pc = 0x1D7730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D772Cu;
            // 0x1d7730: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7790u;
            goto label_1d7790;
        }
    }
    ctx->pc = 0x1D7734u;
    // 0x1d7734: 0x8e440194  lw          $a0, 0x194($s2)
    ctx->pc = 0x1d7734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x1d7738: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d7738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d773c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D773Cu;
    {
        const bool branch_taken_0x1d773c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D773Cu;
            // 0x1d7740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d773c) {
            ctx->pc = 0x1D7758u;
            goto label_1d7758;
        }
    }
    ctx->pc = 0x1D7744u;
    // 0x1d7744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7748: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D7748u;
    SET_GPR_U32(ctx, 31, 0x1D7750u);
    ctx->pc = 0x1D774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7748u;
            // 0x1d774c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7750u; }
        if (ctx->pc != 0x1D7750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7750u; }
        if (ctx->pc != 0x1D7750u) { return; }
    }
    ctx->pc = 0x1D7750u;
    // 0x1d7750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7750u;
    {
        const bool branch_taken_0x1d7750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7750u;
            // 0x1d7754: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7750) {
            ctx->pc = 0x1D7770u;
            goto label_1d7770;
        }
    }
    ctx->pc = 0x1D7758u;
label_1d7758:
    // 0x1d7758: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7758u;
    {
        const bool branch_taken_0x1d7758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7758) {
            ctx->pc = 0x1D775Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7758u;
            // 0x1d775c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7770u;
            goto label_1d7770;
        }
    }
    ctx->pc = 0x1D7760u;
    // 0x1d7760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7764: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D7764u;
    SET_GPR_U32(ctx, 31, 0x1D776Cu);
    ctx->pc = 0x1D7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7764u;
            // 0x1d7768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D776Cu; }
        if (ctx->pc != 0x1D776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D776Cu; }
        if (ctx->pc != 0x1D776Cu) { return; }
    }
    ctx->pc = 0x1D776Cu;
    // 0x1d776c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d7770:
    // 0x1d7770: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7774: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1d7778: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D7778u;
    {
        const bool branch_taken_0x1d7778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7778) {
            ctx->pc = 0x1D777Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7778u;
            // 0x1d777c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7818u;
            goto label_1d7818;
        }
    }
    ctx->pc = 0x1D7780u;
    // 0x1d7780: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7784: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1d7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1d7788: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D7788u;
    {
        const bool branch_taken_0x1d7788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D778Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7788u;
            // 0x1d778c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7788) {
            ctx->pc = 0x1D7814u;
            goto label_1d7814;
        }
    }
    ctx->pc = 0x1D7790u;
label_1d7790:
    // 0x1d7790: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7794: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d7798: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1d7798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1d779c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d77a0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1d77a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1d77a4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D77A4u;
    {
        const bool branch_taken_0x1d77a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77A4u;
            // 0x1d77a8: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77a4) {
            ctx->pc = 0x1D77E8u;
            goto label_1d77e8;
        }
    }
    ctx->pc = 0x1D77ACu;
    // 0x1d77ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d77b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d77b4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d77b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d77b8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d77bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D77BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D77C4u);
        ctx->pc = 0x1D77C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77BCu;
            // 0x1d77c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D77C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74A0u: goto label_1d74a0;
            case 0x1D74E0u: goto label_1d74e0;
            case 0x1D7500u: goto label_1d7500;
            case 0x1D750Cu: goto label_1d750c;
            case 0x1D7538u: goto label_1d7538;
            case 0x1D753Cu: goto label_1d753c;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D75CCu: goto label_1d75cc;
            case 0x1D75F0u: goto label_1d75f0;
            case 0x1D7608u: goto label_1d7608;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7638u: goto label_1d7638;
            case 0x1D7680u: goto label_1d7680;
            case 0x1D7690u: goto label_1d7690;
            case 0x1D76BCu: goto label_1d76bc;
            case 0x1D76C4u: goto label_1d76c4;
            case 0x1D76C8u: goto label_1d76c8;
            case 0x1D76F4u: goto label_1d76f4;
            case 0x1D76F8u: goto label_1d76f8;
            case 0x1D7728u: goto label_1d7728;
            case 0x1D7758u: goto label_1d7758;
            case 0x1D7770u: goto label_1d7770;
            case 0x1D7790u: goto label_1d7790;
            case 0x1D77D8u: goto label_1d77d8;
            case 0x1D77E8u: goto label_1d77e8;
            case 0x1D780Cu: goto label_1d780c;
            case 0x1D7814u: goto label_1d7814;
            case 0x1D7818u: goto label_1d7818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D77C4u; }
            if (ctx->pc != 0x1D77C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D77C4u;
    // 0x1d77c4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d77c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D77C8u;
    {
        const bool branch_taken_0x1d77c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77C8u;
            // 0x1d77cc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77c8) {
            ctx->pc = 0x1D77D8u;
            goto label_1d77d8;
        }
    }
    ctx->pc = 0x1D77D0u;
    // 0x1d77d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d77d4: 0xac62cda0  sw          $v0, -0x3260($v1)
    ctx->pc = 0x1d77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954400), GPR_U32(ctx, 2));
label_1d77d8:
    // 0x1d77d8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d77dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d77e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D77E0u;
    {
        const bool branch_taken_0x1d77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77E0u;
            // 0x1d77e4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77e0) {
            ctx->pc = 0x1D7814u;
            goto label_1d7814;
        }
    }
    ctx->pc = 0x1D77E8u;
label_1d77e8:
    // 0x1d77e8: 0x8c62cda0  lw          $v0, -0x3260($v1)
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954400)));
    // 0x1d77ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D77ECu;
    {
        const bool branch_taken_0x1d77ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77ECu;
            // 0x1d77f0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77ec) {
            ctx->pc = 0x1D7814u;
            goto label_1d7814;
        }
    }
    ctx->pc = 0x1D77F4u;
    // 0x1d77f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D77F4u;
    {
        const bool branch_taken_0x1d77f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D77F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77F4u;
            // 0x1d77f8: 0x8c62cda0  lw          $v0, -0x3260($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77f4) {
            ctx->pc = 0x1D780Cu;
            goto label_1d780c;
        }
    }
    ctx->pc = 0x1D77FCu;
    // 0x1d77fc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7800: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d7800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d7804: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1d7804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d7808: 0x8c62cda0  lw          $v0, -0x3260($v1)
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954400)));
label_1d780c:
    // 0x1d780c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7810: 0xac62cda0  sw          $v0, -0x3260($v1)
    ctx->pc = 0x1d7810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954400), GPR_U32(ctx, 2));
label_1d7814:
    // 0x1d7814: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d7814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7818:
    // 0x1d7818: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d781c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d781cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7824: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7824u;
            // 0x1d7828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74A0u: goto label_1d74a0;
            case 0x1D74E0u: goto label_1d74e0;
            case 0x1D7500u: goto label_1d7500;
            case 0x1D750Cu: goto label_1d750c;
            case 0x1D7538u: goto label_1d7538;
            case 0x1D753Cu: goto label_1d753c;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D75CCu: goto label_1d75cc;
            case 0x1D75F0u: goto label_1d75f0;
            case 0x1D7608u: goto label_1d7608;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7638u: goto label_1d7638;
            case 0x1D7680u: goto label_1d7680;
            case 0x1D7690u: goto label_1d7690;
            case 0x1D76BCu: goto label_1d76bc;
            case 0x1D76C4u: goto label_1d76c4;
            case 0x1D76C8u: goto label_1d76c8;
            case 0x1D76F4u: goto label_1d76f4;
            case 0x1D76F8u: goto label_1d76f8;
            case 0x1D7728u: goto label_1d7728;
            case 0x1D7758u: goto label_1d7758;
            case 0x1D7770u: goto label_1d7770;
            case 0x1D7790u: goto label_1d7790;
            case 0x1D77D8u: goto label_1d77d8;
            case 0x1D77E8u: goto label_1d77e8;
            case 0x1D780Cu: goto label_1d780c;
            case 0x1D7814u: goto label_1d7814;
            case 0x1D7818u: goto label_1d7818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D782Cu;
    // 0x1d782c: 0x0  nop
    ctx->pc = 0x1d782cu;
    // NOP
}

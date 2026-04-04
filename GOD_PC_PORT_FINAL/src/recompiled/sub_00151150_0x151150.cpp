#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151150
// Address: 0x151150 - 0x1513b8
void sub_00151150_0x151150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151150_0x151150");
#endif

    ctx->pc = 0x151150u;

    // 0x151150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151154: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151158: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x151158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15115c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15115cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x151164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x151168: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x15116c: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15116Cu;
    {
        const bool branch_taken_0x15116c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15116c) {
            ctx->pc = 0x151170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15116Cu;
            // 0x151170: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1511DCu;
            goto label_1511dc;
        }
    }
    ctx->pc = 0x151174u;
    // 0x151174: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_151178:
    // 0x151178: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15117c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151180: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x151180u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x151184: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x151184u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151188: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x151188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15118c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15118Cu;
    {
        const bool branch_taken_0x15118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15118Cu;
            // 0x151190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15118c) {
            ctx->pc = 0x1511B0u;
            goto label_1511b0;
        }
    }
    ctx->pc = 0x151194u;
    // 0x151194: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x151198: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15119c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x15119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1511a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1511A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1511A8u);
        ctx->pc = 0x1511A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511A0u;
            // 0x1511a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1511A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1511A8u; }
            if (ctx->pc != 0x1511A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1511A8u;
    // 0x1511a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1511A8u;
    {
        const bool branch_taken_0x1511a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511a8) {
            ctx->pc = 0x1511D0u;
            goto label_1511d0;
        }
    }
    ctx->pc = 0x1511B0u;
label_1511b0:
    // 0x1511b0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1511b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1511B4u;
    {
        const bool branch_taken_0x1511b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511b4) {
            ctx->pc = 0x1511D0u;
            goto label_1511d0;
        }
    }
    ctx->pc = 0x1511BCu;
    // 0x1511bc: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1511bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1511c0: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1511c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1511c4: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1511c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1511C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1511D0u);
        ctx->pc = 0x1511CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511C8u;
            // 0x1511cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1511D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1511D0u; }
            if (ctx->pc != 0x1511D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1511D0u;
label_1511d0:
    // 0x1511d0: 0x1640ffe9  bnez        $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1511D0u;
    {
        const bool branch_taken_0x1511d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1511D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511D0u;
            // 0x1511d4: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511d0) {
            ctx->pc = 0x151178u;
            runtime->cooperativeGuestYield();
            goto label_151178;
        }
    }
    ctx->pc = 0x1511D8u;
    // 0x1511d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1511d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1511dc:
    // 0x1511dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1511dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1511e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1511e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1511e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1511e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1511e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1511E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511E8u;
            // 0x1511ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1511F0u;
    // 0x1511f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1511f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1511f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1511f8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1511f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1511fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1511fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151200: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x151200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x151204: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x151204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151208: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x151208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x15120c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x151210: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x151210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x151214: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x151214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x151218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15121c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x151220: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x151224: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151228: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x15122c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x151230: 0x40f809  jalr        $v0
    ctx->pc = 0x151230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151238u);
        ctx->pc = 0x151234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151230u;
            // 0x151234: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151238u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151238u; }
            if (ctx->pc != 0x151238u) { return; }
        }
        }
    }
    ctx->pc = 0x151238u;
    // 0x151238: 0x8e120024  lw          $s2, 0x24($s0)
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15123c: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x15123Cu;
    {
        const bool branch_taken_0x15123c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15123Cu;
            // 0x151240: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15123c) {
            ctx->pc = 0x151370u;
            goto label_151370;
        }
    }
    ctx->pc = 0x151244u;
    // 0x151244: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x151244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_151248:
    // 0x151248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x151248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15124c: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x15124cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x151250: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151254: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x151258: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x151258u;
    {
        const bool branch_taken_0x151258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151258u;
            // 0x15125c: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151258) {
            ctx->pc = 0x151368u;
            goto label_151368;
        }
    }
    ctx->pc = 0x151260u;
    // 0x151260: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x151264: 0x12710018  beq         $s3, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x151264u;
    {
        const bool branch_taken_0x151264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x151268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151264u;
            // 0x151268: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151264) {
            ctx->pc = 0x1512C8u;
            goto label_1512c8;
        }
    }
    ctx->pc = 0x15126Cu;
    // 0x15126c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x15126Cu;
    {
        const bool branch_taken_0x15126c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x151270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15126Cu;
            // 0x151270: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15126c) {
            ctx->pc = 0x151290u;
            goto label_151290;
        }
    }
    ctx->pc = 0x151274u;
    // 0x151274: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x151274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x151278: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15127c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x151280: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x151284: 0x40f809  jalr        $v0
    ctx->pc = 0x151284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15128Cu);
        ctx->pc = 0x151288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151284u;
            // 0x151288: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15128Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15128Cu; }
            if (ctx->pc != 0x15128Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15128Cu;
    // 0x15128c: 0x0  nop
    ctx->pc = 0x15128cu;
    // NOP
label_151290:
    // 0x151290: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x151290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151294: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x151294u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x151298: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x151298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15129c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x15129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1512a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1512a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1512a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1512a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1512b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1512b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1512b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1512b8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1512b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1512bc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1512bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1512c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1512C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1512C8u);
        ctx->pc = 0x1512C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512C0u;
            // 0x1512c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1512C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1512C8u; }
            if (ctx->pc != 0x1512C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1512C8u;
label_1512c8:
    // 0x1512c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1512c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1512cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1512ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1512d0: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x1512d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1512d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1512d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1512d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1512dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1512dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1512e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1512e4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1512e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1512e8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1512ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1512ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1512F4u);
        ctx->pc = 0x1512F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512ECu;
            // 0x1512f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1512F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1512F4u; }
            if (ctx->pc != 0x1512F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1512F4u;
    // 0x1512f4: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1512F4u;
    {
        const bool branch_taken_0x1512f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1512F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512F4u;
            // 0x1512f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512f4) {
            ctx->pc = 0x151328u;
            goto label_151328;
        }
    }
    ctx->pc = 0x1512FCu;
    // 0x1512fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1512fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151304: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x151304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x151308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15130c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15130cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151310: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151314: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x151318: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x15131c: 0x40f809  jalr        $v0
    ctx->pc = 0x15131Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151324u);
        ctx->pc = 0x151320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15131Cu;
            // 0x151320: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151324u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151324u; }
            if (ctx->pc != 0x151324u) { return; }
        }
        }
    }
    ctx->pc = 0x151324u;
    // 0x151324: 0x0  nop
    ctx->pc = 0x151324u;
    // NOP
label_151328:
    // 0x151328: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15132c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x151330: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x151330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x151334: 0x40f809  jalr        $v0
    ctx->pc = 0x151334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15133Cu);
        ctx->pc = 0x151338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151334u;
            // 0x151338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15133Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15133Cu; }
            if (ctx->pc != 0x15133Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15133Cu;
    // 0x15133c: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x15133Cu;
    {
        const bool branch_taken_0x15133c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x15133c) {
            ctx->pc = 0x151368u;
            goto label_151368;
        }
    }
    ctx->pc = 0x151344u;
    // 0x151344: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x151344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15134c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x151350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151354: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151358: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x151358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x15135c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x15135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x151360: 0x40f809  jalr        $v0
    ctx->pc = 0x151360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151368u);
        ctx->pc = 0x151364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151360u;
            // 0x151364: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151368u; }
            if (ctx->pc != 0x151368u) { return; }
        }
        }
    }
    ctx->pc = 0x151368u;
label_151368:
    // 0x151368: 0x16a0ffb7  bnez        $s5, . + 4 + (-0x49 << 2)
    ctx->pc = 0x151368u;
    {
        const bool branch_taken_0x151368 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151368u;
            // 0x15136c: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151368) {
            ctx->pc = 0x151248u;
            runtime->cooperativeGuestYield();
            goto label_151248;
        }
    }
    ctx->pc = 0x151370u;
label_151370:
    // 0x151370: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x151370u;
    {
        const bool branch_taken_0x151370 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x151374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151370u;
            // 0x151374: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151370) {
            ctx->pc = 0x151390u;
            goto label_151390;
        }
    }
    ctx->pc = 0x151378u;
    // 0x151378: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x15137c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151380: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x151384: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x151388: 0x40f809  jalr        $v0
    ctx->pc = 0x151388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151390u);
        ctx->pc = 0x15138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151388u;
            // 0x15138c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151390u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151390u; }
            if (ctx->pc != 0x151390u) { return; }
        }
        }
    }
    ctx->pc = 0x151390u;
label_151390:
    // 0x151390: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x151390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151394: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x151394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151398: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x151398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15139c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15139cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1513a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1513a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1513a4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1513a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1513a8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1513a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1513ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1513acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1513b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1513B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1513B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513B0u;
            // 0x1513b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151178u: goto label_151178;
            case 0x1511B0u: goto label_1511b0;
            case 0x1511D0u: goto label_1511d0;
            case 0x1511DCu: goto label_1511dc;
            case 0x151248u: goto label_151248;
            case 0x151290u: goto label_151290;
            case 0x1512C8u: goto label_1512c8;
            case 0x151328u: goto label_151328;
            case 0x151368u: goto label_151368;
            case 0x151370u: goto label_151370;
            case 0x151390u: goto label_151390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1513B8u;
}

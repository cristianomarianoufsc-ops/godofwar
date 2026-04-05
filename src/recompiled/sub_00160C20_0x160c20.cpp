#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160C20
// Address: 0x160c20 - 0x161648
void sub_00160C20_0x160c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160C20_0x160c20");
#endif

    ctx->pc = 0x160c20u;

    // 0x160c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x160c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c28: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x160c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x160c2c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x160c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x160c30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c34: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x160c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x160c38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x160c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c3c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x160c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x160c40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x160c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c44: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x160c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x160c48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x160c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x160c4c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x160c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x160c50: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x160c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x160c54: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x160c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x160c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x160c5c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x160c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x160c60: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160C60u;
    {
        const bool branch_taken_0x160c60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x160C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C60u;
            // 0x160c64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c60) {
            ctx->pc = 0x160C8Cu;
            goto label_160c8c;
        }
    }
    ctx->pc = 0x160C68u;
    // 0x160c68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160c6c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x160C6Cu;
    {
        const bool branch_taken_0x160c6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x160C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C6Cu;
            // 0x160c70: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c6c) {
            ctx->pc = 0x160C90u;
            goto label_160c90;
        }
    }
    ctx->pc = 0x160C74u;
    // 0x160c74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160c78: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x160c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x160c7c: 0x8c42c2b4  lw          $v0, -0x3D4C($v0)
    ctx->pc = 0x160c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951604)));
    // 0x160c80: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x160c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c84: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x160c84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x160c88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x160c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_160c8c:
    // 0x160c8c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x160c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_160c90:
    // 0x160c90: 0x1080009f  beqz        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x160C90u;
    {
        const bool branch_taken_0x160c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C90u;
            // 0x160c94: 0x3c16002a  lui         $s6, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c90) {
            ctx->pc = 0x160F10u;
            goto label_160f10;
        }
    }
    ctx->pc = 0x160C98u;
    // 0x160c98: 0x109140  sll         $s2, $s0, 5
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x160c9c: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x160ca0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160ca4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160ca8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160CA8u;
    {
        const bool branch_taken_0x160ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CA8u;
            // 0x160cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ca8) {
            ctx->pc = 0x160CD0u;
            goto label_160cd0;
        }
    }
    ctx->pc = 0x160CB0u;
    // 0x160cb0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cbc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160cc0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cc4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160cc8: 0x40f809  jalr        $v0
    ctx->pc = 0x160CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160CD0u);
        ctx->pc = 0x160CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CC8u;
            // 0x160ccc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160CD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160CD0u; }
            if (ctx->pc != 0x160CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x160CD0u;
label_160cd0:
    // 0x160cd0: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x160cd4: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x160cd8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160cdc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160ce0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160CE0u;
    {
        const bool branch_taken_0x160ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CE0u;
            // 0x160ce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ce0) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160CE8u;
    // 0x160ce8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160cec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cf4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160cf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cfc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160d00: 0x40f809  jalr        $v0
    ctx->pc = 0x160D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160D08u);
        ctx->pc = 0x160D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D00u;
            // 0x160d04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160D08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160D08u; }
            if (ctx->pc != 0x160D08u) { return; }
        }
        }
    }
    ctx->pc = 0x160D08u;
label_160d08:
    // 0x160d08: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x160d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x160d0c: 0x26530004  addiu       $s3, $s2, 0x4
    ctx->pc = 0x160d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x160d10: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x160d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x160d14: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160d18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160D18u;
    {
        const bool branch_taken_0x160d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D18u;
            // 0x160d1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d18) {
            ctx->pc = 0x160D40u;
            goto label_160d40;
        }
    }
    ctx->pc = 0x160D20u;
    // 0x160d20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160d24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d2c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160d30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d34: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160d38: 0x40f809  jalr        $v0
    ctx->pc = 0x160D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160D40u);
        ctx->pc = 0x160D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D38u;
            // 0x160d3c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160D40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160D40u; }
            if (ctx->pc != 0x160D40u) { return; }
        }
        }
    }
    ctx->pc = 0x160D40u;
label_160d40:
    // 0x160d40: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x160d44: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x160d48: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160d4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160D4Cu;
    {
        const bool branch_taken_0x160d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D4Cu;
            // 0x160d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d4c) {
            ctx->pc = 0x160D74u;
            goto label_160d74;
        }
    }
    ctx->pc = 0x160D54u;
    // 0x160d54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160d58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d60: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160d64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x160d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d68: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160d6c: 0x40f809  jalr        $v0
    ctx->pc = 0x160D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160D74u);
        ctx->pc = 0x160D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D6Cu;
            // 0x160d70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160D74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160D74u; }
            if (ctx->pc != 0x160D74u) { return; }
        }
        }
    }
    ctx->pc = 0x160D74u;
label_160d74:
    // 0x160d74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x160d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x160d78: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x160d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x160d7c: 0x244249a8  addiu       $v0, $v0, 0x49A8
    ctx->pc = 0x160d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x160d80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d8c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160d90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d94: 0xc05811e  jal         func_160478
    ctx->pc = 0x160D94u;
    SET_GPR_U32(ctx, 31, 0x160D9Cu);
    ctx->pc = 0x160D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D94u;
            // 0x160d98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160478u;
    if (runtime->hasFunction(0x160478u)) {
        auto targetFn = runtime->lookupFunction(0x160478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D9Cu; }
        if (ctx->pc != 0x160D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160478_0x160478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D9Cu; }
        if (ctx->pc != 0x160D9Cu) { return; }
    }
    ctx->pc = 0x160D9Cu;
    // 0x160d9c: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x160d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x160da0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160da4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160DA8u;
    {
        const bool branch_taken_0x160da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DA8u;
            // 0x160dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160da8) {
            ctx->pc = 0x160DD0u;
            goto label_160dd0;
        }
    }
    ctx->pc = 0x160DB0u;
    // 0x160db0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160db4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dbc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160dc0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x160dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160dc4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160dc8: 0x40f809  jalr        $v0
    ctx->pc = 0x160DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160DD0u);
        ctx->pc = 0x160DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DC8u;
            // 0x160dcc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160DD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160DD0u; }
            if (ctx->pc != 0x160DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x160DD0u;
label_160dd0:
    // 0x160dd0: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x160dd4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160dd8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160ddc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160DDCu;
    {
        const bool branch_taken_0x160ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DDCu;
            // 0x160de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ddc) {
            ctx->pc = 0x160E04u;
            goto label_160e04;
        }
    }
    ctx->pc = 0x160DE4u;
    // 0x160de4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160de8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160df0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160df4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x160df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160df8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160dfc: 0x40f809  jalr        $v0
    ctx->pc = 0x160DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160E04u);
        ctx->pc = 0x160E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DFCu;
            // 0x160e00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160E04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160E04u; }
            if (ctx->pc != 0x160E04u) { return; }
        }
        }
    }
    ctx->pc = 0x160E04u;
label_160e04:
    // 0x160e04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160e08: 0x8c43c2c0  lw          $v1, -0x3D40($v0)
    ctx->pc = 0x160e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951616)));
    // 0x160e0c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160e10: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160e14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160E14u;
    {
        const bool branch_taken_0x160e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E14u;
            // 0x160e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e14) {
            ctx->pc = 0x160E3Cu;
            goto label_160e3c;
        }
    }
    ctx->pc = 0x160E1Cu;
    // 0x160e1c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160e20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e28: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160e2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e30: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160e34: 0x40f809  jalr        $v0
    ctx->pc = 0x160E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160E3Cu);
        ctx->pc = 0x160E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E34u;
            // 0x160e38: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160E3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160E3Cu; }
            if (ctx->pc != 0x160E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x160E3Cu;
label_160e3c:
    // 0x160e3c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x160e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x160e40: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x160e44: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x160e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160e48: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x160e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x160e4c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x160e50: 0x8c63c2c4  lw          $v1, -0x3D3C($v1)
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951620)));
    // 0x160e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160e58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160e5c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160e60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160E60u;
    {
        const bool branch_taken_0x160e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E60u;
            // 0x160e64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e60) {
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E68u;
    // 0x160e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e70: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x160E70u;
    SET_GPR_U32(ctx, 31, 0x160E78u);
    ctx->pc = 0x160E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E70u;
            // 0x160e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E78u; }
        if (ctx->pc != 0x160E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E78u; }
        if (ctx->pc != 0x160E78u) { return; }
    }
    ctx->pc = 0x160E78u;
label_160e78:
    // 0x160e78: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x160e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x160e7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x160e80: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x160e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160e84: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x160e88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160E88u;
    {
        const bool branch_taken_0x160e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E88u;
            // 0x160e8c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e88) {
            ctx->pc = 0x160EA0u;
            goto label_160ea0;
        }
    }
    ctx->pc = 0x160E90u;
    // 0x160e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e98: 0xc057d10  jal         func_15F440
    ctx->pc = 0x160E98u;
    SET_GPR_U32(ctx, 31, 0x160EA0u);
    ctx->pc = 0x160E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E98u;
            // 0x160e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EA0u; }
        if (ctx->pc != 0x160EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EA0u; }
        if (ctx->pc != 0x160EA0u) { return; }
    }
    ctx->pc = 0x160EA0u;
label_160ea0:
    // 0x160ea0: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x160ea4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x160ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x160ea8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160eac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160EACu;
    {
        const bool branch_taken_0x160eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EACu;
            // 0x160eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160eac) {
            ctx->pc = 0x160ED4u;
            goto label_160ed4;
        }
    }
    ctx->pc = 0x160EB4u;
    // 0x160eb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160eb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ec0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160ec4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160ec8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160ecc: 0x40f809  jalr        $v0
    ctx->pc = 0x160ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160ED4u);
        ctx->pc = 0x160ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160ECCu;
            // 0x160ed0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160ED4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160ED4u; }
            if (ctx->pc != 0x160ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x160ED4u;
label_160ed4:
    // 0x160ed4: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x160ed8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x160edc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160ee0: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x160EE0u;
    {
        const bool branch_taken_0x160ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EE0u;
            // 0x160ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ee0) {
            ctx->pc = 0x16108Cu;
            goto label_16108c;
        }
    }
    ctx->pc = 0x160EE8u;
    // 0x160ee8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160eec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ef4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160ef8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160efc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160f00: 0x40f809  jalr        $v0
    ctx->pc = 0x160F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160F08u);
        ctx->pc = 0x160F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F00u;
            // 0x160f04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160F08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160F08u; }
            if (ctx->pc != 0x160F08u) { return; }
        }
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x160F08u;
    {
        const bool branch_taken_0x160f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F08u;
            // 0x160f0c: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f08) {
            ctx->pc = 0x161090u;
            goto label_161090;
        }
    }
    ctx->pc = 0x160F10u;
label_160f10:
    // 0x160f10: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x160f10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x160f14: 0x109140  sll         $s2, $s0, 5
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x160f18: 0x8ea3c2b8  lw          $v1, -0x3D48($s5)
    ctx->pc = 0x160f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951608)));
    // 0x160f1c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160f20: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160f24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F24u;
    {
        const bool branch_taken_0x160f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F24u;
            // 0x160f28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f24) {
            ctx->pc = 0x160F4Cu;
            goto label_160f4c;
        }
    }
    ctx->pc = 0x160F2Cu;
    // 0x160f2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160f30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f38: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f40: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160f44: 0x40f809  jalr        $v0
    ctx->pc = 0x160F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160F4Cu);
        ctx->pc = 0x160F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F44u;
            // 0x160f48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160F4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160F4Cu; }
            if (ctx->pc != 0x160F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x160F4Cu;
label_160f4c:
    // 0x160f4c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x160f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x160f50: 0x8e63c2bc  lw          $v1, -0x3D44($s3)
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951612)));
    // 0x160f54: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160f58: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160f5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F5Cu;
    {
        const bool branch_taken_0x160f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F5Cu;
            // 0x160f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f5c) {
            ctx->pc = 0x160F84u;
            goto label_160f84;
        }
    }
    ctx->pc = 0x160F64u;
    // 0x160f64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160f68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f70: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f78: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160f7c: 0x40f809  jalr        $v0
    ctx->pc = 0x160F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160F84u);
        ctx->pc = 0x160F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F7Cu;
            // 0x160f80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160F84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160F84u; }
            if (ctx->pc != 0x160F84u) { return; }
        }
        }
    }
    ctx->pc = 0x160F84u;
label_160f84:
    // 0x160f84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160f88: 0x8c43c2c0  lw          $v1, -0x3D40($v0)
    ctx->pc = 0x160f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951616)));
    // 0x160f8c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x160f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x160f90: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160f94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F94u;
    {
        const bool branch_taken_0x160f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F94u;
            // 0x160f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f94) {
            ctx->pc = 0x160FBCu;
            goto label_160fbc;
        }
    }
    ctx->pc = 0x160F9Cu;
    // 0x160f9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160fa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fa8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fb0: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160fb4: 0x40f809  jalr        $v0
    ctx->pc = 0x160FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160FBCu);
        ctx->pc = 0x160FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160FB4u;
            // 0x160fb8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160FBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160FBCu; }
            if (ctx->pc != 0x160FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x160FBCu;
label_160fbc:
    // 0x160fbc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x160fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x160fc0: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x160fc4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x160fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160fc8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x160fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x160fcc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x160fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x160fd0: 0x8c63c2c4  lw          $v1, -0x3D3C($v1)
    ctx->pc = 0x160fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951620)));
    // 0x160fd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160fd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160fdc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x160fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160FE0u;
    {
        const bool branch_taken_0x160fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160FE0u;
            // 0x160fe4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fe0) {
            ctx->pc = 0x160FF8u;
            goto label_160ff8;
        }
    }
    ctx->pc = 0x160FE8u;
    // 0x160fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ff0: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x160FF0u;
    SET_GPR_U32(ctx, 31, 0x160FF8u);
    ctx->pc = 0x160FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160FF0u;
            // 0x160ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FF8u; }
        if (ctx->pc != 0x160FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FF8u; }
        if (ctx->pc != 0x160FF8u) { return; }
    }
    ctx->pc = 0x160FF8u;
label_160ff8:
    // 0x160ff8: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x160ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x160ffc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x160ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x161000: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x161000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x161004: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x161004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x161008: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161008u;
    {
        const bool branch_taken_0x161008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161008u;
            // 0x16100c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161008) {
            ctx->pc = 0x161020u;
            goto label_161020;
        }
    }
    ctx->pc = 0x161010u;
    // 0x161010: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161018: 0xc057d10  jal         func_15F440
    ctx->pc = 0x161018u;
    SET_GPR_U32(ctx, 31, 0x161020u);
    ctx->pc = 0x16101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161018u;
            // 0x16101c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161020u; }
        if (ctx->pc != 0x161020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161020u; }
        if (ctx->pc != 0x161020u) { return; }
    }
    ctx->pc = 0x161020u;
label_161020:
    // 0x161020: 0x8ea3c2b8  lw          $v1, -0x3D48($s5)
    ctx->pc = 0x161020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951608)));
    // 0x161024: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x161024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x161028: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x161028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16102c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161030: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161030u;
    {
        const bool branch_taken_0x161030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161030u;
            // 0x161034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161030) {
            ctx->pc = 0x161058u;
            goto label_161058;
        }
    }
    ctx->pc = 0x161038u;
    // 0x161038: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16103c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16103cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161040: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161044: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x161048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x161048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16104c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x161050: 0x40f809  jalr        $v0
    ctx->pc = 0x161050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161058u);
        ctx->pc = 0x161054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161050u;
            // 0x161054: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161058u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161058u; }
            if (ctx->pc != 0x161058u) { return; }
        }
        }
    }
    ctx->pc = 0x161058u;
label_161058:
    // 0x161058: 0x8e63c2bc  lw          $v1, -0x3D44($s3)
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951612)));
    // 0x16105c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161060: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161064: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161064u;
    {
        const bool branch_taken_0x161064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161064u;
            // 0x161068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161064) {
            ctx->pc = 0x16108Cu;
            goto label_16108c;
        }
    }
    ctx->pc = 0x16106Cu;
    // 0x16106c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161070: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161078: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x16107c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16107cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161080: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x161084: 0x40f809  jalr        $v0
    ctx->pc = 0x161084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16108Cu);
        ctx->pc = 0x161088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161084u;
            // 0x161088: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16108Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16108Cu; }
            if (ctx->pc != 0x16108Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16108Cu;
label_16108c:
    // 0x16108c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x16108cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_161090:
    // 0x161090: 0x10f140  sll         $fp, $s0, 5
    ctx->pc = 0x161090u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x161094: 0x8ca3c2c0  lw          $v1, -0x3D40($a1)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951616)));
    // 0x161098: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x161098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x16109c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1610a0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1610a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1610A4u;
    {
        const bool branch_taken_0x1610a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1610A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1610A4u;
            // 0x1610a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610a4) {
            ctx->pc = 0x1610CCu;
            goto label_1610cc;
        }
    }
    ctx->pc = 0x1610ACu;
    // 0x1610ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1610b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1610b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610b8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1610b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1610bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1610bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610c0: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1610c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1610C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610CCu);
        ctx->pc = 0x1610C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1610C4u;
            // 0x1610c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1610CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1610CCu; }
            if (ctx->pc != 0x1610CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1610CCu;
label_1610cc:
    // 0x1610cc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1610d0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1610d4: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1610d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1610d8: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x1610d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1610dc: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x1610dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x1610e0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1610e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1610e4: 0x8ee4c2c4  lw          $a0, -0x3D3C($s7)
    ctx->pc = 0x1610e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294951620)));
    // 0x1610e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1610ec: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1610ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1610f0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1610f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1610f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1610fc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1610fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161100u;
    {
        const bool branch_taken_0x161100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161100u;
            // 0x161104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161100) {
            ctx->pc = 0x161114u;
            goto label_161114;
        }
    }
    ctx->pc = 0x161108u;
    // 0x161108: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16110c: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x16110Cu;
    SET_GPR_U32(ctx, 31, 0x161114u);
    ctx->pc = 0x161110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16110Cu;
            // 0x161110: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161114u; }
        if (ctx->pc != 0x161114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161114u; }
        if (ctx->pc != 0x161114u) { return; }
    }
    ctx->pc = 0x161114u;
label_161114:
    // 0x161114: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x161118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x161118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16111c: 0x949821  addu        $s3, $a0, $s4
    ctx->pc = 0x16111cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x161120: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x161124: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x161128: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161128u;
    {
        const bool branch_taken_0x161128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161128u;
            // 0x16112c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161128) {
            ctx->pc = 0x161140u;
            goto label_161140;
        }
    }
    ctx->pc = 0x161130u;
    // 0x161130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161138: 0xc057d10  jal         func_15F440
    ctx->pc = 0x161138u;
    SET_GPR_U32(ctx, 31, 0x161140u);
    ctx->pc = 0x16113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161138u;
            // 0x16113c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161140u; }
        if (ctx->pc != 0x161140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161140u; }
        if (ctx->pc != 0x161140u) { return; }
    }
    ctx->pc = 0x161140u;
label_161140:
    // 0x161140: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x161144: 0x27d20008  addiu       $s2, $fp, 0x8
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x161148: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x16114c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161150: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161154: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161154u;
    {
        const bool branch_taken_0x161154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161154u;
            // 0x161158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161154) {
            ctx->pc = 0x16117Cu;
            goto label_16117c;
        }
    }
    ctx->pc = 0x16115Cu;
    // 0x16115c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161164: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x161164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161168: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x16116c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16116cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161170: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x161170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x161174: 0x40f809  jalr        $v0
    ctx->pc = 0x161174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16117Cu);
        ctx->pc = 0x161178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161174u;
            // 0x161178: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16117Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16117Cu; }
            if (ctx->pc != 0x16117Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16117Cu;
label_16117c:
    // 0x16117c: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x16117cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x161180: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x161180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x161184: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x161184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161188: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16118c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16118Cu;
    {
        const bool branch_taken_0x16118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16118Cu;
            // 0x161190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16118c) {
            ctx->pc = 0x1611B4u;
            goto label_1611b4;
        }
    }
    ctx->pc = 0x161194u;
    // 0x161194: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16119c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1611a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1611a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1611a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611a8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1611ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1611ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1611B4u);
        ctx->pc = 0x1611B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611ACu;
            // 0x1611b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1611B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1611B4u; }
            if (ctx->pc != 0x1611B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1611B4u;
label_1611b4:
    // 0x1611b4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1611b8: 0x8ca3c2c0  lw          $v1, -0x3D40($a1)
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951616)));
    // 0x1611bc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1611bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1611c0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1611c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1611c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1611C4u;
    {
        const bool branch_taken_0x1611c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611C4u;
            // 0x1611c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611c4) {
            ctx->pc = 0x1611ECu;
            goto label_1611ec;
        }
    }
    ctx->pc = 0x1611CCu;
    // 0x1611cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1611ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1611d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1611d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1611d8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1611dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1611dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611e0: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1611e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1611E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1611ECu);
        ctx->pc = 0x1611E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611E4u;
            // 0x1611e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1611ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1611ECu; }
            if (ctx->pc != 0x1611ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1611ECu;
label_1611ec:
    // 0x1611ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1611f0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1611f4: 0x8ee4c2c4  lw          $a0, -0x3D3C($s7)
    ctx->pc = 0x1611f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294951620)));
    // 0x1611f8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1611fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161200: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161204: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161208u;
    {
        const bool branch_taken_0x161208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161208u;
            // 0x16120c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161208) {
            ctx->pc = 0x16121Cu;
            goto label_16121c;
        }
    }
    ctx->pc = 0x161210u;
    // 0x161210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161214: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x161214u;
    SET_GPR_U32(ctx, 31, 0x16121Cu);
    ctx->pc = 0x161218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161214u;
            // 0x161218: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16121Cu; }
        if (ctx->pc != 0x16121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16121Cu; }
        if (ctx->pc != 0x16121Cu) { return; }
    }
    ctx->pc = 0x16121Cu;
label_16121c:
    // 0x16121c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x161220: 0x26620044  addiu       $v0, $s3, 0x44
    ctx->pc = 0x161220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x161224: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161224u;
    {
        const bool branch_taken_0x161224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161224u;
            // 0x161228: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161224) {
            ctx->pc = 0x16123Cu;
            goto label_16123c;
        }
    }
    ctx->pc = 0x16122Cu;
    // 0x16122c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161234: 0xc057d10  jal         func_15F440
    ctx->pc = 0x161234u;
    SET_GPR_U32(ctx, 31, 0x16123Cu);
    ctx->pc = 0x161238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161234u;
            // 0x161238: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16123Cu; }
        if (ctx->pc != 0x16123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16123Cu; }
        if (ctx->pc != 0x16123Cu) { return; }
    }
    ctx->pc = 0x16123Cu;
label_16123c:
    // 0x16123c: 0x8ec3c2b8  lw          $v1, -0x3D48($s6)
    ctx->pc = 0x16123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951608)));
    // 0x161240: 0x27d2000c  addiu       $s2, $fp, 0xC
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x161244: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161248: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16124c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16124Cu;
    {
        const bool branch_taken_0x16124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16124Cu;
            // 0x161250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16124c) {
            ctx->pc = 0x161274u;
            goto label_161274;
        }
    }
    ctx->pc = 0x161254u;
    // 0x161254: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16125c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16125cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161260: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x161264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x161264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161268: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x161268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x16126c: 0x40f809  jalr        $v0
    ctx->pc = 0x16126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161274u);
        ctx->pc = 0x161270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16126Cu;
            // 0x161270: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161274u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161274u; }
            if (ctx->pc != 0x161274u) { return; }
        }
        }
    }
    ctx->pc = 0x161274u;
label_161274:
    // 0x161274: 0x8ea3c2bc  lw          $v1, -0x3D44($s5)
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951612)));
    // 0x161278: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16127c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x16127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161280u;
    {
        const bool branch_taken_0x161280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161280u;
            // 0x161284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161280) {
            ctx->pc = 0x1612A8u;
            goto label_1612a8;
        }
    }
    ctx->pc = 0x161288u;
    // 0x161288: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16128c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161290: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x161290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161294: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x161298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x161298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16129c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x16129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1612a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1612A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1612A8u);
        ctx->pc = 0x1612A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612A0u;
            // 0x1612a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1612A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1612A8u; }
            if (ctx->pc != 0x1612A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1612A8u;
label_1612a8:
    // 0x1612a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1612ac: 0x2442c2c0  addiu       $v0, $v0, -0x3D40
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951616));
    // 0x1612b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1612b4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1612b8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1612bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1612BCu;
    {
        const bool branch_taken_0x1612bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612BCu;
            // 0x1612c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612bc) {
            ctx->pc = 0x1612E4u;
            goto label_1612e4;
        }
    }
    ctx->pc = 0x1612C4u;
    // 0x1612c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1612c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1612c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1612c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612cc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1612d0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1612d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1612d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612d8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1612d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1612dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1612DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1612E4u);
        ctx->pc = 0x1612E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612DCu;
            // 0x1612e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1612E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1612E4u; }
            if (ctx->pc != 0x1612E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1612E4u;
label_1612e4:
    // 0x1612e4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1612e8: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x1612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1612ec: 0x222a818  mult        $s5, $s1, $v0
    ctx->pc = 0x1612ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1612f0: 0x203b018  mult        $s6, $s0, $v1
    ctx->pc = 0x1612f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1612f4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1612f8: 0x2463c2c4  addiu       $v1, $v1, -0x3D3C
    ctx->pc = 0x1612f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951620));
    // 0x1612fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161300: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x161304: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x161308: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16130c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x16130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161310u;
    {
        const bool branch_taken_0x161310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161310u;
            // 0x161314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161310) {
            ctx->pc = 0x161324u;
            goto label_161324;
        }
    }
    ctx->pc = 0x161318u;
    // 0x161318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16131c: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x16131Cu;
    SET_GPR_U32(ctx, 31, 0x161324u);
    ctx->pc = 0x161320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16131Cu;
            // 0x161320: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161324u; }
        if (ctx->pc != 0x161324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161324u; }
        if (ctx->pc != 0x161324u) { return; }
    }
    ctx->pc = 0x161324u;
label_161324:
    // 0x161324: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x161324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x161328: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x16132c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16132Cu;
    {
        const bool branch_taken_0x16132c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16132Cu;
            // 0x161330: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16132c) {
            ctx->pc = 0x161344u;
            goto label_161344;
        }
    }
    ctx->pc = 0x161334u;
    // 0x161334: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16133c: 0xc057d10  jal         func_15F440
    ctx->pc = 0x16133Cu;
    SET_GPR_U32(ctx, 31, 0x161344u);
    ctx->pc = 0x161340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16133Cu;
            // 0x161340: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161344u; }
        if (ctx->pc != 0x161344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161344u; }
        if (ctx->pc != 0x161344u) { return; }
    }
    ctx->pc = 0x161344u;
label_161344:
    // 0x161344: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x161348: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x161348u;
    {
        const bool branch_taken_0x161348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161348u;
            // 0x16134c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161348) {
            ctx->pc = 0x161374u;
            goto label_161374;
        }
    }
    ctx->pc = 0x161350u;
    // 0x161350: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x161354: 0x244249a8  addiu       $v0, $v0, 0x49A8
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x161358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16135c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161364: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161368: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16136c: 0xc05811e  jal         func_160478
    ctx->pc = 0x16136Cu;
    SET_GPR_U32(ctx, 31, 0x161374u);
    ctx->pc = 0x161370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16136Cu;
            // 0x161370: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160478u;
    if (runtime->hasFunction(0x160478u)) {
        auto targetFn = runtime->lookupFunction(0x160478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161374u; }
        if (ctx->pc != 0x161374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160478_0x160478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161374u; }
        if (ctx->pc != 0x161374u) { return; }
    }
    ctx->pc = 0x161374u;
label_161374:
    // 0x161374: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x161374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x161378: 0x27d20010  addiu       $s2, $fp, 0x10
    ctx->pc = 0x161378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x16137c: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x16137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
    // 0x161380: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161384: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161388: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16138c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16138Cu;
    {
        const bool branch_taken_0x16138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16138Cu;
            // 0x161390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16138c) {
            ctx->pc = 0x1613B4u;
            goto label_1613b4;
        }
    }
    ctx->pc = 0x161394u;
    // 0x161394: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16139c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x16139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1613a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1613a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1613a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613a8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1613a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1613ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1613ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1613B4u);
        ctx->pc = 0x1613B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613ACu;
            // 0x1613b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1613B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1613B4u; }
            if (ctx->pc != 0x1613B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1613B4u;
label_1613b4:
    // 0x1613b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1613b8: 0x2442c2bc  addiu       $v0, $v0, -0x3D44
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951612));
    // 0x1613bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1613c0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1613c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1613c4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1613c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1613C8u;
    {
        const bool branch_taken_0x1613c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613C8u;
            // 0x1613cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c8) {
            ctx->pc = 0x1613F0u;
            goto label_1613f0;
        }
    }
    ctx->pc = 0x1613D0u;
    // 0x1613d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1613d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1613d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613d8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1613dc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1613dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1613e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1613e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613e4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1613e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1613e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1613E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1613F0u);
        ctx->pc = 0x1613ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613E8u;
            // 0x1613ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1613F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1613F0u; }
            if (ctx->pc != 0x1613F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1613F0u;
label_1613f0:
    // 0x1613f0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1613f4: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x1613f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x1613f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1613f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1613fc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1613fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x161400: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161404u;
    {
        const bool branch_taken_0x161404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161404u;
            // 0x161408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161404) {
            ctx->pc = 0x16142Cu;
            goto label_16142c;
        }
    }
    ctx->pc = 0x16140Cu;
    // 0x16140c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161410: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161414: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161418: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x16141c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16141cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161420: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x161424: 0x40f809  jalr        $v0
    ctx->pc = 0x161424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16142Cu);
        ctx->pc = 0x161428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161424u;
            // 0x161428: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16142Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16142Cu; }
            if (ctx->pc != 0x16142Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16142Cu;
label_16142c:
    // 0x16142c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x16142cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x161430: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x161434: 0x24a5c2c4  addiu       $a1, $a1, -0x3D3C
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951620));
    // 0x161438: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x16143c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161440: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161444: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161448u;
    {
        const bool branch_taken_0x161448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161448u;
            // 0x16144c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161448) {
            ctx->pc = 0x16145Cu;
            goto label_16145c;
        }
    }
    ctx->pc = 0x161450u;
    // 0x161450: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161454: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x161454u;
    SET_GPR_U32(ctx, 31, 0x16145Cu);
    ctx->pc = 0x161458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161454u;
            // 0x161458: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16145Cu; }
        if (ctx->pc != 0x16145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16145Cu; }
        if (ctx->pc != 0x16145Cu) { return; }
    }
    ctx->pc = 0x16145Cu;
label_16145c:
    // 0x16145c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x16145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x161460: 0x26620054  addiu       $v0, $s3, 0x54
    ctx->pc = 0x161460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x161464: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161464u;
    {
        const bool branch_taken_0x161464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161464u;
            // 0x161468: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161464) {
            ctx->pc = 0x16147Cu;
            goto label_16147c;
        }
    }
    ctx->pc = 0x16146Cu;
    // 0x16146c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161474: 0xc057d10  jal         func_15F440
    ctx->pc = 0x161474u;
    SET_GPR_U32(ctx, 31, 0x16147Cu);
    ctx->pc = 0x161478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161474u;
            // 0x161478: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16147Cu; }
        if (ctx->pc != 0x16147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16147Cu; }
        if (ctx->pc != 0x16147Cu) { return; }
    }
    ctx->pc = 0x16147Cu;
label_16147c:
    // 0x16147c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x16147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x161480: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161484: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x161484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x161488: 0x8c44c2c8  lw          $a0, -0x3D38($v0)
    ctx->pc = 0x161488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951624)));
    // 0x16148c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x161490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161494: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161498: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16149c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16149Cu;
    {
        const bool branch_taken_0x16149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16149Cu;
            // 0x1614a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16149c) {
            ctx->pc = 0x1614ACu;
            goto label_1614ac;
        }
    }
    ctx->pc = 0x1614A4u;
    // 0x1614a4: 0xc051882  jal         func_146208
    ctx->pc = 0x1614A4u;
    SET_GPR_U32(ctx, 31, 0x1614ACu);
    ctx->pc = 0x1614A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614A4u;
            // 0x1614a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146208u;
    if (runtime->hasFunction(0x146208u)) {
        auto targetFn = runtime->lookupFunction(0x146208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614ACu; }
        if (ctx->pc != 0x1614ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146208_0x146208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614ACu; }
        if (ctx->pc != 0x1614ACu) { return; }
    }
    ctx->pc = 0x1614ACu;
label_1614ac:
    // 0x1614ac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1614acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1614b0: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x1614b4: 0x2463c2c4  addiu       $v1, $v1, -0x3D3C
    ctx->pc = 0x1614b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951620));
    // 0x1614b8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1614bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1614bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1614c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1614c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1614c4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1614c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1614C8u;
    {
        const bool branch_taken_0x1614c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614C8u;
            // 0x1614cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614c8) {
            ctx->pc = 0x1614DCu;
            goto label_1614dc;
        }
    }
    ctx->pc = 0x1614D0u;
    // 0x1614d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1614d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614d4: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x1614D4u;
    SET_GPR_U32(ctx, 31, 0x1614DCu);
    ctx->pc = 0x1614D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614D4u;
            // 0x1614d8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614DCu; }
        if (ctx->pc != 0x1614DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614DCu; }
        if (ctx->pc != 0x1614DCu) { return; }
    }
    ctx->pc = 0x1614DCu;
label_1614dc:
    // 0x1614dc: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1614e0: 0x2662005c  addiu       $v0, $s3, 0x5C
    ctx->pc = 0x1614e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x1614e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1614E4u;
    {
        const bool branch_taken_0x1614e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1614E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614E4u;
            // 0x1614e8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614e4) {
            ctx->pc = 0x1614FCu;
            goto label_1614fc;
        }
    }
    ctx->pc = 0x1614ECu;
    // 0x1614ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1614ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1614f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614f4: 0xc057d10  jal         func_15F440
    ctx->pc = 0x1614F4u;
    SET_GPR_U32(ctx, 31, 0x1614FCu);
    ctx->pc = 0x1614F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614F4u;
            // 0x1614f8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614FCu; }
        if (ctx->pc != 0x1614FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614FCu; }
        if (ctx->pc != 0x1614FCu) { return; }
    }
    ctx->pc = 0x1614FCu;
label_1614fc:
    // 0x1614fc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1614fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x161500: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x161504: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x161504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x161508: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x161508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16150c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x161510: 0x24a5c2c4  addiu       $a1, $a1, -0x3D3C
    ctx->pc = 0x161510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951620));
    // 0x161514: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x161514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161518: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x16151c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161520: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161524: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161528: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161528u;
    {
        const bool branch_taken_0x161528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161528u;
            // 0x16152c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161528) {
            ctx->pc = 0x16153Cu;
            goto label_16153c;
        }
    }
    ctx->pc = 0x161530u;
    // 0x161530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161534: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x161534u;
    SET_GPR_U32(ctx, 31, 0x16153Cu);
    ctx->pc = 0x161538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161534u;
            // 0x161538: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDB0u;
    if (runtime->hasFunction(0x15DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16153Cu; }
        if (ctx->pc != 0x16153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ddb0_0x15ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16153Cu; }
        if (ctx->pc != 0x16153Cu) { return; }
    }
    ctx->pc = 0x16153Cu;
label_16153c:
    // 0x16153c: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x16153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x161540: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x161544: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161544u;
    {
        const bool branch_taken_0x161544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161544u;
            // 0x161548: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161544) {
            ctx->pc = 0x16155Cu;
            goto label_16155c;
        }
    }
    ctx->pc = 0x16154Cu;
    // 0x16154c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161554: 0xc057d10  jal         func_15F440
    ctx->pc = 0x161554u;
    SET_GPR_U32(ctx, 31, 0x16155Cu);
    ctx->pc = 0x161558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161554u;
            // 0x161558: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16155Cu; }
        if (ctx->pc != 0x16155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16155Cu; }
        if (ctx->pc != 0x16155Cu) { return; }
    }
    ctx->pc = 0x16155Cu;
label_16155c:
    // 0x16155c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161560: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x161560u;
    {
        const bool branch_taken_0x161560 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x161564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161560u;
            // 0x161564: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161560) {
            ctx->pc = 0x1615F0u;
            goto label_1615f0;
        }
    }
    ctx->pc = 0x161568u;
    // 0x161568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16156c: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16156Cu;
    {
        const bool branch_taken_0x16156c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x161570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16156Cu;
            // 0x161570: 0x741021  addu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16156c) {
            ctx->pc = 0x1615F4u;
            goto label_1615f4;
        }
    }
    ctx->pc = 0x161574u;
    // 0x161574: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x161574u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x161578: 0x8e42ed5c  lw          $v0, -0x12A4($s2)
    ctx->pc = 0x161578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962524)));
    // 0x16157c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x161580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161584: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x161584u;
    {
        const bool branch_taken_0x161584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x161588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161584u;
            // 0x161588: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161584) {
            ctx->pc = 0x1615F0u;
            goto label_1615f0;
        }
    }
    ctx->pc = 0x16158Cu;
    // 0x16158c: 0xc0580e0  jal         func_160380
    ctx->pc = 0x16158Cu;
    SET_GPR_U32(ctx, 31, 0x161594u);
    ctx->pc = 0x161590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16158Cu;
            // 0x161590: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160380u;
    if (runtime->hasFunction(0x160380u)) {
        auto targetFn = runtime->lookupFunction(0x160380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161594u; }
        if (ctx->pc != 0x161594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160380_0x160380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161594u; }
        if (ctx->pc != 0x161594u) { return; }
    }
    ctx->pc = 0x161594u;
    // 0x161594: 0x8e42ed5c  lw          $v0, -0x12A4($s2)
    ctx->pc = 0x161594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962524)));
    // 0x161598: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x161598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x16159c: 0xc04fd64  jal         func_13F590
    ctx->pc = 0x16159Cu;
    SET_GPR_U32(ctx, 31, 0x1615A4u);
    ctx->pc = 0x1615A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16159Cu;
            // 0x1615a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F590u;
    if (runtime->hasFunction(0x13F590u)) {
        auto targetFn = runtime->lookupFunction(0x13F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615A4u; }
        if (ctx->pc != 0x1615A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f590_0x13f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615A4u; }
        if (ctx->pc != 0x1615A4u) { return; }
    }
    ctx->pc = 0x1615A4u;
    // 0x1615a4: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1615a8: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x1615ac: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1615acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x1615b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1615b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1615b4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1615b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1615bc: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1615BCu;
    SET_GPR_U32(ctx, 31, 0x1615C4u);
    ctx->pc = 0x1615C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615BCu;
            // 0x1615c0: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    }
    ctx->pc = 0x1615C4u;
    // 0x1615c4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1615C4u;
    SET_GPR_U32(ctx, 31, 0x1615CCu);
    ctx->pc = 0x1615C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615C4u;
            // 0x1615c8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615CCu; }
        if (ctx->pc != 0x1615CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615CCu; }
        if (ctx->pc != 0x1615CCu) { return; }
    }
    ctx->pc = 0x1615CCu;
    // 0x1615cc: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x1615ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1615d0: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x1615d4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1615d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1615d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1615d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1615dc: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1615e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1615e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1615e4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1615E4u;
    SET_GPR_U32(ctx, 31, 0x1615ECu);
    ctx->pc = 0x1615E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615E4u;
            // 0x1615e8: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615ECu; }
        if (ctx->pc != 0x1615ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615ECu; }
        if (ctx->pc != 0x1615ECu) { return; }
    }
    ctx->pc = 0x1615ECu;
    // 0x1615ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1615ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1615f0:
    // 0x1615f0: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1615f4:
    // 0x1615f4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1615f8: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1615fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1615FCu;
    {
        const bool branch_taken_0x1615fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615FCu;
            // 0x161600: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615fc) {
            ctx->pc = 0x161614u;
            goto label_161614;
        }
    }
    ctx->pc = 0x161604u;
    // 0x161604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16160c: 0xc057d10  jal         func_15F440
    ctx->pc = 0x16160Cu;
    SET_GPR_U32(ctx, 31, 0x161614u);
    ctx->pc = 0x161610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16160Cu;
            // 0x161610: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161614u; }
        if (ctx->pc != 0x161614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161614u; }
        if (ctx->pc != 0x161614u) { return; }
    }
    ctx->pc = 0x161614u;
label_161614:
    // 0x161614: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x161614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161618: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x161618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16161c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x16161cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161620: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x161620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161624: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x161624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161628: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x161628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16162c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x16162cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161630: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x161630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161634: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x161634u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16163c: 0x3e00008  jr          $ra
    ctx->pc = 0x16163Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16163Cu;
            // 0x161640: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C8Cu: goto label_160c8c;
            case 0x160C90u: goto label_160c90;
            case 0x160CD0u: goto label_160cd0;
            case 0x160D08u: goto label_160d08;
            case 0x160D40u: goto label_160d40;
            case 0x160D74u: goto label_160d74;
            case 0x160DD0u: goto label_160dd0;
            case 0x160E04u: goto label_160e04;
            case 0x160E3Cu: goto label_160e3c;
            case 0x160E78u: goto label_160e78;
            case 0x160EA0u: goto label_160ea0;
            case 0x160ED4u: goto label_160ed4;
            case 0x160F10u: goto label_160f10;
            case 0x160F4Cu: goto label_160f4c;
            case 0x160F84u: goto label_160f84;
            case 0x160FBCu: goto label_160fbc;
            case 0x160FF8u: goto label_160ff8;
            case 0x161020u: goto label_161020;
            case 0x161058u: goto label_161058;
            case 0x16108Cu: goto label_16108c;
            case 0x161090u: goto label_161090;
            case 0x1610CCu: goto label_1610cc;
            case 0x161114u: goto label_161114;
            case 0x161140u: goto label_161140;
            case 0x16117Cu: goto label_16117c;
            case 0x1611B4u: goto label_1611b4;
            case 0x1611ECu: goto label_1611ec;
            case 0x16121Cu: goto label_16121c;
            case 0x16123Cu: goto label_16123c;
            case 0x161274u: goto label_161274;
            case 0x1612A8u: goto label_1612a8;
            case 0x1612E4u: goto label_1612e4;
            case 0x161324u: goto label_161324;
            case 0x161344u: goto label_161344;
            case 0x161374u: goto label_161374;
            case 0x1613B4u: goto label_1613b4;
            case 0x1613F0u: goto label_1613f0;
            case 0x16142Cu: goto label_16142c;
            case 0x16145Cu: goto label_16145c;
            case 0x16147Cu: goto label_16147c;
            case 0x1614ACu: goto label_1614ac;
            case 0x1614DCu: goto label_1614dc;
            case 0x1614FCu: goto label_1614fc;
            case 0x16153Cu: goto label_16153c;
            case 0x16155Cu: goto label_16155c;
            case 0x1615F0u: goto label_1615f0;
            case 0x1615F4u: goto label_1615f4;
            case 0x161614u: goto label_161614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161644u;
    // 0x161644: 0x0  nop
    ctx->pc = 0x161644u;
    // NOP
}

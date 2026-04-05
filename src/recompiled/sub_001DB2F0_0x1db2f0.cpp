#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB2F0
// Address: 0x1db2f0 - 0x1db3d0
void sub_001DB2F0_0x1db2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB2F0_0x1db2f0");
#endif

    ctx->pc = 0x1db2f0u;

    // 0x1db2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2f4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1db2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db2fc: 0x24442cc0  addiu       $a0, $v0, 0x2CC0
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1db300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db304: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1db308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db30c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1db30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1db310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db314: 0x0  nop
    ctx->pc = 0x1db314u;
    // NOP
    // 0x1db318: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x1DB318u;
    {
        const bool branch_taken_0x1db318 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB318u;
            // 0x1db31c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db318) {
            ctx->pc = 0x1DB3C4u;
            goto label_1db3c4;
        }
    }
    ctx->pc = 0x1DB320u;
    // 0x1db320: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1db320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db324: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1db328: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x1db328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x1db32c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1db330: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DB330u;
    {
        const bool branch_taken_0x1db330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB330u;
            // 0x1db334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db330) {
            ctx->pc = 0x1DB3C8u;
            goto label_1db3c8;
        }
    }
    ctx->pc = 0x1DB338u;
    // 0x1db338: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB338u;
    {
        const bool branch_taken_0x1db338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DB33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB338u;
            // 0x1db33c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db338) {
            ctx->pc = 0x1DB358u;
            goto label_1db358;
        }
    }
    ctx->pc = 0x1DB340u;
    // 0x1db340: 0x90820054  lbu         $v0, 0x54($a0)
    ctx->pc = 0x1db340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1db344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db348: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1db348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db34c: 0xa0820054  sb          $v0, 0x54($a0)
    ctx->pc = 0x1db34cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB350u;
    {
        const bool branch_taken_0x1db350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB350u;
            // 0x1db354: 0x2c630003  sltiu       $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db350) {
            ctx->pc = 0x1DB374u;
            goto label_1db374;
        }
    }
    ctx->pc = 0x1DB358u;
label_1db358:
    // 0x1db358: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB358u;
    {
        const bool branch_taken_0x1db358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB358u;
            // 0x1db35c: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db358) {
            ctx->pc = 0x1DB380u;
            goto label_1db380;
        }
    }
    ctx->pc = 0x1DB360u;
    // 0x1db360: 0x90820055  lbu         $v0, 0x55($a0)
    ctx->pc = 0x1db360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x1db364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db368: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1db368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db36c: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x1db36cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db370: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x1db370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1db374:
    // 0x1db374: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB374u;
    {
        const bool branch_taken_0x1db374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB374u;
            // 0x1db378: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db374) {
            ctx->pc = 0x1DB3C4u;
            goto label_1db3c4;
        }
    }
    ctx->pc = 0x1DB37Cu;
    // 0x1db37c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1db37cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
label_1db380:
    // 0x1db380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db384: 0x24c62cc0  addiu       $a2, $a2, 0x2CC0
    ctx->pc = 0x1db384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11456));
    // 0x1db388: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x1db388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1db38c: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1db38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1db390: 0x24b001f4  addiu       $s0, $a1, 0x1F4
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 500));
    // 0x1db394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db39c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db3a0: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1DB3A0u;
    SET_GPR_U32(ctx, 31, 0x1DB3A8u);
    ctx->pc = 0x1DB3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3A0u;
            // 0x1db3a4: 0xacc20050  sw          $v0, 0x50($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3A8u; }
        if (ctx->pc != 0x1DB3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3A8u; }
        if (ctx->pc != 0x1DB3A8u) { return; }
    }
    ctx->pc = 0x1DB3A8u;
    // 0x1db3a8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB3A8u;
    {
        const bool branch_taken_0x1db3a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3A8u;
            // 0x1db3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3a8) {
            ctx->pc = 0x1DB3C0u;
            goto label_1db3c0;
        }
    }
    ctx->pc = 0x1DB3B0u;
    // 0x1db3b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3b8: 0xc087372  jal         func_21CDC8
    ctx->pc = 0x1DB3B8u;
    SET_GPR_U32(ctx, 31, 0x1DB3C0u);
    ctx->pc = 0x1DB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3B8u;
            // 0x1db3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDC8u;
    if (runtime->hasFunction(0x21CDC8u)) {
        auto targetFn = runtime->lookupFunction(0x21CDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3C0u; }
        if (ctx->pc != 0x1DB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CDC8_0x21cdc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3C0u; }
        if (ctx->pc != 0x1DB3C0u) { return; }
    }
    ctx->pc = 0x1DB3C0u;
label_1db3c0:
    // 0x1db3c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db3c4:
    // 0x1db3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db3c8:
    // 0x1db3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3C8u;
            // 0x1db3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB358u: goto label_1db358;
            case 0x1DB374u: goto label_1db374;
            case 0x1DB380u: goto label_1db380;
            case 0x1DB3C0u: goto label_1db3c0;
            case 0x1DB3C4u: goto label_1db3c4;
            case 0x1DB3C8u: goto label_1db3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB3D0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_171008
// Address: 0x171008 - 0x1710e8
void entry_171008_0x1710e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_171008_0x1710e8");
#endif

    ctx->pc = 0x171008u;

    // 0x171008: 0x948200c2  lhu         $v0, 0xC2($a0)
    ctx->pc = 0x171008u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x17100c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17100cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171010: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x171010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x171014: 0x24860074  addiu       $a2, $a0, 0x74
    ctx->pc = 0x171014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x171018: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x171018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17101c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x17101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x171020: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x171020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x171024: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x171024u;
    {
        const bool branch_taken_0x171024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x171028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171024u;
            // 0x171028: 0xa48200c2  sh          $v0, 0xC2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171024) {
            ctx->pc = 0x171058u;
            goto label_171058;
        }
    }
    ctx->pc = 0x17102Cu;
    // 0x17102c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171030: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x171030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171034: 0x0  nop
    ctx->pc = 0x171034u;
    // NOP
label_171038:
    // 0x171038: 0x24a3fff0  addiu       $v1, $a1, -0x10
    ctx->pc = 0x171038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x17103c: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x17103cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x171040: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x171040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x171044: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171048: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x171048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x17104c: 0x14a4fffa  bne         $a1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17104Cu;
    {
        const bool branch_taken_0x17104c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x171050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17104Cu;
            // 0x171050: 0xa462001a  sh          $v0, 0x1A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17104c) {
            ctx->pc = 0x171038u;
            runtime->cooperativeGuestYield();
            goto label_171038;
        }
    }
    ctx->pc = 0x171054u;
    // 0x171054: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x171054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_171058:
    // 0x171058: 0x3e00008  jr          $ra
    ctx->pc = 0x171058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171058u;
            // 0x17105c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171038u: goto label_171038;
            case 0x171058u: goto label_171058;
            case 0x171088u: goto label_171088;
            case 0x1710B8u: goto label_1710b8;
            case 0x1710C0u: goto label_1710c0;
            case 0x1710D4u: goto label_1710d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171060u;
    // 0x171060: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x171064: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x171064u;
    {
        const bool branch_taken_0x171064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x171064) {
            ctx->pc = 0x171088u;
            goto label_171088;
        }
    }
    ctx->pc = 0x17106Cu;
    // 0x17106c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x17106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x171070: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x171070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171074: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x171074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171078: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x171078u;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x17107c: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x17107cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x171080: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x171080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x171084: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x171084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_171088:
    // 0x171088: 0x3e00008  jr          $ra
    ctx->pc = 0x171088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171038u: goto label_171038;
            case 0x171058u: goto label_171058;
            case 0x171088u: goto label_171088;
            case 0x1710B8u: goto label_1710b8;
            case 0x1710C0u: goto label_1710c0;
            case 0x1710D4u: goto label_1710d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171090u;
    // 0x171090: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x171090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x171094: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x171094u;
    {
        const bool branch_taken_0x171094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x171098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171094u;
            // 0x171098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171094) {
            ctx->pc = 0x1710B8u;
            goto label_1710b8;
        }
    }
    ctx->pc = 0x17109Cu;
    // 0x17109c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1710a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1710a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1710a4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1710A4u;
    {
        const bool branch_taken_0x1710a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1710A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710A4u;
            // 0x1710a8: 0xe4800080  swc1        $f0, 0x80($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710a4) {
            ctx->pc = 0x1710C0u;
            goto label_1710c0;
        }
    }
    ctx->pc = 0x1710ACu;
    // 0x1710ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1710acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1710b0: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1710B0u;
    {
        const bool branch_taken_0x1710b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1710b0) {
            ctx->pc = 0x1710B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1710B0u;
            // 0x1710b4: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1710D4u;
            goto label_1710d4;
        }
    }
    ctx->pc = 0x1710B8u;
label_1710b8:
    // 0x1710b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1710B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171038u: goto label_171038;
            case 0x171058u: goto label_171058;
            case 0x171088u: goto label_171088;
            case 0x1710B8u: goto label_1710b8;
            case 0x1710C0u: goto label_1710c0;
            case 0x1710D4u: goto label_1710d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1710C0u;
label_1710c0:
    // 0x1710c0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1710c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1710c4: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x1710c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1710c8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1710c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1710cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1710CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710CCu;
            // 0x1710d0: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171038u: goto label_171038;
            case 0x171058u: goto label_171058;
            case 0x171088u: goto label_171088;
            case 0x1710B8u: goto label_1710b8;
            case 0x1710C0u: goto label_1710c0;
            case 0x1710D4u: goto label_1710d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1710D4u;
label_1710d4:
    // 0x1710d4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1710d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1710d8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1710d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1710dc: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1710dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x1710e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1710E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171038u: goto label_171038;
            case 0x171058u: goto label_171058;
            case 0x171088u: goto label_171088;
            case 0x1710B8u: goto label_1710b8;
            case 0x1710C0u: goto label_1710c0;
            case 0x1710D4u: goto label_1710d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1710E8u;
}

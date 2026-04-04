#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167318
// Address: 0x167318 - 0x1673c8
void sub_00167318_0x167318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167318_0x167318");
#endif

    ctx->pc = 0x167318u;

    // 0x167318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16731c: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x16731cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x167320: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x167320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x167324: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x167324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16732c: 0x8d43c7dc  lw          $v1, -0x3824($t2)
    ctx->pc = 0x16732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294952924)));
    // 0x167330: 0xdcc80008  ld          $t0, 0x8($a2)
    ctx->pc = 0x167330u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x167334: 0xdd220020  ld          $v0, 0x20($t1)
    ctx->pc = 0x167334u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x167338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16733c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x16733cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167340: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167344: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x167344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x167348: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x167348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x16734c: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x16734cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x167350: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x167350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x167354: 0x14670012  bne         $v1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x167354u;
    {
        const bool branch_taken_0x167354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x167358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167354u;
            // 0x167358: 0xffa80008  sd          $t0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167354) {
            ctx->pc = 0x1673A0u;
            goto label_1673a0;
        }
    }
    ctx->pc = 0x16735Cu;
    // 0x16735c: 0x8d42c7dc  lw          $v0, -0x3824($t2)
    ctx->pc = 0x16735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294952924)));
    // 0x167360: 0x8d230060  lw          $v1, 0x60($t1)
    ctx->pc = 0x167360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x167364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167368: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x167368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16736c: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x167370: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167370u;
    {
        const bool branch_taken_0x167370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x167374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167370u;
            // 0x167374: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167370) {
            ctx->pc = 0x1673A4u;
            goto label_1673a4;
        }
    }
    ctx->pc = 0x167378u;
    // 0x167378: 0x8d42c7dc  lw          $v0, -0x3824($t2)
    ctx->pc = 0x167378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294952924)));
    // 0x16737c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x167380: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x167380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
    // 0x167384: 0x2032024  and         $a0, $s0, $v1
    ctx->pc = 0x167384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x167388: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16738c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x167390: 0xdc420078  ld          $v0, 0x78($v0)
    ctx->pc = 0x167390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x167394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167398: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x167398u;
    {
        const bool branch_taken_0x167398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167398u;
            // 0x16739c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167398) {
            ctx->pc = 0x1673B4u;
            goto label_1673b4;
        }
    }
    ctx->pc = 0x1673A0u;
label_1673a0:
    // 0x1673a0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1673a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1673a4:
    // 0x1673a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1673a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673a8: 0xc059b32  jal         func_166CC8
    ctx->pc = 0x1673A8u;
    SET_GPR_U32(ctx, 31, 0x1673B0u);
    ctx->pc = 0x1673ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1673A8u;
            // 0x1673ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166CC8u;
    if (runtime->hasFunction(0x166CC8u)) {
        auto targetFn = runtime->lookupFunction(0x166CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673B0u; }
        if (ctx->pc != 0x1673B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_166cc8_0x167018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673B0u; }
        if (ctx->pc != 0x1673B0u) { return; }
    }
    ctx->pc = 0x1673B0u;
    // 0x1673b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1673b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1673b4:
    // 0x1673b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1673b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1673b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1673bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1673BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673BCu;
            // 0x1673c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673B4u: goto label_1673b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1673C4u;
    // 0x1673c4: 0x0  nop
    ctx->pc = 0x1673c4u;
    // NOP
}

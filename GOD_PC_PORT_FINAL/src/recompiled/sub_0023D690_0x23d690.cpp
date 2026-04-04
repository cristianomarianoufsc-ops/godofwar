#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D690
// Address: 0x23d690 - 0x23d7d0
void sub_0023D690_0x23d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D690_0x23d690");
#endif

    ctx->pc = 0x23d690u;

    // 0x23d690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d694: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23d698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d69c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23d69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6a0: 0x24422a78  addiu       $v0, $v0, 0x2A78
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10872));
    // 0x23d6a4: 0xc08e330  jal         func_238CC0
    ctx->pc = 0x23D6A4u;
    SET_GPR_U32(ctx, 31, 0x23D6ACu);
    ctx->pc = 0x23D6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6A4u;
            // 0x23d6a8: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D6ACu; }
        if (ctx->pc != 0x23D6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D6ACu; }
        if (ctx->pc != 0x23D6ACu) { return; }
    }
    ctx->pc = 0x23D6ACu;
    // 0x23d6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6B0u;
            // 0x23d6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D6B8u;
    // 0x23d6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23d6bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23d6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23d6c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x23d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x23d6c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23d6cc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x23d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x23d6d0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23d6d4: 0x8c4700d0  lw          $a3, 0xD0($v0)
    ctx->pc = 0x23d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x23d6d8: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23d6dc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x23d6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23d6e0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x23d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x23d6e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x23d6e8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x23d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x23d6ec: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x23d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x23d6f0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x23d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x23d6f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23d6f8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23d6fc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23D6FCu;
    SET_GPR_U32(ctx, 31, 0x23D704u);
    ctx->pc = 0x23D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6FCu;
            // 0x23d700: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D704u; }
        if (ctx->pc != 0x23D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D704u; }
        if (ctx->pc != 0x23D704u) { return; }
    }
    ctx->pc = 0x23D704u;
    // 0x23d704: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d70c: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23d710: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23d714: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23d718: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23d71c: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23d71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23d720: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23d724: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23d724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23d728: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23d728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23d72c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23d72cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d730: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d734: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23d734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23d738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d73c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23d740: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23d740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d744: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23d748: 0xc08e222  jal         func_238888
    ctx->pc = 0x23D748u;
    SET_GPR_U32(ctx, 31, 0x23D750u);
    ctx->pc = 0x23D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D748u;
            // 0x23d74c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D750u; }
        if (ctx->pc != 0x23D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D750u; }
        if (ctx->pc != 0x23D750u) { return; }
    }
    ctx->pc = 0x23D750u;
    // 0x23d750: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23d754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d758: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d75c: 0xc08e222  jal         func_238888
    ctx->pc = 0x23D75Cu;
    SET_GPR_U32(ctx, 31, 0x23D764u);
    ctx->pc = 0x23D760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D75Cu;
            // 0x23d760: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D764u; }
        if (ctx->pc != 0x23D764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D764u; }
        if (ctx->pc != 0x23D764u) { return; }
    }
    ctx->pc = 0x23D764u;
    // 0x23d764: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d768: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23d76c: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x23d76cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23d770: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23d774: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23d774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d778: 0x2484d9d0  addiu       $a0, $a0, -0x2630
    ctx->pc = 0x23d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957520));
    // 0x23d77c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23d77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d780: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23d784: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23d784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23d788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23d78c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x23d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x23d790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d794: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23d794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x23d798: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x23d798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x23d79c: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x23d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x23d7a0: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x23d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23d7a4: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23d7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x23d7a8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x23d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x23d7ac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23d7b0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23d7b4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23d7b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23d7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d7bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23d7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D7C0u;
            // 0x23d7c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D7C8u;
    // 0x23d7c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23d7cc: 0x0  nop
    ctx->pc = 0x23d7ccu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D6D8
// Address: 0x28d6d8 - 0x28dc68
void sub_0028D6D8_0x28d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D6D8_0x28d6d8");
#endif

    ctx->pc = 0x28d6d8u;

    // 0x28d6d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28d6dc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x28d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28d6e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x28d6e4: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x28d6e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x28d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x28d6ec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x28d6f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28d6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d6f4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x28d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x28d6f8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x28d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x28d6fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x28d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x28d700: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x28d704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d708: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x28d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x28d70c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x28d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x28d710: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x28d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x28d714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28d718: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x28d718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x28d71c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d720: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28d720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28d724: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28d724u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28d728: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28d728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28d72c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x28d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x28d730: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x28d734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28d734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28d738: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x28d738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x28d73c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x28d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d740: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x28d740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x28d744: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x28d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x28d748: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28D748u;
    {
        const bool branch_taken_0x28d748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D748u;
            // 0x28d74c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d748) {
            ctx->pc = 0x28D7A8u;
            goto label_28d7a8;
        }
    }
    ctx->pc = 0x28D750u;
    // 0x28d750: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D750u;
    {
        const bool branch_taken_0x28d750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D750u;
            // 0x28d754: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d750) {
            ctx->pc = 0x28D798u;
            goto label_28d798;
        }
    }
    ctx->pc = 0x28D758u;
    // 0x28d758: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D758u;
    {
        const bool branch_taken_0x28d758 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D758u;
            // 0x28d75c: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d758) {
            ctx->pc = 0x28D79Cu;
            goto label_28d79c;
        }
    }
    ctx->pc = 0x28D760u;
    // 0x28d760: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D760u;
    {
        const bool branch_taken_0x28d760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D760u;
            // 0x28d764: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d760) {
            ctx->pc = 0x28D788u;
            goto label_28d788;
        }
    }
    ctx->pc = 0x28D768u;
    // 0x28d768: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x28d76c: 0x8c6560a0  lw          $a1, 0x60A0($v1)
    ctx->pc = 0x28d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24736)));
    // 0x28d770: 0x246460a0  addiu       $a0, $v1, 0x60A0
    ctx->pc = 0x28d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24736));
    // 0x28d774: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x28d774u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28d778: 0x24436998  addiu       $v1, $v0, 0x6998
    ctx->pc = 0x28d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x28d77c: 0xac456998  sw          $a1, 0x6998($v0)
    ctx->pc = 0x28d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27032), GPR_U32(ctx, 5));
    // 0x28d780: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x28D780u;
    {
        const bool branch_taken_0x28d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D780u;
            // 0x28d784: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d780) {
            ctx->pc = 0x28DC2Cu;
            goto label_28dc2c;
        }
    }
    ctx->pc = 0x28D788u;
label_28d788:
    // 0x28d788: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28d78c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x28d790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28D790u;
    {
        const bool branch_taken_0x28d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D790u;
            // 0x28d794: 0x8c4460a8  lw          $a0, 0x60A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d790) {
            ctx->pc = 0x28D7A0u;
            goto label_28d7a0;
        }
    }
    ctx->pc = 0x28D798u;
label_28d798:
    // 0x28d798: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28d798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_28d79c:
    // 0x28d79c: 0x8c4460b0  lw          $a0, 0x60B0($v0)
    ctx->pc = 0x28d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24752)));
label_28d7a0:
    // 0x28d7a0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x28D7A0u;
    {
        const bool branch_taken_0x28d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7A0u;
            // 0x28d7a4: 0xac646998  sw          $a0, 0x6998($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7a0) {
            ctx->pc = 0x28DC2Cu;
            goto label_28dc2c;
        }
    }
    ctx->pc = 0x28D7A8u;
label_28d7a8:
    // 0x28d7a8: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x28d7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d7ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7b4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x28D7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7B4u;
            // 0x28d7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7BCu; }
        if (ctx->pc != 0x28D7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7BCu; }
        if (ctx->pc != 0x28D7BCu) { return; }
    }
    ctx->pc = 0x28D7BCu;
    // 0x28d7bc: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D7BCu;
    {
        const bool branch_taken_0x28d7bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28D7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7BCu;
            // 0x28d7c0: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7bc) {
            ctx->pc = 0x28D800u;
            goto label_28d800;
        }
    }
    ctx->pc = 0x28D7C4u;
    // 0x28d7c4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7C4u;
    {
        const bool branch_taken_0x28d7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7C4u;
            // 0x28d7c8: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7c4) {
            ctx->pc = 0x28D7DCu;
            goto label_28d7dc;
        }
    }
    ctx->pc = 0x28D7CCu;
    // 0x28d7cc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28d7d0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x28d7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d7d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7D4u;
    {
        const bool branch_taken_0x28d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7D4u;
            // 0x28d7d8: 0x24766998  addiu       $s6, $v1, 0x6998 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 27032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7d4) {
            ctx->pc = 0x28D7ECu;
            goto label_28d7ec;
        }
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x28d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28d7e0: 0x24446998  addiu       $a0, $v0, 0x6998
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x28d7e4: 0xa0436998  sb          $v1, 0x6998($v0)
    ctx->pc = 0x28d7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27032), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d7e8: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28d7ec:
    // 0x28d7ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7f0: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28D7F0u;
    SET_GPR_U32(ctx, 31, 0x28D7F8u);
    ctx->pc = 0x28D7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7F0u;
            // 0x28d7f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7F8u; }
        if (ctx->pc != 0x28D7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7F8u; }
        if (ctx->pc != 0x28D7F8u) { return; }
    }
    ctx->pc = 0x28D7F8u;
    // 0x28d7f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D7F8u;
    {
        const bool branch_taken_0x28d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7F8u;
            // 0x28d7fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7f8) {
            ctx->pc = 0x28D804u;
            goto label_28d804;
        }
    }
    ctx->pc = 0x28D800u;
label_28d800:
    // 0x28d800: 0x24566998  addiu       $s6, $v0, 0x6998
    ctx->pc = 0x28d800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
label_28d804:
    // 0x28d804: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28d804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28d808: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28d80c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D80Cu;
    SET_GPR_U32(ctx, 31, 0x28D814u);
    ctx->pc = 0x28D810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D80Cu;
            // 0x28d810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D814u; }
        if (ctx->pc != 0x28D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D814u; }
        if (ctx->pc != 0x28D814u) { return; }
    }
    ctx->pc = 0x28D814u;
    // 0x28d814: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28D814u;
    {
        const bool branch_taken_0x28d814 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D814u;
            // 0x28d818: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d814) {
            ctx->pc = 0x28D8F4u;
            goto label_28d8f4;
        }
    }
    ctx->pc = 0x28D81Cu;
    // 0x28d81c: 0x34138048  ori         $s3, $zero, 0x8048
    ctx->pc = 0x28d81cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x28d820: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x28d820u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x28d824: 0xc0a4488  jal         func_291220
    ctx->pc = 0x28D824u;
    SET_GPR_U32(ctx, 31, 0x28D82Cu);
    ctx->pc = 0x28D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D824u;
            // 0x28d828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291220u;
    if (runtime->hasFunction(0x291220u)) {
        auto targetFn = runtime->lookupFunction(0x291220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D82Cu; }
        if (ctx->pc != 0x28D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291220_0x291220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D82Cu; }
        if (ctx->pc != 0x28D82Cu) { return; }
    }
    ctx->pc = 0x28D82Cu;
    // 0x28d82c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d834: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28D834u;
    SET_GPR_U32(ctx, 31, 0x28D83Cu);
    ctx->pc = 0x28D838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D834u;
            // 0x28d838: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D83Cu; }
        if (ctx->pc != 0x28D83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D83Cu; }
        if (ctx->pc != 0x28D83Cu) { return; }
    }
    ctx->pc = 0x28D83Cu;
    // 0x28d83c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d840: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x28d840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
    // 0x28d844: 0x0  nop
    ctx->pc = 0x28d844u;
    // NOP
label_28d848:
    // 0x28d848: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28D848u;
    {
        const bool branch_taken_0x28d848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D848u;
            // 0x28d84c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d848) {
            ctx->pc = 0x28D8B0u;
            goto label_28d8b0;
        }
    }
    ctx->pc = 0x28D850u;
    // 0x28d850: 0xc0a4504  jal         func_291410
    ctx->pc = 0x28D850u;
    SET_GPR_U32(ctx, 31, 0x28D858u);
    ctx->pc = 0x28D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D850u;
            // 0x28d854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291410u;
    if (runtime->hasFunction(0x291410u)) {
        auto targetFn = runtime->lookupFunction(0x291410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D858u; }
        if (ctx->pc != 0x28D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291410_0x291410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D858u; }
        if (ctx->pc != 0x28D858u) { return; }
    }
    ctx->pc = 0x28D858u;
    // 0x28d858: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x28D858u;
    SET_GPR_U32(ctx, 31, 0x28D860u);
    ctx->pc = 0x28D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D858u;
            // 0x28d85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D860u; }
        if (ctx->pc != 0x28D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D860u; }
        if (ctx->pc != 0x28D860u) { return; }
    }
    ctx->pc = 0x28D860u;
    // 0x28d860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d864: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x28d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28d868: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x28d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x28d86c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28d86cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d870: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28D870u;
    SET_GPR_U32(ctx, 31, 0x28D878u);
    ctx->pc = 0x28D874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D870u;
            // 0x28d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D878u; }
        if (ctx->pc != 0x28D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D878u; }
        if (ctx->pc != 0x28D878u) { return; }
    }
    ctx->pc = 0x28D878u;
    // 0x28d878: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d880: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28D880u;
    SET_GPR_U32(ctx, 31, 0x28D888u);
    ctx->pc = 0x28D884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D880u;
            // 0x28d884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D888u; }
        if (ctx->pc != 0x28D888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D888u; }
        if (ctx->pc != 0x28D888u) { return; }
    }
    ctx->pc = 0x28D888u;
    // 0x28d888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d88c: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x28D88Cu;
    SET_GPR_U32(ctx, 31, 0x28D894u);
    ctx->pc = 0x28D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D88Cu;
            // 0x28d890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D894u; }
        if (ctx->pc != 0x28D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D894u; }
        if (ctx->pc != 0x28D894u) { return; }
    }
    ctx->pc = 0x28D894u;
    // 0x28d894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d898: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28d898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28d89c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28d89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28d8a0: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D8A0u;
    SET_GPR_U32(ctx, 31, 0x28D8A8u);
    ctx->pc = 0x28D8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8A0u;
            // 0x28d8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8A8u; }
        if (ctx->pc != 0x28D8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8A8u; }
        if (ctx->pc != 0x28D8A8u) { return; }
    }
    ctx->pc = 0x28D8A8u;
    // 0x28d8a8: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28D8A8u;
    {
        const bool branch_taken_0x28d8a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8A8u;
            // 0x28d8ac: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8a8) {
            ctx->pc = 0x28D848u;
            runtime->cooperativeGuestYield();
            goto label_28d848;
        }
    }
    ctx->pc = 0x28D8B0u;
label_28d8b0:
    // 0x28d8b0: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x28d8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28d8b4: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x28D8B4u;
    {
        const bool branch_taken_0x28d8b4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x28D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8B4u;
            // 0x28d8b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8b4) {
            ctx->pc = 0x28D8F0u;
            goto label_28d8f0;
        }
    }
    ctx->pc = 0x28D8BCu;
    // 0x28d8bc: 0xf63021  addu        $a2, $a3, $s6
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x28d8c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8c4: 0x0  nop
    ctx->pc = 0x28d8c4u;
    // NOP
label_28d8c8:
    // 0x28d8c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x28d8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28d8cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28d8d0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x28d8d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28d8d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28d8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28d8d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x28d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d8dc: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x28d8dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28d8e0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x28d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d8e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28d8e8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28D8E8u;
    {
        const bool branch_taken_0x28d8e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8E8u;
            // 0x28d8ec: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8e8) {
            ctx->pc = 0x28D8C8u;
            runtime->cooperativeGuestYield();
            goto label_28d8c8;
        }
    }
    ctx->pc = 0x28D8F0u;
label_28d8f0:
    // 0x28d8f0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x28d8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28d8f4:
    // 0x28d8f4: 0x16600026  bnez        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x28D8F4u;
    {
        const bool branch_taken_0x28d8f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8F4u;
            // 0x28d8f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8f4) {
            ctx->pc = 0x28D990u;
            goto label_28d990;
        }
    }
    ctx->pc = 0x28D8FCu;
    // 0x28d8fc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x28d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x28d900: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D900u;
    {
        const bool branch_taken_0x28d900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D900u;
            // 0x28d904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d900) {
            ctx->pc = 0x28D984u;
            goto label_28d984;
        }
    }
    ctx->pc = 0x28D908u;
    // 0x28d908: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D908u;
    SET_GPR_U32(ctx, 31, 0x28D910u);
    ctx->pc = 0x28D90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D908u;
            // 0x28d90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D910u; }
        if (ctx->pc != 0x28D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D910u; }
        if (ctx->pc != 0x28D910u) { return; }
    }
    ctx->pc = 0x28D910u;
    // 0x28d910: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D910u;
    {
        const bool branch_taken_0x28d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d910) {
            ctx->pc = 0x28D950u;
            goto label_28d950;
        }
    }
    ctx->pc = 0x28D918u;
label_28d918:
    // 0x28d918: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x28d918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x28d91c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x28d91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x28d920: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28D920u;
    SET_GPR_U32(ctx, 31, 0x28D928u);
    ctx->pc = 0x28D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D920u;
            // 0x28d924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D928u; }
        if (ctx->pc != 0x28D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D928u; }
        if (ctx->pc != 0x28D928u) { return; }
    }
    ctx->pc = 0x28D928u;
    // 0x28d928: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d92c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28d92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28d930: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28d930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28d934: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D934u;
    SET_GPR_U32(ctx, 31, 0x28D93Cu);
    ctx->pc = 0x28D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D934u;
            // 0x28d938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D93Cu; }
        if (ctx->pc != 0x28D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D93Cu; }
        if (ctx->pc != 0x28D93Cu) { return; }
    }
    ctx->pc = 0x28D93Cu;
    // 0x28d93c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D93Cu;
    {
        const bool branch_taken_0x28d93c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D93Cu;
            // 0x28d940: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d93c) {
            ctx->pc = 0x28D94Cu;
            goto label_28d94c;
        }
    }
    ctx->pc = 0x28D944u;
    // 0x28d944: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x28D944u;
    {
        const bool branch_taken_0x28d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d944) {
            ctx->pc = 0x28D948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D944u;
            // 0x28d948: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D918u;
            runtime->cooperativeGuestYield();
            goto label_28d918;
        }
    }
    ctx->pc = 0x28D94Cu;
label_28d94c:
    // 0x28d94c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x28d94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_28d950:
    // 0x28d950: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28d950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28d954: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28d954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28d958: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28D958u;
    SET_GPR_U32(ctx, 31, 0x28D960u);
    ctx->pc = 0x28D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D958u;
            // 0x28d95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D960u; }
        if (ctx->pc != 0x28D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D960u; }
        if (ctx->pc != 0x28D960u) { return; }
    }
    ctx->pc = 0x28D960u;
    // 0x28d960: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28D960u;
    {
        const bool branch_taken_0x28d960 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D960u;
            // 0x28d964: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d960) {
            ctx->pc = 0x28D990u;
            goto label_28d990;
        }
    }
    ctx->pc = 0x28D968u;
    // 0x28d968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d96c: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x28d96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x28d970: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x28d970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x28d974: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x28D974u;
    SET_GPR_U32(ctx, 31, 0x28D97Cu);
    ctx->pc = 0x28D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D974u;
            // 0x28d978: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D97Cu; }
        if (ctx->pc != 0x28D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D97Cu; }
        if (ctx->pc != 0x28D97Cu) { return; }
    }
    ctx->pc = 0x28D97Cu;
    // 0x28d97c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D97Cu;
    {
        const bool branch_taken_0x28d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D97Cu;
            // 0x28d980: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d97c) {
            ctx->pc = 0x28D990u;
            goto label_28d990;
        }
    }
    ctx->pc = 0x28D984u;
label_28d984:
    // 0x28d984: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x28d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28d988: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28d988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d98c: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x28d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_28d990:
    // 0x28d990: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D990u;
    {
        const bool branch_taken_0x28d990 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x28D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D990u;
            // 0x28d994: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d990) {
            ctx->pc = 0x28D9A0u;
            goto label_28d9a0;
        }
    }
    ctx->pc = 0x28D998u;
    // 0x28d998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28D998u;
    {
        const bool branch_taken_0x28d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D998u;
            // 0x28d99c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d998) {
            ctx->pc = 0x28D9BCu;
            goto label_28d9bc;
        }
    }
    ctx->pc = 0x28D9A0u;
label_28d9a0:
    // 0x28d9a0: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x28d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x28d9a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D9A4u;
    {
        const bool branch_taken_0x28d9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9A4u;
            // 0x28d9a8: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9a4) {
            ctx->pc = 0x28D9BCu;
            goto label_28d9bc;
        }
    }
    ctx->pc = 0x28D9ACu;
    // 0x28d9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d9b0: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x28d9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x28d9b4: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x28d9b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x28d9b8: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28d9bc:
    // 0x28d9bc: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x28d9bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x28d9c0: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x28d9c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x28d9c4: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x28d9c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28d9c8: 0x34178048  ori         $s7, $zero, 0x8048
    ctx->pc = 0x28d9c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x28d9cc: 0x17bbfc  dsll32      $s7, $s7, 15
    ctx->pc = 0x28d9ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 15));
label_28d9d0:
    // 0x28d9d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28d9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9d4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28D9D4u;
    SET_GPR_U32(ctx, 31, 0x28D9DCu);
    ctx->pc = 0x28D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9D4u;
            // 0x28d9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9DCu; }
        if (ctx->pc != 0x28D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9DCu; }
        if (ctx->pc != 0x28D9DCu) { return; }
    }
    ctx->pc = 0x28D9DCu;
    // 0x28d9dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9e0: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x28D9E0u;
    SET_GPR_U32(ctx, 31, 0x28D9E8u);
    ctx->pc = 0x28D9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9E0u;
            // 0x28d9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9E8u; }
        if (ctx->pc != 0x28D9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9E8u; }
        if (ctx->pc != 0x28D9E8u) { return; }
    }
    ctx->pc = 0x28D9E8u;
    // 0x28d9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9ec: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28D9ECu;
    SET_GPR_U32(ctx, 31, 0x28D9F4u);
    ctx->pc = 0x28D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9ECu;
            // 0x28d9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9F4u; }
        if (ctx->pc != 0x28D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9F4u; }
        if (ctx->pc != 0x28D9F4u) { return; }
    }
    ctx->pc = 0x28D9F4u;
    // 0x28d9f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9f8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28D9F8u;
    SET_GPR_U32(ctx, 31, 0x28DA00u);
    ctx->pc = 0x28D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9F8u;
            // 0x28d9fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA00u; }
        if (ctx->pc != 0x28DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA00u; }
        if (ctx->pc != 0x28DA00u) { return; }
    }
    ctx->pc = 0x28DA00u;
    // 0x28da00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28da00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28da04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da08: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28DA08u;
    SET_GPR_U32(ctx, 31, 0x28DA10u);
    ctx->pc = 0x28DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA08u;
            // 0x28da0c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA10u; }
        if (ctx->pc != 0x28DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA10u; }
        if (ctx->pc != 0x28DA10u) { return; }
    }
    ctx->pc = 0x28DA10u;
    // 0x28da10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28da10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da14: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x28da14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28da18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28DA18u;
    {
        const bool branch_taken_0x28da18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA18u;
            // 0x28da1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da18) {
            ctx->pc = 0x28DA64u;
            goto label_28da64;
        }
    }
    ctx->pc = 0x28DA20u;
    // 0x28da20: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28DA20u;
    SET_GPR_U32(ctx, 31, 0x28DA28u);
    ctx->pc = 0x28DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA20u;
            // 0x28da24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA28u; }
        if (ctx->pc != 0x28DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA28u; }
        if (ctx->pc != 0x28DA28u) { return; }
    }
    ctx->pc = 0x28DA28u;
    // 0x28da28: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28DA28u;
    {
        const bool branch_taken_0x28da28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28da28) {
            ctx->pc = 0x28DA64u;
            goto label_28da64;
        }
    }
    ctx->pc = 0x28DA30u;
    // 0x28da30: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x28da30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28da34: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x28da34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x28da38: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28DA38u;
    SET_GPR_U32(ctx, 31, 0x28DA40u);
    ctx->pc = 0x28DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA38u;
            // 0x28da3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA40u; }
        if (ctx->pc != 0x28DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA40u; }
        if (ctx->pc != 0x28DA40u) { return; }
    }
    ctx->pc = 0x28DA40u;
    // 0x28da40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28da40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da44: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28DA44u;
    SET_GPR_U32(ctx, 31, 0x28DA4Cu);
    ctx->pc = 0x28DA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA44u;
            // 0x28da48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA4Cu; }
        if (ctx->pc != 0x28DA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA4Cu; }
        if (ctx->pc != 0x28DA4Cu) { return; }
    }
    ctx->pc = 0x28DA4Cu;
    // 0x28da4c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DA4Cu;
    {
        const bool branch_taken_0x28da4c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA4Cu;
            // 0x28da50: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da4c) {
            ctx->pc = 0x28DA64u;
            goto label_28da64;
        }
    }
    ctx->pc = 0x28DA54u;
    // 0x28da54: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x28da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28da58: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28da58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28da5c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x28DA5Cu;
    {
        const bool branch_taken_0x28da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA5Cu;
            // 0x28da60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da5c) {
            ctx->pc = 0x28D9D0u;
            runtime->cooperativeGuestYield();
            goto label_28d9d0;
        }
    }
    ctx->pc = 0x28DA64u;
label_28da64:
    // 0x28da64: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28da64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28da68: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28da68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28da6c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28DA6Cu;
    SET_GPR_U32(ctx, 31, 0x28DA74u);
    ctx->pc = 0x28DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA6Cu;
            // 0x28da70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA74u; }
        if (ctx->pc != 0x28DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA74u; }
        if (ctx->pc != 0x28DA74u) { return; }
    }
    ctx->pc = 0x28DA74u;
    // 0x28da74: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x28da78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28da7c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x28da7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x28da80: 0x2d42021  addu        $a0, $s6, $s4
    ctx->pc = 0x28da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x28da84: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x28da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28da88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28da88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28da8c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x28da8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28da90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DA90u;
    {
        const bool branch_taken_0x28da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA90u;
            // 0x28da94: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da90) {
            ctx->pc = 0x28DAB8u;
            goto label_28dab8;
        }
    }
    ctx->pc = 0x28DA98u;
    // 0x28da98: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28da9c: 0x0  nop
    ctx->pc = 0x28da9cu;
    // NOP
label_28daa0:
    // 0x28daa0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x28daa4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28daa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28daa8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x28daa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28daac: 0x0  nop
    ctx->pc = 0x28daacu;
    // NOP
    // 0x28dab0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAB0u;
            // 0x28dab4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x28DAA0u;
            runtime->cooperativeGuestYield();
            goto label_28daa0;
        }
    }
    ctx->pc = 0x28DAB8u;
label_28dab8:
    // 0x28dab8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dabc: 0xc0a3554  jal         func_28D550
    ctx->pc = 0x28DABCu;
    SET_GPR_U32(ctx, 31, 0x28DAC4u);
    ctx->pc = 0x28DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DABCu;
            // 0x28dac0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D550u;
    if (runtime->hasFunction(0x28D550u)) {
        auto targetFn = runtime->lookupFunction(0x28D550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAC4u; }
        if (ctx->pc != 0x28DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d550_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAC4u; }
        if (ctx->pc != 0x28DAC4u) { return; }
    }
    ctx->pc = 0x28DAC4u;
    // 0x28dac4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DAC4u;
    {
        const bool branch_taken_0x28dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAC4u;
            // 0x28dac8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac4) {
            ctx->pc = 0x28DAE0u;
            goto label_28dae0;
        }
    }
    ctx->pc = 0x28DACCu;
    // 0x28dacc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x28daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x28dad0: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x28dad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dad4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x28dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28dad8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28dad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28dadc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28dae0:
    // 0x28dae0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28DAE0u;
    {
        const bool branch_taken_0x28dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAE0u;
            // 0x28dae4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dae0) {
            ctx->pc = 0x28DB34u;
            goto label_28db34;
        }
    }
    ctx->pc = 0x28DAE8u;
    // 0x28dae8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x28daec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DAECu;
    {
        const bool branch_taken_0x28daec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAECu;
            // 0x28daf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daec) {
            ctx->pc = 0x28DAFCu;
            goto label_28dafc;
        }
    }
    ctx->pc = 0x28DAF4u;
    // 0x28daf4: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x28daf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x28daf8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x28daf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_28dafc:
    // 0x28dafc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28dafcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db00: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x28db00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28db04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28DB04u;
    {
        const bool branch_taken_0x28db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB04u;
            // 0x28db08: 0x2c53021  addu        $a2, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db04) {
            ctx->pc = 0x28DB28u;
            goto label_28db28;
        }
    }
    ctx->pc = 0x28DB0Cu;
    // 0x28db0c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x28db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_28db10:
    // 0x28db10: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x28db10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x28db14: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28db14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28db18: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x28db18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28db1c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28db20: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DB20u;
    {
        const bool branch_taken_0x28db20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB20u;
            // 0x28db24: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db20) {
            ctx->pc = 0x28DB10u;
            runtime->cooperativeGuestYield();
            goto label_28db10;
        }
    }
    ctx->pc = 0x28DB28u;
label_28db28:
    // 0x28db28: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x28db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x28db2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28DB2Cu;
    {
        const bool branch_taken_0x28db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB2Cu;
            // 0x28db30: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db2c) {
            ctx->pc = 0x28DB38u;
            goto label_28db38;
        }
    }
    ctx->pc = 0x28DB34u;
label_28db34:
    // 0x28db34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28db34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28db38:
    // 0x28db38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x28db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28db3c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28DB3Cu;
    {
        const bool branch_taken_0x28db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB3Cu;
            // 0x28db40: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db3c) {
            ctx->pc = 0x28DB90u;
            goto label_28db90;
        }
    }
    ctx->pc = 0x28DB44u;
    // 0x28db44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x28DB44u;
    {
        const bool branch_taken_0x28db44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB44u;
            // 0x28db48: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db44) {
            ctx->pc = 0x28DB78u;
            goto label_28db78;
        }
    }
    ctx->pc = 0x28DB4Cu;
    // 0x28db4c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28db50: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28db50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db54: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x28DB54u;
    {
        const bool branch_taken_0x28db54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28db54) {
            ctx->pc = 0x28DB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB54u;
            // 0x28db58: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DB84u;
            goto label_28db84;
        }
    }
    ctx->pc = 0x28DB5Cu;
    // 0x28db5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28db60:
    // 0x28db60: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DB60u;
    {
        const bool branch_taken_0x28db60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB60u;
            // 0x28db64: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db60) {
            ctx->pc = 0x28DB78u;
            goto label_28db78;
        }
    }
    ctx->pc = 0x28DB68u;
    // 0x28db68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28db68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db6c: 0x0  nop
    ctx->pc = 0x28db6cu;
    // NOP
    // 0x28db70: 0x5064fffb  beql        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DB70u;
    {
        const bool branch_taken_0x28db70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28db70) {
            ctx->pc = 0x28DB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB70u;
            // 0x28db74: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DB60u;
            runtime->cooperativeGuestYield();
            goto label_28db60;
        }
    }
    ctx->pc = 0x28DB78u;
label_28db78:
    // 0x28db78: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x28db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28db7c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x28db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28db80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28db80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28db84:
    // 0x28db84: 0x3863002e  xori        $v1, $v1, 0x2E
    ctx->pc = 0x28db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)46);
    // 0x28db88: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x28db88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x28db8c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28db90:
    // 0x28db90: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x28db94: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28DB94u;
    {
        const bool branch_taken_0x28db94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB94u;
            // 0x28db98: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db94) {
            ctx->pc = 0x28DC28u;
            goto label_28dc28;
        }
    }
    ctx->pc = 0x28DB9Cu;
    // 0x28db9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28db9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dba0: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x28dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dba4: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x28DBA4u;
    {
        const bool branch_taken_0x28dba4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x28DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBA4u;
            // 0x28dba8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dba4) {
            ctx->pc = 0x28DBE0u;
            goto label_28dbe0;
        }
    }
    ctx->pc = 0x28DBACu;
    // 0x28dbac: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x28dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x28dbb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dbb4: 0x53980b  movn        $s3, $v0, $s3
    ctx->pc = 0x28dbb4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x28dbb8: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dbbc: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x28dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x28dbc0: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x28dbc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28dbc4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28DBC4u;
    {
        const bool branch_taken_0x28dbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBC4u;
            // 0x28dbc8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbc4) {
            ctx->pc = 0x28DC0Cu;
            goto label_28dc0c;
        }
    }
    ctx->pc = 0x28DBCCu;
    // 0x28dbcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dbd0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x28dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28dbd4: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x28dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dbd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28DBD8u;
    {
        const bool branch_taken_0x28dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBD8u;
            // 0x28dbdc: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbd8) {
            ctx->pc = 0x28DC0Cu;
            goto label_28dc0c;
        }
    }
    ctx->pc = 0x28DBE0u;
label_28dbe0:
    // 0x28dbe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dbe4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28dbe8: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dbec: 0x2a64fff7  slti        $a0, $s3, -0x9
    ctx->pc = 0x28dbecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x28dbf0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DBF0u;
    {
        const bool branch_taken_0x28dbf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBF0u;
            // 0x28dbf4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbf0) {
            ctx->pc = 0x28DC08u;
            goto label_28dc08;
        }
    }
    ctx->pc = 0x28DBF8u;
    // 0x28dbf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dbfc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x28dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28dc00: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x28dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dc04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28dc04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_28dc08:
    // 0x28dc08: 0x139823  negu        $s3, $s3
    ctx->pc = 0x28dc08u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_28dc0c:
    // 0x28dc0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28dc10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc14: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x28dc18: 0xc0a358e  jal         func_28D638
    ctx->pc = 0x28DC18u;
    SET_GPR_U32(ctx, 31, 0x28DC20u);
    ctx->pc = 0x28DC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DC18u;
            // 0x28dc1c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D638u;
    if (runtime->hasFunction(0x28D638u)) {
        auto targetFn = runtime->lookupFunction(0x28D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DC20u; }
        if (ctx->pc != 0x28DC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D638_0x28d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DC20u; }
        if (ctx->pc != 0x28DC20u) { return; }
    }
    ctx->pc = 0x28DC20u;
    // 0x28dc20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DC20u;
    {
        const bool branch_taken_0x28dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DC20u;
            // 0x28dc24: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc20) {
            ctx->pc = 0x28DC30u;
            goto label_28dc30;
        }
    }
    ctx->pc = 0x28DC28u;
label_28dc28:
    // 0x28dc28: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x28dc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_28dc2c:
    // 0x28dc2c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_28dc30:
    // 0x28dc30: 0x24626998  addiu       $v0, $v1, 0x6998
    ctx->pc = 0x28dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27032));
    // 0x28dc34: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28dc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28dc38: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x28dc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28dc3c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28dc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28dc40: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x28dc40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28dc44: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28dc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28dc48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28dc48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dc4c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x28dc4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dc50: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x28dc50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dc54: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x28dc54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28dc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DC5Cu;
            // 0x28dc60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D788u: goto label_28d788;
            case 0x28D798u: goto label_28d798;
            case 0x28D79Cu: goto label_28d79c;
            case 0x28D7A0u: goto label_28d7a0;
            case 0x28D7A8u: goto label_28d7a8;
            case 0x28D7DCu: goto label_28d7dc;
            case 0x28D7ECu: goto label_28d7ec;
            case 0x28D800u: goto label_28d800;
            case 0x28D804u: goto label_28d804;
            case 0x28D848u: goto label_28d848;
            case 0x28D8B0u: goto label_28d8b0;
            case 0x28D8C8u: goto label_28d8c8;
            case 0x28D8F0u: goto label_28d8f0;
            case 0x28D8F4u: goto label_28d8f4;
            case 0x28D918u: goto label_28d918;
            case 0x28D94Cu: goto label_28d94c;
            case 0x28D950u: goto label_28d950;
            case 0x28D984u: goto label_28d984;
            case 0x28D990u: goto label_28d990;
            case 0x28D9A0u: goto label_28d9a0;
            case 0x28D9BCu: goto label_28d9bc;
            case 0x28D9D0u: goto label_28d9d0;
            case 0x28DA64u: goto label_28da64;
            case 0x28DAA0u: goto label_28daa0;
            case 0x28DAB8u: goto label_28dab8;
            case 0x28DAE0u: goto label_28dae0;
            case 0x28DAFCu: goto label_28dafc;
            case 0x28DB10u: goto label_28db10;
            case 0x28DB28u: goto label_28db28;
            case 0x28DB34u: goto label_28db34;
            case 0x28DB38u: goto label_28db38;
            case 0x28DB60u: goto label_28db60;
            case 0x28DB78u: goto label_28db78;
            case 0x28DB84u: goto label_28db84;
            case 0x28DB90u: goto label_28db90;
            case 0x28DBE0u: goto label_28dbe0;
            case 0x28DC08u: goto label_28dc08;
            case 0x28DC0Cu: goto label_28dc0c;
            case 0x28DC28u: goto label_28dc28;
            case 0x28DC2Cu: goto label_28dc2c;
            case 0x28DC30u: goto label_28dc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DC64u;
    // 0x28dc64: 0x0  nop
    ctx->pc = 0x28dc64u;
    // NOP
}

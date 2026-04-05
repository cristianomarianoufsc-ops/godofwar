#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13d710
// Address: 0x13d710 - 0x13d8a0
void entry_13d710_0x13d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13d710_0x13d8a0");
#endif

    ctx->pc = 0x13d710u;

    // 0x13d710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d714: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13d718: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13d71c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13d724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d72c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d730: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13d730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d734: 0x3c02c0de  lui         $v0, 0xC0DE
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49374 << 16));
    // 0x13d738: 0x34421111  ori         $v0, $v0, 0x1111
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4369);
    // 0x13d73c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D73Cu;
            // 0x13d740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D758u;
            goto label_13d758;
        }
    }
    ctx->pc = 0x13D744u;
    // 0x13d744: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x13d748: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x13D748u;
    SET_GPR_U32(ctx, 31, 0x13D750u);
    ctx->pc = 0x13D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D748u;
            // 0x13d74c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D750u; }
        if (ctx->pc != 0x13D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D750u; }
        if (ctx->pc != 0x13D750u) { return; }
    }
    ctx->pc = 0x13D750u;
    // 0x13d750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13D750u;
    {
        const bool branch_taken_0x13d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D750u;
            // 0x13d754: 0xa2000037  sb          $zero, 0x37($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d750) {
            ctx->pc = 0x13D75Cu;
            goto label_13d75c;
        }
    }
    ctx->pc = 0x13D758u;
label_13d758:
    // 0x13d758: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x13d758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
label_13d75c:
    // 0x13d75c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x13d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x13d760: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x13d760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x13d764: 0x8c83beb0  lw          $v1, -0x4150($a0)
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950576)));
    // 0x13d768: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x13d76c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x13d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x13d770: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x13d774: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13d774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13d778: 0x2606003c  addiu       $a2, $s0, 0x3C
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x13d77c: 0xac90beb0  sw          $s0, -0x4150($a0)
    ctx->pc = 0x13d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950576), GPR_U32(ctx, 16));
    // 0x13d780: 0x2627ffff  addiu       $a3, $s1, -0x1
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13d784: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x13d784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x13d788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d78c: 0xae100010  sw          $s0, 0x10($s0)
    ctx->pc = 0x13d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 16));
    // 0x13d790: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x13d790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x13d794: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x13d794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x13d798: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x13D798u;
    {
        const bool branch_taken_0x13d798 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D798u;
            // 0x13d79c: 0xae060020  sw          $a2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d798) {
            ctx->pc = 0x13D7C4u;
            goto label_13d7c4;
        }
    }
    ctx->pc = 0x13D7A0u;
    // 0x13d7a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x13d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7a4: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_13d7a8:
    // 0x13d7a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13d7ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d7b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13d7b4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x13d7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13d7b8: 0x0  nop
    ctx->pc = 0x13d7b8u;
    // NOP
    // 0x13d7bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D7BCu;
    {
        const bool branch_taken_0x13d7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D7BCu;
            // 0x13d7c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7bc) {
            ctx->pc = 0x13D7A8u;
            runtime->cooperativeGuestYield();
            goto label_13d7a8;
        }
    }
    ctx->pc = 0x13D7C4u;
label_13d7c4:
    // 0x13d7c4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13d7c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d7cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13d7d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13d7d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13d7d8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x13d7dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13d7e0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x13d7e4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x13d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13d7e8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x13d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x13d7ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x13d7f0: 0x2446b940  addiu       $a2, $v0, -0x46C0
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x13d7f4: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x13d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x13d7f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13d7fc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13d800: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d804: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x13d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x13d808: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x13d808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13d80c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x13d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x13d810: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13d814: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13d814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13d818: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13d81c: 0xac43fffc  sw          $v1, -0x4($v0)
    ctx->pc = 0x13d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
    // 0x13d820: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x13d820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x13d824: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D824u;
    {
        const bool branch_taken_0x13d824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D824u;
            // 0x13d828: 0xac900004  sw          $s0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d824) {
            ctx->pc = 0x13D848u;
            goto label_13d848;
        }
    }
    ctx->pc = 0x13D82Cu;
    // 0x13d82c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13d830: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13d834: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13D834u;
    {
        const bool branch_taken_0x13d834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D834u;
            // 0x13d838: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d834) {
            ctx->pc = 0x13D860u;
            goto label_13d860;
        }
    }
    ctx->pc = 0x13D83Cu;
    // 0x13d83c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13D83Cu;
    {
        const bool branch_taken_0x13d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D83Cu;
            // 0x13d840: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d83c) {
            ctx->pc = 0x13D880u;
            goto label_13d880;
        }
    }
    ctx->pc = 0x13D844u;
    // 0x13d844: 0x0  nop
    ctx->pc = 0x13d844u;
    // NOP
label_13d848:
    // 0x13d848: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13d84c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13d850: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D850u;
    {
        const bool branch_taken_0x13d850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D850u;
            // 0x13d854: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d850) {
            ctx->pc = 0x13D860u;
            goto label_13d860;
        }
    }
    ctx->pc = 0x13D858u;
    // 0x13d858: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x13d858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x13d85c: 0x0  nop
    ctx->pc = 0x13d85cu;
    // NOP
label_13d860:
    // 0x13d860: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13d864: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d86c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d870: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x13d870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x13d874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d878: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x13d878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x13d87c: 0x0  nop
    ctx->pc = 0x13d87cu;
    // NOP
label_13d880:
    // 0x13d880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13d884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d888: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13d888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d88c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13d88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d894: 0x3e00008  jr          $ra
    ctx->pc = 0x13D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D894u;
            // 0x13d898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D758u: goto label_13d758;
            case 0x13D75Cu: goto label_13d75c;
            case 0x13D7A8u: goto label_13d7a8;
            case 0x13D7C4u: goto label_13d7c4;
            case 0x13D848u: goto label_13d848;
            case 0x13D860u: goto label_13d860;
            case 0x13D880u: goto label_13d880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D89Cu;
    // 0x13d89c: 0x0  nop
    ctx->pc = 0x13d89cu;
    // NOP
}

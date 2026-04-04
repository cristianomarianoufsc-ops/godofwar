#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EFF0
// Address: 0x13eff0 - 0x13f4e0
void sub_0013EFF0_0x13eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EFF0_0x13eff0");
#endif

    ctx->pc = 0x13eff0u;

    // 0x13eff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13eff4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13eff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13eff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13effc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13f000: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f004: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13f008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f00c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x13F00Cu;
    SET_GPR_U32(ctx, 31, 0x13F014u);
    ctx->pc = 0x13F010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F00Cu;
            // 0x13f010: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F014u; }
        if (ctx->pc != 0x13F014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F014u; }
        if (ctx->pc != 0x13F014u) { return; }
    }
    ctx->pc = 0x13F014u;
    // 0x13f014: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x13f018: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x13f01c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13f020: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x13f024: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f028: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x13F028u;
    SET_GPR_U32(ctx, 31, 0x13F030u);
    ctx->pc = 0x13F02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F028u;
            // 0x13f02c: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F030u; }
        if (ctx->pc != 0x13F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F030u; }
        if (ctx->pc != 0x13F030u) { return; }
    }
    ctx->pc = 0x13F030u;
    // 0x13f030: 0x8e43f168  lw          $v1, -0xE98($s2)
    ctx->pc = 0x13f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x13f034: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13f038: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f03c: 0xde270630  ld          $a3, 0x630($s1)
    ctx->pc = 0x13f03cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 1584)));
    // 0x13f040: 0xac441010  sw          $a0, 0x1010($v0)
    ctx->pc = 0x13f040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 4));
    // 0x13f044: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13f044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13f048: 0xde280638  ld          $t0, 0x638($s1)
    ctx->pc = 0x13f048u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 1592)));
    // 0x13f04c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x13f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13f050: 0xaca31014  sw          $v1, 0x1014($a1)
    ctx->pc = 0x13f050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 3));
    // 0x13f054: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13f058: 0x1083c0  sll         $s0, $s0, 15
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 15));
    // 0x13f05c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13f060: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x13f060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x13f064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f068: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x13f068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x13f06c: 0x30e40040  andi        $a0, $a3, 0x40
    ctx->pc = 0x13f06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x13f070: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13f070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13f074: 0xde220320  ld          $v0, 0x320($s1)
    ctx->pc = 0x13f074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x13f078: 0x8e46f168  lw          $a2, -0xE98($s2)
    ctx->pc = 0x13f078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x13f07c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x13f07cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x13f080: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x13f080u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x13f084: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x13f088: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13f08c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x13f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x13f090: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F090u;
    {
        const bool branch_taken_0x13f090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F090u;
            // 0x13f094: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f090) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F098u;
    // 0x13f098: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x13f098u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x13f09c: 0xde240348  ld          $a0, 0x348($s1)
    ctx->pc = 0x13f09cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x13f0a0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0A0u;
    {
        const bool branch_taken_0x13f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0A0u;
            // 0x13f0a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0a0) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F0A8u;
    // 0x13f0a8: 0xfe240030  sd          $a0, 0x30($s1)
    ctx->pc = 0x13f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 4));
    // 0x13f0ac: 0xfcc40020  sd          $a0, 0x20($a2)
    ctx->pc = 0x13f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 4));
    // 0x13f0b0: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f0b4: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_13f0b8:
    // 0x13f0b8: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x13f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x13f0bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F0BCu;
    {
        const bool branch_taken_0x13f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0BCu;
            // 0x13f0c0: 0x30e20100  andi        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0bc) {
            ctx->pc = 0x13F0E8u;
            goto label_13f0e8;
        }
    }
    ctx->pc = 0x13F0C4u;
    // 0x13f0c4: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x13f0c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x13f0c8: 0xde240350  ld          $a0, 0x350($s1)
    ctx->pc = 0x13f0c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x13f0cc: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0CCu;
    {
        const bool branch_taken_0x13f0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0CCu;
            // 0x13f0d0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0cc) {
            ctx->pc = 0x13F0E4u;
            goto label_13f0e4;
        }
    }
    ctx->pc = 0x13F0D4u;
    // 0x13f0d4: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x13f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x13f0d8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f0dc: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f0e0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f0e4:
    // 0x13f0e4: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x13f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
label_13f0e8:
    // 0x13f0e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F0E8u;
    {
        const bool branch_taken_0x13f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0E8u;
            // 0x13f0ec: 0x30e20200  andi        $v0, $a3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e8) {
            ctx->pc = 0x13F114u;
            goto label_13f114;
        }
    }
    ctx->pc = 0x13F0F0u;
    // 0x13f0f0: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x13f0f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13f0f4: 0xde240358  ld          $a0, 0x358($s1)
    ctx->pc = 0x13f0f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x13f0f8: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0F8u;
    {
        const bool branch_taken_0x13f0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0F8u;
            // 0x13f0fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0f8) {
            ctx->pc = 0x13F110u;
            goto label_13f110;
        }
    }
    ctx->pc = 0x13F100u;
    // 0x13f100: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x13f100u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
    // 0x13f104: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f104u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f108: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f10c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f110:
    // 0x13f110: 0x30e20200  andi        $v0, $a3, 0x200
    ctx->pc = 0x13f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_13f114:
    // 0x13f114: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F114u;
    {
        const bool branch_taken_0x13f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F114u;
            // 0x13f118: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f114) {
            ctx->pc = 0x13F140u;
            goto label_13f140;
        }
    }
    ctx->pc = 0x13F11Cu;
    // 0x13f11c: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13f120: 0xde240360  ld          $a0, 0x360($s1)
    ctx->pc = 0x13f120u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x13f124: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F124u;
    {
        const bool branch_taken_0x13f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F124u;
            // 0x13f128: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f124) {
            ctx->pc = 0x13F13Cu;
            goto label_13f13c;
        }
    }
    ctx->pc = 0x13F12Cu;
    // 0x13f12c: 0xfe240048  sd          $a0, 0x48($s1)
    ctx->pc = 0x13f12cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 4));
    // 0x13f130: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f130u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f134: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f134u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f138: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f13c:
    // 0x13f13c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_13f140:
    // 0x13f140: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f144: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F144u;
    {
        const bool branch_taken_0x13f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F144u;
            // 0x13f148: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f144) {
            ctx->pc = 0x13F170u;
            goto label_13f170;
        }
    }
    ctx->pc = 0x13F14Cu;
    // 0x13f14c: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x13f14cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13f150: 0xde2403b8  ld          $a0, 0x3B8($s1)
    ctx->pc = 0x13f150u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 952)));
    // 0x13f154: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F154u;
    {
        const bool branch_taken_0x13f154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F154u;
            // 0x13f158: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f154) {
            ctx->pc = 0x13F16Cu;
            goto label_13f16c;
        }
    }
    ctx->pc = 0x13F15Cu;
    // 0x13f15c: 0xfe2400a0  sd          $a0, 0xA0($s1)
    ctx->pc = 0x13f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 4));
    // 0x13f160: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f160u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f164: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f164u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f168: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f16c:
    // 0x13f16c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_13f170:
    // 0x13f170: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f174: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F174u;
    {
        const bool branch_taken_0x13f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F174u;
            // 0x13f178: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f174) {
            ctx->pc = 0x13F1A0u;
            goto label_13f1a0;
        }
    }
    ctx->pc = 0x13F17Cu;
    // 0x13f17c: 0xde2200a8  ld          $v0, 0xA8($s1)
    ctx->pc = 0x13f17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x13f180: 0xde2403c0  ld          $a0, 0x3C0($s1)
    ctx->pc = 0x13f180u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 960)));
    // 0x13f184: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F184u;
    {
        const bool branch_taken_0x13f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F184u;
            // 0x13f188: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f184) {
            ctx->pc = 0x13F19Cu;
            goto label_13f19c;
        }
    }
    ctx->pc = 0x13F18Cu;
    // 0x13f18c: 0xfe2400a8  sd          $a0, 0xA8($s1)
    ctx->pc = 0x13f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 168), GPR_U64(ctx, 4));
    // 0x13f190: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f190u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f194: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f194u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f198: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f19c:
    // 0x13f19c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_13f1a0:
    // 0x13f1a0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f1a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F1A4u;
    {
        const bool branch_taken_0x13f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1A4u;
            // 0x13f1a8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1a4) {
            ctx->pc = 0x13F1D0u;
            goto label_13f1d0;
        }
    }
    ctx->pc = 0x13F1ACu;
    // 0x13f1ac: 0xde2200c0  ld          $v0, 0xC0($s1)
    ctx->pc = 0x13f1acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x13f1b0: 0xde2403d8  ld          $a0, 0x3D8($s1)
    ctx->pc = 0x13f1b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 984)));
    // 0x13f1b4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F1B4u;
    {
        const bool branch_taken_0x13f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1B4u;
            // 0x13f1b8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1b4) {
            ctx->pc = 0x13F1CCu;
            goto label_13f1cc;
        }
    }
    ctx->pc = 0x13F1BCu;
    // 0x13f1bc: 0xfe2400c0  sd          $a0, 0xC0($s1)
    ctx->pc = 0x13f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 4));
    // 0x13f1c0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f1c4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f1c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f1cc:
    // 0x13f1cc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x13f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_13f1d0:
    // 0x13f1d0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f1d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F1D4u;
    {
        const bool branch_taken_0x13f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1D4u;
            // 0x13f1d8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d4) {
            ctx->pc = 0x13F200u;
            goto label_13f200;
        }
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0xde2200c8  ld          $v0, 0xC8($s1)
    ctx->pc = 0x13f1dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x13f1e0: 0xde2403e0  ld          $a0, 0x3E0($s1)
    ctx->pc = 0x13f1e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x13f1e4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F1E4u;
    {
        const bool branch_taken_0x13f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1E4u;
            // 0x13f1e8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1e4) {
            ctx->pc = 0x13F1FCu;
            goto label_13f1fc;
        }
    }
    ctx->pc = 0x13F1ECu;
    // 0x13f1ec: 0xfe2400c8  sd          $a0, 0xC8($s1)
    ctx->pc = 0x13f1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 4));
    // 0x13f1f0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f1f4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f1f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f1fc:
    // 0x13f1fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_13f200:
    // 0x13f200: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f204: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F204u;
    {
        const bool branch_taken_0x13f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f204) {
            ctx->pc = 0x13F22Cu;
            goto label_13f22c;
        }
    }
    ctx->pc = 0x13F20Cu;
    // 0x13f20c: 0xde2200d0  ld          $v0, 0xD0($s1)
    ctx->pc = 0x13f20cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x13f210: 0xde2403e8  ld          $a0, 0x3E8($s1)
    ctx->pc = 0x13f210u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x13f214: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F214u;
    {
        const bool branch_taken_0x13f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F214u;
            // 0x13f218: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f214) {
            ctx->pc = 0x13F22Cu;
            goto label_13f22c;
        }
    }
    ctx->pc = 0x13F21Cu;
    // 0x13f21c: 0xfe2400d0  sd          $a0, 0xD0($s1)
    ctx->pc = 0x13f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 4));
    // 0x13f220: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f220u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f224: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f224u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f228: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f22c:
    // 0x13f22c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f230: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x13f230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x13f234: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x13f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x13f238: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F238u;
    {
        const bool branch_taken_0x13f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F238u;
            // 0x13f23c: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f238) {
            ctx->pc = 0x13F264u;
            goto label_13f264;
        }
    }
    ctx->pc = 0x13F240u;
    // 0x13f240: 0xde2201d8  ld          $v0, 0x1D8($s1)
    ctx->pc = 0x13f240u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x13f244: 0xde2404f0  ld          $a0, 0x4F0($s1)
    ctx->pc = 0x13f244u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1264)));
    // 0x13f248: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F248u;
    {
        const bool branch_taken_0x13f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F248u;
            // 0x13f24c: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f248) {
            ctx->pc = 0x13F260u;
            goto label_13f260;
        }
    }
    ctx->pc = 0x13F250u;
    // 0x13f250: 0xfe2401d8  sd          $a0, 0x1D8($s1)
    ctx->pc = 0x13f250u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 4));
    // 0x13f254: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f254u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f258: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f258u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f25c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f260:
    // 0x13f260: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x13f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_13f264:
    // 0x13f264: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13f264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13f268: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13f268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13f26c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F26Cu;
    {
        const bool branch_taken_0x13f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F26Cu;
            // 0x13f270: 0x31020002  andi        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f26c) {
            ctx->pc = 0x13F298u;
            goto label_13f298;
        }
    }
    ctx->pc = 0x13F274u;
    // 0x13f274: 0xde220200  ld          $v0, 0x200($s1)
    ctx->pc = 0x13f274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x13f278: 0xde240518  ld          $a0, 0x518($s1)
    ctx->pc = 0x13f278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x13f27c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F27Cu;
    {
        const bool branch_taken_0x13f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F27Cu;
            // 0x13f280: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f27c) {
            ctx->pc = 0x13F294u;
            goto label_13f294;
        }
    }
    ctx->pc = 0x13F284u;
    // 0x13f284: 0xfe240200  sd          $a0, 0x200($s1)
    ctx->pc = 0x13f284u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 512), GPR_U64(ctx, 4));
    // 0x13f288: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f288u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f28c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f290: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f294:
    // 0x13f294: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x13f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_13f298:
    // 0x13f298: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F298u;
    {
        const bool branch_taken_0x13f298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F298u;
            // 0x13f29c: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f298) {
            ctx->pc = 0x13F2C4u;
            goto label_13f2c4;
        }
    }
    ctx->pc = 0x13F2A0u;
    // 0x13f2a0: 0xde220208  ld          $v0, 0x208($s1)
    ctx->pc = 0x13f2a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x13f2a4: 0xde240520  ld          $a0, 0x520($s1)
    ctx->pc = 0x13f2a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1312)));
    // 0x13f2a8: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F2A8u;
    {
        const bool branch_taken_0x13f2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2A8u;
            // 0x13f2ac: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2a8) {
            ctx->pc = 0x13F2C0u;
            goto label_13f2c0;
        }
    }
    ctx->pc = 0x13F2B0u;
    // 0x13f2b0: 0xfe240208  sd          $a0, 0x208($s1)
    ctx->pc = 0x13f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 4));
    // 0x13f2b4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f2b8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f2bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f2c0:
    // 0x13f2c0: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x13f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_13f2c4:
    // 0x13f2c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F2C4u;
    {
        const bool branch_taken_0x13f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2C4u;
            // 0x13f2c8: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2c4) {
            ctx->pc = 0x13F2F0u;
            goto label_13f2f0;
        }
    }
    ctx->pc = 0x13F2CCu;
    // 0x13f2cc: 0xde220210  ld          $v0, 0x210($s1)
    ctx->pc = 0x13f2ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x13f2d0: 0xde240528  ld          $a0, 0x528($s1)
    ctx->pc = 0x13f2d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x13f2d4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F2D4u;
    {
        const bool branch_taken_0x13f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2D4u;
            // 0x13f2d8: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2d4) {
            ctx->pc = 0x13F2ECu;
            goto label_13f2ec;
        }
    }
    ctx->pc = 0x13F2DCu;
    // 0x13f2dc: 0xfe240210  sd          $a0, 0x210($s1)
    ctx->pc = 0x13f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 4));
    // 0x13f2e0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f2e4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f2e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f2ec:
    // 0x13f2ec: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x13f2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
label_13f2f0:
    // 0x13f2f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F2F0u;
    {
        const bool branch_taken_0x13f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2F0u;
            // 0x13f2f4: 0x31020010  andi        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2f0) {
            ctx->pc = 0x13F31Cu;
            goto label_13f31c;
        }
    }
    ctx->pc = 0x13F2F8u;
    // 0x13f2f8: 0xde220218  ld          $v0, 0x218($s1)
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x13f2fc: 0xde240530  ld          $a0, 0x530($s1)
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x13f300: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F300u;
    {
        const bool branch_taken_0x13f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F300u;
            // 0x13f304: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f300) {
            ctx->pc = 0x13F318u;
            goto label_13f318;
        }
    }
    ctx->pc = 0x13F308u;
    // 0x13f308: 0xfe240218  sd          $a0, 0x218($s1)
    ctx->pc = 0x13f308u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 536), GPR_U64(ctx, 4));
    // 0x13f30c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f310: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f310u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f314: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f318:
    // 0x13f318: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
label_13f31c:
    // 0x13f31c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F31Cu;
    {
        const bool branch_taken_0x13f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F31Cu;
            // 0x13f320: 0x31020020  andi        $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f31c) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F324u;
    // 0x13f324: 0xde220220  ld          $v0, 0x220($s1)
    ctx->pc = 0x13f324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x13f328: 0xde240538  ld          $a0, 0x538($s1)
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x13f32c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F32Cu;
    {
        const bool branch_taken_0x13f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F32Cu;
            // 0x13f330: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f32c) {
            ctx->pc = 0x13F344u;
            goto label_13f344;
        }
    }
    ctx->pc = 0x13F334u;
    // 0x13f334: 0xfe240220  sd          $a0, 0x220($s1)
    ctx->pc = 0x13f334u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 4));
    // 0x13f338: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f338u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f33c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f340: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f344:
    // 0x13f344: 0x31020020  andi        $v0, $t0, 0x20
    ctx->pc = 0x13f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
label_13f348:
    // 0x13f348: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F348u;
    {
        const bool branch_taken_0x13f348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F348u;
            // 0x13f34c: 0x31020040  andi        $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f348) {
            ctx->pc = 0x13F374u;
            goto label_13f374;
        }
    }
    ctx->pc = 0x13F350u;
    // 0x13f350: 0xde220228  ld          $v0, 0x228($s1)
    ctx->pc = 0x13f350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x13f354: 0xde240540  ld          $a0, 0x540($s1)
    ctx->pc = 0x13f354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x13f358: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F358u;
    {
        const bool branch_taken_0x13f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F358u;
            // 0x13f35c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f358) {
            ctx->pc = 0x13F370u;
            goto label_13f370;
        }
    }
    ctx->pc = 0x13F360u;
    // 0x13f360: 0xfe240228  sd          $a0, 0x228($s1)
    ctx->pc = 0x13f360u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 4));
    // 0x13f364: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f368: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f368u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f36c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f370:
    // 0x13f370: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x13f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
label_13f374:
    // 0x13f374: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F374u;
    {
        const bool branch_taken_0x13f374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F374u;
            // 0x13f378: 0x31020080  andi        $v0, $t0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f374) {
            ctx->pc = 0x13F3A0u;
            goto label_13f3a0;
        }
    }
    ctx->pc = 0x13F37Cu;
    // 0x13f37c: 0xde220230  ld          $v0, 0x230($s1)
    ctx->pc = 0x13f37cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x13f380: 0xde240548  ld          $a0, 0x548($s1)
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x13f384: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F384u;
    {
        const bool branch_taken_0x13f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F384u;
            // 0x13f388: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f384) {
            ctx->pc = 0x13F39Cu;
            goto label_13f39c;
        }
    }
    ctx->pc = 0x13F38Cu;
    // 0x13f38c: 0xfe240230  sd          $a0, 0x230($s1)
    ctx->pc = 0x13f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 4));
    // 0x13f390: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f390u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f394: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f394u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f398: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f39c:
    // 0x13f39c: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x13f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_13f3a0:
    // 0x13f3a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F3A0u;
    {
        const bool branch_taken_0x13f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3A0u;
            // 0x13f3a4: 0x31020100  andi        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3a0) {
            ctx->pc = 0x13F3CCu;
            goto label_13f3cc;
        }
    }
    ctx->pc = 0x13F3A8u;
    // 0x13f3a8: 0xde220238  ld          $v0, 0x238($s1)
    ctx->pc = 0x13f3a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x13f3ac: 0xde240550  ld          $a0, 0x550($s1)
    ctx->pc = 0x13f3acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x13f3b0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F3B0u;
    {
        const bool branch_taken_0x13f3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3B0u;
            // 0x13f3b4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3b0) {
            ctx->pc = 0x13F3C8u;
            goto label_13f3c8;
        }
    }
    ctx->pc = 0x13F3B8u;
    // 0x13f3b8: 0xfe240238  sd          $a0, 0x238($s1)
    ctx->pc = 0x13f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 4));
    // 0x13f3bc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f3c0: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f3c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f3c8:
    // 0x13f3c8: 0x31020100  andi        $v0, $t0, 0x100
    ctx->pc = 0x13f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
label_13f3cc:
    // 0x13f3cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F3CCu;
    {
        const bool branch_taken_0x13f3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3CCu;
            // 0x13f3d0: 0x31021000  andi        $v0, $t0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3cc) {
            ctx->pc = 0x13F3F8u;
            goto label_13f3f8;
        }
    }
    ctx->pc = 0x13F3D4u;
    // 0x13f3d4: 0xde220240  ld          $v0, 0x240($s1)
    ctx->pc = 0x13f3d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x13f3d8: 0xde240558  ld          $a0, 0x558($s1)
    ctx->pc = 0x13f3d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x13f3dc: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F3DCu;
    {
        const bool branch_taken_0x13f3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3DCu;
            // 0x13f3e0: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3dc) {
            ctx->pc = 0x13F3F4u;
            goto label_13f3f4;
        }
    }
    ctx->pc = 0x13F3E4u;
    // 0x13f3e4: 0xfe240240  sd          $a0, 0x240($s1)
    ctx->pc = 0x13f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 4));
    // 0x13f3e8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f3ec: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f3f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f3f4:
    // 0x13f3f4: 0x31021000  andi        $v0, $t0, 0x1000
    ctx->pc = 0x13f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4096);
label_13f3f8:
    // 0x13f3f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F3F8u;
    {
        const bool branch_taken_0x13f3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3F8u;
            // 0x13f3fc: 0x31022000  andi        $v0, $t0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3f8) {
            ctx->pc = 0x13F424u;
            goto label_13f424;
        }
    }
    ctx->pc = 0x13F400u;
    // 0x13f400: 0xde220260  ld          $v0, 0x260($s1)
    ctx->pc = 0x13f400u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x13f404: 0xde240578  ld          $a0, 0x578($s1)
    ctx->pc = 0x13f404u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x13f408: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F408u;
    {
        const bool branch_taken_0x13f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F408u;
            // 0x13f40c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f408) {
            ctx->pc = 0x13F420u;
            goto label_13f420;
        }
    }
    ctx->pc = 0x13F410u;
    // 0x13f410: 0xfe240260  sd          $a0, 0x260($s1)
    ctx->pc = 0x13f410u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 608), GPR_U64(ctx, 4));
    // 0x13f414: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f414u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f418: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f418u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f41c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f420:
    // 0x13f420: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x13f420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
label_13f424:
    // 0x13f424: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F424u;
    {
        const bool branch_taken_0x13f424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F424u;
            // 0x13f428: 0x31024000  andi        $v0, $t0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f424) {
            ctx->pc = 0x13F450u;
            goto label_13f450;
        }
    }
    ctx->pc = 0x13F42Cu;
    // 0x13f42c: 0xde220268  ld          $v0, 0x268($s1)
    ctx->pc = 0x13f42cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x13f430: 0xde240580  ld          $a0, 0x580($s1)
    ctx->pc = 0x13f430u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1408)));
    // 0x13f434: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F434u;
    {
        const bool branch_taken_0x13f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F434u;
            // 0x13f438: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f434) {
            ctx->pc = 0x13F44Cu;
            goto label_13f44c;
        }
    }
    ctx->pc = 0x13F43Cu;
    // 0x13f43c: 0xfe240268  sd          $a0, 0x268($s1)
    ctx->pc = 0x13f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 616), GPR_U64(ctx, 4));
    // 0x13f440: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f440u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f444: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f444u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f448: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f44c:
    // 0x13f44c: 0x31024000  andi        $v0, $t0, 0x4000
    ctx->pc = 0x13f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
label_13f450:
    // 0x13f450: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F450u;
    {
        const bool branch_taken_0x13f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F450u;
            // 0x13f454: 0x31028000  andi        $v0, $t0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f450) {
            ctx->pc = 0x13F47Cu;
            goto label_13f47c;
        }
    }
    ctx->pc = 0x13F458u;
    // 0x13f458: 0xde220270  ld          $v0, 0x270($s1)
    ctx->pc = 0x13f458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x13f45c: 0xde240588  ld          $a0, 0x588($s1)
    ctx->pc = 0x13f45cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1416)));
    // 0x13f460: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F460u;
    {
        const bool branch_taken_0x13f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F460u;
            // 0x13f464: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f460) {
            ctx->pc = 0x13F478u;
            goto label_13f478;
        }
    }
    ctx->pc = 0x13F468u;
    // 0x13f468: 0xfe240270  sd          $a0, 0x270($s1)
    ctx->pc = 0x13f468u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 624), GPR_U64(ctx, 4));
    // 0x13f46c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f470: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f470u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f474: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f478:
    // 0x13f478: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x13f478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
label_13f47c:
    // 0x13f47c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F47Cu;
    {
        const bool branch_taken_0x13f47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f47c) {
            ctx->pc = 0x13F4A4u;
            goto label_13f4a4;
        }
    }
    ctx->pc = 0x13F484u;
    // 0x13f484: 0xde220278  ld          $v0, 0x278($s1)
    ctx->pc = 0x13f484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x13f488: 0xde240590  ld          $a0, 0x590($s1)
    ctx->pc = 0x13f488u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x13f48c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F48Cu;
    {
        const bool branch_taken_0x13f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F48Cu;
            // 0x13f490: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f48c) {
            ctx->pc = 0x13F4A4u;
            goto label_13f4a4;
        }
    }
    ctx->pc = 0x13F494u;
    // 0x13f494: 0xfe240278  sd          $a0, 0x278($s1)
    ctx->pc = 0x13f494u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 632), GPR_U64(ctx, 4));
    // 0x13f498: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13f498u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13f49c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13f4a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_13f4a4:
    // 0x13f4a4: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x13F4A4u;
    SET_GPR_U32(ctx, 31, 0x13F4ACu);
    ctx->pc = 0x13F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4A4u;
            // 0x13f4a8: 0xae43f168  sw          $v1, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4ACu; }
        if (ctx->pc != 0x13F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4ACu; }
        if (ctx->pc != 0x13F4ACu) { return; }
    }
    ctx->pc = 0x13F4ACu;
    // 0x13f4ac: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x13F4ACu;
    SET_GPR_U32(ctx, 31, 0x13F4B4u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4B4u; }
        if (ctx->pc != 0x13F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4B4u; }
        if (ctx->pc != 0x13F4B4u) { return; }
    }
    ctx->pc = 0x13F4B4u;
    // 0x13f4b4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x13F4B4u;
    SET_GPR_U32(ctx, 31, 0x13F4BCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4BCu; }
        if (ctx->pc != 0x13F4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4BCu; }
        if (ctx->pc != 0x13F4BCu) { return; }
    }
    ctx->pc = 0x13F4BCu;
    // 0x13f4bc: 0xfe200630  sd          $zero, 0x630($s1)
    ctx->pc = 0x13f4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1584), GPR_U64(ctx, 0));
    // 0x13f4c0: 0xfe200638  sd          $zero, 0x638($s1)
    ctx->pc = 0x13f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1592), GPR_U64(ctx, 0));
    // 0x13f4c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13f4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f4c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13f4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f4cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13f4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x13F4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4D4u;
            // 0x13f4d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F19Cu: goto label_13f19c;
            case 0x13F1A0u: goto label_13f1a0;
            case 0x13F1CCu: goto label_13f1cc;
            case 0x13F1D0u: goto label_13f1d0;
            case 0x13F1FCu: goto label_13f1fc;
            case 0x13F200u: goto label_13f200;
            case 0x13F22Cu: goto label_13f22c;
            case 0x13F260u: goto label_13f260;
            case 0x13F264u: goto label_13f264;
            case 0x13F294u: goto label_13f294;
            case 0x13F298u: goto label_13f298;
            case 0x13F2C0u: goto label_13f2c0;
            case 0x13F2C4u: goto label_13f2c4;
            case 0x13F2ECu: goto label_13f2ec;
            case 0x13F2F0u: goto label_13f2f0;
            case 0x13F318u: goto label_13f318;
            case 0x13F31Cu: goto label_13f31c;
            case 0x13F344u: goto label_13f344;
            case 0x13F348u: goto label_13f348;
            case 0x13F370u: goto label_13f370;
            case 0x13F374u: goto label_13f374;
            case 0x13F39Cu: goto label_13f39c;
            case 0x13F3A0u: goto label_13f3a0;
            case 0x13F3C8u: goto label_13f3c8;
            case 0x13F3CCu: goto label_13f3cc;
            case 0x13F3F4u: goto label_13f3f4;
            case 0x13F3F8u: goto label_13f3f8;
            case 0x13F420u: goto label_13f420;
            case 0x13F424u: goto label_13f424;
            case 0x13F44Cu: goto label_13f44c;
            case 0x13F450u: goto label_13f450;
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F4A4u: goto label_13f4a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F4DCu;
    // 0x13f4dc: 0x0  nop
    ctx->pc = 0x13f4dcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289FF8
// Address: 0x289ff8 - 0x28a0c8
void sub_00289FF8_0x289ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289FF8_0x289ff8");
#endif

    ctx->pc = 0x289ff8u;

    // 0x289ff8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x289ffc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x289ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x28a000: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28a000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28a004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a008: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a008u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a00c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28a010: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A010u;
    {
        const bool branch_taken_0x28a010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A010u;
            // 0x28a014: 0x26030043  addiu       $v1, $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a010) {
            ctx->pc = 0x28A02Cu;
            goto label_28a02c;
        }
    }
    ctx->pc = 0x28A018u;
    // 0x28a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a01c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x28a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x28a020: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28a020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x28a024: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A024u;
            // 0x28a028: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a024) {
            ctx->pc = 0x28A0ACu;
            goto label_28a0ac;
        }
    }
    ctx->pc = 0x28A02Cu;
label_28a02c:
    // 0x28a02c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x28a02cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x28a030: 0x4a20014  bltzl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A030u;
    {
        const bool branch_taken_0x28a030 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28a030) {
            ctx->pc = 0x28A034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A030u;
            // 0x28a034: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A084u;
            goto label_28a084;
        }
    }
    ctx->pc = 0x28A038u;
    // 0x28a038: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a03c: 0xc0a4828  jal         func_2920A0
    ctx->pc = 0x28A03Cu;
    SET_GPR_U32(ctx, 31, 0x28A044u);
    ctx->pc = 0x28A040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A03Cu;
            // 0x28a040: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2920A0u;
    if (runtime->hasFunction(0x2920A0u)) {
        auto targetFn = runtime->lookupFunction(0x2920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A044u; }
        if (ctx->pc != 0x28A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002920A0_0x2920a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A044u; }
        if (ctx->pc != 0x28A044u) { return; }
    }
    ctx->pc = 0x28A044u;
    // 0x28a044: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28A044u;
    {
        const bool branch_taken_0x28a044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A044u;
            // 0x28a048: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a044) {
            ctx->pc = 0x28A080u;
            goto label_28a080;
        }
    }
    ctx->pc = 0x28A04Cu;
    // 0x28a04c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x28a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x28a050: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x28a050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x28a054: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28A054u;
    {
        const bool branch_taken_0x28a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28a054) {
            ctx->pc = 0x28A058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A054u;
            // 0x28a058: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A084u;
            goto label_28a084;
        }
    }
    ctx->pc = 0x28A05Cu;
    // 0x28a05c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a060: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28a064: 0x2442a4b8  addiu       $v0, $v0, -0x5B48
    ctx->pc = 0x28a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943928));
    // 0x28a068: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A068u;
    {
        const bool branch_taken_0x28a068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A068u;
            // 0x28a06c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a068) {
            ctx->pc = 0x28A084u;
            goto label_28a084;
        }
    }
    ctx->pc = 0x28A070u;
    // 0x28a070: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x28a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x28a074: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x28a074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x28a078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A078u;
    {
        const bool branch_taken_0x28a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A078u;
            // 0x28a07c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a078) {
            ctx->pc = 0x28A088u;
            goto label_28a088;
        }
    }
    ctx->pc = 0x28A080u;
label_28a080:
    // 0x28a080: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a080u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_28a084:
    // 0x28a084: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x28a084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_28a088:
    // 0x28a088: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28a088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a08c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a08cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a090: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x28a094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a098: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x28a098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x28a09c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28a09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28a0a0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x28a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x28a0a4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28a0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a0a8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x28a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_28a0ac:
    // 0x28a0ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28a0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a0b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28a0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28A0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0B4u;
            // 0x28a0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A02Cu: goto label_28a02c;
            case 0x28A080u: goto label_28a080;
            case 0x28A084u: goto label_28a084;
            case 0x28A088u: goto label_28a088;
            case 0x28A0ACu: goto label_28a0ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A0BCu;
    // 0x28a0bc: 0x0  nop
    ctx->pc = 0x28a0bcu;
    // NOP
    // 0x28a0c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x28a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28a0c4: 0x0  nop
    ctx->pc = 0x28a0c4u;
    // NOP
}

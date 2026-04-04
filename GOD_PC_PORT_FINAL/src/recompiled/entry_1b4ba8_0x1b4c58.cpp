#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b4ba8
// Address: 0x1b4ba8 - 0x1b4c58
void entry_1b4ba8_0x1b4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b4ba8_0x1b4c58");
#endif

    ctx->pc = 0x1b4ba8u;

    // 0x1b4ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4bac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4bb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4bb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b4bbc: 0x8c42cb90  lw          $v0, -0x3470($v0)
    ctx->pc = 0x1b4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953872)));
    // 0x1b4bc0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1b4bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b4bc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4bc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b4bcc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b4bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b4bd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4BD0u;
    {
        const bool branch_taken_0x1b4bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BD0u;
            // 0x1b4bd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bd0) {
            ctx->pc = 0x1B4BF8u;
            goto label_1b4bf8;
        }
    }
    ctx->pc = 0x1B4BD8u;
    // 0x1b4bd8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1b4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b4bdc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4BDCu;
    {
        const bool branch_taken_0x1b4bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bdc) {
            ctx->pc = 0x1B4BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BDCu;
            // 0x1b4be0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4BFCu;
            goto label_1b4bfc;
        }
    }
    ctx->pc = 0x1B4BE4u;
    // 0x1b4be4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4be8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b4be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b4bec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b4becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b4bf0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4BF8u);
        ctx->pc = 0x1B4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BF0u;
            // 0x1b4bf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4BF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4BF8u: goto label_1b4bf8;
            case 0x1B4BFCu: goto label_1b4bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BF8u; }
            if (ctx->pc != 0x1B4BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4BF8u;
label_1b4bf8:
    // 0x1b4bf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4bfc:
    // 0x1b4bfc: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1b4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4c00: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x1b4c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4c04: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x1b4c04u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1b4c08: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4c0c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4c10: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b4c14: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x1b4c14u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1b4c18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b4c1c: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x1b4c1cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1b4c20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1b4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b4c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4c28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4c2c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1b4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1b4c30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c34: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1b4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x1b4c38: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1b4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1b4c3c: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x1b4c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c40: 0xa22001a0  sb          $zero, 0x1A0($s1)
    ctx->pc = 0x1b4c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4c48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C50u;
            // 0x1b4c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4BF8u: goto label_1b4bf8;
            case 0x1B4BFCu: goto label_1b4bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4C58u;
}

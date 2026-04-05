#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107B90
// Address: 0x107b90 - 0x107c10
void sub_00107B90_0x107b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B90_0x107b90");
#endif

    ctx->pc = 0x107b90u;

    // 0x107b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107b94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x107b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ba8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x107bac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x107bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x107bb0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x107bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x107bb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x107bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107bb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x107bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107bbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107bc0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x107bc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x107bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x107bc8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107bcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x107bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107bd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107bd4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x107bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x107bd8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x107bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x107bdc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x107bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x107be0: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x107be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107be4: 0xc0f809  jalr        $a2
    ctx->pc = 0x107BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x107BECu);
        ctx->pc = 0x107BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107BE4u;
            // 0x107be8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x107BECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x107BECu; }
            if (ctx->pc != 0x107BECu) { return; }
        }
        }
    }
    ctx->pc = 0x107BECu;
    // 0x107bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bf0: 0xc0422be  jal         func_108AF8
    ctx->pc = 0x107BF0u;
    SET_GPR_U32(ctx, 31, 0x107BF8u);
    ctx->pc = 0x107BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107BF0u;
            // 0x107bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108AF8u;
    if (runtime->hasFunction(0x108AF8u)) {
        auto targetFn = runtime->lookupFunction(0x108AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107BF8u; }
        if (ctx->pc != 0x107BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108AF8_0x108af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107BF8u; }
        if (ctx->pc != 0x107BF8u) { return; }
    }
    ctx->pc = 0x107BF8u;
    // 0x107bf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c04: 0x3e00008  jr          $ra
    ctx->pc = 0x107C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C04u;
            // 0x107c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107C0Cu;
    // 0x107c0c: 0x0  nop
    ctx->pc = 0x107c0cu;
    // NOP
}

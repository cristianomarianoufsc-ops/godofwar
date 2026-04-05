#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0E98
// Address: 0x1e0e98 - 0x1e0ef8
void sub_001E0E98_0x1e0e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0E98_0x1e0e98");
#endif

    ctx->pc = 0x1e0e98u;

    // 0x1e0e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ea8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0eac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0eb0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0eb4: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0EBCu);
        ctx->pc = 0x1E0EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EB4u;
            // 0x1e0eb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0EBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0ECCu: goto label_1e0ecc;
            case 0x1E0EE4u: goto label_1e0ee4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EBCu; }
            if (ctx->pc != 0x1E0EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0EBCu;
    // 0x1e0ebc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0EBCu;
    {
        const bool branch_taken_0x1e0ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ebc) {
            ctx->pc = 0x1E0EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EBCu;
            // 0x1e0ec0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0ECCu;
            goto label_1e0ecc;
        }
    }
    ctx->pc = 0x1E0EC4u;
    // 0x1e0ec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0EC4u;
    {
        const bool branch_taken_0x1e0ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EC4u;
            // 0x1e0ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec4) {
            ctx->pc = 0x1E0EE4u;
            goto label_1e0ee4;
        }
    }
    ctx->pc = 0x1E0ECCu;
label_1e0ecc:
    // 0x1e0ecc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0ed0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0ed4: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0EDCu);
        ctx->pc = 0x1E0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0ED4u;
            // 0x1e0ed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0EDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0ECCu: goto label_1e0ecc;
            case 0x1E0EE4u: goto label_1e0ee4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EDCu; }
            if (ctx->pc != 0x1E0EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0EDCu;
    // 0x1e0edc: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1e0ee0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1e0ee4:
    // 0x1e0ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EECu;
            // 0x1e0ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0ECCu: goto label_1e0ecc;
            case 0x1E0EE4u: goto label_1e0ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0EF4u;
    // 0x1e0ef4: 0x0  nop
    ctx->pc = 0x1e0ef4u;
    // NOP
}

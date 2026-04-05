#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5B90
// Address: 0x1e5b90 - 0x1e5c40
void sub_001E5B90_0x1e5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5B90_0x1e5b90");
#endif

    ctx->pc = 0x1e5b90u;

    // 0x1e5b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5b94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e5b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e5b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5ba0: 0x8ca30174  lw          $v1, 0x174($a1)
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e5ba4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e5ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5BA8u;
    {
        const bool branch_taken_0x1e5ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BA8u;
            // 0x1e5bac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ba8) {
            ctx->pc = 0x1E5BBCu;
            goto label_1e5bbc;
        }
    }
    ctx->pc = 0x1E5BB0u;
    // 0x1e5bb0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e5bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e5bb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5BB4u;
    {
        const bool branch_taken_0x1e5bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BB4u;
            // 0x1e5bb8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bb4) {
            ctx->pc = 0x1E5BC4u;
            goto label_1e5bc4;
        }
    }
    ctx->pc = 0x1E5BBCu;
label_1e5bbc:
    // 0x1e5bbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5BBCu;
    {
        const bool branch_taken_0x1e5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BBCu;
            // 0x1e5bc0: 0x8cb00240  lw          $s0, 0x240($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bbc) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5BC4u;
label_1e5bc4:
    // 0x1e5bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5BC4u;
    {
        const bool branch_taken_0x1e5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BC4u;
            // 0x1e5bc8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bc4) {
            ctx->pc = 0x1E5BD4u;
            goto label_1e5bd4;
        }
    }
    ctx->pc = 0x1E5BCCu;
    // 0x1e5bcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E5BCCu;
    {
        const bool branch_taken_0x1e5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BCCu;
            // 0x1e5bd0: 0x8cb00244  lw          $s0, 0x244($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bcc) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5BD4u;
label_1e5bd4:
    // 0x1e5bd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E5BD4u;
    {
        const bool branch_taken_0x1e5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BD4u;
            // 0x1e5bd8: 0x30620380  andi        $v0, $v1, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bd4) {
            ctx->pc = 0x1E5C20u;
            goto label_1e5c20;
        }
    }
    ctx->pc = 0x1E5BDCu;
    // 0x1e5bdc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5be0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e5be4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1e5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1e5be8: 0x40f809  jalr        $v0
    ctx->pc = 0x1E5BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5BF0u);
        ctx->pc = 0x1E5BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BE8u;
            // 0x1e5bec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5BF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C28u: goto label_1e5c28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BF0u; }
            if (ctx->pc != 0x1E5BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5BF0u;
    // 0x1e5bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5bf4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E5BF4u;
    {
        const bool branch_taken_0x1e5bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BF4u;
            // 0x1e5bf8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf4) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5BFCu;
    // 0x1e5bfc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5c00: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1e5c04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5c08: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1e5c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e5c0c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e5c10: 0x40f809  jalr        $v0
    ctx->pc = 0x1E5C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5C18u);
        ctx->pc = 0x1E5C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C10u;
            // 0x1e5c14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5C18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C28u: goto label_1e5c28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C18u; }
            if (ctx->pc != 0x1E5C18u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5C18u;
    // 0x1e5c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5C18u;
    {
        const bool branch_taken_0x1e5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C18u;
            // 0x1e5c1c: 0x8c500088  lw          $s0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c18) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C20u;
label_1e5c20:
    // 0x1e5c20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5C20u;
    {
        const bool branch_taken_0x1e5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c20) {
            ctx->pc = 0x1E5C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C20u;
            // 0x1e5c24: 0x8cb00248  lw          $s0, 0x248($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5c30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e5c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C34u;
            // 0x1e5c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5BBCu: goto label_1e5bbc;
            case 0x1E5BC4u: goto label_1e5bc4;
            case 0x1E5BD4u: goto label_1e5bd4;
            case 0x1E5C20u: goto label_1e5c20;
            case 0x1E5C28u: goto label_1e5c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5C3Cu;
    // 0x1e5c3c: 0x0  nop
    ctx->pc = 0x1e5c3cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BCB8
// Address: 0x11bcb8 - 0x11bd88
void sub_0011BCB8_0x11bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BCB8_0x11bcb8");
#endif

    ctx->pc = 0x11bcb8u;

    // 0x11bcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bcbc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x11bcbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bcc4: 0x24a70080  addiu       $a3, $a1, 0x80
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x11bcc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bccc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11bcccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd0: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x11bcd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x11bcd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11bcd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd8: 0x8d440060  lw          $a0, 0x60($t2)
    ctx->pc = 0x11bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x11bcdc: 0x8d420064  lw          $v0, 0x64($t2)
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 100)));
    // 0x11bce0: 0x95230012  lhu         $v1, 0x12($t1)
    ctx->pc = 0x11bce0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
    // 0x11bce4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x11bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x11bce8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x11bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x11bcec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11BCECu;
    {
        const bool branch_taken_0x11bcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCECu;
            // 0x11bcf0: 0xad45006c  sw          $a1, 0x6C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcec) {
            ctx->pc = 0x11BD50u;
            goto label_11bd50;
        }
    }
    ctx->pc = 0x11BCF4u;
    // 0x11bcf4: 0x0  nop
    ctx->pc = 0x11bcf4u;
    // NOP
label_11bcf8:
    // 0x11bcf8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x11bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11bcfc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11bd00: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11bd04: 0x1222821  addu        $a1, $t1, $v0
    ctx->pc = 0x11bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11bd08: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x11bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11bd0c: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x11bd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11bd10: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11BD10u;
    {
        const bool branch_taken_0x11bd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd10) {
            ctx->pc = 0x11BD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD10u;
            // 0x11bd14: 0x95220012  lhu         $v0, 0x12($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BD40u;
            goto label_11bd40;
        }
    }
    ctx->pc = 0x11BD18u;
    // 0x11bd18: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x11bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11bd1c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x11bd1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x11bd20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11bd24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11bd28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BD28u;
    {
        const bool branch_taken_0x11bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD28u;
            // 0x11bd2c: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd28) {
            ctx->pc = 0x11BD50u;
            goto label_11bd50;
        }
    }
    ctx->pc = 0x11BD30u;
    // 0x11bd30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11bd34: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11bd38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11BD38u;
    {
        const bool branch_taken_0x11bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD38u;
            // 0x11bd3c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd38) {
            ctx->pc = 0x11BD58u;
            goto label_11bd58;
        }
    }
    ctx->pc = 0x11BD40u;
label_11bd40:
    // 0x11bd40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11bd44: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x11bd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bd48: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11BD48u;
    {
        const bool branch_taken_0x11bd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD48u;
            // 0x11bd4c: 0x1635823  subu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd48) {
            ctx->pc = 0x11BCF8u;
            runtime->cooperativeGuestYield();
            goto label_11bcf8;
        }
    }
    ctx->pc = 0x11BD50u;
label_11bd50:
    // 0x11bd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd54: 0x0  nop
    ctx->pc = 0x11bd54u;
    // NOP
label_11bd58:
    // 0x11bd58: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x11bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd5c: 0xc041d66  jal         func_107598
    ctx->pc = 0x11BD5Cu;
    SET_GPR_U32(ctx, 31, 0x11BD64u);
    ctx->pc = 0x11BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD5Cu;
            // 0x11bd60: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD64u; }
        if (ctx->pc != 0x11BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD64u; }
        if (ctx->pc != 0x11BD64u) { return; }
    }
    ctx->pc = 0x11BD64u;
    // 0x11bd64: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x11bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x11bd68: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11bd6c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x11bd70: 0x60f809  jalr        $v1
    ctx->pc = 0x11BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BD78u);
        ctx->pc = 0x11BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD70u;
            // 0x11bd74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11BD78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BCF8u: goto label_11bcf8;
            case 0x11BD40u: goto label_11bd40;
            case 0x11BD50u: goto label_11bd50;
            case 0x11BD58u: goto label_11bd58;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11BD78u; }
            if (ctx->pc != 0x11BD78u) { return; }
        }
        }
    }
    ctx->pc = 0x11BD78u;
    // 0x11bd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD7Cu;
            // 0x11bd80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BCF8u: goto label_11bcf8;
            case 0x11BD40u: goto label_11bd40;
            case 0x11BD50u: goto label_11bd50;
            case 0x11BD58u: goto label_11bd58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BD84u;
    // 0x11bd84: 0x0  nop
    ctx->pc = 0x11bd84u;
    // NOP
}

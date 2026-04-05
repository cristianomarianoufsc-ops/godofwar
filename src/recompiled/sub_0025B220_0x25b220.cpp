#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B220
// Address: 0x25b220 - 0x25b2f8
void sub_0025B220_0x25b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B220_0x25b220");
#endif

    ctx->pc = 0x25b220u;

    // 0x25b220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b224: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b234: 0xc096402  jal         func_259008
    ctx->pc = 0x25B234u;
    SET_GPR_U32(ctx, 31, 0x25B23Cu);
    ctx->pc = 0x25B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B234u;
            // 0x25b238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B23Cu; }
        if (ctx->pc != 0x25B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B23Cu; }
        if (ctx->pc != 0x25B23Cu) { return; }
    }
    ctx->pc = 0x25B23Cu;
    // 0x25b23c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b240: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b244: 0x24633598  addiu       $v1, $v1, 0x3598
    ctx->pc = 0x25b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13720));
    // 0x25b248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b24c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b250: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b25c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B25Cu;
            // 0x25b260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B264u;
    // 0x25b264: 0x0  nop
    ctx->pc = 0x25b264u;
    // NOP
    // 0x25b268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b26c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b274: 0x24421d28  addiu       $v0, $v0, 0x1D28
    ctx->pc = 0x25b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7464));
    // 0x25b278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b284: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25b284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25b288: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b28c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B28Cu;
    {
        const bool branch_taken_0x25b28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B28Cu;
            // 0x25b290: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b28c) {
            ctx->pc = 0x25B2ACu;
            goto label_25b2ac;
        }
    }
    ctx->pc = 0x25B294u;
    // 0x25b294: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b298: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b29c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25b2a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25b2a4: 0x40f809  jalr        $v0
    ctx->pc = 0x25B2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B2ACu);
        ctx->pc = 0x25B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2A4u;
            // 0x25b2a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B2ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B2ACu; }
            if (ctx->pc != 0x25B2ACu) { return; }
        }
        }
    }
    ctx->pc = 0x25B2ACu;
label_25b2ac:
    // 0x25b2ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b2b0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x25b2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25b2b4: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x25b2b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B2B8u;
    {
        const bool branch_taken_0x25b2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2B8u;
            // 0x25b2bc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2b8) {
            ctx->pc = 0x25B2C8u;
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25B2C0u;
    // 0x25b2c0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x25B2C0u;
    SET_GPR_U32(ctx, 31, 0x25B2C8u);
    ctx->pc = 0x25B2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2C0u;
            // 0x25b2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B2C8u; }
        if (ctx->pc != 0x25B2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B2C8u; }
        if (ctx->pc != 0x25B2C8u) { return; }
    }
    ctx->pc = 0x25B2C8u;
label_25b2c8:
    // 0x25b2c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2D4u;
            // 0x25b2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B2DCu;
    // 0x25b2dc: 0x0  nop
    ctx->pc = 0x25b2dcu;
    // NOP
    // 0x25b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2E0u;
            // 0x25b2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B2E8u;
    // 0x25b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B2F0u;
    // 0x25b2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2F0u;
            // 0x25b2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B2ACu: goto label_25b2ac;
            case 0x25B2C8u: goto label_25b2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B2F8u;
}

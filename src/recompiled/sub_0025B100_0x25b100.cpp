#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B100
// Address: 0x25b100 - 0x25b1d8
void sub_0025B100_0x25b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B100_0x25b100");
#endif

    ctx->pc = 0x25b100u;

    // 0x25b100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b104: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b10c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b114: 0xc096402  jal         func_259008
    ctx->pc = 0x25B114u;
    SET_GPR_U32(ctx, 31, 0x25B11Cu);
    ctx->pc = 0x25B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B114u;
            // 0x25b118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B11Cu; }
        if (ctx->pc != 0x25B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B11Cu; }
        if (ctx->pc != 0x25B11Cu) { return; }
    }
    ctx->pc = 0x25B11Cu;
    // 0x25b11c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b120: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b124: 0x246335d8  addiu       $v1, $v1, 0x35D8
    ctx->pc = 0x25b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13784));
    // 0x25b128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b12c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b130: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b13c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B13Cu;
            // 0x25b140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B144u;
    // 0x25b144: 0x0  nop
    ctx->pc = 0x25b144u;
    // NOP
    // 0x25b148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b14c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b150: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b154: 0x24421d90  addiu       $v0, $v0, 0x1D90
    ctx->pc = 0x25b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7568));
    // 0x25b158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b164: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25b164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25b168: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b16c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B16Cu;
    {
        const bool branch_taken_0x25b16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B16Cu;
            // 0x25b170: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b16c) {
            ctx->pc = 0x25B18Cu;
            goto label_25b18c;
        }
    }
    ctx->pc = 0x25B174u;
    // 0x25b174: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b178: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25b178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b17c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25b180: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25b184: 0x40f809  jalr        $v0
    ctx->pc = 0x25B184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B18Cu);
        ctx->pc = 0x25B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B184u;
            // 0x25b188: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B18Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B18Cu; }
            if (ctx->pc != 0x25B18Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25B18Cu;
label_25b18c:
    // 0x25b18c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b190: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x25b190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25b194: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x25b198: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B198u;
    {
        const bool branch_taken_0x25b198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B198u;
            // 0x25b19c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b198) {
            ctx->pc = 0x25B1A8u;
            goto label_25b1a8;
        }
    }
    ctx->pc = 0x25B1A0u;
    // 0x25b1a0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x25B1A0u;
    SET_GPR_U32(ctx, 31, 0x25B1A8u);
    ctx->pc = 0x25B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1A0u;
            // 0x25b1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1A8u; }
        if (ctx->pc != 0x25B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1A8u; }
        if (ctx->pc != 0x25B1A8u) { return; }
    }
    ctx->pc = 0x25B1A8u;
label_25b1a8:
    // 0x25b1a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1B4u;
            // 0x25b1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B1BCu;
    // 0x25b1bc: 0x0  nop
    ctx->pc = 0x25b1bcu;
    // NOP
    // 0x25b1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1C0u;
            // 0x25b1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B1C8u;
    // 0x25b1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B1D0u;
    // 0x25b1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1D0u;
            // 0x25b1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B18Cu: goto label_25b18c;
            case 0x25B1A8u: goto label_25b1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B1D8u;
}
